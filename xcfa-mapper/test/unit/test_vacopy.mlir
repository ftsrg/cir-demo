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

// Test: cir.va_copy dst/src operand order.
// The generated __builtin_va_copy call must have the destination first.
!s32i = !cir.int<s, 32>
!void = !cir.void
!rec___va_list_tag = !cir.record<struct "__va_list_tag" {!cir.int<u, 32>, !cir.int<u, 32>, !cir.ptr<!void>, !cir.ptr<!void>}>

module {
  cir.func @test_vacopy(%arg0: !s32i, ...) -> !s32i {
    %0 = cir.alloca !cir.array<!rec___va_list_tag x 1>, !cir.ptr<!cir.array<!rec___va_list_tag x 1>>, ["ap"] {alignment = 16 : i64}
    %1 = cir.alloca !cir.array<!rec___va_list_tag x 1>, !cir.ptr<!cir.array<!rec___va_list_tag x 1>>, ["ap2"] {alignment = 16 : i64}
    %2 = cir.alloca !s32i, !cir.ptr<!s32i>, ["retval"] {alignment = 4 : i64}
    // va_start ap
    %3 = cir.cast array_to_ptrdecay %0 : !cir.ptr<!cir.array<!rec___va_list_tag x 1>> -> !cir.ptr<!rec___va_list_tag>
    cir.va_start %3 : !cir.ptr<!rec___va_list_tag>
    // va_copy ap -> ap2: operand(0) of the op is the destination (ap2)
    %4 = cir.cast array_to_ptrdecay %0 : !cir.ptr<!cir.array<!rec___va_list_tag x 1>> -> !cir.ptr<!rec___va_list_tag>
    %5 = cir.cast array_to_ptrdecay %1 : !cir.ptr<!cir.array<!rec___va_list_tag x 1>> -> !cir.ptr<!rec___va_list_tag>
    cir.va_copy %4 to %5 : !cir.ptr<!rec___va_list_tag>, !cir.ptr<!rec___va_list_tag>
    // read first vararg from copy
    %6 = cir.cast array_to_ptrdecay %1 : !cir.ptr<!cir.array<!rec___va_list_tag x 1>> -> !cir.ptr<!rec___va_list_tag>
    %7 = cir.va_arg %6 : (!cir.ptr<!rec___va_list_tag>) -> !s32i
    cir.store %7, %2 : !s32i, !cir.ptr<!s32i>
    // va_end both
    %8 = cir.cast array_to_ptrdecay %0 : !cir.ptr<!cir.array<!rec___va_list_tag x 1>> -> !cir.ptr<!rec___va_list_tag>
    cir.va_end %8 : !cir.ptr<!rec___va_list_tag>
    %9 = cir.cast array_to_ptrdecay %1 : !cir.ptr<!cir.array<!rec___va_list_tag x 1>> -> !cir.ptr<!rec___va_list_tag>
    cir.va_end %9 : !cir.ptr<!rec___va_list_tag>
    %10 = cir.load %2 : !cir.ptr<!s32i>, !s32i
    cir.return %10 : !s32i
  }
}
