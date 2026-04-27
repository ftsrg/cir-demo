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

// Test: cir.call operation
module {
  cir.func @helper(%arg0: !cir.int<s, 32>) -> !cir.int<s, 32> {
    %0 = cir.const #cir.int<1> : !cir.int<s, 32>
    %1 = cir.add %arg0, %0 : !cir.int<s, 32>
    cir.return %1 : !cir.int<s, 32>
  }
  
  cir.func @test_call() -> !cir.int<s, 32> {
    %0 = cir.const #cir.int<10> : !cir.int<s, 32>
    %1 = cir.call @helper(%0) : (!cir.int<s, 32>) -> !cir.int<s, 32>
    cir.return %1 : !cir.int<s, 32>
  }
}
