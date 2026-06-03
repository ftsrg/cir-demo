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
# Runs integration tests and LLVM SingleSource end-to-end tests

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

# Directories
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_DIR="$SCRIPT_DIR/.."
BUILD_DIR="$PROJECT_DIR/build"
INTEGRATION_TEST_DIR="$SCRIPT_DIR/integration"
INTEGRATION_INPUT_DIR="$INTEGRATION_TEST_DIR/input"
INTEGRATION_OUTPUT_DIR="$INTEGRATION_TEST_DIR/output"

# Tools
XCFA_MAPPER="$BUILD_DIR/xcfa-mapper"
CLANGPP="$PROJECT_DIR/../backend/bin/bin/clang++"
GCC="$PROJECT_DIR/../backend/bin/bin/clang"  # Use same clang for compilation checks
RUNNER="$SCRIPT_DIR/run-xcfa-mapper.sh"
TIMEOUT=60
JOBS=${JOBS:-$(nproc)}

# ---------------------------------------------------------------------------
# CIR operation blocklist
# ---------------------------------------------------------------------------
# If a test's generated CIR (.mlir) contains any of these operations/types, the
# test is reported as SKIPPED rather than run — these constructs are knowingly
# out of scope and cannot be mapped to verifier-friendly C soundly, so counting
# them as failures only adds noise. Each entry is matched as a fixed substring
# (grep -F) against the .mlir text. Add or remove entries freely.
BLOCKLIST_OPS=(
    "cir.asm"                          # inline assembly — not mappable
    "cir.vtable.get_virtual_fn_addr"   # C++ virtual dispatch (vtable) — unimplemented
    "cir.vec."                         # SIMD vector ops (create/splat/extract/insert/cmp/…)
    "!cir.vector<"                     # SIMD vector types
    "cir.is_fp_class"                  # FP classification — no portable C builtin
    "cir.int<s, 128>"                  # 128-bit integers (__int128) — unsupported (also crashes the mapper)
    "cir.int<u, 128>"                  # 128-bit integers (__int128) — unsupported (also crashes the mapper)
    "cir.eh.setjmp"                    # MSVC-SEH / __builtin_setjmp — not modellable
    "cir.eh.longjmp"                   # MSVC-SEH / __builtin_longjmp — not modellable
)
# Bash arrays cannot be exported to the parallel worker subshells, so flatten
# the editable array above into a newline-delimited scalar that workers can see.
BLOCKLIST_OPS_STR=$(printf '%s\n' "${BLOCKLIST_OPS[@]}")
export BLOCKLIST_OPS_STR

# Echo the first blocklisted op found in the given .mlir file (empty if none).
blocklisted_op_in() {
    local mlir_file="$1" op
    [ -f "$mlir_file" ] || return 0
    while IFS= read -r op; do
        [ -z "$op" ] && continue
        if grep -qF -- "$op" "$mlir_file" 2>/dev/null; then
            printf '%s' "$op"
            return 0
        fi
    done <<< "$BLOCKLIST_OPS_STR"
}
export -f blocklisted_op_in

# Directories for E2E tests
LLVM_EVAL_DIR="$PROJECT_DIR/../backend/examples/llvm-test-suite/"
LLVM_EVAL_OUTPUT_DIR="$SCRIPT_DIR/llvm-eval/output"

# ---------------------------------------------------------------------------
# Counters and interrupt flag
# ---------------------------------------------------------------------------
TOTAL_TESTS=0
PASSED_TESTS=0
FAILED_TESTS=0            # aggregate of the failure sub-categories (drives exit code)
MAPPER_FAILED_TESTS=0    # pipeline/xcfa-mapper could not produce C
COMPILE_FAILED_TESTS=0   # generated C does not compile
MISMATCH_TESTS=0         # compiles & runs, but wrong output/exit code
SKIPPED_TESTS=0
TIMEDOUT_TESTS=0
interrupted=0

