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

// Test: global/get_global/copy/get_member/get_element/ptr_diff
!s32i = !cir.int<s, 32>
!s64i = !cir.int<s, 64>
!rec_Pair = !cir.record<struct "Pair" {!s32i, !s32i}>

module {
  cir.global "private" constant cir_private @g_arr = #cir.const_array<[#cir.int<3> : !s32i, #cir.int<4> : !s32i, #cir.int<5> : !s32i]> : !cir.array<!s32i x 3>

  cir.func @test_memory_globals() -> !s32i {
    %arr = cir.alloca !cir.array<!s32i x 3>, !cir.ptr<!cir.array<!s32i x 3>>, ["arr"] {alignment = 16 : i64}
    %src = cir.get_global @g_arr : !cir.ptr<!cir.array<!s32i x 3>>
    cir.copy %src to %arr : !cir.ptr<!cir.array<!s32i x 3>>

    %i0 = cir.const #cir.int<0> : !s64i
    %i2 = cir.const #cir.int<2> : !s64i
    %p0 = cir.get_element %arr[%i0 : !s64i] : !cir.ptr<!cir.array<!s32i x 3>> -> !cir.ptr<!s32i>
    %p2 = cir.get_element %arr[%i2 : !s64i] : !cir.ptr<!cir.array<!s32i x 3>> -> !cir.ptr<!s32i>
    %d = cir.ptr_diff %p2, %p0 : !cir.ptr<!s32i> -> !s64i
    %d32 = cir.cast integral %d : !s64i -> !s32i

    %pair = cir.alloca !rec_Pair, !cir.ptr<!rec_Pair>, ["pair"] {alignment = 4 : i64}
    %mx = cir.get_member %pair[0] {name = "__field0"} : !cir.ptr<!rec_Pair> -> !cir.ptr<!s32i>
    %my = cir.get_member %pair[1] {name = "__field1"} : !cir.ptr<!rec_Pair> -> !cir.ptr<!s32i>
    %cx = cir.const #cir.int<11> : !s32i
    %cy = cir.const #cir.int<7> : !s32i
    cir.store %cx, %mx : !s32i, !cir.ptr<!s32i>
    cir.store %cy, %my : !s32i, !cir.ptr<!s32i>

    %vx = cir.load %mx : !cir.ptr<!s32i>, !s32i
    %vy = cir.load %my : !cir.ptr<!s32i>, !s32i
    %sum0 = cir.add %vx, %vy : !s32i
    %sum1 = cir.add %sum0, %d32 : !s32i
    cir.return %sum1 : !s32i
  }
}
