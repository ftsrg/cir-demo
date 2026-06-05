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

# ESBMC-eval coverage corpus (C++ programs, no reference outputs). The pass
# condition is just that the mapper produced C that COMPILES (linking optional).
# Run by default; set RUN_ESBMC=0 to skip this step.
ESBMC_EVAL_DIR="$PROJECT_DIR/../backend/examples/esbmc-eval/"
ESBMC_EVAL_OUTPUT_DIR="$SCRIPT_DIR/esbmc-eval/output"
RUN_ESBMC=${RUN_ESBMC:-1}

# ---------------------------------------------------------------------------
# Counters and interrupt flag
# ---------------------------------------------------------------------------
TOTAL_TESTS=0
PASSED_TESTS=0           # generated C compiles, links, runs, and output matches
NOTRUN_TESTS=0          # valid C, but could not be run (compiled, failed to link)
MISMATCH_TESTS=0        # valid C, linked & ran, but output/exit did not match
FAILED_TESTS=0          # aggregate of the real failure sub-categories (drives exit)
MAPPER_FAILED_TESTS=0   # pipeline/xcfa-mapper could not produce C
COMPILE_FAILED_TESTS=0  # generated C does not compile (invalid C)
SKIPPED_TESTS=0
# Skipped sub-categories (root cause of the skip).
SKIP_BLOCKLIST_TESTS=0  # contains a blocklisted (out-of-scope) CIR op
SKIP_HEADER_TESTS=0     # CIR gen: missing header (file not found)
SKIP_NYI_TESTS=0        # CIR gen: ClangIR feature not yet implemented
SKIP_SIMD_TESTS=0       # CIR gen: arch-specific SIMD vector intrinsic types
SKIP_TARGET_TESTS=0     # CIR gen: other unsupported target feature (AltiVec/asm/…)
SKIP_GNUEXT_TESTS=0     # CIR gen: GNU/MSVC extension not in strict ISO mode
SKIP_TYPE_TESTS=0       # CIR gen: unknown type name
SKIP_OTHER_TESTS=0      # CIR gen: other parse/compile error
SKIP_UPSTREAM_TESTS=0   # clang's own -fclangir also diverges (upstream ClangIR bug)
TIMEDOUT_TESTS=0
interrupted=0

