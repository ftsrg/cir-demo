#!/usr/bin/env python3
#
# Copyright 2025 Budapest University of Technology and Economics
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

"""
Populate benchmarks/sources/ with the ESBMC evaluation suite and its
cir2c-mapped variants.

Three subdirectories are created under sources/:
  esbmc-eval/            — original C++ benchmarks (copied from backend/examples/esbmc-eval)
  esbmc-eval-mapped/     — cir2c output with --externalize-std (default)
  esbmc-eval-mapped-nostd/ — cir2c output with --no-externalize-std

Each mapped task directory gets a <name>.yml BenchExec task file that references
the generated main.c with expected_verdict: true and the appropriate property file.

Usage:
    python3 benchmarks/setup-sources.py [--jobs N] [--dry-run]
"""

from __future__ import annotations

import argparse
import shutil
import subprocess
import sys
import textwrap
from concurrent.futures import ThreadPoolExecutor, as_completed
from pathlib import Path

REPO_ROOT = Path(__file__).resolve().parent.parent
BENCHMARKS_DIR = Path(__file__).resolve().parent
SOURCES_DIR = BENCHMARKS_DIR / "sources"
ESBMC_EVAL_SRC = REPO_ROOT / "backend" / "examples" / "esbmc-eval"
RUNNER = REPO_ROOT / "cir2c" / "test" / "run-cir2c.sh"

DEFAULT_JOBS = 16
DEFAULT_TIMEOUT = 120


def parse_args() -> argparse.Namespace:
    p = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    p.add_argument("--jobs", "-j", type=int, default=DEFAULT_JOBS)
    p.add_argument("--dry-run", "-n", action="store_true", help="Print actions without executing")
    p.add_argument("--yaml-only", action="store_true",
                   help="Rewrite .yml files for already-mapped cases without re-running the mapper")
    return p.parse_args()


def copy_esbmc_eval(dry_run: bool) -> None:
    dest = SOURCES_DIR / "esbmc-eval"
    if dest.exists():
        print(f"  [skip] {dest} already exists")
        retag_properties(dest, dry_run)
        return
    print(f"  Copying {ESBMC_EVAL_SRC} → {dest}")
    if not dry_run:
        shutil.copytree(ESBMC_EVAL_SRC, dest)


def retag_properties(root: Path, dry_run: bool) -> None:
    """Point any pre-rename property references under root at unreach-call.prp.

    Lets a re-run migrate an already-populated suite (whose copied/generated .yml
    files were skipped) to the SV-COMP-standard property name in place, instead
    of leaving the task property_file out of sync with the benchmark XMLs.
    """
    fixed = 0
    for yml in root.rglob("*.yml"):
        text = yml.read_text(encoding="utf-8")
        if "no-assertion-violation.prp" in text:
            if not dry_run:
                yml.write_text(text.replace("no-assertion-violation.prp", "unreach-call.prp"),
                               encoding="utf-8")
            fixed += 1
    stale = root / "no-assertion-violation.prp"
    if stale.exists() and not dry_run:
        stale.unlink()
    if fixed:
        print(f"  Retagged {fixed} .yml file(s) under {root} to unreach-call.prp")


def find_yml_files(root: Path) -> list[Path]:
    return sorted(root.rglob("*.yml"))


def parse_input_file(yml_path: Path) -> str:
    for line in yml_path.read_text(encoding="utf-8").splitlines():
        stripped = line.strip()
        if stripped.startswith("input_files:"):
            return stripped.split(":", 1)[1].strip().strip("\"'")
    raise ValueError(f"No input_files in {yml_path}")


def parse_data_model(yml_path: Path) -> str:
    for line in yml_path.read_text(encoding="utf-8").splitlines():
        stripped = line.strip()
        if stripped.startswith("data_model:"):
            return stripped.split(":", 1)[1].strip()
    return "ILP32"


def parse_expected_verdict(yml_path: Path) -> str:
    for line in yml_path.read_text(encoding="utf-8").splitlines():
        stripped = line.strip()
        if "expected_verdict:" in stripped:
            return stripped.split(":", 1)[1].strip()
    return "true"


def make_mapped_yml(data_model: str, expected_verdict: str) -> str:
    return textwrap.dedent(f"""\
        format_version: '2.0'
        input_files: main.c
        options:
          data_model: LP64
          language: C
        properties:
        - expected_verdict: {expected_verdict}
          property_file: ../../unreach-call.prp
        """)


