<!--
Copyright 2025 Budapest University of Technology and Economics

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
-->

# cir2c Test Suite

This directory contains the test infrastructure for `cir2c`.

## Directory Structure

```
test/
├── run_tests.sh              # Full test suite runner
├── run-cir2c.sh              # Single-file pipeline (use for debugging)
├── benchmark_mapper.py       # SV-COMP / .yml benchmark runner
├── cir-preprocess.sh         # Alloca qualifier stripping (used by all scripts)
├── generate-reference-outputs.py
├── integration/
│   ├── input/                # C and C++ source files for integration tests
│   └── output/               # Generated files (created at test time)
├── unit/                     # Unit test MLIR inputs (FileCheck / lit)
├── llvm-eval/output/         # Created at test time (LLVM test suite results)
└── esbmc-eval/output/        # Created at test time (esbmc-eval results)
```

## Single-file pipeline

For iterating on a single failing case, use `run-cir2c.sh` directly. It runs the full `clang → preprocess → [cir-opt flatten] → cir2c` pipeline in one command:

```bash
cir2c/test/run-cir2c.sh [OPTIONS] <input.c|cpp> <output.c>
```

Options:

| Option | Description |
|---|---|
| `--lang c\|c++` | Override language (default: inferred from file extension) |
| `--std STD` | Override language standard (default: `c23` / `c++23`) |
| `--flatten` | Run `cir-opt -cir-flatten-cfg` before `cir2c` |
| `--mlir FILE` | Save the intermediate CIR MLIR to FILE |
| `--flat-mlir FILE` | Save the flattened MLIR to FILE (implies `--flatten`) |
| `--include DIR` | Add `-I DIR` to CIR generation (repeatable) |

Exit codes:

| Code | Meaning |
|---|---|
| 0 | Success |
| 2 | `clang` / CIR generation failed |
| 3 | `cir-opt` flatten failed |
| 4 | `cir2c` mapping failed |

Tool paths are resolved relative to the script: `clang`/`clang++`/`cir-opt` from `../../backend/bin/bin/`, `cir2c` from `../build/cir2c`.

## Full test suite

```bash
cd cir2c/test && bash run_tests.sh [--json-out <summary.json>]
```

Runs up to three suites depending on environment variables (see below). Requires GNU `parallel`.

### Environment variables

| Variable | Default | Meaning |
|---|---|---|
| `RUN_INTEGRATION` | `1` | Run C and C++ integration tests |
| `RUN_LLVM` | `0` | Run LLVM SingleSource end-to-end tests (large, slow) |
| `RUN_ESBMC` | `0` | Run esbmc-eval coverage tests (large, slow) |
| `JOBS` | `$(nproc)` | Parallelism for GNU parallel |

Pass `--json-out FILE` to write a machine-readable JSON summary at exit (used by CI to build PR comment tables).

### Suite 1: Integration tests (`RUN_INTEGRATION=1`)

Runs every `.c` file in `integration/input/` as a **C integration test** and every `.cpp` file as a **C++ integration test**. For each file the pipeline is:

1. Generate CIR via `clang`/`clang++` (`-S -emit-cir`).
2. Preprocess (strip alloca qualifiers that the MLIR parser cannot handle).
3. Run `cir2c` to produce a `.c` output.
4. Compile the generated C with `clang -c -fsyntax-only` to verify it is valid C.

A test passes when the generated C compiles without errors. Per-test logs and generated files are written to `integration/output/`.

Current integration test inputs include:

- **C tests**: `test_basic.c`, `test_arithmetic.c`, `test_comparisons.c`, `test_control_flow.c`, `test_functions.c`, `test_casts.c`, `test_unary.c`, `test_shifts.c`, `test_arrays.c`, `test_nested_arrays.c`, `test_structs.c`, `test_struct_float.c`, `test_globals.c`, `test_floats.c`, `test_floats_2.c`, `test_bools.c`, `test_pointer.c`, `test_unsigned.c`, `test_integer_promotion.c`, `test_compound.c`, `test_block_arg.c`, `test_nf_for.c`, `test_nf_while` / `test_nf_do_while.c`, `test_nf_break_continue.c`, `test_nf_switch_fallthrough.c`, `test_nf_nested.c`
- **C++ EH/scope tests**: `test_eh_throw_catch.cpp`, `test_eh_raii_throw.cpp`, `test_eh_nested_try.cpp`, `test_eh_multiple_fns.cpp`, `test_eh_called_throw.cpp`, `test_nf_try.cpp`
- **C++ scope/RAII tests**: `test_scope_raii.cpp`, `test_scope_early_return_dtor.cpp`, `test_scope_nested_raii_loop.cpp`, `test_scope_plain_block.cpp`, `test_scope_for_init.cpp`, `test_scope_if_init.cpp`, `test_scope_stmt_expr.cpp`
- **C++ virtual dispatch tests**: `test_virtual_dispatch.cpp`, `test_virtual_multi.cpp`, `test_virtual_member_ptr.cpp`, `test_swap_vector.cpp`

### Suite 2: LLVM SingleSource end-to-end tests (`RUN_LLVM=1`)

Requires the LLVM test suite at `../backend/examples/llvm-test-suite/`. For each source file that has a `.reference_output` sibling:

1. Run the full pipeline (`clang → preprocess → cir2c`) to produce C.
2. Compile and link with `clang`.
3. Run the binary and compare stdout / exit code against `.reference_output`.

Output mismatches that can be reproduced with `clang -fclangir` directly are attributed to upstream ClangIR bugs and counted as SKIPPED rather than failures.

Tests without a `.reference_output` file are not run. Per-test logs go to `llvm-eval/output/`.

### Suite 3: esbmc-eval coverage tests (`RUN_ESBMC=1`)

Requires `../backend/examples/esbmc-eval/`. The pass condition is that the pipeline produces C that **compiles** (no reference output exists, so execution is not checked). Per-test logs go to `esbmc-eval/output/`.

### CIR op blocklist

Both the LLVM and esbmc-eval suites skip tests whose generated CIR contains ops that are knowingly out of scope (e.g. `cir.asm`, `cir.vec.*`, `!cir.vector<`, `cir.int<s, 128>`, `cir.eh.setjmp`). These are reported as SKIPPED to avoid noise.

## Benchmark runner (`benchmark_mapper.py`)

For SV-COMP–style benchmarks expressed as `.yml` task files:

```bash
python3 cir2c/test/benchmark_mapper.py <input-dir> [set-file-or-glob ...]
```

Options:

| Flag | Meaning |
|---|---|
| `-c` / `--c-mode` | Use C mode (`clang -x c`) instead of the default C++ mode |
| `-f` / `--flatten` | Run `cir-opt -cir-flatten-cfg` before `cir2c` |
| `-o DIR` / `--output-dir DIR` | Keep per-case `.mlir` and `output.c` files in DIR |

Results are written to `output.txt` in the working directory.

## Troubleshooting

- Per-test logs (pipeline, compile, link, run) are in `integration/output/`, `llvm-eval/output/`, or `esbmc-eval/output/` depending on the suite.
- Use `run-cir2c.sh --mlir tmp.mlir input.c output.c` to inspect the intermediate CIR for a failing case.
- The alloca qualifier preprocessing (stripping `, cleanup_dest_slot` and `, const` from CIR text) is handled by `run-cir2c.sh` (and also inline in `cir2c/src/main.cpp`). `cir-preprocess.sh` is the standalone version used by legacy callers.
