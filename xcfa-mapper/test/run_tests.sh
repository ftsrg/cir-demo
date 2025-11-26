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
GCC="gcc"  # Use system gcc for compilation checks

# Counters
TOTAL_TESTS=0
PASSED_TESTS=0
FAILED_TESTS=0

# Create output directory if it doesn't exist
mkdir -p "$INTEGRATION_OUTPUT_DIR" "$UNIT_TEST_OUTPUT_DIR"

echo "======================================"
echo "  XCFA-Mapper Test Suite"
echo "======================================"
echo ""

# Check if xcfa-mapper exists
if [ ! -f "$XCFA_MAPPER" ]; then
    echo -e "${RED}ERROR: xcfa-mapper not found at $XCFA_MAPPER${NC}"
    echo "Please build the project first: cd build && make"
    exit 1
fi

# Check if clang exists
if [ ! -f "$CLANG" ]; then
    echo -e "${RED}ERROR: clang not found at $CLANG${NC}"
    echo "Please ensure the CIR-enabled clang is available"
    exit 1
fi

echo "Using tools:"
echo "  xcfa-mapper: $XCFA_MAPPER"
echo "  clang: $CLANG"
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
        clang_log="$INTEGRATION_OUTPUT_DIR/${test_name}_clang_log.txt"
        
        if ! "$CLANG" -Xclang -emit-cir-flat -S -o "$mlir_file" "$c_file" > "$clang_log" 2>&1; then
            echo -e "${RED}FAILED${NC} (CIR generation failed)"
            FAILED_TESTS=$((FAILED_TESTS + 1))
            echo "  Output from clang:"
            cat "$clang_log" | sed 's/^/    /'
            echo ""
            continue
        fi
        
        # Step 2: Convert CIR back to C using xcfa-mapper
        output_c_file="$INTEGRATION_OUTPUT_DIR/${test_name}_output.c"
        mapper_log="$INTEGRATION_OUTPUT_DIR/${test_name}_mapper_log.txt"
        
        if ! "$XCFA_MAPPER" "$mlir_file" "$output_c_file" > "$mapper_log" 2>&1 || [ ! -f "$output_c_file" ]; then
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
# Summary
#######################################
echo "======================================"
echo "  Test Summary"
echo "======================================"
echo "Total tests:  $TOTAL_TESTS"
echo -e "Passed:       ${GREEN}$PASSED_TESTS${NC}"
echo -e "Failed:       ${RED}$FAILED_TESTS${NC}"
echo ""

if [ $FAILED_TESTS -eq 0 ]; then
    echo -e "${GREEN}All tests passed!${NC}"
    exit 0
else
    echo -e "${RED}Some tests failed. Check output files in $INTEGRATION_OUTPUT_DIR${NC}"
    exit 1
fi
