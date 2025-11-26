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

// Test: cir.br, cir.brcond, cir.return
module {
  cir.func @test_br() -> !cir.int<s, 32> {
    %0 = cir.const #cir.int<0> : !cir.int<s, 32>
    cir.br ^bb1
  ^bb1:
    cir.return %0 : !cir.int<s, 32>
  }
  
  cir.func @test_brcond() -> !cir.int<s, 32> {
    %0 = cir.const #cir.bool<true> : !cir.bool
    %1 = cir.const #cir.int<1> : !cir.int<s, 32>
    %2 = cir.const #cir.int<2> : !cir.int<s, 32>
    cir.brcond %0 ^bb1, ^bb2
  ^bb1:
    cir.return %1 : !cir.int<s, 32>
  ^bb2:
    cir.return %2 : !cir.int<s, 32>
  }
}
