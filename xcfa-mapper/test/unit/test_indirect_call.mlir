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

// Test: indirect call through a typed function pointer.
// The cast in the emitted C must include the actual parameter types, not an
// empty parameter list (retType (*)() is UB when called with arguments).
!s32i = !cir.int<s, 32>

module {
  cir.func @add(%arg0: !s32i, %arg1: !s32i) -> !s32i {
    %0 = cir.add %arg0, %arg1 : !s32i
    cir.return %0 : !s32i
  }

  // Call through a function pointer with two int arguments.
  cir.func @test_indirect_call(%arg0: !cir.ptr<!cir.func<(!s32i, !s32i) -> !s32i>>) -> !s32i {
    %0 = cir.const #cir.int<3> : !s32i
    %1 = cir.const #cir.int<4> : !s32i
    %2 = cir.call %arg0(%0, %1) : (!cir.ptr<!cir.func<(!s32i, !s32i) -> !s32i>>, !s32i, !s32i) -> !s32i
    cir.return %2 : !s32i
  }

  // Call through a no-arg function pointer (also exercises the cast).
  cir.func @test_indirect_noarg(%arg0: !cir.ptr<!cir.func<() -> !s32i>>) -> !s32i {
    %0 = cir.call %arg0() : (!cir.ptr<!cir.func<() -> !s32i>>) -> !s32i
    cir.return %0 : !s32i
  }
}
