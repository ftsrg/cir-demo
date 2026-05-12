//
//Copyright 2025 Budapest University of Technology and Economics
//
//Licensed under the Apache License, Version 2.0 (the "License");
//you may not use this file except in compliance with the License.
//You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
//Unless required by applicable law or agreed to in writing, software
//distributed under the License is distributed on an "AS IS" BASIS,
//WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//See the License for the specific language governing permissions and
//limitations under the License.
 //

// Test: cir.ptr_stride lowered in index-friendly form
!s32i = !cir.int<s, 32>
!s64i = !cir.int<s, 64>

module {
  cir.func @test_ptr_stride_indexing() -> !s32i {
    %arr = cir.alloca !cir.array<!s32i x 4>, !cir.ptr<!cir.array<!s32i x 4>>, ["arr"] {alignment = 16 : i64}

    %c10 = cir.const #cir.int<10> : !s32i
    %i0 = cir.const #cir.int<0> : !s64i
    %p0 = cir.get_element %arr[%i0 : !s64i] : !cir.ptr<!cir.array<!s32i x 4>> -> !cir.ptr<!s32i>
    cir.store %c10, %p0 : !s32i, !cir.ptr<!s32i>

    %c20 = cir.const #cir.int<20> : !s32i
    %i1 = cir.const #cir.int<1> : !s64i
    %p1 = cir.get_element %arr[%i1 : !s64i] : !cir.ptr<!cir.array<!s32i x 4>> -> !cir.ptr<!s32i>
    cir.store %c20, %p1 : !s32i, !cir.ptr<!s32i>

    %c30 = cir.const #cir.int<30> : !s32i
    %i2 = cir.const #cir.int<2> : !s64i
    %p2 = cir.get_element %arr[%i2 : !s64i] : !cir.ptr<!cir.array<!s32i x 4>> -> !cir.ptr<!s32i>
    cir.store %c30, %p2 : !s32i, !cir.ptr<!s32i>

    %base = cir.cast array_to_ptrdecay %arr : !cir.ptr<!cir.array<!s32i x 4>> -> !cir.ptr<!s32i>
    %step = cir.const #cir.int<2> : !s32i
    %ptr = cir.ptr_stride %base, %step : (!cir.ptr<!s32i>, !s32i) -> !cir.ptr<!s32i>
    %val = cir.load %ptr : !cir.ptr<!s32i>, !s32i
    cir.return %val : !s32i
  }
}
