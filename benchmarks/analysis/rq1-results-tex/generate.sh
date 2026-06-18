#!/usr/bin/env bash
# Regenerate the LaTeX number macros from the raw results.txt files.
# Run from anywhere; paths are resolved relative to this script.
set -euo pipefail
cd "$(dirname "${BASH_SOURCE[0]}")"

python3 results2tex.py llvm/results.txt  llvm  llvm/numbers.tex
python3 results2tex.py esbmc/results.txt esbmc esbmc/numbers.tex
