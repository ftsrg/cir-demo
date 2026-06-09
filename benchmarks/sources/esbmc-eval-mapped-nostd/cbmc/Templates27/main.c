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
struct C_bool__int_ { int i; };

char _str[10] = "c.i == 10";
char _str_1[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cbmc/Templates27/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
void C_bool__int___C(struct C_bool__int_* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void void_check9_int__9_();
void void_check10_10_();
int main();

// function: _ZN1CIbiEC2Ev
void C_bool__int___C(struct C_bool__int_* v0) {
bb1:
  struct C_bool__int_* this2;
  this2 = v0;
  struct C_bool__int_* t3 = this2;
  int c4 = 10;
  t3->i = c4;
  return;
}

// function: _Z6check9IiLi9EEvv
void void_check9_int__9_() {
bb5:
  return;
}

// function: _Z7check10ILi10EEvv
void void_check10_10_() {
bb6:
  return;
}

// function: main
int main() {
bb7:
  int __retval8;
  struct C_bool__int_ c9;
  int c10 = 0;
  __retval8 = c10;
  C_bool__int___C(&c9);
  int t11 = c9.i;
  int c12 = 10;
  _Bool c13 = ((t11 == c12)) ? 1 : 0;
  if (c13) {
  } else {
    char* cast14 = (char*)&(_str);
    char* c15 = _str_1;
    unsigned int c16 = 31;
    char* cast17 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast14, c15, c16, cast17);
  }
  void_check9_int__9_();
  void_check10_10_();
  int t18 = __retval8;
  return t18;
}

