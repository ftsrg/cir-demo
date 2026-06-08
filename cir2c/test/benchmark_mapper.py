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
RUNNER = SCRIPT_DIR / "run-cir2c.sh"
GCC = "gcc"
DEFAULT_YML_PATTERNS = ["**/*.yml"]
DEFAULT_JOBS = 8
DEFAULT_TIMEOUT = 120
ERROR_MARKERS = (
    "// No handler registered",
    "// Handler failed",
    "ERROR",
)

# Pipeline exit codes from run-cir2c.sh
_EXIT_STAGE = {2: "clang_failed", 3: "flatten_failed", 4: "mapper_failed"}

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
    message = re.sub(r"/tmp/[^/]+/output\.c", "generated.c", message)
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
        description="Run benchmark .yml cases through the CIR pipeline and show failures. Use --flatten to also run cir-opt -cir-flatten-cfg before the mapper."
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
    parser.add_argument(
        "-f",
        "--flatten",
        action="store_true",
        help="Run cir-opt -cir-flatten-cfg on the CIR before passing it to cir2c.",
    )
    parser.add_argument(
        "-o",
        "--output-dir",
        help="Optional directory for generated per-benchmark files (input.mlir, output.c). If omitted, temporary directories are used.",
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

def benchmark_case(yml_path: Path, root_dir: Path, c_mode: bool, output_dir: Path | None, flatten: bool = False) -> dict[str, str]:
    relative_yml = yml_path.relative_to(root_dir)
    source_name = parse_input_file_from_yml(yml_path)
    source_path = yml_path.parent / source_name
    case_id = str(relative_yml.parent / source_name)

    try:
        if output_dir is not None:
            case_dir = output_dir / relative_yml.with_suffix("")
            case_dir.mkdir(parents=True, exist_ok=True)
            c_path = case_dir / "output.c"
            mlir_path: Path | None = case_dir / "input.mlir"
        else:
            c_path = Path(tempfile.mkstemp(suffix=".c")[1])
            mlir_path = None

        try:
            runner_cmd = [str(RUNNER)]
            if c_mode:
                runner_cmd += ["--lang", "c"]
            if flatten:
                runner_cmd += ["--flatten"]
            if mlir_path is not None:
                runner_cmd += ["--mlir", str(mlir_path)]
            runner_cmd += [str(source_path), str(c_path)]

            pipeline_result = run_command(runner_cmd, DEFAULT_TIMEOUT)

            if pipeline_result.returncode != 0:
                status = _EXIT_STAGE.get(pipeline_result.returncode, "pipeline_failed")
                detail = summarize_process_failure(
                    pipeline_result.stdout, pipeline_result.stderr, pipeline_result.returncode
                )
                if pipeline_result.returncode == 4 and c_path.exists():
                    gen_fail = extract_generated_c_failure(read_text(c_path))
                    if gen_fail:
                        detail = gen_fail
                return {"case_id": case_id, "status": status, "detail": detail}

            generated_c = read_text(c_path)
            generated_c_failure = extract_generated_c_failure(generated_c)
            if generated_c_failure:
                return {"case_id": case_id, "status": "mapper_failed", "detail": generated_c_failure}

            compile_result = run_command([GCC, "-fsyntax-only", str(c_path)], DEFAULT_TIMEOUT)
            if compile_result.returncode != 0:
                return {
                    "case_id": case_id,
                    "status": "compile_failed",
                    "detail": summarize_process_failure(
                        compile_result.stdout, compile_result.stderr, compile_result.returncode
                    ),
                }
        finally:
            if output_dir is None:
                c_path.unlink(missing_ok=True)

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
    if not RUNNER.exists():
        raise SystemExit(f"run-cir2c.sh not found: {RUNNER}")

def main() -> int:
    args = parse_args()
    validate_tools()

    input_dir = Path(args.input_dir).expanduser().resolve()
    if not input_dir.is_dir():
        raise SystemExit(f"Input directory not found: {input_dir}")

    output_dir: Path | None = None
    if args.output_dir:
        output_dir = Path(args.output_dir).expanduser().resolve()
        output_dir.mkdir(parents=True, exist_ok=True)

    yml_paths = gather_yml_paths(input_dir, args.set_files)
    if not yml_paths:
        raise SystemExit("No benchmark yml files matched the requested selections.")

    output_path = Path.cwd() / "output.txt"
    results: list[dict[str, str]] = []
    with output_path.open("w", encoding="utf-8") as log_handle:
        total = len(yml_paths)
        print(f"Starting {total} benchmarks")

        with ThreadPoolExecutor(max_workers=DEFAULT_JOBS) as executor:
            futures = [executor.submit(benchmark_case, yml_path, input_dir, args.c_mode, output_dir, args.flatten) for yml_path in yml_paths]
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