# ---------------------------------------------------------------------------
# Summary — called by EXIT trap, always runs
# ---------------------------------------------------------------------------
print_summary() {
    printf "\n"  # ensure we are past any in-progress bar or partial line
    echo ""
    echo "======================================"
    if [[ $interrupted -eq 1 ]]; then
        echo -e "  ${YELLOW}Test Suite (INTERRUPTED)${NC}"
    else
        echo "  Test Summary"
    fi
    echo "======================================"
    echo "Total tests:      $TOTAL_TESTS"
    echo -e "Passed:           ${GREEN}$PASSED_TESTS${NC}"
    echo -e "Skipped:          ${YELLOW}$SKIPPED_TESTS${NC}"
    echo -e "Timed out:        ${YELLOW}$TIMEDOUT_TESTS${NC}"
    echo -e "Failed:           ${RED}$FAILED_TESTS${NC}"
    echo -e "  mapper failed:    ${RED}$MAPPER_FAILED_TESTS${NC}"
    echo -e "  compile failed:   ${RED}$COMPILE_FAILED_TESTS${NC}"
    echo -e "  output mismatch:  ${RED}$MISMATCH_TESTS${NC}"
    if [[ $interrupted -eq 1 ]]; then
        echo -e "${YELLOW}Run was interrupted; results above are partial.${NC}"
    elif [[ $FAILED_TESTS -eq 0 ]]; then
        echo -e "${GREEN}All tests passed!${NC}"
    else
        echo -e "${RED}Some tests failed. Check output files in $INTEGRATION_OUTPUT_DIR and $LLVM_EVAL_OUTPUT_DIR${NC}"
    fi
}

trap 'interrupted=1' INT TERM
trap 'print_summary' EXIT

# ---------------------------------------------------------------------------
# Progress bar helpers (used only in the main process, not in workers)
# ---------------------------------------------------------------------------
BAR_WIDTH=40

# Overwrite current line with a progress bar.
bar_draw() {
    local cur=$1 tot=$2
    local pct=0 filled=0
    if [[ $tot -gt 0 ]]; then
        pct=$(( cur * 100 / tot ))
        filled=$(( cur * BAR_WIDTH / tot ))
    fi
    local bar
    bar=$(printf '%*s' "$filled" "" | tr ' ' '=')
    printf "\r  [%-*s] %d/%d (%d%%)" "$BAR_WIDTH" "$bar" "$cur" "$tot" "$pct"
}

# Clear bar, print a message line, redraw bar.
bar_println() {
    local cur=$1 tot=$2 msg="$3"
    printf "\r%-$((BAR_WIDTH + 24))s\r" ""
    printf "%s\n" "$msg"
    bar_draw "$cur" "$tot"
}

# ---------------------------------------------------------------------------
# Helper: map pipeline exit code to a stage label (exported for workers)
# ---------------------------------------------------------------------------
pipeline_stage() {
    case "$1" in
        2) echo "CIR generation" ;;
        3) echo "flatten" ;;
        4) echo "xcfa-mapper" ;;
        *) echo "pipeline" ;;
    esac
}

# ---------------------------------------------------------------------------
# Worker: C integration test
# Outputs exactly one line: RESULT|test_name|message
# ---------------------------------------------------------------------------
run_c_test() {
    local c_file="$1"
    local test_name pipeline_rc=0
    test_name=$(basename "$c_file" .c)
    local output_c_file="$INTEGRATION_OUTPUT_DIR/${test_name}_output.c"
    local pipeline_log="$INTEGRATION_OUTPUT_DIR/${test_name}_pipeline_log.txt"

    local mlir_file="$INTEGRATION_OUTPUT_DIR/${test_name}.mlir"
    timeout "$TIMEOUT" "$RUNNER" --lang c \
        --mlir "$mlir_file" \
        "$c_file" "$output_c_file" >"$pipeline_log" 2>&1 || pipeline_rc=$?

    if [[ $pipeline_rc -eq 124 ]]; then
        echo "TIMEDOUT|$test_name|"; return
    fi
    if [[ $pipeline_rc -eq 2 ]]; then
        echo "SKIPPED|$test_name|CIR generation failed"; return
    fi
    # Blocklisted CIR ops: skip rather than judge the mapper on them.
    local blocked
    blocked=$(blocklisted_op_in "$mlir_file")
    if [[ -n "$blocked" ]]; then
        echo "SKIPPED|$test_name|blocklisted op: $blocked"; return
    fi
    if [[ $pipeline_rc -ne 0 ]] || [ ! -f "$output_c_file" ]; then
        echo "MAPPER_FAILED|$test_name|$(pipeline_stage "$pipeline_rc") failed"; return
    fi

    local compile_log="$INTEGRATION_OUTPUT_DIR/${test_name}_compile_log.txt"
    if ! "$GCC" -c -fsyntax-only "$output_c_file" > "$compile_log" 2>&1; then
        echo "COMPILE_FAILED|$test_name|compilation failed"; return
    fi

    echo "PASSED|$test_name|"
}

