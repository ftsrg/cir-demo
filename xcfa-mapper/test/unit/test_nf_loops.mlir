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

// Test: structured (non-flat) loop ops
//   cir.while  — tests B1: while(1) { cond; if(!c) break; body; }
//   cir.do     — tests B2: do { body; cond; if(!c) break; } while(1);
//   cir.for    — tests B3: while(1) { cond; if(!c) break; body; step; }
// Also exercises:
//   cir.condition — consumed by emitCondRegion (B1-B3)
//   cir.break     — explicit break inside a loop body (B4)

module {
  // --- while loop: sum = 0; while (sum < n) { sum = sum + 1; } return sum; ---
  cir.func @test_while(%arg0: !cir.int<s, 32>) -> !cir.int<s, 32> {
    %0 = cir.alloca !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>, ["n", init] {alignment = 4 : i64}
    %1 = cir.alloca !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>, ["__retval"] {alignment = 4 : i64}
    %2 = cir.alloca !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>, ["sum", init] {alignment = 4 : i64}
    cir.store %arg0, %0 : !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>
    %3 = cir.const #cir.int<0> : !cir.int<s, 32>
    cir.store %3, %2 : !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>
    cir.scope {
      cir.while {
        %6 = cir.load %2 : !cir.ptr<!cir.int<s, 32>>, !cir.int<s, 32>
        %7 = cir.load %0 : !cir.ptr<!cir.int<s, 32>>, !cir.int<s, 32>
        %8 = cir.cmp lt %6, %7 : !cir.int<s, 32>
        cir.condition(%8)
      } do {
        cir.scope {
          %6 = cir.load %2 : !cir.ptr<!cir.int<s, 32>>, !cir.int<s, 32>
          %7 = cir.const #cir.int<1> : !cir.int<s, 32>
          %8 = cir.add nsw %6, %7 : !cir.int<s, 32>
          cir.store %8, %2 : !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>
        }
        cir.yield
      }
    }
    %4 = cir.load %2 : !cir.ptr<!cir.int<s, 32>>, !cir.int<s, 32>
    cir.store %4, %1 : !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>
    %5 = cir.load %1 : !cir.ptr<!cir.int<s, 32>>, !cir.int<s, 32>
    cir.return %5 : !cir.int<s, 32>
  }

  // --- do-while: i = 0; do { i = i + 1; } while (i < n); return i; ---
  cir.func @test_do(%arg0: !cir.int<s, 32>) -> !cir.int<s, 32> {
    %0 = cir.alloca !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>, ["n", init] {alignment = 4 : i64}
    %1 = cir.alloca !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>, ["__retval"] {alignment = 4 : i64}
    %2 = cir.alloca !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>, ["i", init] {alignment = 4 : i64}
    cir.store %arg0, %0 : !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>
    %3 = cir.const #cir.int<0> : !cir.int<s, 32>
    cir.store %3, %2 : !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>
    cir.scope {
      cir.do {
        cir.scope {
          %6 = cir.load %2 : !cir.ptr<!cir.int<s, 32>>, !cir.int<s, 32>
          %7 = cir.const #cir.int<1> : !cir.int<s, 32>
          %8 = cir.add nsw %6, %7 : !cir.int<s, 32>
          cir.store %8, %2 : !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>
        }
        cir.yield
      } while {
        %6 = cir.load %2 : !cir.ptr<!cir.int<s, 32>>, !cir.int<s, 32>
        %7 = cir.load %0 : !cir.ptr<!cir.int<s, 32>>, !cir.int<s, 32>
        %8 = cir.cmp lt %6, %7 : !cir.int<s, 32>
        cir.condition(%8)
      }
    }
    %4 = cir.load %2 : !cir.ptr<!cir.int<s, 32>>, !cir.int<s, 32>
    cir.store %4, %1 : !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>
    %5 = cir.load %1 : !cir.ptr<!cir.int<s, 32>>, !cir.int<s, 32>
    cir.return %5 : !cir.int<s, 32>
  }

  // --- for loop: sum = 0; for (i = 0; i < n; i++) sum += i; return sum; ---
  cir.func @test_for(%arg0: !cir.int<s, 32>) -> !cir.int<s, 32> {
    %0 = cir.alloca !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>, ["n", init] {alignment = 4 : i64}
    %1 = cir.alloca !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>, ["__retval"] {alignment = 4 : i64}
    %2 = cir.alloca !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>, ["sum", init] {alignment = 4 : i64}
    cir.store %arg0, %0 : !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>
    %3 = cir.const #cir.int<0> : !cir.int<s, 32>
    cir.store %3, %2 : !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>
    cir.scope {
      %6 = cir.alloca !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>, ["i", init] {alignment = 4 : i64}
      %7 = cir.const #cir.int<0> : !cir.int<s, 32>
      cir.store %7, %6 : !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>
      cir.for : cond {
        %8 = cir.load %6 : !cir.ptr<!cir.int<s, 32>>, !cir.int<s, 32>
        %9 = cir.load %0 : !cir.ptr<!cir.int<s, 32>>, !cir.int<s, 32>
        %10 = cir.cmp lt %8, %9 : !cir.int<s, 32>
        cir.condition(%10)
      } body {
        cir.scope {
          %8 = cir.load %2 : !cir.ptr<!cir.int<s, 32>>, !cir.int<s, 32>
          %9 = cir.load %6 : !cir.ptr<!cir.int<s, 32>>, !cir.int<s, 32>
          %10 = cir.add nsw %8, %9 : !cir.int<s, 32>
          cir.store %10, %2 : !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>
        }
        cir.yield
      } step {
        %8 = cir.load %6 : !cir.ptr<!cir.int<s, 32>>, !cir.int<s, 32>
        %9 = cir.const #cir.int<1> : !cir.int<s, 32>
        %10 = cir.add nsw %8, %9 : !cir.int<s, 32>
        cir.store %10, %6 : !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>
        cir.yield
      }
    }
    %4 = cir.load %2 : !cir.ptr<!cir.int<s, 32>>, !cir.int<s, 32>
    cir.store %4, %1 : !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>
    %5 = cir.load %1 : !cir.ptr<!cir.int<s, 32>>, !cir.int<s, 32>
    cir.return %5 : !cir.int<s, 32>
  }

  // --- while loop with cir.break inside body ---
  cir.func @test_while_break(%arg0: !cir.int<s, 32>) -> !cir.int<s, 32> {
    %0 = cir.alloca !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>, ["x", init] {alignment = 4 : i64}
    %1 = cir.alloca !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>, ["__retval"] {alignment = 4 : i64}
    %2 = cir.alloca !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>, ["i", init] {alignment = 4 : i64}
    cir.store %arg0, %0 : !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>
    %3 = cir.const #cir.int<0> : !cir.int<s, 32>
    cir.store %3, %2 : !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>
    cir.scope {
      cir.while {
        %true = cir.const #cir.bool<true> : !cir.bool
        cir.condition(%true)
      } do {
        cir.scope {
          %6 = cir.load %2 : !cir.ptr<!cir.int<s, 32>>, !cir.int<s, 32>
          %7 = cir.load %0 : !cir.ptr<!cir.int<s, 32>>, !cir.int<s, 32>
          %8 = cir.cmp ge %6, %7 : !cir.int<s, 32>
          cir.if %8 {
            cir.break
          }
        }
        %6 = cir.load %2 : !cir.ptr<!cir.int<s, 32>>, !cir.int<s, 32>
        %7 = cir.const #cir.int<1> : !cir.int<s, 32>
        %8 = cir.add nsw %6, %7 : !cir.int<s, 32>
        cir.store %8, %2 : !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>
        cir.yield
      }
    }
    %4 = cir.load %2 : !cir.ptr<!cir.int<s, 32>>, !cir.int<s, 32>
    cir.store %4, %1 : !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>
    %5 = cir.load %1 : !cir.ptr<!cir.int<s, 32>>, !cir.int<s, 32>
    cir.return %5 : !cir.int<s, 32>
  }
}
