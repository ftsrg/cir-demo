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
struct A_bool_ { int b; };

char _str[11] = "a.b==false";
char _str_1[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cbmc/Templates18/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
void A_bool___A(struct A_bool_* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _ZN1AIbEC2Ev
void A_bool___A(struct A_bool_* v0) {
bb1:
  struct A_bool_* this2;
  this2 = v0;
  struct A_bool_* t3 = this2;
  return;
}

// function: main
int main() {
bb4:
  int __retval5;
  struct A_bool_ a6;
  int c7 = 0;
  __retval5 = c7;
  A_bool___A(&a6);
  _Bool c8 = 0;
  int cast9 = (int)c8;
  a6.b = cast9;
  int t10 = a6.b;
  _Bool c11 = 0;
  int cast12 = (int)c11;
  _Bool c13 = ((t10 == cast12)) ? 1 : 0;
  if (c13) {
  } else {
    char* cast14 = (char*)&(_str);
    char* c15 = _str_1;
    unsigned int c16 = 30;
    char* cast17 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast14, c15, c16, cast17);
  }
  int t18 = __retval5;
  return t18;
}

