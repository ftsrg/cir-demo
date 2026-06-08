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

"""Generate missing .reference_output files for the llvm-test-suite examples.

For each .c / .cpp source file that lacks a .reference_output sibling,
the script compiles the file with gcc/g++, runs the resulting binary,
and writes <stdout>\\nexit <N>\\n as the reference output.

Files that fail to compile or time out are skipped silently (no reference
output is written, so the test runner will continue to skip them).

Special cases handled:
  - Polybench utilities (polybench.c, template-for-new-benchmark.c): skipped
    because they are library files with no main().
  - Any file whose compilation fails is skipped.
  - Any file whose binary exceeds TIMEOUT seconds is skipped.
"""

from __future__ import annotations

import argparse
import os
import subprocess
import sys
import tempfile
from concurrent.futures import ThreadPoolExecutor, as_completed
from pathlib import Path

SCRIPT_DIR = Path(__file__).resolve().parent
DEFAULT_LLVM_DIR = SCRIPT_DIR.parent.parent / "backend" / "examples" / "llvm-test-suite"

GCC = "gcc"
GXX = "g++"
TIMEOUT = 10
DEFAULT_JOBS = 8

# Files that are helper/utility sources, not standalone programs.
SKIP_FILES = {
    "polybench.c",
    "template-for-new-benchmark.c",
}


def find_missing(llvm_dir: Path) -> list[Path]:
    sources = []
    for ext in ("*.c", "*.cpp"):
        sources.extend(llvm_dir.rglob(ext))
    missing = []
    for src in sorted(sources):
        if src.name in SKIP_FILES:
            continue
        ref = src.with_suffix("").with_suffix("").parent / (src.stem + ".reference_output")
        # handle double-suffix like foo.c.reference_output is not the convention;
        # actual sibling is src.parent / (src.stem + ".reference_output")
        ref = src.parent / (src.stem + ".reference_output")
        if not ref.exists():
            missing.append(src)
    return missing


def compile_and_run(src: Path) -> tuple[Path, str | None]:
    """Compile src, run it, return (ref_path, content) or (ref_path, None) on failure."""
    ref = src.parent / (src.stem + ".reference_output")
    compiler = GXX if src.suffix == ".cpp" else GCC

    with tempfile.TemporaryDirectory() as tmpdir:
        binary = Path(tmpdir) / "a.out"
        compile_cmd = [compiler, str(src), "-o", str(binary), "-lm", "-w"]

        try:
            result = subprocess.run(
                compile_cmd,
                capture_output=True,
                timeout=30,
                check=False,
            )
        except (subprocess.TimeoutExpired, OSError):
            return ref, None

        if result.returncode != 0 or not binary.exists():
            return ref, None

        try:
            run_result = subprocess.run(
                [str(binary)],
                capture_output=True,
                timeout=TIMEOUT,
                check=False,
            )
        except subprocess.TimeoutExpired:
            return ref, None
        except OSError:
            return ref, None

        stdout = run_result.stdout
        exit_code = run_result.returncode

        # Format: stdout bytes + "exit N\n"
        # If stdout doesn't end with a newline, add one before "exit N"
        if stdout and not stdout.endswith(b"\n"):
            content = stdout + b"\nexit " + str(exit_code).encode() + b"\n"
        else:
            content = stdout + b"exit " + str(exit_code).encode() + b"\n"

        return ref, content


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    parser.add_argument(
        "--llvm-dir",
        type=Path,
        default=DEFAULT_LLVM_DIR,
        help="Path to backend/examples/llvm-test-suite (default: auto-detected)",
    )
    parser.add_argument(
        "-j", "--jobs",
        type=int,
        default=DEFAULT_JOBS,
        help=f"Parallel workers (default: {DEFAULT_JOBS})",
    )
    parser.add_argument(
        "--dry-run",
        action="store_true",
        help="Print what would be generated without writing files",
    )
    args = parser.parse_args()

    llvm_dir = args.llvm_dir.resolve()
    if not llvm_dir.is_dir():
        print(f"error: llvm-test-suite directory not found: {llvm_dir}", file=sys.stderr)
        return 1

    missing = find_missing(llvm_dir)
    if not missing:
        print("All source files already have reference outputs.")
        return 0

    print(f"Generating reference outputs for {len(missing)} files using {args.jobs} workers...")

    generated = 0
    skipped = 0
    completed_count = 0

    with ThreadPoolExecutor(max_workers=args.jobs) as executor:
        futures = {executor.submit(compile_and_run, src): src for src in missing}
        for future in as_completed(futures):
            src = futures[future]
            ref, content = future.result()
            completed_count += 1

            if content is None:
                skipped += 1
            else:
                if args.dry_run:
                    print(f"  [dry-run] would write {ref.relative_to(llvm_dir)}")
                else:
                    ref.write_bytes(content)
                generated += 1

            if completed_count % 100 == 0:
                print(f"  {completed_count}/{len(missing)} processed "
                      f"({generated} generated, {skipped} skipped)...")

    print(f"\nDone: {generated} generated, {skipped} skipped (compile/run failure).")
    return 0


if __name__ == "__main__":
    sys.exit(main())
