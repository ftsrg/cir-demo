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

# xcfa-mapper

This subproject is a starter scaffold for mapping CIR (clangir) MLIR modules to C source files.

Goals
- Provide a CMake-based project that locates LLVM/MLIR under `../backend/bin/lib` by default.
- Implement a modular Mapper where each CIR operator has a dedicated handler.
- Produce a .c file from a .mlir input (initially skeletal, extend handlers to cover full semantics).

Quick start

1. Configure with CMake (pointing LLVM/MLIR to the backend libs):

```bash
mkdir -p build && cd build
cmake .. -DLLVM_DIR=../backend/bin/lib/cmake/llvm -DMLIR_DIR=../backend/bin/lib/cmake/mlir
cmake --build . -- -j
```

To rebuild:
```
mkdir build; 
cd build; 
cmake ..;
cmake ..;
make -j4
```

*(you might need to `cmake ..` twice)*

2. Run the mapper:

```bash
./xcfa-mapper /path/to/input.mlir /path/to/output.c
```

Notes
- The current implementation is a scaffold. The `src/Mapper.cpp` contains a handler registry and a simple skeletal mapper that emits comments and placeholders for ops. The plan is to implement per-op handlers (alloca, const, load, store, cmp, br, brcond, return, call) in separate classes derived from `OpHandler` and register them in `main.cpp` before mapping.
- If the CMake configure fails to find MLIR/LLVM, adjust `LLVM_DIR` and `MLIR_DIR` to the locations of the CMake package config files in your environment (the repository's `backend/bin/lib/cmake` is a good default).

Next steps (already tracked in the repo todo list):
- Implement individual `OpHandler` subclasses for CIR ops.
- Add a small example `.mlir` test and an expected `.c` output; add unit tests.
# xcfa-mapper

This is a minimal C++ project intended to map clang IR elements to "xcfa" representations. Currently it is a placeholder that prints "work in progress".

Build with your preferred C++ toolchain (example below):

g++ src/main.cpp -o xcfa-mapper

Run:

./xcfa-mapper
