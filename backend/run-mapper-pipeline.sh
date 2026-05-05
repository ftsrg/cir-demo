#!/usr/bin/env bash

set -euo pipefail

SCRIPT_DIR=$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)

if [[ $# -ne 2 ]]; then
  echo "Usage: $0 <input-file> <output-dir>" >&2
  exit 1
fi

INPUT_FILE=$1
OUTPUT_DIR=$2

if [[ ! -f "$INPUT_FILE" ]]; then
  echo "Error: input file not found: $INPUT_FILE" >&2
  exit 1
fi

mkdir -p "$OUTPUT_DIR"

CLANG_BIN="$SCRIPT_DIR/bin/bin/clang"
CIR_OPT_BIN="$SCRIPT_DIR/bin/bin/cir-opt"
XCFA_MAPPER_BIN="$SCRIPT_DIR/../xcfa-mapper/build/xcfa-mapper"

for tool in "$CLANG_BIN" "$CIR_OPT_BIN" "$XCFA_MAPPER_BIN"; do
  if [[ ! -x "$tool" ]]; then
    echo "Error: required executable not found: $tool" >&2
    exit 1
  fi
done

INPUT_DIR=$(dirname -- "$INPUT_FILE")
INPUT_NAME=$(basename -- "$INPUT_FILE")
BASE_NAME=${INPUT_NAME%.*}

CIR_MLIR_FILE="$OUTPUT_DIR/$BASE_NAME.cir.mlir"
FLAT_MLIR_FILE="$OUTPUT_DIR/$BASE_NAME.flat.mlir"
OUTPUT_C_FILE="$OUTPUT_DIR/$BASE_NAME.output.c"

"$CLANG_BIN" -x c -std=c11 -S -emit-cir "$INPUT_FILE" -o "$CIR_MLIR_FILE"
"$CIR_OPT_BIN" "$CIR_MLIR_FILE" -cir-flatten-cfg -o "$FLAT_MLIR_FILE"
"$XCFA_MAPPER_BIN" "$FLAT_MLIR_FILE" "$OUTPUT_C_FILE"

echo "Generated:"
echo "  $CIR_MLIR_FILE"
echo "  $FLAT_MLIR_FILE"
echo "  $OUTPUT_C_FILE"