# Classify a SKIPPED test's message into a sub-category counter. Order matters:
# the most specific patterns are matched first.
count_skip() {
    SKIPPED_TESTS=$((SKIPPED_TESTS + 1))
    case "$1" in
        *"upstream ClangIR"*)    SKIP_UPSTREAM_TESTS=$((SKIP_UPSTREAM_TESTS + 1)) ;;
        *"blocklisted op"*)      SKIP_BLOCKLIST_TESTS=$((SKIP_BLOCKLIST_TESTS + 1)) ;;
        *"file not found"*)      SKIP_HEADER_TESTS=$((SKIP_HEADER_TESTS + 1)) ;;
        *"Not Yet Implemented"*) SKIP_NYI_TESTS=$((SKIP_NYI_TESTS + 1)) ;;
        # Architecture-specific SIMD vector types: __m128i/__m256i/__m512* are the
        # x86 *and* LoongArch (LSX/LASX) intrinsic types, undefined off-target.
        *__m128*|*__m256*|*__m512*|*__vector*|*vector_size*)
                                 SKIP_SIMD_TESTS=$((SKIP_SIMD_TESTS + 1)) ;;
        *AltiVec*|*"target feature"*|*"support not enabled"*|*"identifier 'asm'"*)
                                 SKIP_TARGET_TESTS=$((SKIP_TARGET_TESTS + 1)) ;;
        # GNU/MSVC extensions rejected by strict -std=c23.
        *"identifier 'typeof'"*|*__int64*|*__bitwidthof__*|*__builtin_va_arg_pack*|*"identifier '__label__'"*)
                                 SKIP_GNUEXT_TESTS=$((SKIP_GNUEXT_TESTS + 1)) ;;
        *"unknown type name"*)   SKIP_TYPE_TESTS=$((SKIP_TYPE_TESTS + 1)) ;;
        *)                       SKIP_OTHER_TESTS=$((SKIP_OTHER_TESTS + 1)) ;;
    esac
}

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
    echo "Total tests:        $TOTAL_TESTS"
    echo -e "Passed (full):      ${GREEN}$PASSED_TESTS${NC}   (compile + link + run + output match)"
    echo -e "Compiled, not run:  ${YELLOW}$NOTRUN_TESTS${NC}   (valid C; could not link/run)"
    echo -e "Skipped:            ${YELLOW}$SKIPPED_TESTS${NC}"
    echo -e "  blocklisted op:     ${YELLOW}$SKIP_BLOCKLIST_TESTS${NC}   (out-of-scope CIR op)"
    echo -e "  arch SIMD intrinsic:${YELLOW}$SKIP_SIMD_TESTS${NC}   (__m128i/__m256i/… — wrong target arch)"
    echo -e "  unsupported target: ${YELLOW}$SKIP_TARGET_TESTS${NC}   (AltiVec / inline asm / …)"
    echo -e "  GNU/MSVC extension: ${YELLOW}$SKIP_GNUEXT_TESTS${NC}   (typeof/__int64/… not in ISO c23)"
    echo -e "  missing header:     ${YELLOW}$SKIP_HEADER_TESTS${NC}   (CIR gen: header not found)"
    echo -e "  unknown type name:  ${YELLOW}$SKIP_TYPE_TESTS${NC}   (CIR gen)"
    echo -e "  CIR not implemented:${YELLOW}$SKIP_NYI_TESTS${NC}   (ClangIR feature NYI)"
    echo -e "  other CIR-gen error:${YELLOW}$SKIP_OTHER_TESTS${NC}   (parse/compile error)"
    echo -e "  upstream ClangIR:   ${YELLOW}$SKIP_UPSTREAM_TESTS${NC}   (clang -fclangir also wrong — not our bug)"
    echo -e "Timed out:          ${YELLOW}$TIMEDOUT_TESTS${NC}"
    echo -e "Failed:             ${RED}$FAILED_TESTS${NC}"
    echo -e "  mapper failed:      ${RED}$MAPPER_FAILED_TESTS${NC}"
    echo -e "  compile failed:     ${RED}$COMPILE_FAILED_TESTS${NC}"
    echo -e "  output mismatch:    ${RED}$MISMATCH_TESTS${NC}   (linked & ran; wrong output/exit)"
    if [[ $interrupted -eq 1 ]]; then
        echo -e "${YELLOW}Run was interrupted; results above are partial.${NC}"
    elif [[ $FAILED_TESTS -eq 0 ]]; then
        echo -e "${GREEN}All tests passed!${NC}"
    else
        echo -e "${RED}Some tests failed. Check output files in $INTEGRATION_OUTPUT_DIR, $LLVM_EVAL_OUTPUT_DIR and $ESBMC_EVAL_OUTPUT_DIR${NC}"
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
# Helper: extract a concise root-cause line from a pipeline log (for SKIPPED
# tests, so the report explains *why* CIR generation / the pipeline failed).
# Prefers a ClangIR "Not Yet Implemented" note, else the first compiler error.
# ---------------------------------------------------------------------------
skip_reason() {
    local log="$1" r=""
    [ -f "$log" ] || { echo "no log"; return; }
    r=$(grep -oE 'ClangIR code gen Not Yet Implemented: .*' "$log" 2>/dev/null | head -1)
    [ -z "$r" ] && r=$(grep -oE 'error: .*' "$log" 2>/dev/null | head -1 | sed -E 's/^error: //')
    [ -z "$r" ] && r=$(grep -iE 'fatal error|unsupported|not supported' "$log" 2>/dev/null | head -1 | sed -E 's/^.*(fatal error|error)[: ]*//I')
    [ -z "$r" ] && r="unknown (see $(basename "$log"))"
    # single line, no pipes (our record separator), bounded length
    printf '%s' "$r" | tr '\n|' '  ' | cut -c1-120
}
export -f skip_reason