def postprocess_output(out_c: Path, externalize_std: bool) -> str:
    """Post-process a freshly mapped main.c in place (idempotent).

    Three transformations:
      * Before every call to __assert_fail, insert a call to an externally
        declared reach_error() (and emit that declaration). Lets a reachability
        verifier flag the assertion site without touching cir2c.
      * For the --no-externalize-std variant, a top-level `extern ... std_ ...`
        declaration means a libstdc++ symbol was left unmapped, so the case is
        unsound; delete the file to exclude it from consideration.
      * If the mapped output has no __assert_fail call at all, there is no
        assertion site for unreach-call to find, so the case is useless as a
        benchmark; delete the file to exclude it.

    Returns "ok" if the file was processed in place, or "excluded:std" /
    "excluded:noassert" if it was deleted for one of the reasons above. Callers
    are responsible for removing the sibling .yml (mapped) and the original
    esbmc-eval case (source + .yml) when a non-"ok" status comes back.
    """
    text = out_c.read_text(encoding="utf-8")
    lines = text.splitlines(keepends=True)

    if not externalize_std:
        for line in lines:
            if line.startswith("extern") and "std_" in line:
                out_c.unlink()
                return "excluded:std"

    if "__assert_fail" not in text:
        out_c.unlink()
        return "excluded:noassert"

    declared = "extern void reach_error();" in text
    out_lines: list[str] = []
    for line in lines:
        stripped = line.lstrip()
        indent = line[: len(line) - len(stripped)]
        # Declare reach_error right before the __assert_fail prototype.
        if not declared and stripped.startswith("extern void __assert_fail"):
            out_lines.append(f"{indent}extern void reach_error();\n")
            declared = True
        # Call reach_error right before a call to __assert_fail (skip the prototype,
        # which starts with `extern`). Guard against double-insertion on re-runs.
        if stripped.startswith("__assert_fail") and not (
            out_lines and out_lines[-1].lstrip().startswith("reach_error")
        ):
            out_lines.append(f"{indent}reach_error();\n")
        out_lines.append(line)

    # Fallback: prototype absent but the call is present — declare at file top.
    if not declared:
        out_lines.insert(0, "extern void reach_error();\n")

    out_c.write_text("".join(out_lines), encoding="utf-8")
    return "ok"


def exclude_original(yml_path: Path, src_file: Path) -> None:
    """Remove the original esbmc-eval case (source + .yml).

    Called once a case has been excluded from a mapped variant, so re-runs and
    the sibling variant's pass over the same yml_files list skip it too, and it
    drops out of sets-full/esbmc-eval.set.
    """
    if src_file.exists():
        src_file.unlink()
    if yml_path.exists():
        yml_path.unlink()


def map_one(
    yml_path: Path,
    src_root: Path,
    dest_root: Path,
    externalize_std: bool,
    dry_run: bool,
    yaml_only: bool = False,
) -> dict:
    rel = yml_path.relative_to(src_root)
    parts = rel.parts  # (category, case, category_case.yml)
    category = parts[0]
    case_name = parts[1]  # e.g. "algorithm0"
    case_dir = dest_root / rel.parent
    out_c = case_dir / "main.c"
    out_yml = case_dir / f"{category}_{case_name}.yml"

    if not yml_path.exists():
        # Excluded by an earlier pass over this same case (original already removed).
        if not dry_run:
            if out_c.exists():
                out_c.unlink()
            if out_yml.exists():
                out_yml.unlink()
        return {"case": str(rel), "status": "excluded"}

    src_file = yml_path.parent / parse_input_file(yml_path)
    data_model = parse_data_model(yml_path)
    expected_verdict = parse_expected_verdict(yml_path)

    if yaml_only:
        if not out_c.exists():
            return {"case": str(rel), "status": "skipped"}
        if not dry_run:
            status = postprocess_output(out_c, externalize_std)
            if status != "ok":
                if out_yml.exists():
                    out_yml.unlink()
                exclude_original(yml_path, src_file)
                return {"case": str(rel), "status": status}
            out_yml.write_text(make_mapped_yml(data_model, expected_verdict), encoding="utf-8")
        return {"case": str(rel), "status": "dry-run" if dry_run else "ok"}

    if out_yml.exists() and out_c.exists():
        return {"case": str(rel), "status": "skipped"}

    if dry_run:
        return {"case": str(rel), "status": "dry-run"}

    case_dir.mkdir(parents=True, exist_ok=True)

    cmd = [str(RUNNER)]
    cmd += ["--externalize-std"] if externalize_std else ["--no-externalize-std"]
    cmd += [str(src_file), str(out_c)]

    try:
        result = subprocess.run(cmd, capture_output=True, text=True, timeout=DEFAULT_TIMEOUT)
    except subprocess.TimeoutExpired:
        return {"case": str(rel), "status": "timeout"}

    if result.returncode != 0:
        stage = {2: "clang", 3: "cir-opt", 4: "cir2c"}.get(result.returncode, "pipeline")
        return {"case": str(rel), "status": f"failed:{stage}"}

    status = postprocess_output(out_c, externalize_std)
    if status != "ok":
        exclude_original(yml_path, src_file)
        return {"case": str(rel), "status": status}

    out_yml.write_text(make_mapped_yml(data_model, expected_verdict), encoding="utf-8")
    return {"case": str(rel), "status": "ok"}


