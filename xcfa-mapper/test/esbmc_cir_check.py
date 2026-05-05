#!/usr/bin/env python3

from __future__ import annotations

import argparse
import re
import subprocess
import sys
from concurrent.futures import ThreadPoolExecutor, as_completed
from pathlib import Path


SCRIPT_DIR = Path(__file__).resolve().parent
REPO_ROOT = SCRIPT_DIR.parent.parent
ESBMC_ROOT = REPO_ROOT / "backend" / "examples" / "esbmc-eval"
CLANG = REPO_ROOT / "backend" / "bin" / "bin" / "clang++"
DEFAULT_SET_FILES = ["cpp.set"]
DEFAULT_JOBS = 8
DEFAULT_TIMEOUT = 120


def read_text(path: Path) -> str:
    return path.read_text(encoding="utf-8", errors="replace")


def parse_input_file_from_yml(yml_path: Path) -> str:
    for raw_line in read_text(yml_path).splitlines():
        stripped = raw_line.strip()
        if not stripped.startswith("input_files:"):
            continue
        _, value = stripped.split(":", 1)
        value = value.strip().strip('"\'')
        if value:
            return value
    raise ValueError(f"Could not find input_files in {yml_path}")


def expand_set_file(esbmc_root: Path, set_path: Path) -> list[Path]:
    yml_paths: list[Path] = []
    for raw_line in read_text(set_path).splitlines():
        stripped = raw_line.strip()
        if not stripped or stripped.startswith("#"):
            continue
        yml_paths.extend(sorted(esbmc_root.glob(stripped)))
    return yml_paths


def gather_yml_paths(esbmc_root: Path, set_files: list[str]) -> list[Path]:
    resolved_paths: list[Path] = []
    requested_sets = set_files or DEFAULT_SET_FILES
    for set_name in requested_sets:
        set_path = Path(set_name)
        if not set_path.is_absolute():
            set_path = esbmc_root / set_name
        resolved_paths.extend(expand_set_file(esbmc_root, set_path))

    deduped: list[Path] = []
    seen: set[Path] = set()
    for path in resolved_paths:
        resolved = path.resolve()
        if resolved in seen:
            continue
        seen.add(resolved)
        deduped.append(path)
    return deduped


def first_meaningful_line(text: str) -> str:
    for raw_line in text.splitlines():
        line = raw_line.strip()
        if line:
            return line
    return ""


def summarize_clang_failure(stderr_text: str, stdout_text: str) -> str:
    combined = "\n".join(part for part in [stderr_text, stdout_text] if part)
    lines = [line.strip() for line in combined.splitlines() if line.strip()]

    for line in lines:
        lowered = line.lower()
        if " error:" in lowered or lowered.startswith("error:") or " fatal error:" in lowered or lowered.startswith("fatal error:"):
            return line

    for line in lines:
        if "warning: argument unused during compilation: '-S'" in line:
            continue
        return line

    return ""


def normalize_error_for_grouping(detail: str) -> str:
    if not detail:
        return ""
    return re.sub(r"^(?:.*?):\d+:\d+:\s*", "", detail)


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description="Check which ESBMC benchmarks fail during CIR generation."
    )
    parser.add_argument("set_files", nargs="*", help="ESBMC .set files to scan, relative to backend/examples/esbmc-eval or absolute. Defaults to cpp.set.")
    return parser.parse_args()


def run_case(yml_path: Path, esbmc_root: Path, clang: str, timeout: int) -> dict[str, str]:
    relative_yml = yml_path.relative_to(esbmc_root)
    source_name = parse_input_file_from_yml(yml_path)
    source_path = yml_path.parent / source_name
    command = [
        clang,
        "-x",
        "c++",
        "-std=c++11",
        "-S",
        "-emit-cir",
        str(source_path),
        "-o",
        "-",
    ]
    completed = subprocess.run(
        command,
        text=True,
        capture_output=True,
        timeout=timeout,
        check=False,
    )

    status = "success" if completed.returncode == 0 else "clang_failed"
    detail = ""
    if status != "success":
        detail = summarize_clang_failure(completed.stderr, completed.stdout)
    return {
        "case": str(relative_yml.with_suffix("")),
        "status": status,
        "detail": detail,
    }


def main() -> int:
    args = parse_args()
    esbmc_root = ESBMC_ROOT.resolve()
    yml_paths = gather_yml_paths(esbmc_root, args.set_files)

    if not yml_paths:
        print("No benchmark YAML files matched the requested set files.", file=sys.stderr)
        return 1

    results = []
    with ThreadPoolExecutor(max_workers=DEFAULT_JOBS) as executor:
        futures = [executor.submit(run_case, yml_path, esbmc_root, str(CLANG), DEFAULT_TIMEOUT) for yml_path in yml_paths]
        for future in as_completed(futures):
            results.append(future.result())

    results.sort(key=lambda item: item["case"])
    failures = [result for result in results if result["status"] != "success"]

    print(f"Processed {len(results)} benchmarks")
    print(f"  success: {len(results) - len(failures)}")
    print(f"  clang_failed: {len(failures)}")

    if failures:
        print("\nCIR generation failures:")
        for result in failures:
            detail = f" — {result['detail']}" if result["detail"] else ""
            print(f"- {result['case']}{detail}")

        print("\nUnique errors and an example for each:\n")
        grouped_errors: dict[str, str] = {}
        for failure in failures:
            grouped_error = normalize_error_for_grouping(failure["detail"])
            if grouped_error not in grouped_errors:
                grouped_errors[grouped_error] = failure["case"]

        for error_text, example_case in sorted(grouped_errors.items()):
            print(f"{error_text}: ")
            print(f"{example_case}\n")
        return 2
    
    print("\nAll selected benchmarks generated CIR successfully.")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())