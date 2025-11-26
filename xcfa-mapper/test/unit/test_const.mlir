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

// Test: cir.const operation with different types
module {
  cir.func @test_const_int() -> !cir.int<s, 32> {
    %0 = cir.const #cir.int<123> : !cir.int<s, 32>
    cir.return %0 : !cir.int<s, 32>
  }
  
  cir.func @test_const_bool() -> !cir.bool {
    %0 = cir.const #cir.bool<true> : !cir.bool
    cir.return %0 : !cir.bool
  }
  
  cir.func @test_const_float() -> !cir.float {
    %0 = cir.const #cir.fp<3.140000e+00> : !cir.float
    cir.return %0 : !cir.float
  }
  
  cir.func @test_const_zero_int() -> !cir.int<s, 32> {
    %0 = cir.const #cir.int<0> : !cir.int<s, 32>
    cir.return %0 : !cir.int<s, 32>
  }
}
