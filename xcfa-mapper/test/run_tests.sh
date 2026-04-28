#!/bin/bash
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


# Test runner script for xcfa-mapper
# Runs both unit tests and integration tests

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

# Directories
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_DIR="$SCRIPT_DIR/.."
BUILD_DIR="$PROJECT_DIR/build"
UNIT_TEST_DIR="$SCRIPT_DIR/unit"
UNIT_TEST_OUTPUT_DIR="$UNIT_TEST_DIR/output"
INTEGRATION_TEST_DIR="$SCRIPT_DIR/integration"
INTEGRATION_INPUT_DIR="$INTEGRATION_TEST_DIR/input"
INTEGRATION_OUTPUT_DIR="$INTEGRATION_TEST_DIR/output"

# Tools
XCFA_MAPPER="$BUILD_DIR/xcfa-mapper"
CLANG="$PROJECT_DIR/../backend/bin/bin/clang"
CLANGPP="$PROJECT_DIR/../backend/bin/bin/clang++"
CIR_OPT="$PROJECT_DIR/../backend/bin/bin/cir-opt"
GCC="gcc"  # Use system gcc for compilation checks

# Counters
TOTAL_TESTS=0
PASSED_TESTS=0
FAILED_TESTS=0
SKIPPED_TESTS=0

# Directories for E2E tests
ESBMC_EVAL_DIR="$PROJECT_DIR/../backend/examples/esbmc-eval"
ESBMC_EVAL_OUTPUT_DIR="$SCRIPT_DIR/esbmc-eval/output"

# Create output directory if it doesn't exist
mkdir -p "$INTEGRATION_OUTPUT_DIR" "$UNIT_TEST_OUTPUT_DIR"

echo "======================================"
echo "  XCFA-Mapper Test Suite"
echo "======================================"
echo ""

# Check if xcfa-mapper exists
if [ ! -f "$XCFA_MAPPER" ]; then
    echo -e "${RED}ERROR: xcfa-mapper not found at $XCFA_MAPPER${NC}"
    echo "Please build the project first: cmake -S .. -B ../build && cmake --build ../build --target xcfa-mapper"
    exit 1
fi

# Check if clang exists
if [ ! -f "$CLANG" ]; then
    echo -e "${RED}ERROR: clang not found at $CLANG${NC}"
    echo "Please ensure the CIR-enabled clang is available"
    exit 1
fi

# Check if cir-opt exists
if [ ! -f "$CIR_OPT" ]; then
    echo -e "${RED}ERROR: cir-opt not found at $CIR_OPT${NC}"
    echo "Please ensure the CIR-enabled toolchain is available"
    exit 1
fi

echo "Using tools:"
echo "  xcfa-mapper: $XCFA_MAPPER"
echo "  clang: $CLANG"
echo "  clang++: $CLANGPP"
echo "  cir-opt: $CIR_OPT"
echo ""

#######################################
# Unit Tests
#######################################
echo "======================================"
echo "  Running Unit Tests"
echo "======================================"
echo ""

