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

// Test: cir.roundeven must map to nearbyint (rounds half-to-even),
// NOT to round (rounds half-away-from-zero).
// Forward declarations for the math functions are included so that the
// generated C file can be checked with gcc -fsyntax-only.

module {
  // Forward declarations so the generated C gets prototypes for nearbyint*.
  cir.func private @nearbyint(!cir.double) -> !cir.double
  cir.func private @nearbyintf(!cir.float) -> !cir.float

  cir.func @test_roundeven_double(%arg0: !cir.double) -> !cir.double {
    %0 = cir.roundeven %arg0 : !cir.double
    cir.return %0 : !cir.double
  }

  cir.func @test_roundeven_float(%arg0: !cir.float) -> !cir.float {
    %0 = cir.roundeven %arg0 : !cir.float
    cir.return %0 : !cir.float
  }
}