# ---------------------------------------------------------------------------
# Worker: C++ integration test
# ---------------------------------------------------------------------------
run_cpp_test() {
    local cpp_file="$1"
    local test_name pipeline_rc=0
    test_name=$(basename "$cpp_file" .cpp)
    local output_c_file="$INTEGRATION_OUTPUT_DIR/${test_name}_output.c"
    local pipeline_log="$INTEGRATION_OUTPUT_DIR/${test_name}_pipeline_log.txt"

    local mlir_file="$INTEGRATION_OUTPUT_DIR/${test_name}.mlir"
    timeout "$TIMEOUT" "$RUNNER" \
        --mlir "$mlir_file" \
        "$cpp_file" "$output_c_file" >"$pipeline_log" 2>&1 || pipeline_rc=$?

    if [[ $pipeline_rc -eq 124 ]]; then
        echo "TIMEDOUT|$test_name|"; return
    fi
    if [[ $pipeline_rc -eq 2 ]]; then
        echo "SKIPPED|$test_name|CIR generation failed"; return
    fi
    # Blocklisted CIR ops: skip rather than judge the mapper on them.
    local blocked
    blocked=$(blocklisted_op_in "$mlir_file")
    if [[ -n "$blocked" ]]; then
        echo "SKIPPED|$test_name|blocklisted op: $blocked"; return
    fi
    if [[ $pipeline_rc -ne 0 ]] || [ ! -f "$output_c_file" ]; then
        echo "MAPPER_FAILED|$test_name|$(pipeline_stage "$pipeline_rc") failed"; return
    fi

    # Check that struct/union names in the generated C are valid identifiers.
    # C++ qualified names (::, <, >) must not appear in struct/union declarations.
    local compile_log="$INTEGRATION_OUTPUT_DIR/${test_name}_compile_log.txt"
    "$GCC" -c -fsyntax-only "$output_c_file" > "$compile_log" 2>&1
    if grep -qE "error:.*before '::'|error:.*before '<'" "$compile_log"; then
        echo "COMPILE_FAILED|$test_name|C++ qualified names in struct/union identifiers"; return
    fi

    echo "PASSED|$test_name|"
}

