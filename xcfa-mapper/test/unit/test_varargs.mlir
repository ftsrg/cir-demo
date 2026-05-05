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

// Test: CIR varargs operations
!s32i = !cir.int<s, 32>
!u32i = !cir.int<u, 32>
!void = !cir.void
!rec___va_list_tag = !cir.record<struct "__va_list_tag" {!u32i, !u32i, !cir.ptr<!void>, !cir.ptr<!void>}>

module {
  cir.func @test_varargs(%arg0: !s32i, ...) -> !s32i {
    %0 = cir.alloca !s32i, !cir.ptr<!s32i>, ["count", init] {alignment = 4 : i64}
    %1 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64}
    %2 = cir.alloca !cir.array<!rec___va_list_tag x 1>, !cir.ptr<!cir.array<!rec___va_list_tag x 1>>, ["ap"] {alignment = 16 : i64}
    %3 = cir.alloca !s32i, !cir.ptr<!s32i>, ["x", init] {alignment = 4 : i64}
    cir.store %arg0, %0 : !s32i, !cir.ptr<!s32i>
    %4 = cir.cast array_to_ptrdecay %2 : !cir.ptr<!cir.array<!rec___va_list_tag x 1>> -> !cir.ptr<!rec___va_list_tag>
    cir.va_start %4 : !cir.ptr<!rec___va_list_tag>
    %5 = cir.cast array_to_ptrdecay %2 : !cir.ptr<!cir.array<!rec___va_list_tag x 1>> -> !cir.ptr<!rec___va_list_tag>
    %6 = cir.va_arg %5 : (!cir.ptr<!rec___va_list_tag>) -> !s32i
    cir.store %6, %3 : !s32i, !cir.ptr<!s32i>
    %7 = cir.cast array_to_ptrdecay %2 : !cir.ptr<!cir.array<!rec___va_list_tag x 1>> -> !cir.ptr<!rec___va_list_tag>
    cir.va_end %7 : !cir.ptr<!rec___va_list_tag>
    %8 = cir.load %3 : !cir.ptr<!s32i>, !s32i
    cir.store %8, %1 : !s32i, !cir.ptr<!s32i>
    %9 = cir.load %1 : !cir.ptr<!s32i>, !s32i
    cir.return %9 : !s32i
  }
}
