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

// Test: rem/and/or/xor/inc/dec/shift/select/ternary/goto/label/switch
!s32i = !cir.int<s, 32>

module {
  cir.func @test_arith_misc() -> !s32i {
    %a = cir.const #cir.int<42> : !s32i
    %b = cir.const #cir.int<5> : !s32i

    %r0 = cir.rem %a, %b : !s32i
    %r1 = cir.and %a, %b : !s32i
    %r2 = cir.or %r1, %r0 : !s32i
    %r3 = cir.xor %r2, %a : !s32i
    %r4 = cir.inc nsw %r3 : !s32i
    %r5 = cir.dec nsw %r4 : !s32i

    %sh = cir.const #cir.int<1> : !s32i
    %r6 = cir.shift(left, %r5 : !s32i, %sh : !s32i) -> !s32i
    %r7 = cir.shift(right, %r6 : !s32i, %sh : !s32i) -> !s32i

    %c0 = cir.const #cir.int<0> : !s32i
    %cond = cir.cmp gt %r7, %c0 : !s32i
    %sel = cir.select if %cond then %r7 else %c0 : (!cir.bool, !s32i, !s32i) -> !s32i

    %tern = cir.ternary(%cond, true {
      %t = cir.const #cir.int<3> : !s32i
      cir.yield %t : !s32i
    }, false {
      %f = cir.const #cir.int<7> : !s32i
      cir.yield %f : !s32i
    }) : (!cir.bool) -> !s32i

    %sum = cir.add %sel, %tern : !s32i
    cir.return %sum : !s32i
  }

  cir.func @test_goto_label_switch() -> !s32i {
    %ret = cir.alloca !s32i, !cir.ptr<!s32i>, ["ret"] {alignment = 4 : i64}
    %x = cir.const #cir.int<2> : !s32i
    cir.goto "CHECK"
  ^bb1:
    cir.label "CHECK"
    cir.switch(%x : !s32i) {
      cir.case(equal, [#cir.int<1> : !s32i]) {
        %c10 = cir.const #cir.int<10> : !s32i
        cir.store %c10, %ret : !s32i, !cir.ptr<!s32i>
        cir.yield
      }
      cir.case(equal, [#cir.int<2> : !s32i]) {
        %c20 = cir.const #cir.int<20> : !s32i
        cir.store %c20, %ret : !s32i, !cir.ptr<!s32i>
        cir.yield
      }
      cir.case(default, []) {
        %c0 = cir.const #cir.int<0> : !s32i
        cir.store %c0, %ret : !s32i, !cir.ptr<!s32i>
        cir.yield
      }
      cir.yield
    }
    %v = cir.load %ret : !cir.ptr<!s32i>, !s32i
    cir.return %v : !s32i
  }
}
