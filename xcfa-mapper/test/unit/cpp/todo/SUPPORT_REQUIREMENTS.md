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

*Might be somewhat outdated at places.*

# Unsupported C++ todo tests: support requirements

This note summarizes what the current mapper would need in order to fully support each remaining C++ test under `test/unit/cpp/todo/`.

## `test_inheritance_virtual.cpp`

### Current CIR patterns
- Record layouts with base-subobject records:
  - `!rec_Base2Ebase`
  - `!rec_Base`
  - `!rec_Derived`
- New ops and types not handled today:
  - `cir.base_class_addr`
  - `cir.vtable.get_vptr`
  - `cir.vtable.get_virtual_fn_addr`
  - `cir.vtable.address_point`
  - `!cir.vptr`
  - `#cir.vtable`
  - `#cir.typeinfo`
- Extra C++ special-member functions and RTTI/vtable globals are emitted.

### What is needed
1. Add handlers for inheritance / virtual-dispatch CIR ops:
   - `cir.base_class_addr`
   - `cir.vtable.get_vptr`
   - `cir.vtable.get_virtual_fn_addr`
   - likely `cir.vtable.address_point` if it appears as an operation value path
2. Extend `mapTypeToC` for `!cir.vptr` and related vtable/typeinfo carrier types.
3. Rework record reconstruction in `mapModule` so base classes are modeled explicitly rather than inferred only from `cir.get_member`.
4. Decide how to lower virtual dispatch:
   - either preserve C++-style layout in emitted C-compatible code, or
   - lower vtables to explicit function-pointer tables.
5. Support constructor/destructor output for objects with inheritance and virtual bases, including base initialization and teardown sequencing.

### Notes
- This is a real language-feature gap, not a small handler omission.
- It is the largest unsupported test in the current todo set.

## `test_anonymous_union.cpp`

### Current CIR patterns
- Anonymous union lowered as a named synthetic record:
  - `!rec_anon2E0 = !cir.record<union "anon.0" ...>`
- Outer struct contains that anonymous union:
  - `!rec_Outer = !cir.record<struct "Outer" {!rec_anon2E0}>`
- Member access to the anonymous union uses an empty field name:
  - `cir.get_member %1[0] {name = ""}`
- Zero-initialization is done through a bitcast to a synthetic wrapper record.

### What is needed
1. Teach `handleGetMember` to accept empty member names for anonymous aggregates.
   - Empty-name member access should usually collapse to the base expression instead of emitting `base->` or `base.` with no identifier.
2. Teach `mapModule` to emit anonymous aggregate fields, or synthesize stable field names consistently and use the same names everywhere.
3. Improve record collection so nested anonymous records/unions are reconstructed from type metadata, not just from `cir.get_member` names.
4. Validate bitcast-based zero-initialization of anonymous aggregates so emitted code stays structurally valid.

### Notes
- The core issue is anonymous-member modeling, not union support in general.
- Plain named unions are already much closer to supported.

## `test_function_pointer_member.cpp`

### Current CIR patterns
- Function-pointer record field:
  - `!rec_Cb = !cir.record<struct "Cb" {!cir.ptr<!cir.func<(!s32i) -> !s32i>>}>`
- Indirect call through loaded function pointer:
  - `cir.call %4(%5)` where `%4` has function-pointer type
- Copy constructor + `cir.copy` for aggregate passing/copying.

### Current failure mode
- The mapper emits `struct Cb { void* fn; };`.
- Indirect calls are emitted as `((int (*)())t14)(t15)`, which loses the parameter list and fails to compile.

### What is needed
1. Extend `mapTypeToC` so function-pointer types are preserved instead of collapsed to `void*`.
   - This affects both standalone types and struct fields.
2. Fix `handleCall` for indirect calls:
   - reconstruct the full function-pointer signature from the operand type,
   - emit the right cast, e.g. `((int (*)(int))ptr)(arg)`.
