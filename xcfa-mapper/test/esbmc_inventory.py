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


from __future__ import annotations

import argparse
import re
import subprocess
import sys
import tempfile
from collections import Counter
from concurrent.futures import ThreadPoolExecutor, as_completed
from pathlib import Path
from typing import TextIO

SCRIPT_DIR = Path(__file__).resolve().parent
REPO_ROOT = SCRIPT_DIR.parent.parent
CLANG = REPO_ROOT / "backend" / "bin" / "bin" / "clang"
CLANGXX = REPO_ROOT / "backend" / "bin" / "bin" / "clang++"
CIR_OPT = REPO_ROOT / "backend" / "bin" / "bin" / "cir-opt"
MAPPER = SCRIPT_DIR.parent / "build" / "xcfa-mapper"
GCC = "gcc"
DEFAULT_YML_PATTERNS = ["*.yml"]
DEFAULT_JOBS = 8
DEFAULT_TIMEOUT = 120
ERROR_MARKERS = (
    "// No handler registered",
    "// Handler failed",
    "ERROR",
)

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

def expand_selection(root_dir: Path, selection: str) -> list[Path]:
    selection_path = Path(selection)
    if selection_path.is_absolute() and selection_path.exists():
        if selection_path.suffix == ".yml":
            return [selection_path]
        return expand_set_file(root_dir, selection_path)

    candidate = root_dir / selection
    if candidate.exists():
        if candidate.suffix == ".yml":
            return [candidate]
        return expand_set_file(root_dir, candidate)

    return sorted(root_dir.glob(selection))


def expand_set_file(root_dir: Path, set_path: Path) -> list[Path]:
    yml_paths: list[Path] = []
    for raw_line in read_text(set_path).splitlines():
        stripped = raw_line.strip()
        if not stripped or stripped.startswith("#"):
            continue
        yml_paths.extend(expand_selection(root_dir, stripped))
    return yml_paths

def gather_yml_paths(root_dir: Path, selections: list[str]) -> list[Path]:
    resolved_paths: list[Path] = []
    requested_selections = selections or DEFAULT_YML_PATTERNS
    for selection in requested_selections:
        resolved_paths.extend(expand_selection(root_dir, selection))

    deduped: list[Path] = []
    seen: set[Path] = set()
    for path in resolved_paths:
        resolved = path.resolve()
        if resolved in seen:
            continue
        seen.add(resolved)
        deduped.append(path)
    return deduped

def normalize_message(line: str) -> str:
    message = line.strip()
    repo_prefix = str(REPO_ROOT) + "/"
    if repo_prefix in message:
        message = message.replace(repo_prefix, "")
    message = re.sub(r"/tmp/xcfa_inventory_[^/]+/output\.c", "generated.c", message)
    return message

def summarize_process_failure(stdout_text: str, stderr_text: str, returncode: int | None = None) -> str:
    combined = "\n".join(part for part in [stderr_text, stdout_text] if part)
    lines = [line.strip() for line in combined.splitlines() if line.strip()]

    for line in lines:
        lowered = line.lower()
        if " error:" in lowered or lowered.startswith("error:") or " fatal error:" in lowered or lowered.startswith("fatal error:"):
            return normalize_message(line)

    for line in lines:
        if line.startswith("==="):
            continue
        if "warning: argument unused during compilation: '-S'" in line:
            continue
        return normalize_message(line)

    if returncode is not None and returncode < 0:
        return f"crashed with signal {-returncode}"

    return "unknown"

def extract_generated_c_failure(c_text: str) -> str:
    for raw_line in c_text.splitlines():
        line = raw_line.strip()
        if not line:
            continue
        if line.startswith("// No handler registered"):
            return line[3:].strip()
        if line.startswith("// Handler failed"):
            return line[3:].strip()
        if "ERROR" in line:
            return line
    return ""

def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description="Run benchmark .yml cases through clang/clang++ + cir-opt + xcfa-mapper and show direct stage failures."
    )
    parser.add_argument(
        "input_dir",
        help="Directory containing benchmark .yml files and referenced input files.",
    )
    parser.add_argument(
        "set_files",
        nargs="*",
        help="Optional .set files, .yml files, or glob patterns relative to the input directory. Defaults to *.yml.",
    )
    parser.add_argument(
        "-c",
        "--c-mode",
        action="store_true",
        help="Use C mode (`clang -x c -std=c11`) instead of the default C++ mode (`clang++ -x c++ -std=c++11`).",
    )
    return parser.parse_args()

def run_command(command: list[str], timeout: int) -> subprocess.CompletedProcess[str]:
    return subprocess.run(
        command,
        text=True,
        capture_output=True,
        timeout=timeout,
        check=False,
    )


def log_line(handle: TextIO, message: str = "") -> None:
    handle.write(message + "\n")
    handle.flush()

