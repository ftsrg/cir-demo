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

// Unit test: distinguish logical not on bool vs bitwise not on int
module {
  // Logical not on bool: return !(_Bool)1 -> 0
  cir.func @test_logical_not() -> !cir.int<s, 32> {
    %c1 = cir.const #cir.int<1> : !cir.int<s, 32>
    %b = cir.cast int_to_bool %c1 : !cir.int<s, 32> -> !cir.bool
    %nb = cir.not %b : !cir.bool
    %i = cir.cast bool_to_int %nb : !cir.bool -> !cir.int<s, 32>
    cir.return %i : !cir.int<s, 32>
  }

  // Bitwise not on int: return ~0xF0
  cir.func @test_bitwise_not() -> !cir.int<s, 32> {
    %c = cir.const #cir.int<240> : !cir.int<s, 32>
    %r = cir.not %c : !cir.int<s, 32>
    cir.return %r : !cir.int<s, 32>
  }
}
