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

"""
Strip the ../sources/<variant>/ path prefix from BenchExec result .xml.bz2 files
so that the same benchmark appears under the same name regardless of which source
set (esbmc-eval, esbmc-eval-mapped, esbmc-eval-mapped-nostd) it came from.

Usage:
    python3 normalize-results.py result1.xml.bz2 result2.xml.bz2 ...

Output files are written to a normalized/ subdirectory next to each input file.
"""
import bz2
import glob as glob_module
import re
import sys
from pathlib import Path

# Matches ../sources/<any-variant>/ in attribute values
PREFIX_RE = re.compile(r'\.\./sources/[^/\'"]+/')


def normalize(src: Path) -> Path:
    dst = src.parent / "normalized" / src.name
    with bz2.open(src, "rb") as f:
        content = f.read().decode("utf-8")
    content = PREFIX_RE.sub("", content)
    dst.parent.mkdir(parents=True, exist_ok=True)
    with bz2.open(dst, "wb") as f:
        f.write(content.encode("utf-8"))
    return dst


def expand(args):
    """Expand any shell-unexpanded globs (POSIX sh passes them literally on no-match)."""
    paths = []
    for arg in args:
        if any(c in arg for c in ('*', '?', '[')):
            paths.extend(sorted(Path(p) for p in glob_module.glob(arg)))
        else:
            paths.append(Path(arg))
    return paths


if __name__ == "__main__":
    if len(sys.argv) < 2:
        print(f"Usage: {sys.argv[0]} <result.xml.bz2> ...", file=sys.stderr)
        sys.exit(1)
    files = expand(sys.argv[1:])
    if not files:
        print("normalize: no result files found", file=sys.stderr)
        sys.exit(0)
    for src in files:
        if not src.exists():
            print(f"  skip (not found): {src}", file=sys.stderr)
            continue
        dst = normalize(src)
        print(f"  {src.name}  ->  {dst}")
