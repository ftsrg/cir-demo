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

Prerequisites: an LLVM/Clang build with ClangIR support. By default, CMake looks for LLVM and MLIR cmake packages under `../backend/bin/lib/cmake` relative to the `cir2c` source directory (i.e. `<repo>/backend/bin/lib/cmake/llvm` and `.../mlir`). The prebuilt tools (`clang`, `clang++`, `cir-opt`) are expected in `../backend/bin/bin/`. Override by passing `-DLLVM_DIR=` and `-DMLIR_DIR=` to CMake.

```bash
cmake -S cir2c -B cir2c/build && cmake --build cir2c/build --target cir2c
```

The binary is written to `cir2c/build/cir2c`.

## Usage

```
cir2c [--monitor-json <trace.json>] <input.mlir> <output.c>
cir2c --version
```

- `<input.mlir>` — a CIR MLIR module (produced by `clang -S -emit-cir` or by `cir-opt -cir-flatten-cfg`)
- `<output.c>` — path for the generated verifier-friendly C file
- `--version` — print the tool version (git commit hash) and exit
- `--monitor-json <trace.json>` — write a JSON trace of per-operation MLIR-to-C line mappings for traceability

In practice, use the provided shell script (see [Testing / Single-file pipeline](#single-file-pipeline)) rather than invoking `cir2c` directly, since it handles CIR generation and the alloca-qualifier preprocessing workaround.

## Architecture

### Core (`cir2c/src/`)

**`Mapper` (`Mapper.h` / `Mapper.cpp` / `ModuleEmitter.cpp`)**

The central mapping context. It owns:
- The **handler registry**: a map from CIR operation name to `OpHandler`. Populated at startup by `registerBuiltinHandlers(mapper)`, which iterates over every self-registered handler family.
- **Value/label naming**: SSA value → C identifier (`getOrCreateName`, `setName`, `freshName`), block → label, collision avoidance.
- **Direct-access tracking**: alloca results that are C lvalue names rather than pointer SSA values (no explicit dereference needed at use sites).
- **Type/constant/module services**: forwarded to the sub-components below.
- **State for advanced features**: atomic/volatile qualifier sets, vtable-dispatch chain tracking (for `__VERIFIER_virtual_call_<sig>`), exception-handling state (landing-pad stack, cleanup-scope stack, RTTI symbol set), member-function-pointer alignment flag, for-loop step label stack.
- `mapModule` / `mapFunc` / `mapGlobal` / `mapOperation` — the top-level emission entry points.

Module-level emission (top-level global/function/prototype scanning, pre-scans, C preamble) lives in `ModuleEmitter.cpp` to keep `Mapper.cpp` manageable.

**`TypeMapper` (`TypeMapper.h` / `TypeMapper.cpp`)**

CIR type → C type string. Handles integer widths, floats, pointers, arrays, records (structs/unions), and anonymous record naming. Entry points: `mapTypeToC`, `arrayBaseTypeAndDims`, `anonRecordCName`.

**`ConstantEmitter` (`ConstantEmitter.h` / `ConstantEmitter.cpp`)**

CIR constant attribute → C initializer string. Handles integer, floating-point, string, pointer, array, struct/union, and member-function-pointer constants. Entry point: `formatConstInit`.

**`Traceability` (`Traceability.h` / `Traceability.cpp`)**

Computes per-entry MLIR-line / C-line mappings for `--monitor-json` output.

### Handler families (`cir2c/src/handlers/`)

The ~146 CIR op handlers are organised into **~14 self-contained, self-registering handler family classes** (one `.cpp` file each). Each family:

1. Inherits from `HandlerModule` (`HandlerModule.h`).
2. Implements `registerHandlers(Mapper &m)`, which calls `m.registerTypedHandler<cir::XxxOp>(handleXxx)` for each op it owns.
3. Carries its op handlers as `private static` methods.
4. Ends the `.cpp` file with `REGISTER_HANDLER_MODULE(XxxHandlers)`, which adds a singleton instance to a global registry at static-init time — no central wiring is needed.

The current families are:

| Family | CIR ops covered |
|---|---|
| `ArithmeticHandlers` | Integer/FP arithmetic, bitwise, shift ops |
| `MemoryHandlers` | `alloca`, `load`, `store`, `ptr_stride`, `ptr_diff`, `get_element` |
| `ControlFlowHandlers` | `if`, `for`, `while`, `do`, `switch`, `break`, `continue`, `goto`, `return`, `yield`, `br`, `brcond` |
| `CallHandlers` | `call`, `try_call`, `indirect_call` |
| `RecordHandlers` | `get_member`, struct/union emission |
| `GlobalHandlers` | `global`, `get_global` |
| `VTableHandlers` | `vtable.get_vptr`, `vtable.get_virtual_fn_addr`, vtable global emission |
| `ExceptionHandlers` | `try`, `throw`, `catch`, `resume`, `eh.*` |
| `CastHandlers` | `cast` (all sub-kinds: int_to_bool, bitcast, int_to_ptr, …) |
| `VariadicHandlers` | `va_start`, `va_end`, `va_arg`, `va_copy` |
| `ConstantHandlers` | `const` (int, fp, null, bool, …) |
| `ComplexHandlers` | `complex.*` ops |
| `FloatMathHandlers` | `sqrt`, `sin`, `cos`, `pow`, `fabs`, `fmod`, … (maps to `__builtin_*`) |
| `BuiltinHandlers` | Clang `__builtin_*` intrinsics, `trap`, `prefetch`, … |

Shared handler infrastructure lives in `HandlerSupport.h` / `HandlerSupport.cpp`: `emitRegionBody` (region walker), `extractName`, `pointerOperandExpr`, `LambdaOpHandler`, and similar helpers used across families.

### Hard-fail policy

An unrecognised CIR op causes `cir2c` to exit non-zero rather than silently emit unsound C. This ensures that incomplete coverage is always visible.

### How to add a handler for a new CIR op

1. Pick (or create) the appropriate `*Handlers.cpp` family file.
2. Add a `static bool handleXxx(cir::XxxOp op, Mapper &m, std::ostream &out)` method with the mapping logic.
3. Register it in that family's `registerHandlers` via `m.registerTypedHandler<cir::XxxOp>(handleXxx)`.
4. If you created a new family file:
   - Add `REGISTER_HANDLER_MODULE(NewHandlers)` at file scope in the new `.cpp`.
   - Add the new `.cpp` to the `add_executable(cir2c ...)` list in `cir2c/CMakeLists.txt`.