def benchmark_case(yml_path: Path, root_dir: Path, c_mode: bool) -> dict[str, str]:
    relative_yml = yml_path.relative_to(root_dir)
    source_name = parse_input_file_from_yml(yml_path)
    source_path = yml_path.parent / source_name
    case_id = str(relative_yml.with_suffix(""))

    try:
        with tempfile.TemporaryDirectory(prefix="xcfa_inventory_") as temp_dir_name:
            temp_dir = Path(temp_dir_name)
            mlir_path = temp_dir / "input.mlir"
            flat_mlir_path = temp_dir / "input.flat.mlir"
            c_path = temp_dir / "output.c"

            clang_binary = CLANG if c_mode else CLANGXX
            language = "c" if c_mode else "c++"
            standard = "c11" if c_mode else "c++11"
            clang_command = [
                str(clang_binary),
                "-x",
                language,
                f"-std={standard}",
                "-S",
                "-emit-cir",
                str(source_path),
                "-o",
                str(mlir_path),
            ]
            clang_result = run_command(clang_command, DEFAULT_TIMEOUT)
            if clang_result.returncode != 0 or not mlir_path.exists():
                return {
                    "case_id": case_id,
                    "status": "clang_failed",
                    "detail": summarize_process_failure(
                        clang_result.stdout,
                        clang_result.stderr,
                        clang_result.returncode,
                    ),
                }

            flatten_command = [
                str(CIR_OPT),
                str(mlir_path),
                "-cir-flatten-cfg",
                "-o",
                str(flat_mlir_path),
            ]
            flatten_result = run_command(flatten_command, DEFAULT_TIMEOUT)
            if flatten_result.returncode != 0 or not flat_mlir_path.exists():
                return {
                    "case_id": case_id,
                    "status": "flatten_failed",
                    "detail": summarize_process_failure(
                        flatten_result.stdout,
                        flatten_result.stderr,
                        flatten_result.returncode,
                    ),
                }

            mapper_command = [str(MAPPER), str(flat_mlir_path), str(c_path)]
            mapper_result = run_command(mapper_command, DEFAULT_TIMEOUT)
            if mapper_result.returncode != 0 or not c_path.exists():
                detail = summarize_process_failure(
                    mapper_result.stdout,
                    mapper_result.stderr,
                    mapper_result.returncode,
                )
                if c_path.exists():
                    generated_c_failure = extract_generated_c_failure(read_text(c_path))
                    if generated_c_failure:
                        detail = generated_c_failure
                return {
                    "case_id": case_id,
                    "status": "mapper_failed",
                    "detail": detail,
                }

            generated_c = read_text(c_path)
            generated_c_failure = extract_generated_c_failure(generated_c)
            if generated_c_failure:
                return {
                    "case_id": case_id,
                    "status": "mapper_failed",
                    "detail": generated_c_failure,
                }

            compile_command = [GCC, "-fsyntax-only", str(c_path)]
            compile_result = run_command(compile_command, DEFAULT_TIMEOUT)
            if compile_result.returncode != 0:
                return {
                    "case_id": case_id,
                    "status": "compile_failed",
                    "detail": summarize_process_failure(
                        compile_result.stdout,
                        compile_result.stderr,
                        compile_result.returncode,
                    ),
                }
    except subprocess.TimeoutExpired:
        return {
            "case_id": case_id,
            "status": "timeout",
            "detail": f"Timed out after {DEFAULT_TIMEOUT}s",
        }

    return {
        "case_id": case_id,
        "status": "success",
        "detail": "",
    }

def validate_tools() -> None:
    if not MAPPER.exists():
        raise SystemExit(f"xcfa-mapper not found: {MAPPER}")
    if not CLANG.exists():
        raise SystemExit(f"clang not found: {CLANG}")
    if not CLANGXX.exists():
        raise SystemExit(f"clang++ not found: {CLANGXX}")
    if not CIR_OPT.exists():
        raise SystemExit(f"cir-opt not found: {CIR_OPT}")

def main() -> int:
    args = parse_args()
    validate_tools()

    input_dir = Path(args.input_dir).expanduser().resolve()
    if not input_dir.is_dir():
        raise SystemExit(f"Input directory not found: {input_dir}")

    yml_paths = gather_yml_paths(input_dir, args.set_files)
    if not yml_paths:
        raise SystemExit("No benchmark yml files matched the requested selections.")

    output_path = Path.cwd() / "output.txt"
    results: list[dict[str, str]] = []
    with output_path.open("w", encoding="utf-8") as log_handle:
        total = len(yml_paths)
        print(f"Starting {total} benchmarks")

        with ThreadPoolExecutor(max_workers=DEFAULT_JOBS) as executor:
            futures = [executor.submit(benchmark_case, yml_path, input_dir, args.c_mode) for yml_path in yml_paths]
            completed = 0
            for future in as_completed(futures):
                results.append(future.result())
                completed += 1
                print(f"Finished {completed}/{total}")

        results.sort(key=lambda item: item["case_id"])
        counts = Counter(result["status"] for result in results)
        failures = [result for result in results if result["status"] != "success"]

        log_line(log_handle)
        log_line(log_handle, f"Processed {len(results)} benchmarks")
        log_line(log_handle, f"  success: {counts.get('success', 0)}")
        for status in sorted(count for count in counts if count != "success"):
            log_line(log_handle, f"  {status}: {counts[status]}")

        if failures:
            log_line(log_handle)
            log_line(log_handle, "Failures:")
            for result in failures:
                detail = f" — {result['detail']}" if result["detail"] else ""
                log_line(log_handle, f"- {result['case_id']} — {result['status']}{detail}")
            return 2

        log_line(log_handle)
        log_line(log_handle, "All selected benchmarks completed successfully.")
        return 0

if __name__ == "__main__":
    sys.exit(main())
