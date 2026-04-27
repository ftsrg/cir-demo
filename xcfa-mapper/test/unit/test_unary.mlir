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

// Test: cir.minus operation
module {
  cir.func @test_unary() -> !cir.int<s, 32> {
    %0 = cir.const #cir.int<42> : !cir.int<s, 32>
    %1 = cir.minus %0 : !cir.int<s, 32>
    %2 = cir.minus %1 : !cir.int<s, 32>
    cir.return %2 : !cir.int<s, 32>
  }
}