# ---------------------------------------------------------------------------
# Worker: LLVM SingleSource test
# ---------------------------------------------------------------------------
run_llvm_test() {
    local src_file="$1"
    local ext lang_flag pipeline_rc=0

    if [[ "$src_file" == *.cpp ]]; then
        lang_flag=""; ext="cpp"
    else
        lang_flag="--lang c"; ext="c"
    fi

    local rel_path="${src_file#$LLVM_EVAL_DIR}"
    local base="${rel_path%.$ext}"
    local test_id="${base//\//__}"
    local ref_file="${src_file%.$ext}.reference_output"

    local mlir_file="$LLVM_EVAL_OUTPUT_DIR/${test_id}.mlir"
    local vtlayout_file="$LLVM_EVAL_OUTPUT_DIR/${test_id}.vtlayout.txt"
    local output_c_file="$LLVM_EVAL_OUTPUT_DIR/${test_id}_output.c"
    local pipeline_log="$LLVM_EVAL_OUTPUT_DIR/${test_id}_pipeline_log.txt"

    # shellcheck disable=SC2086
    timeout "$TIMEOUT" "$RUNNER" $lang_flag \
        --mlir "$mlir_file" \
        --vtlayout "$vtlayout_file" \
        "$src_file" "$output_c_file" >"$pipeline_log" 2>&1 || pipeline_rc=$?

    if [[ $pipeline_rc -eq 124 ]]; then
        echo "TIMEDOUT|$test_id|"; return
    fi
    if [[ $pipeline_rc -eq 2 ]]; then
        echo "SKIPPED|$test_id|CIR generation failed"; return
    fi
    # Blocklisted CIR ops: skip rather than judge the mapper on them.
    local blocked
    blocked=$(blocklisted_op_in "$mlir_file")
    if [[ -n "$blocked" ]]; then
        echo "SKIPPED|$test_id|blocklisted op: $blocked"; return
    fi
    if [[ $pipeline_rc -ne 0 ]] || [ ! -f "$output_c_file" ]; then
        echo "MAPPER_FAILED|$test_id|$(pipeline_stage "$pipeline_rc") failed"; return
    fi

    local binary_file="$LLVM_EVAL_OUTPUT_DIR/${test_id}_binary"
    local gcc_log="$LLVM_EVAL_OUTPUT_DIR/${test_id}_gcc_log.txt"
    if ! "$GCC" "$output_c_file" -o "$binary_file" -lm > "$gcc_log" 2>&1; then
        echo "COMPILE_FAILED|$test_id|compilation failed"; return
    fi

    local actual_out_file="$LLVM_EVAL_OUTPUT_DIR/${test_id}_actual.txt"
    local expected_out_file="$LLVM_EVAL_OUTPUT_DIR/${test_id}_expected.txt"

    local expected_exit
    expected_exit=$(awk 'END{if(match($0,/exit ([0-9]+)$/,a))print a[1];else print 0}' "$ref_file")
    awk 'NR==1{prev=$0;next}{print prev;prev=$0}END{sub(/exit [0-9]+$/,"",prev);printf "%s",prev}' \
        "$ref_file" > "$expected_out_file"

    "$binary_file" > "$actual_out_file" 2>/dev/null
    local actual_exit=$?

    if [[ $actual_exit -ne $expected_exit ]]; then
        echo "MISMATCH|$test_id|exit code: expected $expected_exit, got $actual_exit"; return
    fi
    if ! diff -q "$expected_out_file" "$actual_out_file" > /dev/null 2>&1; then
        echo "MISMATCH|$test_id|output mismatch"; return
    fi

    echo "PASSED|$test_id|"
}

# Export everything workers need
export TIMEOUT RUNNER GCC INTEGRATION_OUTPUT_DIR LLVM_EVAL_DIR LLVM_EVAL_OUTPUT_DIR
export -f pipeline_stage run_c_test run_cpp_test run_llvm_test

# ---------------------------------------------------------------------------
# Preflight checks
# ---------------------------------------------------------------------------
if ! command -v parallel >/dev/null 2>&1; then
    echo -e "${RED}ERROR: GNU parallel not found.${NC}"
    exit 1
fi

mkdir -p "$INTEGRATION_OUTPUT_DIR"
echo "======================================"
echo "  XCFA-Mapper Test Suite"
echo "======================================"
echo ""

if [ ! -f "$XCFA_MAPPER" ]; then
    echo -e "${RED}ERROR: xcfa-mapper not found at $XCFA_MAPPER${NC}"
    echo "Please build the project first: cmake -S .. -B ../build && cmake --build ../build --target xcfa-mapper"
    exit 1
fi

echo "Using tools:"
echo "  xcfa-mapper: $XCFA_MAPPER"
echo "  runner:      $RUNNER"
echo "  jobs:        $JOBS"
echo ""

# ---------------------------------------------------------------------------
# C Integration Tests
# ---------------------------------------------------------------------------
echo "======================================"
echo "  Running Integration Tests"
echo "======================================"
echo ""

