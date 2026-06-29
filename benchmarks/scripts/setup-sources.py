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

Four subdirectories are created under sources/:
  cpp-baseline/   — original C++ benchmarks (copied from backend/examples/esbmc-eval)
  c-havoc_std/    — cir2c output with --externalize-std: std calls are abstracted
                    away (havoced) uniformly for every case
  c-exact_std/    — cir2c output with --no-externalize-std: cir2c tries to map std
                    exactly; cases where some std symbol still leaks through as an
                    unresolved `extern ... std_...` declaration are kept here too
  c-nohavoc_std/  — the subset of c-exact_std with no leftover *risky* extern (see
                    RISKY_EXTERN_PATTERNS / has_risky_extern): a no-op'd extern is
                    only excluded here if it's a mutator/identity call empirically
                    found to bias the majority vote (real file I/O, in-place sort,
                    or RTTI identity comparison) — most other leftover std externs
                    (e.g. iostream-printing helpers never on the assert path) are
                    harmless and stay in c-nohavoc_std.

A case is dropped from the baseline (and hence every variant) if its mapped
output has no __assert_fail call at all, making it useless as an unreach-call
benchmark. A leftover *non-risky* std extern in c-exact_std does not remove a
case from the baseline, from c-exact_std, or even from c-nohavoc_std.

A case is also dropped immediately at copy time if its main source file depends
on a sibling class/function that's *defined* in another .c/.cc/.cpp/.cxx file the
task's .yml never lists in input_files (and so is never fed to anything).
BenchExec passes a tool literally just input_files, so every verifier — mapped-C
and native C++ alike — would be missing that translation unit's definitions,
making any verdict on the case, and its comparison against ground truth, unsound
no matter which tool or suite runs it (see exclude_missing_tu_cases).

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

REPO_ROOT = Path(__file__).resolve().parent.parent.parent
BENCHMARKS_DIR = Path(__file__).resolve().parent.parent
SOURCES_DIR = BENCHMARKS_DIR / "sources"
ESBMC_EVAL_SRC = SOURCES_DIR / "esbmc-eval"
RUNNER = REPO_ROOT / "cir2c" /  "run-cir2c.sh"

DEFAULT_JOBS = 4
DEFAULT_TIMEOUT = 300


def parse_args() -> argparse.Namespace:
    p = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    p.add_argument("--jobs", "-j", type=int, default=DEFAULT_JOBS)
    p.add_argument("--dry-run", "-n", action="store_true", help="Print actions without executing")
    p.add_argument("--yaml-only", action="store_true",
                   help="Rewrite .yml files for already-mapped cases without re-running the mapper")
    return p.parse_args()


def copy_cpp_baseline(dry_run: bool) -> None:
    dest = SOURCES_DIR / "cpp-baseline"
    if dest.exists():
        print(f"  [skip] {dest} already exists")
        retag_properties(dest, dry_run)
        rename_case_ymls(dest, dry_run)
        exclude_missing_tu_cases(dest, dry_run)
        return
    print(f"  Copying {ESBMC_EVAL_SRC} → {dest}")
    if not dry_run:
        shutil.copytree(ESBMC_EVAL_SRC, dest)
    rename_case_ymls(dest, dry_run)
    exclude_missing_tu_cases(dest, dry_run)


def rename_case_ymls(root: Path, dry_run: bool) -> None:
    """Rename each case's <case>.yml to <category>_<case>.yml in place.

    The upstream suite names a case's task file after just the case (e.g.
    algorithm0.yml), but map_one() names the generated mapped-variant task file
    <category>_<case>.yml (e.g. algorithm_algorithm0.yml) to disambiguate cases
    that share a name across categories. normalize-results.py lines up tasks
    across cpp-baseline/c-havoc_std/c-exact_std/c-nohavoc_std by stripping the
    "../sources/<variant>/" prefix from BenchExec result paths, so the original
    suite needs the same filename to match up post-stripping.
    """
    if not root.exists():
        return
    renamed = 0
    for category_dir in sorted(p for p in root.iterdir() if p.is_dir()):
        category = category_dir.name
        for case_dir in sorted(p for p in category_dir.iterdir() if p.is_dir()):
            case_name = case_dir.name
            old = case_dir / f"{case_name}.yml"
            new = case_dir / f"{category}_{case_name}.yml"
            if old.exists() and not new.exists():
                if not dry_run:
                    old.rename(new)
                renamed += 1
    if renamed:
        print(f"  Renamed {renamed} .yml file(s) under {root} to <category>_<case>.yml naming")


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


