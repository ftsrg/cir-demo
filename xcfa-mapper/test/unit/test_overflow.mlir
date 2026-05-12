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

// Test: cir.add/sub/mul.overflow operations
!s32i = !cir.int<s, 32>

module {
  cir.func @test_overflow_ops() -> !s32i {
    %a = cir.const #cir.int<2147483640> : !s32i
    %b = cir.const #cir.int<16> : !s32i

    %add_res, %add_ov = cir.add.overflow %a, %b : !s32i -> !s32i
    %sub_res, %sub_ov = cir.sub.overflow %add_res, %b : !s32i -> !s32i
    %mul_res, %mul_ov = cir.mul.overflow %sub_res, %b : !s32i -> !s32i

    %ov_i0 = cir.cast bool_to_int %add_ov : !cir.bool -> !s32i
    %ov_i1 = cir.cast bool_to_int %sub_ov : !cir.bool -> !s32i
    %ov_i2 = cir.cast bool_to_int %mul_ov : !cir.bool -> !s32i

    %sum0 = cir.add %mul_res, %ov_i0 : !s32i
    %sum1 = cir.add %sum0, %ov_i1 : !s32i
    %sum2 = cir.add %sum1, %ov_i2 : !s32i
    cir.return %sum2 : !s32i
  }
}
