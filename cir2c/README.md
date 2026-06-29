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

# cir2c

`cir2c` translates C/C++ source code to "verifier-friendly" C with special intrinsics, enabling formal verification tools (model checkers, software verifiers) to handle C++ programs and to work around patchy C language support. The translation pipeline is:

```
C/C++ source  →  CIR (ClangIR MLIR)  →  verifier-friendly C
```

Using ClangIR as the intermediate representation preserves higher-level structure compared to LLVM IR (explicit loops, records, exception scopes, virtual dispatch) while still breaking down complex C++ constructs. `cir2c` operates on **non-flat (structured) CIR** by default. The tool aims for accurate documentation of all mapping limitations and shortcuts, because the output is not a trivial translation—it is meant to be consumed by sound formal-verification tools.

## Build

**Prerequisites.** An LLVM/Clang build with ClangIR support (provides `clang`, `clang++`, `cir-opt`, the MLIR/LLVM CMake packages, and the bundled libc++ headers), plus CMake ≥ 3.13 and a C++17 compiler. 

By default, CMake looks for the LLVM and MLIR CMake packages under `../llvm-install/lib/cmake` relative to the `cir2c` source directory (i.e. `<repo>/llvm-install/lib/cmake/llvm` and `.../mlir`). If your toolchain is elsewhere, override the locations:

```bash
# Default layout (toolchain in <repo>/backend/bin):
cmake -B build
cmake --build build --target cir2c

# Custom LLVM/MLIR location:
cmake -B build \
  -DLLVM_DIR=/path/to/lib/cmake/llvm \
  -DMLIR_DIR=/path/to/lib/cmake/mlir
cmake --build build --target cir2c
```

The binary is written to `build/cir2c`.

## Usage

The recommended way to run the tool is the convenience wrapper **`run-cir2c.sh`**. It drives the full pipeline — `clang -emit-cir` → preprocessing → optional flattening → `cir2c` — so you can hand it a `.c` / `.cpp` source file and get verifier-friendly C back. Invoking the `cir2c` binary directly requires you to generate and preprocess the CIR yourself; the wrapper handles all of that (including the alloca-qualifier preprocessing workaround and selecting libc++ for C++ inputs).

### Basic usage

```bash
# C input
./run-cir2c.sh input.c output.c

# C++ input (language is inferred from the .cpp/.cxx/.cc/.C extension)
./run-cir2c.sh input.cpp output.c
```

That is all most uses need: the first argument is the source file, the second is the path for the generated C file. The wrapper creates the output directory if necessary.

### Common options

```
run-cir2c.sh [OPTIONS] <input-file> <output.c>
```

| Option | Purpose |
|---|---|
| `--lang c\|c++` | Force the input language instead of inferring it from the file extension. |
| `--std STD` | Language standard (default `c23` for C, `c++23` for C++). |
| `--flatten` | Run `cir-opt -cir-flatten-cfg` before `cir2c` to emit flat (goto-based) C instead of structured C. |
| `--mlir FILE` | Also save the intermediate CIR MLIR to `FILE` (useful for debugging). |
| `--flat-mlir FILE` | Save the flattened MLIR to `FILE` (implies `--flatten`). |
| `--include DIR` | Add `-I DIR` to the CIR-generation step (repeatable) for extra header search paths. |
| `--[no-]externalize-std` | Externalize (default) or keep `std::` calls. See the notes in the source on why keeping libstdc++/STL bodies can be unsound. |

**Exit codes:** `0` success, `2` `clang` failed (bad source / unsupported construct), `3` `cir-opt` (flatten) failed, `4` `cir2c` failed (e.g. an unsupported CIR op — see the hard-fail policy below).

### Calling the binary directly

If you already have a CIR MLIR module, you can invoke the binary, but you are then responsible for CIR generation and preprocessing yourself:

```
cir2c [--monitor-json <trace.json>] <input.mlir> <output.c>
cir2c --version
```

- `<input.mlir>` — a CIR MLIR module (from `clang -S -emit-cir`, optionally `cir-opt -cir-flatten-cfg`)
- `<output.c>` — path for the generated verifier-friendly C file
- `--version` — print the tool version (git commit hash) and exit
- `--monitor-json <trace.json>` — write a JSON trace of per-operation MLIR-to-C line mappings for traceability