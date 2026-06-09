/*
 * Copyright 2025 Budapest University of Technology and Economics
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Struct definitions (auto-parsed)
struct B { int i; };
struct A_B_ { struct B t; };

char _str[11] = "a.t.i == 0";
char _str_1[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cbmc/Templates16/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
void A_B___A(struct A_B_* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();
void B__B(struct B* p0);

// function: _ZN1AI1BEC2Ev
void A_B___A(struct A_B_* v0) {
bb1:
  struct A_B_* this2;
  this2 = v0;
  struct A_B_* t3 = this2;
  B__B(&t3->t);
  return;
}

// function: main
int main() {
bb4:
  int __retval5;
  struct A_B_ a6;
  int c7 = 0;
  __retval5 = c7;
  A_B___A(&a6);
  int t8 = a6.t.i;
  int c9 = 0;
  _Bool c10 = ((t8 == c9)) ? 1 : 0;
  if (c10) {
  } else {
    char* cast11 = (char*)&(_str);
    char* c12 = _str_1;
    unsigned int c13 = 25;
    char* cast14 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast11, c12, c13, cast14);
  }
  int t15 = __retval5;
  return t15;
}

// function: _ZN1BC2Ev
void B__B(struct B* v16) {
bb17:
  struct B* this18;
  this18 = v16;
  struct B* t19 = this18;
  int c20 = 0;
  t19->i = c20;
  return;
}