def exclude_missing_tu_cases(root: Path, dry_run: bool) -> None:
    """Delete cpp-baseline cases with a missing translation unit, and purge any
    stale mapped output an earlier run already produced for them.

    A case is affected if its directory has a .c/.cc/.cpp/.cxx file beyond the
    single one named in its .yml `input_files` (e.g. main.cpp declares a class
    via a sibling header but the class is *defined* in a sibling .cpp that's
    never fed to anything). See the module docstring for why this is unsound for
    every verifier, not just cir2c's mapped output. Idempotent: once a case is
    gone, later runs simply no longer find its .yml.
    """
    if not root.exists():
        return
    removed = []
    for yml in sorted(root.rglob("*.yml")):
        case_dir = yml.parent
        input_file = parse_input_file(yml)
        srcs = {f.name for f in case_dir.iterdir()
                if f.suffix.lower() in (".c", ".cc", ".cpp", ".cxx")}
        if not (srcs - {input_file}):
            continue
        rel = case_dir.relative_to(root)
        removed.append(rel)
        if dry_run:
            continue
        shutil.rmtree(case_dir)
        # Purge stale output an earlier run may have mapped for this case before
        # this exclusion existed — write_set_files() globs variant dirs directly,
        # so a leftover case there would otherwise still leak into sets-full/.
        for variant in ("c-havoc_std", "c-exact_std", "c-nohavoc_std"):
            stale = SOURCES_DIR / variant / rel
            if stale.exists():
                shutil.rmtree(stale)
    if removed:
        print(f"  Removed {len(removed)} case(s) missing a translation unit "
              f"(+ any stale mapped output): {[str(r) for r in removed]}")


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


def has_std_extern(text: str) -> bool:
    """True if a top-level `extern ... std_...` declaration leaked into the output.

    Only meaningful for the --no-externalize-std mapping: it means cir2c could not
    resolve some libstdc++ symbol's body and fell back to an extern declaration, so
    the case is not a fully-exact std mapping. Purely informational (drives the
    "ok:std_extern" status count) — it is NOT what decides c-nohavoc_std membership;
    see has_risky_extern for that. Most leftover std externs caught by this check
    are harmless (e.g. iostream-printing helpers never reached on the assert path).
    """
    return any(line.startswith("extern") and "std_" in line for line in text.splitlines())


# Mutator/identity extern calls empirically found to bias the majority vote when
# cir2c has no body to map them: basic_filebuf (real file I/O -- open/close/ctor
# never actually happens, so e.g. is_open() can't reflect reality), _sort_
# (in-place sort never actually reorders the data), and __dynamic_cast (RTTI
# identity comparison can spuriously succeed or fail). Found by testing in
# analysis.ipynb: excluding cases with one of these from c-exact_std's results
# cut false negatives and false positives roughly 2:1 against correctly-handled
# cases dropped, unlike the old "any std_ extern" rule (too broad: caught many
# harmless externs; too narrow: missed __dynamic_cast, which has no "std_" in
# its name).
RISKY_EXTERN_PATTERNS = ("basic_filebuf", "_sort_", "__dynamic_cast")


def has_risky_extern(text: str) -> bool:
    """True if a top-level extern declaration matches RISKY_EXTERN_PATTERNS.

    This is what decides c-nohavoc_std membership (see build_nohavoc_variant) —
    a deliberately narrow, evidence-based replacement for the old "any std_
    extern" rule.
    """
    return any(line.startswith("extern") and any(p in line for p in RISKY_EXTERN_PATTERNS)
               for line in text.splitlines())


