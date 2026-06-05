#!/usr/bin/env bash
# Central CIR pipeline: source file → CIR → preprocess → [flatten] → xcfa-mapper → C
#
# Vtable layout is always dumped from clang and passed to xcfa-mapper so that
# virtual-call labels are correct for C++ inputs. For C inputs the dump is
# empty and xcfa-mapper ignores it harmlessly.
#
# Exit codes: 0 success, 2 clang failed, 3 cir-opt failed, 4 xcfa-mapper failed
#
# Usage: run-xcfa-mapper.sh [OPTIONS] <input-file> <output.c>
# Options:
#   --lang c|c++         Language (default: infer from file extension)
#   --std STD            Standard (default: c23 or c++23)
#   --flatten            Run cir-opt -cir-flatten-cfg before xcfa-mapper
#   --mlir FILE          Save intermediate CIR MLIR to FILE (default: temp)
#   --flat-mlir FILE     Save flattened MLIR to FILE (implies --flatten)

set -euo pipefail

SCRIPT_DIR=$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)

CLANG="$SCRIPT_DIR/../../backend/bin/bin/clang"
CLANGPP="$SCRIPT_DIR/../../backend/bin/bin/clang++"
CIR_OPT="$SCRIPT_DIR/../../backend/bin/bin/cir-opt"
XCFA_MAPPER="$SCRIPT_DIR/../build/xcfa-mapper"

LANG=""
STD=""
FLATTEN=false
MLIR_OUT=""
FLAT_MLIR_OUT=""
INCLUDE_FLAGS=()   # -I dirs for CIR generation, supplied by the caller

usage() {
    echo "Usage: $0 [OPTIONS] <input-file> <output.c>" >&2
    echo "  --lang c|c++, --std STD, --flatten" >&2
    echo "  --mlir FILE, --flat-mlir FILE" >&2
    echo "  --include DIR   add -I DIR to CIR generation (repeatable)" >&2
    exit 1
}

while [[ $# -gt 0 ]]; do
    case "$1" in
        --lang)      LANG="$2"; shift 2 ;;
        --std)       STD="$2"; shift 2 ;;
        --flatten)   FLATTEN=true; shift ;;
        --mlir)      MLIR_OUT="$2"; shift 2 ;;
        --flat-mlir) FLAT_MLIR_OUT="$2"; FLATTEN=true; shift 2 ;;
        --include)   INCLUDE_FLAGS+=(-I "$2"); shift 2 ;;
        --) shift; break ;;
        -*) usage ;;
        *) break ;;
    esac
done

[[ $# -ne 2 ]] && usage
INPUT_FILE="$1"
OUTPUT_C="$2"
[[ -f "$INPUT_FILE" ]] || { echo "Error: input file not found: $INPUT_FILE" >&2; exit 1; }

# Infer language from extension
if [[ -z "$LANG" ]]; then
    case "${INPUT_FILE##*.}" in
        cpp|cxx|cc|C) LANG="c++" ;;
        *) LANG="c" ;;
    esac
fi
[[ -z "$STD" ]] && { [[ "$LANG" == "c++" ]] && STD="c++23" || STD="c23"; }

CLANG_BIN="$CLANG"
[[ "$LANG" == "c++" ]] && CLANG_BIN="$CLANGPP"

# Validate tools
for tool in "$CLANG_BIN" "$XCFA_MAPPER"; do
    [[ -x "$tool" ]] || { echo "Error: tool not found: $tool" >&2; exit 1; }
done
[[ "$FLATTEN" == true ]] && { [[ -x "$CIR_OPT" ]] || { echo "Error: cir-opt not found: $CIR_OPT" >&2; exit 1; }; }

# Temp file management
_TEMPS=()
_cleanup() { rm -f "${_TEMPS[@]:-}"; }
trap _cleanup EXIT

_tmpmlir() {
    if [[ -n "$1" ]]; then echo "$1"; return; fi
    local t; t=$(mktemp --suffix=.mlir); _TEMPS+=("$t"); echo "$t"
}

mkdir -p "$(dirname "$OUTPUT_C")"

# Step 1: Generate CIR.
# Include dirs (-I) come from the caller via --include (see run_tests.sh, which
# knows the test-suite layout for shared utility headers).
CIR_FILE=$(_tmpmlir "$MLIR_OUT")
"$CLANG_BIN" -x "$LANG" "-std=$STD" -S -emit-cir "$INPUT_FILE" -o "$CIR_FILE" \
    ${INCLUDE_FLAGS[@]+"${INCLUDE_FLAGS[@]}"} || exit 2

# Step 2: Preprocess — strip alloca qualifiers the tablegen AllocaOp parser
# can't handle: ", cleanup_dest_slot" (C++ EH slot) and ", const"
# (const-qualified catch variable). Safe to strip; C emitter ignores them.
PRE_FILE=$(_tmpmlir "")
sed -e 's/, cleanup_dest_slot\]/\]/g' \
    -e 's/, const\]/\]/g' \
    "$CIR_FILE" > "$PRE_FILE"

# Step 3: Flatten (optional)
if [[ "$FLATTEN" == true ]]; then
    FLAT_FILE=$(_tmpmlir "$FLAT_MLIR_OUT")
    "$CIR_OPT" "$PRE_FILE" -cir-flatten-cfg -o "$FLAT_FILE" || exit 3
    MAPPER_INPUT="$FLAT_FILE"
else
    MAPPER_INPUT="$PRE_FILE"
fi

# Step 4: xcfa-mapper
MAPPER_CMD=("$XCFA_MAPPER")
MAPPER_CMD+=("$MAPPER_INPUT" "$OUTPUT_C")
"${MAPPER_CMD[@]}" || exit 4
