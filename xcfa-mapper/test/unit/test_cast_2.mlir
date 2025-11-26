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

// Test: cir.cast (integral to pointer)
module {
  cir.func @test_int_to_ptr() -> !cir.ptr<!cir.int<s, 32>> {
    %0 = cir.const #cir.int<1024> : !cir.int<u, 64>
    %1 = cir.cast int_to_ptr %0 : !cir.int<u, 64> -> !cir.ptr<!cir.int<s, 32>>
    cir.return %1 : !cir.ptr<!cir.int<s, 32>>
  }
}