3. Ensure aggregate copies involving function-pointer members remain typed, especially across `cir.copy` and by-value function arguments.

### Notes
- This is mostly a type-lowering problem plus a targeted `handleCall` fix.
- It is much smaller than inheritance/virtual support.

## `test_cv_ref.cpp`

### Current CIR patterns
- Reference parameter is lowered as pointer-like CIR:
  - `_Z1gRK1TPVi(%arg0: !cir.ptr<!rec_T>, %arg1: !cir.ptr<!s32i>)`
- Pointer truthiness test via:
  - `cir.cast ptr_to_bool`
- Volatile accesses are present on load/store in `main`.

### Current failure mode
- The mapper emits `int t12 = *t11->value;`, which is invalid.
- This comes from incorrect direct-access / member-access bookkeeping for reference-like record parameters.
- Volatile qualifiers are also dropped in the emitted C.

### What is needed
1. Fix `handleGetMember` and/or load/store direct-access rules so record-member expressions on pointer-backed references become `t11->value`, not `*t11->value`.
2. Preserve enough qualifier/access metadata to avoid double-dereference bugs on reference parameters.
3. Optionally preserve `volatile` in emitted types and volatile load/store forms if semantic fidelity matters.
4. Audit `handleCast(ptr_to_bool)` to make sure pointer truthiness stays correct once type handling is fixed.

### Notes
- This test is blocked primarily by expression-shape bugs, not by unsupported CIR ops.
- It is a good near-term fix target.

## `test_bitfields.cpp`

### Current CIR patterns
- Bitfield metadata attributes:
  - `#cir.bitfield_info<...>`
- Access/update ops:
  - `cir.get_bitfield`
  - `cir.set_bitfield`
- Record layout is not field-by-field in the type; storage is packed into bytes.

### Current failure mode
- Current record reconstruction emits:
  - `struct Flags { unsigned char a; unsigned char b; unsigned char c; };`
- `handleGetBitfield` / `handleSetBitfield` treat the storage pointer as if it were already a field lvalue.
- Resulting C fails to compile and does not preserve packing semantics.

### What is needed
1. Reconstruct bitfield declarations from `#cir.bitfield_info`, not from ordinary `cir.get_member` inference.
   - Example target shape: `unsigned a : 1; unsigned b : 3; unsigned c : 4;`
2. Associate bitfield metadata with the owning record during `mapModule` record collection.
3. Replace simplified `handleGetBitfield` / `handleSetBitfield` logic with either:
   - direct field access on reconstructed bitfield members, or
   - explicit mask/shift logic over the backing storage.
4. Ensure zero initialization of aggregate records is emitted correctly for structs.

### Notes
- The handlers exist today, but the implementation is only placeholder-level.
- This is the clearest case where an op is “supported” nominally but not correctly.

## Cross-cutting implementation themes

### 1. Type lowering is still too lossy
Main examples:
- function pointers become `void*`
- qualifiers are dropped
- `!cir.vptr` / typeinfo/vtable-related types are unsupported

### 2. Record reconstruction should be metadata-first
Current reconstruction relies heavily on `cir.get_member` use sites.
A more robust approach would:
- read record layout metadata directly from `cir.record` types,
- attach anonymous aggregates, bitfields, bases, and nested records from that metadata,
- use `cir.get_member` only to recover source names where needed.

### 3. Direct-access bookkeeping needs tightening
Several bugs come from confusion between:
- an lvalue expression,
- a pointer to an object,
- a pointer to a field,
- and a value already loaded from memory.

This shows up especially in:
- `test_cv_ref.cpp`
- bitfield handling
- some aggregate/reference cases

## Suggested implementation order
1. `test_cv_ref.cpp`
2. `test_function_pointer_member.cpp`
3. `test_bitfields.cpp`
4. `test_anonymous_union.cpp`
5. `test_inheritance_virtual.cpp`