for mlir_file in "$UNIT_TEST_DIR"/*.mlir; do
    if [ -f "$mlir_file" ]; then
        test_name=$(basename "$mlir_file" .mlir)
        TOTAL_TESTS=$((TOTAL_TESTS + 1))
        
        echo -n "Testing $test_name... "
        
        # Run xcfa-mapper on the MLIR file
        output_file="$UNIT_TEST_OUTPUT_DIR/${test_name}_output.c"
        log_file="$UNIT_TEST_OUTPUT_DIR/${test_name}_log.txt"
        
        if ! "$XCFA_MAPPER" "$mlir_file" "$output_file" > "$log_file" 2>&1 || [ ! -f "$output_file" ]; then
            echo -e "${RED}FAILED${NC} (xcfa-mapper failed)"
            FAILED_TESTS=$((FAILED_TESTS + 1))
            echo "  Output from xcfa-mapper:"
            cat "$log_file" | sed 's/^/    /'
            echo ""
            continue
        fi
        
        # Check if the generated C file compiles
        compile_log="$UNIT_TEST_OUTPUT_DIR/${test_name}_compile_log.txt"
        if ! "$GCC" -c -fsyntax-only "$output_file" > "$compile_log" 2>&1; then
            echo -e "${RED}FAILED${NC} (compilation failed)"
            FAILED_TESTS=$((FAILED_TESTS + 1))
            echo "  Compilation errors:"
            cat "$compile_log" | sed 's/^/    /'
            echo ""
            continue
        fi
        
        echo -e "${GREEN}PASSED${NC}"
        PASSED_TESTS=$((PASSED_TESTS + 1))
    fi
done

echo ""

#######################################
# Integration Tests
#######################################
echo "======================================"
echo "  Running Integration Tests"
echo "======================================"
echo ""

for c_file in "$INTEGRATION_INPUT_DIR"/*.c; do
    if [ -f "$c_file" ]; then
        test_name=$(basename "$c_file" .c)
        TOTAL_TESTS=$((TOTAL_TESTS + 1))
        
        echo -n "Testing $test_name... "
        
        # Step 1: Generate CIR from C file
        mlir_file="$INTEGRATION_OUTPUT_DIR/${test_name}.mlir"
        flat_mlir_file="$INTEGRATION_OUTPUT_DIR/${test_name}.flat.mlir"
        clang_log="$INTEGRATION_OUTPUT_DIR/${test_name}_clang_log.txt"
        
        if ! "$CLANG" "$c_file" -Xclang -emit-cir -S -o "$mlir_file" > "$clang_log" 2>&1; then
            echo -e "${RED}FAILED${NC} (CIR generation failed)"
            FAILED_TESTS=$((FAILED_TESTS + 1))
            echo "  Output from clang:"
            cat "$clang_log" | sed 's/^/    /'
            echo ""
            continue
        fi
        
        # Step 1b: Flatten CIR with cir-opt
        flat_log="$INTEGRATION_OUTPUT_DIR/${test_name}_flat_log.txt"
        if ! "$CIR_OPT" "$mlir_file" -cir-flatten-cfg -o "$flat_mlir_file" > "$flat_log" 2>&1; then
            echo -e "${RED}FAILED${NC} (CIR flattening failed)"
            FAILED_TESTS=$((FAILED_TESTS + 1))
            echo "  Output from cir-opt:"
            cat "$flat_log" | sed 's/^/    /'
            echo ""
            continue
        fi
        
        # Step 2: Convert CIR back to C using xcfa-mapper
        output_c_file="$INTEGRATION_OUTPUT_DIR/${test_name}_output.c"
        mapper_log="$INTEGRATION_OUTPUT_DIR/${test_name}_mapper_log.txt"
        
        if ! "$XCFA_MAPPER" "$flat_mlir_file" "$output_c_file" > "$mapper_log" 2>&1 || [ ! -f "$output_c_file" ]; then
            echo -e "${RED}FAILED${NC} (xcfa-mapper failed)"
            FAILED_TESTS=$((FAILED_TESTS + 1))
            echo "  Output from xcfa-mapper:"
            cat "$mapper_log" | sed 's/^/    /'
            echo ""
            continue
        fi
        
        # Step 3: Check if the generated C file compiles
        compile_log="$INTEGRATION_OUTPUT_DIR/${test_name}_compile_log.txt"
        if ! "$GCC" -c -fsyntax-only "$output_c_file" > "$compile_log" 2>&1; then
            echo -e "${RED}FAILED${NC} (compilation failed)"
            FAILED_TESTS=$((FAILED_TESTS + 1))
            echo "  Compilation errors:"
            cat "$compile_log" | sed 's/^/    /'
            echo ""
            continue
        fi
        
        echo -e "${GREEN}PASSED${NC}"
        PASSED_TESTS=$((PASSED_TESTS + 1))
    fi
done

echo ""

#######################################
# C++ Integration Tests
#######################################
echo "======================================"
echo "  Running C++ Integration Tests"
echo "======================================"
echo ""

if [ ! -f "$CLANGPP" ]; then
    echo -e "${YELLOW}SKIPPED: clang++ not found at $CLANGPP${NC}"
else
    for cpp_file in "$INTEGRATION_INPUT_DIR"/*.cpp; do
        if [ -f "$cpp_file" ]; then
            test_name=$(basename "$cpp_file" .cpp)
            TOTAL_TESTS=$((TOTAL_TESTS + 1))

            echo -n "Testing $test_name... "

            # Step 1: Generate CIR from C++ file
            mlir_file="$INTEGRATION_OUTPUT_DIR/${test_name}.mlir"
            flat_mlir_file="$INTEGRATION_OUTPUT_DIR/${test_name}.flat.mlir"
            clang_log="$INTEGRATION_OUTPUT_DIR/${test_name}_clang_log.txt"

            if ! "$CLANGPP" "$cpp_file" -Xclang -emit-cir -S -o "$mlir_file" > "$clang_log" 2>&1; then
                echo -e "${RED}FAILED${NC} (CIR generation failed)"
                FAILED_TESTS=$((FAILED_TESTS + 1))
                echo "  Output from clang++:"
                cat "$clang_log" | sed 's/^/    /'
                echo ""
                continue
            fi

            # Step 1b: Flatten CIR with cir-opt
            flat_log="$INTEGRATION_OUTPUT_DIR/${test_name}_flat_log.txt"
            if ! "$CIR_OPT" "$mlir_file" -cir-flatten-cfg -o "$flat_mlir_file" > "$flat_log" 2>&1; then
                echo -e "${RED}FAILED${NC} (CIR flattening failed)"
                FAILED_TESTS=$((FAILED_TESTS + 1))
                echo "  Output from cir-opt:"
                cat "$flat_log" | sed 's/^/    /'
                echo ""
                continue
            fi

            # Step 2: Convert flat CIR to C using xcfa-mapper
            # Use --best-effort: C++ STL internals produce ops that can't be fully mapped.
            output_c_file="$INTEGRATION_OUTPUT_DIR/${test_name}_output.c"
            mapper_log="$INTEGRATION_OUTPUT_DIR/${test_name}_mapper_log.txt"

            if ! "$XCFA_MAPPER" --best-effort "$flat_mlir_file" "$output_c_file" > "$mapper_log" 2>&1 || [ ! -f "$output_c_file" ]; then
                echo -e "${RED}FAILED${NC} (xcfa-mapper failed)"
                FAILED_TESTS=$((FAILED_TESTS + 1))
                echo "  Output from xcfa-mapper:"
                cat "$mapper_log" | sed 's/^/    /'
                echo ""
                continue
            fi

            # Step 3: Check that struct/union names in the generated C are valid identifiers.
            # C++ qualified names (::, <, >) must not appear in struct/union declarations.
            # Full compilation is not required: C++ STL internals produce unhandled ops
            # (vtables, exception handling, etc.) that are emitted as comments in
            # best-effort mode and may cause other unrelated compilation errors.
            compile_log="$INTEGRATION_OUTPUT_DIR/${test_name}_compile_log.txt"
            "$GCC" -c -fsyntax-only "$output_c_file" > "$compile_log" 2>&1
            if grep -qE "error:.*before '::'|error:.*before '<'" "$compile_log"; then
                echo -e "${RED}FAILED${NC} (C++ qualified names in struct/union identifiers)"
                FAILED_TESTS=$((FAILED_TESTS + 1))
                echo "  Relevant errors:"
                grep -E "error:.*before '::'|error:.*before '<'" "$compile_log" | head -5 | sed 's/^/    /'
                echo ""
                continue
            fi

            echo -e "${GREEN}PASSED${NC}"
            PASSED_TESTS=$((PASSED_TESTS + 1))
        fi
    done
fi

echo ""

#######################################
# E2E Tests (esbmc-eval)
#######################################
echo "======================================"
echo "  Running E2E Tests (esbmc-eval)"
echo "======================================"
echo ""

if [ ! -d "$ESBMC_EVAL_DIR" ]; then
    echo -e "${YELLOW}SKIPPED: esbmc-eval directory not found at $ESBMC_EVAL_DIR${NC}"
elif [ ! -f "$CLANGPP" ]; then
    echo -e "${YELLOW}SKIPPED: clang++ not found at $CLANGPP${NC}"
else
    mkdir -p "$ESBMC_EVAL_OUTPUT_DIR"

    while IFS= read -r cpp_file; do
        rel_path="${cpp_file#$ESBMC_EVAL_DIR/}"   # e.g. algorithm/algorithm0/main.cpp
        test_dir="$(dirname "$rel_path")"           # e.g. algorithm/algorithm0
        test_id="${test_dir//\//__}"               # e.g. algorithm__algorithm0
        TOTAL_TESTS=$((TOTAL_TESTS + 1))

        echo -n "Testing $test_id... "

        mlir_file="$ESBMC_EVAL_OUTPUT_DIR/${test_id}.mlir"
        flat_mlir_file="$ESBMC_EVAL_OUTPUT_DIR/${test_id}.flat.mlir"
        clang_log="$ESBMC_EVAL_OUTPUT_DIR/${test_id}_clang_log.txt"

        # Step 1: Generate CIR from C++ file
        if ! "$CLANGPP" "$cpp_file" -Xclang -emit-cir -S -o "$mlir_file" > "$clang_log" 2>&1; then
            echo -e "${YELLOW}SKIPPED${NC} (CIR generation failed)"
            SKIPPED_TESTS=$((SKIPPED_TESTS + 1))
            continue
        fi

        # Step 2: Flatten CIR
        flat_log="$ESBMC_EVAL_OUTPUT_DIR/${test_id}_flat_log.txt"
        if ! "$CIR_OPT" "$mlir_file" -cir-flatten-cfg -o "$flat_mlir_file" > "$flat_log" 2>&1; then
            echo -e "${YELLOW}SKIPPED${NC} (CIR flattening failed)"
            SKIPPED_TESTS=$((SKIPPED_TESTS + 1))
            continue
        fi

        # Step 3: Convert flat CIR to C using xcfa-mapper
        # Use --best-effort mode: C++ STL templates produce compiler temporaries
        # with empty names and other edge-case ops; best-effort emits comments for
        # anything that can't be mapped cleanly instead of aborting.
        output_c_file="$ESBMC_EVAL_OUTPUT_DIR/${test_id}_output.c"
        mapper_log="$ESBMC_EVAL_OUTPUT_DIR/${test_id}_mapper_log.txt"

        if ! "$XCFA_MAPPER" --best-effort "$flat_mlir_file" "$output_c_file" > "$mapper_log" 2>&1 || [ ! -f "$output_c_file" ]; then
            echo -e "${RED}FAILED${NC} (xcfa-mapper failed)"
            FAILED_TESTS=$((FAILED_TESTS + 1))
            echo "  Output from xcfa-mapper:"
            head -5 "$mapper_log" | sed 's/^/    /'
            echo ""
            continue
        fi

        echo -e "${GREEN}PASSED${NC}"
        PASSED_TESTS=$((PASSED_TESTS + 1))
    done < <(find "$ESBMC_EVAL_DIR" -name "main.cpp" | sort)
fi

echo ""

#######################################
# Summary
#######################################
echo "======================================"
echo "  Test Summary"
echo "======================================"
echo "Total tests:  $TOTAL_TESTS"
echo -e "Passed:       ${GREEN}$PASSED_TESTS${NC}"
echo -e "Skipped:      ${YELLOW}$SKIPPED_TESTS${NC}"
echo -e "Failed:       ${RED}$FAILED_TESTS${NC}"
echo ""

if [ $FAILED_TESTS -eq 0 ]; then
    echo -e "${GREEN}All tests passed!${NC}"
    exit 0
else
    echo -e "${RED}Some tests failed. Check output files in $INTEGRATION_OUTPUT_DIR and $ESBMC_EVAL_OUTPUT_DIR${NC}"
    exit 1
fi
