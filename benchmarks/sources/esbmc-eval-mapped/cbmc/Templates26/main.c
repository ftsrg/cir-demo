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
struct A_12_ { unsigned char __field0; };

char _str[15] = "a.func() == 12";
char _str_1[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cbmc/Templates26/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
int A_12___func(struct A_12_* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _ZN1AILi12EE4funcEv
int A_12___func(struct A_12_* v0) {
bb1:
  struct A_12_* this2;
  int __retval3;
  this2 = v0;
  struct A_12_* t4 = this2;
  int c5 = 12;
  __retval3 = c5;
  int t6 = __retval3;
  return t6;
}

// function: main
int main() {
bb7:
  int __retval8;
  struct A_12_ a9;
  int c10 = 0;
  __retval8 = c10;
  int r11 = A_12___func(&a9);
  int c12 = 12;
  _Bool c13 = ((r11 == c12)) ? 1 : 0;
  if (c13) {
  } else {
    char* cast14 = (char*)&(_str);
    char* c15 = _str_1;
    unsigned int c16 = 24;
    char* cast17 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast14, c15, c16, cast17);
  }
  int t18 = __retval8;
  return t18;
}