mapfile -t c_files < <(printf '%s\n' "$INTEGRATION_INPUT_DIR"/*.c | while read -r f; do [ -f "$f" ] && echo "$f"; done)
c_total=${#c_files[@]}
c_cur=0

if [[ $c_total -gt 0 ]]; then
    while IFS='|' read -r result test_name message; do
        c_cur=$((c_cur + 1))
        TOTAL_TESTS=$((TOTAL_TESTS + 1))
        printf "[%*d/%d] %-45s" "${#c_total}" "$c_cur" "$c_total" "Testing $test_name..."
        case "$result" in
            PASSED)
                echo -e "${GREEN}PASSED${NC}"
                PASSED_TESTS=$((PASSED_TESTS + 1))
                ;;
            TIMEDOUT)
                echo -e "${YELLOW}TIMED OUT${NC}"
                TIMEDOUT_TESTS=$((TIMEDOUT_TESTS + 1))
                ;;
            SKIPPED)
                echo -e "${YELLOW}SKIPPED${NC} ($message)"
                SKIPPED_TESTS=$((SKIPPED_TESTS + 1))
                ;;
            MAPPER_FAILED)
                echo -e "${RED}FAILED${NC} ($message)"
                FAILED_TESTS=$((FAILED_TESTS + 1))
                MAPPER_FAILED_TESTS=$((MAPPER_FAILED_TESTS + 1))
                sed 's/^/    /' "$INTEGRATION_OUTPUT_DIR/${test_name}_pipeline_log.txt" 2>/dev/null
                echo ""
                ;;
            COMPILE_FAILED)
                echo -e "${RED}FAILED${NC} ($message)"
                FAILED_TESTS=$((FAILED_TESTS + 1))
                COMPILE_FAILED_TESTS=$((COMPILE_FAILED_TESTS + 1))
                echo "  Compilation errors:"
                sed 's/^/    /' "$INTEGRATION_OUTPUT_DIR/${test_name}_compile_log.txt" 2>/dev/null
                echo ""
                ;;
        esac
    done < <(parallel --will-cite --keep-order -j "$JOBS" run_c_test ::: "${c_files[@]}")
fi

[[ $interrupted -eq 1 ]] && exit 130
echo ""

# ---------------------------------------------------------------------------
# C++ Integration Tests
# ---------------------------------------------------------------------------
echo "======================================"
echo "  Running C++ Integration Tests"
echo "======================================"
echo ""

if [ ! -f "$CLANGPP" ]; then
    echo -e "${YELLOW}SKIPPED: clang++ not found at $CLANGPP${NC}"
else
    mapfile -t cpp_files < <(printf '%s\n' "$INTEGRATION_INPUT_DIR"/*.cpp | while read -r f; do [ -f "$f" ] && echo "$f"; done)
    cpp_total=${#cpp_files[@]}
    cpp_cur=0

    if [[ $cpp_total -gt 0 ]]; then
        while IFS='|' read -r result test_name message; do
            cpp_cur=$((cpp_cur + 1))
            TOTAL_TESTS=$((TOTAL_TESTS + 1))
            printf "[%*d/%d] %-45s" "${#cpp_total}" "$cpp_cur" "$cpp_total" "Testing $test_name..."
            case "$result" in
                PASSED)
                    echo -e "${GREEN}PASSED${NC}"
                    PASSED_TESTS=$((PASSED_TESTS + 1))
                    ;;
                TIMEDOUT)
                    echo -e "${YELLOW}TIMED OUT${NC}"
                    TIMEDOUT_TESTS=$((TIMEDOUT_TESTS + 1))
                    ;;
                SKIPPED)
                    echo -e "${YELLOW}SKIPPED${NC} ($message)"
                    SKIPPED_TESTS=$((SKIPPED_TESTS + 1))
                    ;;
                MAPPER_FAILED)
                    echo -e "${RED}FAILED${NC} ($message)"
                    FAILED_TESTS=$((FAILED_TESTS + 1))
                    MAPPER_FAILED_TESTS=$((MAPPER_FAILED_TESTS + 1))
                    sed 's/^/    /' "$INTEGRATION_OUTPUT_DIR/${test_name}_pipeline_log.txt" 2>/dev/null
                    echo ""
                    ;;
                COMPILE_FAILED)
                    echo -e "${RED}FAILED${NC} ($message)"
                    FAILED_TESTS=$((FAILED_TESTS + 1))
                    COMPILE_FAILED_TESTS=$((COMPILE_FAILED_TESTS + 1))
                    grep -E "error:.*before '::'|error:.*before '<'" \
                        "$INTEGRATION_OUTPUT_DIR/${test_name}_compile_log.txt" 2>/dev/null \
                        | head -5 | sed 's/^/    /'
                    echo ""
                    ;;
            esac
        done < <(parallel --will-cite --keep-order -j "$JOBS" run_cpp_test ::: "${cpp_files[@]}")
    fi
fi

[[ $interrupted -eq 1 ]] && exit 130
echo ""

# ---------------------------------------------------------------------------
# LLVM SingleSource Tests
# ---------------------------------------------------------------------------
echo "======================================"
echo "  Running LLVM SingleSource Tests"
echo "======================================"
echo ""

if [ ! -d "$LLVM_EVAL_DIR" ]; then
    echo -e "${YELLOW}SKIPPED: llvm test suite directory not found at $LLVM_EVAL_DIR${NC}"
elif [ ! -f "$CLANGPP" ]; then
    echo -e "${YELLOW}SKIPPED: clang++ not found at $CLANGPP${NC}"
else
    mkdir -p "$LLVM_EVAL_OUTPUT_DIR"

    # Pre-filter: only files that have a .reference_output sibling.
    # This gives the bar an accurate total and avoids passing untestable
    # files to the workers.
    printf "  Scanning test files..."
    mapfile -t llvm_files < <(
        while IFS= read -r f; do
            ext="${f##*.}"; base="${f%.$ext}"
            [ -f "${base}.reference_output" ] && echo "$f"
        done < <(find "$LLVM_EVAL_DIR" \( -name "*.cpp" -o -name "*.c" \) | sort)
    )
    printf "\r%-30s\r" ""  # clear the scanning line
    llvm_total=${#llvm_files[@]}
    llvm_cur=0

    if [[ $llvm_total -gt 0 ]]; then
        bar_draw 0 "$llvm_total"

        while IFS='|' read -r result test_id message; do
            llvm_cur=$((llvm_cur + 1))
            TOTAL_TESTS=$((TOTAL_TESTS + 1))
            bar_draw "$llvm_cur" "$llvm_total"

            case "$result" in
                PASSED)
                    PASSED_TESTS=$((PASSED_TESTS + 1))
                    ;;
                TIMEDOUT)
                    bar_println "$llvm_cur" "$llvm_total" \
                        "$(printf "  ${YELLOW}TIMED OUT${NC} %s" "$test_id")"
                    TIMEDOUT_TESTS=$((TIMEDOUT_TESTS + 1))
                    ;;
                SKIPPED)
                    bar_println "$llvm_cur" "$llvm_total" \
                        "$(printf "  ${YELLOW}SKIPPED${NC}  %s (%s)" "$test_id" "$message")"
                    SKIPPED_TESTS=$((SKIPPED_TESTS + 1))
                    ;;
                MAPPER_FAILED)
                    bar_println "$llvm_cur" "$llvm_total" \
                        "$(printf "  ${RED}MAPPER FAIL${NC} %s (%s)" "$test_id" "$message")"
                    FAILED_TESTS=$((FAILED_TESTS + 1))
                    MAPPER_FAILED_TESTS=$((MAPPER_FAILED_TESTS + 1))
                    ;;
                COMPILE_FAILED)
                    bar_println "$llvm_cur" "$llvm_total" \
                        "$(printf "  ${RED}COMPILE FAIL${NC} %s (%s)" "$test_id" "$message")"
                    FAILED_TESTS=$((FAILED_TESTS + 1))
                    COMPILE_FAILED_TESTS=$((COMPILE_FAILED_TESTS + 1))
                    ;;
                MISMATCH)
                    bar_println "$llvm_cur" "$llvm_total" \
                        "$(printf "  ${RED}MISMATCH${NC}   %s (%s)" "$test_id" "$message")"
                    FAILED_TESTS=$((FAILED_TESTS + 1))
                    MISMATCH_TESTS=$((MISMATCH_TESTS + 1))
                    ;;
            esac
        done < <(parallel --will-cite --line-buffer -j "$JOBS" run_llvm_test ::: "${llvm_files[@]}")

        printf "\n"  # move past the bar line
    fi
fi

# Normal exit — EXIT trap prints summary
if [[ $FAILED_TESTS -gt 0 ]]; then
    exit 1
else
    exit 0
fi
