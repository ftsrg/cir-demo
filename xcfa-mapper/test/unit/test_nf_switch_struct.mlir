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

// Test: structured (non-flat) cir.switch with cir.case
//   - equal case with cir.return (Other terminator)
//   - equal case with cir.break  (explicit break)
//   - equal case with cir.yield  (fallthrough, no break emitted)
//   - anyof case with multiple values and cir.break
//   - default case with cir.break
// These are the Phase-A handler paths for cir.switch, cir.case,
// cir.yield, and cir.break.

module {
  // Function 1: switch with cir.return in every case (no break needed).
  // Tests equal + default, each terminated by cir.return (Other kind).
  cir.func @switch_return(%arg0: !cir.int<s, 32>) -> !cir.int<s, 32> {
    %0 = cir.alloca !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>, ["x", init] {alignment = 4 : i64}
    %1 = cir.alloca !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>, ["__retval"] {alignment = 4 : i64}
    cir.store %arg0, %0 : !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>
    cir.scope {
      %3 = cir.load %0 : !cir.ptr<!cir.int<s, 32>>, !cir.int<s, 32>
      cir.switch(%3 : !cir.int<s, 32>) {
        cir.case(equal, [#cir.int<1> : !cir.int<s, 32>]) {
          %4 = cir.const #cir.int<10> : !cir.int<s, 32>
          cir.store %4, %1 : !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>
          %5 = cir.load %1 : !cir.ptr<!cir.int<s, 32>>, !cir.int<s, 32>
          cir.return %5 : !cir.int<s, 32>
        }
        cir.case(equal, [#cir.int<2> : !cir.int<s, 32>]) {
          %4 = cir.const #cir.int<20> : !cir.int<s, 32>
          cir.store %4, %1 : !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>
          %5 = cir.load %1 : !cir.ptr<!cir.int<s, 32>>, !cir.int<s, 32>
          cir.return %5 : !cir.int<s, 32>
        }
        cir.case(default, []) {
          %4 = cir.const #cir.int<0> : !cir.int<s, 32>
          cir.store %4, %1 : !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>
          %5 = cir.load %1 : !cir.ptr<!cir.int<s, 32>>, !cir.int<s, 32>
          cir.return %5 : !cir.int<s, 32>
        }
        cir.yield
      }
    }
    %2 = cir.load %1 : !cir.ptr<!cir.int<s, 32>>, !cir.int<s, 32>
    cir.return %2 : !cir.int<s, 32>
  }

  // Function 2: switch with cir.break (explicit break) and cir.yield
  // (fallthrough), plus anyof (multiple values on one case label).
  // Tests: equal+break, equal+yield (fallthrough), anyof+break, default+break.
  cir.func @switch_break_fallthrough(%arg0: !cir.int<s, 32>) -> !cir.int<s, 32> {
    %0 = cir.alloca !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>, ["x", init] {alignment = 4 : i64}
    %1 = cir.alloca !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>, ["result"] {alignment = 4 : i64}
    cir.store %arg0, %0 : !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>
    %zero = cir.const #cir.int<0> : !cir.int<s, 32>
    cir.store %zero, %1 : !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>
    cir.scope {
      %3 = cir.load %0 : !cir.ptr<!cir.int<s, 32>>, !cir.int<s, 32>
      cir.switch(%3 : !cir.int<s, 32>) {
        // Equal + break: should emit "break;"
        cir.case(equal, [#cir.int<1> : !cir.int<s, 32>]) {
          %4 = cir.const #cir.int<10> : !cir.int<s, 32>
          cir.store %4, %1 : !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>
          cir.break
        }
        // Equal + yield: fallthrough, no "break;" emitted
        cir.case(equal, [#cir.int<2> : !cir.int<s, 32>]) {
          %4 = cir.const #cir.int<20> : !cir.int<s, 32>
          cir.store %4, %1 : !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>
          cir.yield
        }
        // Anyof: emits "case 3:" and "case 4:" as separate labels
        cir.case(anyof, [#cir.int<3> : !cir.int<s, 32>, #cir.int<4> : !cir.int<s, 32>]) {
          %4 = cir.const #cir.int<30> : !cir.int<s, 32>
          cir.store %4, %1 : !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>
          cir.break
        }
        // Default + break
        cir.case(default, []) {
          %4 = cir.const #cir.int<-1> : !cir.int<s, 32>
          cir.store %4, %1 : !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>
          cir.break
        }
        cir.yield
      }
    }
    %2 = cir.load %1 : !cir.ptr<!cir.int<s, 32>>, !cir.int<s, 32>
    cir.return %2 : !cir.int<s, 32>
  }
}
