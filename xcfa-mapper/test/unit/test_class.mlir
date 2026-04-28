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

!s32i = !cir.int<s, 32>
!u8i = !cir.int<u, 8>
#loc3 = loc("/home/solarowl/Repositories/cir-demo/xcfa-mapper/test/unit/test_class.cpp":4:10)
!rec_Greeter = !cir.record<class "Greeter" padded {!u8i}>
module @"/home/solarowl/Repositories/cir-demo/xcfa-mapper/test/unit/test_class.cpp" attributes {cir.lang = #cir.lang<cxx>, cir.module_asm = [], cir.triple = "x86_64-unknown-linux-gnu", dlti.dl_spec = #dlti.dl_spec<!llvm.ptr<270> = dense<32> : vector<4xi64>, !llvm.ptr<271> = dense<32> : vector<4xi64>, !llvm.ptr<272> = dense<64> : vector<4xi64>, i64 = dense<64> : vector<2xi64>, i128 = dense<128> : vector<2xi64>, f80 = dense<128> : vector<2xi64>, !llvm.ptr = dense<64> : vector<4xi64>, i1 = dense<8> : vector<2xi64>, i8 = dense<8> : vector<2xi64>, i16 = dense<16> : vector<2xi64>, i32 = dense<32> : vector<2xi64>, f16 = dense<16> : vector<2xi64>, f64 = dense<64> : vector<2xi64>, f128 = dense<128> : vector<2xi64>, "dlti.endianness" = "little", "dlti.mangling_mode" = "e", "dlti.legal_int_widths" = array<i32: 8, 16, 32, 64>, "dlti.stack_alignment" = 128 : i64>} {
  cir.func no_inline dso_local @_ZN7Greeter8sayHelloEv(%arg0: !cir.ptr<!rec_Greeter>) {
    %0 = cir.alloca !cir.ptr<!rec_Greeter>, !cir.ptr<!cir.ptr<!rec_Greeter>>, ["this", init] {alignment = 8 : i64} loc(#loc3)
    cir.store %arg0, %0 : !cir.ptr<!rec_Greeter>, !cir.ptr<!cir.ptr<!rec_Greeter>> loc(#loc4)
    %1 = cir.load %0 : !cir.ptr<!cir.ptr<!rec_Greeter>>, !cir.ptr<!rec_Greeter> loc(#loc3)
    cir.return loc(#loc2)
  } loc(#loc12)
  cir.func no_inline dso_local @main() -> !s32i {
    %0 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64} loc(#loc6)
    %1 = cir.alloca !rec_Greeter, !cir.ptr<!rec_Greeter>, ["g"] {alignment = 1 : i64} loc(#loc14)
    cir.call @_ZN7Greeter8sayHelloEv(%1) : (!cir.ptr<!rec_Greeter>) -> () loc(#loc9)
    %2 = cir.const #cir.int<0> : !s32i loc(#loc10)
    cir.store align(4) %2, %0 : !s32i, !cir.ptr<!s32i> loc(#loc15)
    %3 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc15)
    cir.return %3 : !s32i loc(#loc15)
  } loc(#loc13)
} loc(#loc)
#loc = loc("/home/solarowl/Repositories/cir-demo/xcfa-mapper/test/unit/test_class.cpp":0:0)
#loc1 = loc("/home/solarowl/Repositories/cir-demo/xcfa-mapper/test/unit/test_class.cpp":4:5)
#loc2 = loc("/home/solarowl/Repositories/cir-demo/xcfa-mapper/test/unit/test_class.cpp":4:22)
#loc4 = loc("/home/solarowl/Repositories/cir-demo/xcfa-mapper/test/unit/test_class.cpp":4:21)
#loc5 = loc("/home/solarowl/Repositories/cir-demo/xcfa-mapper/test/unit/test_class.cpp":7:1)
#loc6 = loc("/home/solarowl/Repositories/cir-demo/xcfa-mapper/test/unit/test_class.cpp":12:1)
#loc7 = loc("/home/solarowl/Repositories/cir-demo/xcfa-mapper/test/unit/test_class.cpp":8:5)
#loc8 = loc("/home/solarowl/Repositories/cir-demo/xcfa-mapper/test/unit/test_class.cpp":8:13)
#loc9 = loc("/home/solarowl/Repositories/cir-demo/xcfa-mapper/test/unit/test_class.cpp":9:7)
#loc10 = loc("/home/solarowl/Repositories/cir-demo/xcfa-mapper/test/unit/test_class.cpp":11:12)
#loc11 = loc("/home/solarowl/Repositories/cir-demo/xcfa-mapper/test/unit/test_class.cpp":11:5)
#loc12 = loc(fused[#loc1, #loc2])
#loc13 = loc(fused[#loc5, #loc6])
#loc14 = loc(fused[#loc7, #loc8])
#loc15 = loc(fused[#loc11, #loc10])