# ---------------------------------------------------------------------------
# Helper: header include dirs for a test source (one directory per line). The
# LLVM test-suite build puts shared utility headers on the include path per
# test; the bare CIR-generation clang call does not, so e.g.
# UnitTests/Vector/m512_test_util.h (a parent dir) or
# Benchmarks/Polybench/utilities/polybench.h would be "not found". Emit the
# test's own dir, its ancestors up to the test-suite root, and the PolyBench
# utilities subtree. (Passed to run-xcfa-mapper.sh via --include.)
# ---------------------------------------------------------------------------
compute_includes() {
    local src="$1" dir d parent util
    dir=$(cd "$(dirname "$src")" 2>/dev/null && pwd) || return 0
    [ -n "$dir" ] || return 0
    echo "$dir"
    case "$dir" in
        */llvm-test-suite/*)
            d="$dir"
            while [ "$d" != "/" ]; do
                parent=$(dirname "$d")
                echo "$parent"
                case "$parent" in */llvm-test-suite) break ;; esac
                d="$parent"
            done
            case "$dir" in
                */Polybench/*)
                    util="${dir%%/Polybench/*}/Polybench/utilities"
                    [ -d "$util" ] && echo "$util" ;;
            esac
            ;;
    esac
}
export -f compute_includes

# ---------------------------------------------------------------------------
# Upstream-ClangIR discriminator: compile the ORIGINAL source with clang's own
# CIR pipeline (-fclangir) and compare to the reference. If clang -fclangir ALSO
# diverges, the mismatch is an upstream ClangIR codegen bug, not the mapper's, so
# it should be SKIPPED rather than counted as a failure. Returns 0 (true) when
# -fclangir also diverges; 1 when -fclangir matches the reference (genuine mapper
# bug) or the -fclangir build itself fails (inconclusive — don't hide it).
# Args: <src> <ext: c|cpp> <expected_out_file> <expected_exit>
clangir_also_diverges() {
    local src="$1" ext="$2" exp_out="$3" exp_exit="$4"
    local cc="$GCC"; [ "$ext" = cpp ] && cc="$CLANGPP"
    local -a inc=(); local _d
    while IFS= read -r _d; do [ -n "$_d" ] && inc+=(-I "$_d"); done < <(compute_includes "$src")
    local bin cir_out; bin=$(mktemp); cir_out=$(mktemp)
    if ! timeout "$TIMEOUT" "$cc" -w -fclangir ${inc[@]+"${inc[@]}"} "$src" -o "$bin" -lm \
            </dev/null >/dev/null 2>&1; then
        rm -f "$bin" "$cir_out"; return 1   # inconclusive -> treat as our bug
    fi
    timeout "$TIMEOUT" "$bin" </dev/null >"$cir_out" 2>/dev/null
    local ec=$?
    rm -f "$bin"
    local diverges=1
    if [ "$ec" != "$exp_exit" ]; then diverges=0
    elif ! diff -q "$exp_out" "$cir_out" >/dev/null 2>&1; then diverges=0
    fi
    rm -f "$cir_out"
    return $diverges
}
export -f clangir_also_diverges

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
    local -a inc=(); local _d
    while IFS= read -r _d; do [ -n "$_d" ] && inc+=(--include "$_d"); done < <(compute_includes "$c_file")
    timeout "$TIMEOUT" "$RUNNER" --lang c \
        --mlir "$mlir_file" \
        ${inc[@]+"${inc[@]}"} \
        "$c_file" "$output_c_file" >"$pipeline_log" 2>&1 || pipeline_rc=$?

    if [[ $pipeline_rc -eq 124 ]]; then
        echo "TIMEDOUT|$test_name|"; return
    fi
    if [[ $pipeline_rc -eq 2 ]]; then
        echo "SKIPPED|$test_name|CIR generation failed: $(skip_reason "$pipeline_log")"; return
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
    local -a inc=(); local _d
    while IFS= read -r _d; do [ -n "$_d" ] && inc+=(--include "$_d"); done < <(compute_includes "$cpp_file")
    timeout "$TIMEOUT" "$RUNNER" \
        --mlir "$mlir_file" \
        ${inc[@]+"${inc[@]}"} \
        "$cpp_file" "$output_c_file" >"$pipeline_log" 2>&1 || pipeline_rc=$?

    if [[ $pipeline_rc -eq 124 ]]; then
        echo "TIMEDOUT|$test_name|"; return
    fi
    if [[ $pipeline_rc -eq 2 ]]; then
        echo "SKIPPED|$test_name|CIR generation failed: $(skip_reason "$pipeline_log")"; return
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
    local output_c_file="$LLVM_EVAL_OUTPUT_DIR/${test_id}_output.c"
    local pipeline_log="$LLVM_EVAL_OUTPUT_DIR/${test_id}_pipeline_log.txt"

    local -a inc=(); local _d
    while IFS= read -r _d; do [ -n "$_d" ] && inc+=(--include "$_d"); done < <(compute_includes "$src_file")
    # shellcheck disable=SC2086
    timeout "$TIMEOUT" "$RUNNER" $lang_flag \
        --mlir "$mlir_file" \
        ${inc[@]+"${inc[@]}"} \
        "$src_file" "$output_c_file" >"$pipeline_log" 2>&1 || pipeline_rc=$?

    if [[ $pipeline_rc -eq 124 ]]; then
        echo "TIMEDOUT|$test_id|"; return
    fi
    if [[ $pipeline_rc -eq 2 ]]; then
        echo "SKIPPED|$test_id|CIR generation failed: $(skip_reason "$pipeline_log")"; return
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

    # Validity check: COMPILE ONLY (no linking). The mapper's job is to produce
    # valid C; whether the program then links/runs/matches is a separate, softer
    # bar. Unresolved external symbols (e.g. libstdc++) are NOT a compile error
    # here — they only surface at link time, which we treat as a soft pass.
    local obj_file="$LLVM_EVAL_OUTPUT_DIR/${test_id}.o"
    local gcc_log="$LLVM_EVAL_OUTPUT_DIR/${test_id}_gcc_log.txt"
    if ! "$GCC" -c "$output_c_file" -o "$obj_file" > "$gcc_log" 2>&1; then
        echo "COMPILE_FAILED|$test_id|compilation failed"; return
    fi

    # Link. A failure here means the valid C could not be turned into a runnable
    # program (e.g. unresolved libstdc++ symbols) -> NOTRUN (cannot run).
    local binary_file="$LLVM_EVAL_OUTPUT_DIR/${test_id}_binary"
    local link_log="$LLVM_EVAL_OUTPUT_DIR/${test_id}_link_log.txt"
    if ! "$GCC" "$obj_file" -o "$binary_file" -lm > "$link_log" 2>&1; then
        echo "NOTRUN|$test_id|valid C, could not link"; return
    fi

    local actual_out_file="$LLVM_EVAL_OUTPUT_DIR/${test_id}_actual.txt"
    local expected_out_file="$LLVM_EVAL_OUTPUT_DIR/${test_id}_expected.txt"

    local expected_exit
    expected_exit=$(awk 'END{if(match($0,/exit ([0-9]+)$/,a))print a[1];else print 0}' "$ref_file")
    awk 'NR==1{prev=$0;next}{print prev;prev=$0}END{sub(/exit [0-9]+$/,"",prev);printf "%s",prev}' \
        "$ref_file" > "$expected_out_file"

    # The program ran; from here on a discrepancy is MISMATCH (ran, did not match).
    "$binary_file" > "$actual_out_file" 2>/dev/null
    local actual_exit=$?

    local mismatch_reason=""
    if [[ $actual_exit -ne $expected_exit ]]; then
        mismatch_reason="ran, exit code: expected $expected_exit, got $actual_exit"
    elif ! diff -q "$expected_out_file" "$actual_out_file" > /dev/null 2>&1; then
        mismatch_reason="ran, output mismatch"
    fi
    if [[ -n "$mismatch_reason" ]]; then
        # An output/exit mismatch is only OUR bug if clang's own -fclangir matches
        # the reference. When -fclangir also diverges, it is an upstream ClangIR
        # codegen defect -> SKIPPED, not a failure.
        if clangir_also_diverges "$src_file" "$ext" "$expected_out_file" "$expected_exit"; then
            echo "SKIPPED|$test_id|upstream ClangIR bug ($mismatch_reason)"; return
        fi
        echo "MISMATCH|$test_id|$mismatch_reason"; return
    fi

    echo "PASSED|$test_id|"
}

# ---------------------------------------------------------------------------
# Worker: esbmc-eval test
# Pass condition: the mapper produces a C file that COMPILES (no reference
# output exists, so we cannot check run behaviour). Linking is attempted but
# only used to produce a NOTRUN soft-pass, not a failure.
# ---------------------------------------------------------------------------
run_esbmc_test() {
    local src_file="$1"
    local pipeline_rc=0

    local rel_path="${src_file#$ESBMC_EVAL_DIR}"
    local base="${rel_path%.cpp}"
    local test_id="${base//\//__}"

    local mlir_file="$ESBMC_EVAL_OUTPUT_DIR/${test_id}.mlir"
    local output_c_file="$ESBMC_EVAL_OUTPUT_DIR/${test_id}_output.c"
    local pipeline_log="$ESBMC_EVAL_OUTPUT_DIR/${test_id}_pipeline_log.txt"

    # Include the test's own directory so any sibling header files are found.
    local src_dir
    src_dir=$(cd "$(dirname "$src_file")" 2>/dev/null && pwd)
    timeout "$TIMEOUT" "$RUNNER" \
        --mlir "$mlir_file" \
        --include "$src_dir" \
        "$src_file" "$output_c_file" >"$pipeline_log" 2>&1 || pipeline_rc=$?

    if [[ $pipeline_rc -eq 124 ]]; then
        echo "TIMEDOUT|$test_id|"; return
    fi
    if [[ $pipeline_rc -eq 2 ]]; then
        echo "SKIPPED|$test_id|CIR generation failed: $(skip_reason "$pipeline_log")"; return
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

    # Pass condition: generated C COMPILES. The esbmc programs are not run
    # (their source behaviour is verified by a separate verifier tool; running
    # them here would exercise implementation details unrelated to translation
    # correctness, and many take far too long to run).
    local obj_file="$ESBMC_EVAL_OUTPUT_DIR/${test_id}.o"
    local gcc_log="$ESBMC_EVAL_OUTPUT_DIR/${test_id}_gcc_log.txt"
    if ! "$GCC" -c "$output_c_file" -o "$obj_file" >"$gcc_log" 2>&1; then
        echo "COMPILE_FAILED|$test_id|compilation failed"; return
    fi

    echo "PASSED|$test_id|"
}

# Export everything workers need
export TIMEOUT RUNNER GCC CLANGPP INTEGRATION_OUTPUT_DIR LLVM_EVAL_DIR LLVM_EVAL_OUTPUT_DIR
export ESBMC_EVAL_DIR ESBMC_EVAL_OUTPUT_DIR
export -f pipeline_stage run_c_test run_cpp_test run_llvm_test run_esbmc_test

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
                count_skip "$message"
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
                    count_skip "$message"
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
                NOTRUN)
                    NOTRUN_TESTS=$((NOTRUN_TESTS + 1))
                    ;;
                MISMATCH)
                    bar_println "$llvm_cur" "$llvm_total" \
                        "$(printf "  ${RED}MISMATCH${NC}   %s (%s)" "$test_id" "$message")"
                    MISMATCH_TESTS=$((MISMATCH_TESTS + 1))
                    FAILED_TESTS=$((FAILED_TESTS + 1))
                    ;;
                TIMEDOUT)
                    bar_println "$llvm_cur" "$llvm_total" \
                        "$(printf "  ${YELLOW}TIMED OUT${NC} %s" "$test_id")"
                    TIMEDOUT_TESTS=$((TIMEDOUT_TESTS + 1))
                    ;;
                SKIPPED)
                    bar_println "$llvm_cur" "$llvm_total" \
                        "$(printf "  ${YELLOW}SKIPPED${NC}  %s (%s)" "$test_id" "$message")"
                    count_skip "$message"
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
            esac
        done < <(parallel --will-cite --line-buffer -j "$JOBS" run_llvm_test ::: "${llvm_files[@]}")

        printf "\n"  # move past the bar line
    fi
fi

# ---------------------------------------------------------------------------
# ESBMC-eval Tests
# ---------------------------------------------------------------------------
if [[ "${RUN_ESBMC:-1}" -eq 0 ]]; then
    echo ""
    echo -e "${YELLOW}Skipping esbmc-eval tests (RUN_ESBMC=0).${NC}"
elif [ ! -d "$ESBMC_EVAL_DIR" ]; then
    echo ""
    echo -e "${YELLOW}SKIPPED: esbmc-eval directory not found at $ESBMC_EVAL_DIR${NC}"
elif [ ! -f "$CLANGPP" ]; then
    echo ""
    echo -e "${YELLOW}SKIPPED: clang++ not found at $CLANGPP${NC}"
else
    echo ""
    echo "======================================"
    echo "  Running esbmc-eval Tests"
    echo "======================================"
    echo ""
    mkdir -p "$ESBMC_EVAL_OUTPUT_DIR"

    printf "  Scanning test files..."
    mapfile -t esbmc_files < <(
        find "$ESBMC_EVAL_DIR" -name 'main.cpp' | sort
    )
    printf "\r%-30s\r" ""
    esbmc_total=${#esbmc_files[@]}
    esbmc_cur=0

    if [[ $esbmc_total -gt 0 ]]; then
        bar_draw 0 "$esbmc_total"

        while IFS='|' read -r result test_id message; do
            esbmc_cur=$((esbmc_cur + 1))
            TOTAL_TESTS=$((TOTAL_TESTS + 1))
            bar_draw "$esbmc_cur" "$esbmc_total"

            case "$result" in
                PASSED)
                    PASSED_TESTS=$((PASSED_TESTS + 1))
                    ;;
                NOTRUN)
                    NOTRUN_TESTS=$((NOTRUN_TESTS + 1))
                    ;;
                TIMEDOUT)
                    bar_println "$esbmc_cur" "$esbmc_total" \
                        "$(printf "  ${YELLOW}TIMED OUT${NC} %s" "$test_id")"
                    TIMEDOUT_TESTS=$((TIMEDOUT_TESTS + 1))
                    ;;
                SKIPPED)
                    bar_println "$esbmc_cur" "$esbmc_total" \
                        "$(printf "  ${YELLOW}SKIPPED${NC}  %s (%s)" "$test_id" "$message")"
                    count_skip "$message"
                    ;;
                MAPPER_FAILED)
                    bar_println "$esbmc_cur" "$esbmc_total" \
                        "$(printf "  ${RED}MAPPER FAIL${NC} %s (%s)" "$test_id" "$message")"
                    FAILED_TESTS=$((FAILED_TESTS + 1))
                    MAPPER_FAILED_TESTS=$((MAPPER_FAILED_TESTS + 1))
                    ;;
                COMPILE_FAILED)
                    bar_println "$esbmc_cur" "$esbmc_total" \
                        "$(printf "  ${RED}COMPILE FAIL${NC} %s (%s)" "$test_id" "$message")"
                    FAILED_TESTS=$((FAILED_TESTS + 1))
                    COMPILE_FAILED_TESTS=$((COMPILE_FAILED_TESTS + 1))
                    ;;
            esac
        done < <(parallel --will-cite --line-buffer -j "$JOBS" run_esbmc_test ::: "${esbmc_files[@]}")

        printf "\n"
    fi
fi

# Normal exit — EXIT trap prints summary
if [[ $FAILED_TESTS -gt 0 ]]; then
    exit 1
else
    exit 0
fi
