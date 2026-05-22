// Copyright 2025 Budapest University of Technology and Economics
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Test: function pointer type consistency (P3.13).
// A struct with a function pointer field, a function that accepts a function
// pointer parameter, and a local alloca of a function pointer type all must
// emit a consistent type (void *) rather than the full declarator syntax.
// The correct function pointer type is recovered at the indirect call site
// via an explicit cast in handleCallLikeOp.
!s32i = !cir.int<s, 32>
!fp_t = !cir.ptr<!cir.func<(!s32i) -> !s32i>>

module {
  // A struct that contains a function pointer field.
  // The field must be emitted as `void *` (same as mapTypeToC result for
  // cir.ptr<!cir.func<...>>), not as `int (*field)(int)`.
  cir.func @use_struct_with_fnptr(%arg0: !cir.ptr<!cir.record<struct "ops" {!fp_t}>>) -> !s32i {
    %0 = cir.const #cir.int<0> : !s32i
    cir.return %0 : !s32i
  }

  // A function that receives a function pointer as a parameter.
  // The parameter must be emitted as `void *` (consistent with struct field).
  cir.func @take_fnptr(%arg0: !fp_t) -> !s32i {
    %0 = cir.const #cir.int<42> : !s32i
    %1 = cir.const #cir.int<7> : !s32i
    // Indirect call through the parameter. handleCallLikeOp will cast to the
    // correct function pointer type at the call site.
    %2 = cir.call %arg0(%1) : (!fp_t, !s32i) -> !s32i
    cir.return %2 : !s32i
  }
}
