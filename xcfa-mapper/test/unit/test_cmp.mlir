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

// Test: cir.cmp operation
module {
  cir.func @test_cmp() -> !cir.bool {
    %0 = cir.const #cir.int<10> : !cir.int<s, 32>
    %1 = cir.const #cir.int<20> : !cir.int<s, 32>
    %2 = cir.cmp(lt, %0, %1) : !cir.int<s, 32>, !cir.bool
    %3 = cir.cmp(gt, %0, %1) : !cir.int<s, 32>, !cir.bool
    %4 = cir.cmp(eq, %0, %1) : !cir.int<s, 32>, !cir.bool
    %5 = cir.cmp(ne, %0, %1) : !cir.int<s, 32>, !cir.bool
    cir.return %2 : !cir.bool
  }
}