def postprocess_output(out_c: Path, externalize_std: bool) -> str:
    """Post-process a freshly mapped main.c in place (idempotent).

    Two transformations:
      * Before every call to __assert_fail, insert a call to an externally
        declared reach_error() (and emit that declaration). Lets a reachability
        verifier flag the assertion site without touching cir2c.
      * If the mapped output has no __assert_fail call at all, there is no
        assertion site for unreach-call to find, so the case is useless as a
        benchmark; delete the file to exclude it.

    A leftover std extern (see has_std_extern) does NOT exclude the case here —
    it is kept in c-exact_std and only filtered out when curating c-nohavoc_std
    (see build_nohavoc_variant). Returns "ok", "ok:std_extern" (processed, but
    flagged for nohavoc curation), or "excluded:noassert" if deleted. Callers are
    responsible for removing the sibling .yml and the original baseline case
    (source + .yml) when "excluded:..." comes back.
    """
    text = out_c.read_text(encoding="utf-8")
    lines = text.splitlines(keepends=True)
    std_extern = not externalize_std and has_std_extern(text)

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
    return "ok:std_extern" if std_extern else "ok"


def exclude_original(yml_path: Path, src_file: Path) -> None:
    """Remove the original cpp-baseline case (source + .yml).

    Called once a case is found useless for every variant (no __assert_fail in
    its mapped output), so re-runs and the sibling variant's pass over the same
    yml_files list skip it too, and it drops out of sets-full/cpp-baseline.set.
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
            if status.startswith("excluded"):
                if out_yml.exists():
                    out_yml.unlink()
                exclude_original(yml_path, src_file)
                return {"case": str(rel), "status": status}
            out_yml.write_text(make_mapped_yml(data_model, expected_verdict), encoding="utf-8")
            return {"case": str(rel), "status": status}
        return {"case": str(rel), "status": "dry-run"}

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
    if status.startswith("excluded"):
        exclude_original(yml_path, src_file)
        return {"case": str(rel), "status": status}

    out_yml.write_text(make_mapped_yml(data_model, expected_verdict), encoding="utf-8")
    return {"case": str(rel), "status": status}


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


def build_nohavoc_variant(exact_root: Path, nohavoc_root: Path, dry_run: bool) -> None:
    """Curate c-nohavoc_std as the subset of c-exact_std with no leftover *risky* extern.

    c-exact_std keeps every case that has an assertion site, even ones where some
    std symbol leaked through as an unresolved extern. This copies over only the
    cases without a RISKY_EXTERN_PATTERNS leak (see has_risky_extern) — most other
    leftover std externs are harmless and stay in c-nohavoc_std too.
    """
    print(f"\n=== c-nohavoc_std (curated from {exact_root.name}) ===")
    copy_property_file(nohavoc_root, dry_run)

    kept = 0
    skipped = 0
    for yml in sorted(exact_root.rglob("*.yml")):
        case_dir = yml.parent
        main_c = case_dir / "main.c"
        if not main_c.exists() or has_risky_extern(main_c.read_text(encoding="utf-8")):
            skipped += 1
            continue
        rel = case_dir.relative_to(exact_root)
        dest_dir = nohavoc_root / rel
        if not dry_run:
            dest_dir.mkdir(parents=True, exist_ok=True)
            shutil.copy2(main_c, dest_dir / "main.c")
            shutil.copy2(yml, dest_dir / yml.name)
        kept += 1
    print(f"  Results: ok={kept}, excluded:risky_extern={skipped}")


def main() -> int:
    args = parse_args()

    if not RUNNER.exists():
        print(f"ERROR: run-cir2c.sh not found at {RUNNER}", file=sys.stderr)
        return 1

    SOURCES_DIR.mkdir(exist_ok=True)

    print("Step 1: Copy original cpp-baseline")
    copy_cpp_baseline(args.dry_run)

    src_root = SOURCES_DIR / "cpp-baseline"
    yml_files = find_yml_files(src_root)
    print(f"  Found {len(yml_files)} task .yml files")

    run_variant(
        "c-havoc_std (externalize-std)",
        SOURCES_DIR / "c-havoc_std",
        src_root,
        yml_files,
        externalize_std=True,
        jobs=args.jobs,
        dry_run=args.dry_run,
        yaml_only=args.yaml_only,
    )

    run_variant(
        "c-exact_std (no-externalize-std)",
        SOURCES_DIR / "c-exact_std",
        src_root,
        yml_files,
        externalize_std=False,
        jobs=args.jobs,
        dry_run=args.dry_run,
        yaml_only=args.yaml_only,
    )

    build_nohavoc_variant(SOURCES_DIR / "c-exact_std", SOURCES_DIR / "c-nohavoc_std", args.dry_run)

    write_set_files(args.dry_run)
    update_smoke_sets(args.dry_run)
    return 0


def write_set_files(dry_run: bool) -> None:
    """(Re)write benchmarks/sets-full/ by enumerating all .yml files on disk.

    The live `sets/` directory is a symlink to either sets-full/ or sets-smoke/
    (selected via the SETS env var in the Makefile), so we always write the full
    enumeration to sets-full/ here; sets-smoke/ is regenerated separately by
    update_smoke_sets(), which keeps the hand-curated case *selection* but
    re-derives each variant's file list from it.
    """
    sets_dir = BENCHMARKS_DIR / "sets-full"
    sets_dir.mkdir(exist_ok=True)
    for variant in ("cpp-baseline", "c-havoc_std", "c-exact_std", "c-nohavoc_std"):
        variant_root = SOURCES_DIR / variant
        ymls = sorted(variant_root.rglob("*.yml"))
        lines = [f"../sources/{variant}/{p.relative_to(variant_root)}\n" for p in ymls]
        dest = sets_dir / f"{variant}.set"
        print(f"  Writing {dest.name} ({len(lines)} entries)")
        if not dry_run:
            dest.write_text("".join(lines), encoding="utf-8")


SMOKE_HEADER = textwrap.dedent("""\
    #
    # Copyright 2025 Budapest University of Technology and Economics
    #
    # Licensed under the Apache License, Version 2.0 (the "License");
    # you may not use this file except in compliance with the License.
    #
    # Smoke-test subset: a handful of tasks for validating the pipeline
    # end-to-end quickly. The case *selection* is curated by hand (edit any
    # one of these files to add/drop a case); update_smoke_sets() in
    # setup-sources.py re-derives every variant's file list from the union of
    # what's currently selected, dropping a case from a variant's file if it
    # no longer exists there. Don't hand-edit the per-variant path lines.
    #
    """)


def update_smoke_sets(dry_run: bool) -> None:
    """Re-derive each variant's sets-smoke/<variant>.set from the curated case selection.

    The case *selection* (which ~10 tasks) is curated by hand and lives implicitly
    in whatever sets-smoke/*.set files already exist; this only re-derives, for
    every variant directory under sources/, which of those curated cases still
    exist there, and rewrites that variant's .set file accordingly. This keeps
    sets-smoke/ in sync after suite renames or after a case drops out of one
    variant (e.g. excluded for having no __assert_fail), and automatically picks
    up any new variant directory (e.g. a future 5th suite) with no code change.
    """
    smoke_dir = BENCHMARKS_DIR / "sets-smoke"
    if not smoke_dir.exists():
        return

    case_paths: set[str] = set()
    for set_file in smoke_dir.glob("*.set"):
        for line in set_file.read_text(encoding="utf-8").splitlines():
            line = line.strip()
            if not line or line.startswith("#"):
                continue
            # ../sources/<variant>/<category>/<case>/<file>.yml -> <category>/<case>/<file>.yml
            case_paths.add("/".join(Path(line).parts[3:]))

    for variant_root in sorted(p for p in SOURCES_DIR.iterdir() if p.is_dir()):
        variant = variant_root.name
        lines = [f"../sources/{variant}/{case}\n" for case in sorted(case_paths)
                  if (variant_root / case).exists()]
        dest = smoke_dir / f"{variant}.set"
        print(f"  Writing {dest.name} ({len(lines)}/{len(case_paths)} curated cases present)")
        if not dry_run:
            dest.write_text(SMOKE_HEADER + "".join(lines), encoding="utf-8")


if __name__ == "__main__":
    sys.exit(main())