def copy_property_file(dest_root: Path, dry_run: bool) -> None:
    """Copy unreach-call.prp into the mapped suite root so relative paths in .yml files resolve."""
    src_prp = ESBMC_EVAL_SRC / "unreach-call.prp"
    dest_prp = dest_root / "unreach-call.prp"
    # Drop the pre-rename property file if a previous run left one behind.
    stale = dest_root / "no-assertion-violation.prp"
    if stale.exists() and not dry_run:
        stale.unlink()
    if dest_prp.exists():
        return
    print(f"  Copying property file → {dest_prp}")
    if not dry_run:
        dest_root.mkdir(parents=True, exist_ok=True)
        shutil.copy2(src_prp, dest_prp)


def run_variant(
    variant_name: str,
    dest_root: Path,
    src_root: Path,
    yml_files: list[Path],
    externalize_std: bool,
    jobs: int,
    dry_run: bool,
    yaml_only: bool = False,
) -> None:
    mode = "dry-run" if dry_run else ("yaml-only" if yaml_only else "live")
    print(f"\n=== {variant_name} ({len(yml_files)} tasks, {mode}) ===")
    copy_property_file(dest_root, dry_run)
    if dest_root.exists():
        retag_properties(dest_root, dry_run)

    counts: dict[str, int] = {}
    with ThreadPoolExecutor(max_workers=jobs) as ex:
        futures = {
            ex.submit(map_one, yml, src_root, dest_root, externalize_std, dry_run, yaml_only): yml
            for yml in yml_files
        }
        done = 0
        for f in as_completed(futures):
            r = f.result()
            counts[r["status"]] = counts.get(r["status"], 0) + 1
            done += 1
            if done % 100 == 0 or done == len(yml_files):
                print(f"  {done}/{len(yml_files)} processed")

    print("  Results:", ", ".join(f"{k}={v}" for k, v in sorted(counts.items())))


def main() -> int:
    args = parse_args()

    if not RUNNER.exists():
        print(f"ERROR: run-cir2c.sh not found at {RUNNER}", file=sys.stderr)
        return 1

    SOURCES_DIR.mkdir(exist_ok=True)

    print("Step 1: Copy original esbmc-eval")
    copy_esbmc_eval(args.dry_run)

    src_root = SOURCES_DIR / "esbmc-eval"
    yml_files = find_yml_files(src_root)
    print(f"  Found {len(yml_files)} task .yml files")

    run_variant(
        "esbmc-eval-mapped (externalize-std)",
        SOURCES_DIR / "esbmc-eval-mapped",
        src_root,
        yml_files,
        externalize_std=True,
        jobs=args.jobs,
        dry_run=args.dry_run,
        yaml_only=args.yaml_only,
    )

    run_variant(
        "esbmc-eval-mapped-nostd (no-externalize-std)",
        SOURCES_DIR / "esbmc-eval-mapped-nostd",
        src_root,
        yml_files,
        externalize_std=False,
        jobs=args.jobs,
        dry_run=args.dry_run,
        yaml_only=args.yaml_only,
    )

    write_set_files(args.dry_run)
    return 0


def write_set_files(dry_run: bool) -> None:
    """(Re)write benchmarks/sets-full/ by enumerating all .yml files on disk.

    The live `sets/` directory is a symlink to either sets-full/ or sets-smoke/
    (selected via the SETS env var in the Makefile), so we always write the full
    enumeration to sets-full/ and leave the curated sets-smoke/ untouched.
    """
    sets_dir = BENCHMARKS_DIR / "sets-full"
    sets_dir.mkdir(exist_ok=True)
    for variant in ("esbmc-eval", "esbmc-eval-mapped", "esbmc-eval-mapped-nostd"):
        variant_root = SOURCES_DIR / variant
        ymls = sorted(variant_root.rglob("*.yml"))
        lines = [f"../sources/{variant}/{p.relative_to(variant_root)}\n" for p in ymls]
        dest = sets_dir / f"{variant}.set"
        print(f"  Writing {dest.name} ({len(lines)} entries)")
        if not dry_run:
            dest.write_text("".join(lines), encoding="utf-8")


if __name__ == "__main__":
    sys.exit(main())
