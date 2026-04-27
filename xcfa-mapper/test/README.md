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

# XCFA-Mapper Test Suite

This directory contains the test suite for the xcfa-mapper project, which includes both unit tests and integration tests.

## Directory Structure

```
test/
├── run_tests.sh              # Main test runner script
├── unit/                     # Unit tests (MLIR files)
│   ├── test_alloca.mlir
│   ├── test_const.mlir
│   ├── test_binop.mlir
│   ├── test_cmp.mlir
│   ├── test_control_flow.mlir
│   ├── test_cast.mlir
│   ├── test_unary.mlir
│   └── test_call.mlir
└── integration/              # Integration tests
    ├── input/                # C source files
    │   ├── test_basic.c
    │   ├── test_arithmetic.c
    │   ├── test_comparisons.c
    │   ├── test_control_flow.c
    │   ├── test_functions.c
    │   ├── test_casts.c
    │   ├── test_unary.c
    │   ├── test_shifts.c
    │   ├── test_arrays.c
    │   ├── test_structs.c
    │   ├── test_globals.c
    │   ├── test_floats.c
    │   └── test_bools.c
    └── output/               # Generated MLIR and C files (created by tests)
```

## Running Tests

### Run All Tests

```bash
cd test
./run_tests.sh
```

### Run Individual Unit Tests

```bash
../build/xcfa-mapper unit/test_alloca.mlir
```

### Run Individual Integration Tests

```bash
# Generate CIR from C
../backend/bin/bin/clang -Xclang -emit-cir-flat -S -o output.mlir integration/input/test_basic.c

# Convert CIR to C
../build/xcfa-mapper output.mlir > output.c
```

### Inventory ESBMC Benchmarks

Use the ESBMC inventory helper to quickly identify which benchmark cases are not yet supported by the current `xcfa-mapper` pipeline:

```bash
/usr/bin/python esbmc_inventory.py --set cpp.set
```

The script runs each benchmark through:
- CIR generation with the bundled `clang`
- `xcfa-mapper` with trace JSON enabled
- syntax-only compilation of the generated C with `gcc`

It writes summary reports under `test/esbmc_inventory_output/` in Markdown, CSV, and JSON.

## Test Coverage

The test suite covers all major CIR operations found in c-counts.txt:

### Unit Tests
- **test_alloca.mlir**: Tests `cir.alloca`, `cir.const`, `cir.store`, `cir.load`, `cir.return`
- **test_const.mlir**: Tests `cir.const` with different types (int, bool, float, zero)
- **test_binop.mlir**: Tests `cir.binop` (add, sub, mul, div)
- **test_cmp.mlir**: Tests `cir.cmp` (lt, gt, eq, ne)
- **test_control_flow.mlir**: Tests `cir.br`, `cir.brcond`, `cir.return`
- **test_cast.mlir**: Tests `cir.cast`
- **test_unary.mlir**: Tests `cir.unary` (minus, plus)
- **test_call.mlir**: Tests `cir.call`, function definitions

### Integration Tests
- **test_basic.c**: Basic operations (alloca, load, store, const, return)
- **test_arithmetic.c**: Binary operations (add, sub, mul, div, rem, and, or, xor)
- **test_comparisons.c**: Comparison operations (lt, le, gt, ge, eq, ne)
- **test_control_flow.c**: Control flow (if-else, switch, ternary, while loops)
- **test_functions.c**: Function calls, multiple parameters, recursion
- **test_casts.c**: Type conversions (int casts, float casts, pointer casts)
- **test_unary.c**: Unary operations (negation, bitwise not, increment, decrement)
- **test_shifts.c**: Shift operations (left shift, right shift)
- **test_arrays.c**: Array access, pointer arithmetic (ptr_stride, ptr_diff, get_element)
- **test_structs.c**: Structure access (record, get_member)
- **test_globals.c**: Global variables (global, get_global)
- **test_floats.c**: Floating point operations (float, double, fp)
- **test_bools.c**: Boolean operations (bool)

## Test Output

The test runner produces colored output:
- **GREEN**: Test passed
- **RED**: Test failed
- **YELLOW**: Test passed with warnings (approximations used)

Failed tests will have their output files preserved in `integration/output/` for debugging.

## Success Criteria

A test is considered successful if:
1. The xcfa-mapper executes without errors
2. The output C file is generated
3. The output does not contain error markers like:
   - `// No handler registered`
   - `// Handler failed`
   - `ERROR`

## Adding New Tests

### Adding a Unit Test

1. Create a new `.mlir` file in `unit/`
2. Write valid CIR code targeting specific operations
3. Run the test suite

### Adding an Integration Test

1. Create a new `.c` file in `integration/input/`
2. Write C code that exercises specific CIR operations
3. Run the test suite

The test runner will automatically discover and run new tests.

## Troubleshooting

If tests fail:
1. Check the generated MLIR file in `integration/output/`
2. Check the generated C output file in `integration/output/`
3. Look for error messages in the output
4. Run the failing test manually to see detailed error messages

## Dependencies

- CIR-enabled Clang compiler (in `../backend/bin/bin/clang`)
- Built xcfa-mapper binary (in `../build/xcfa-mapper`)
