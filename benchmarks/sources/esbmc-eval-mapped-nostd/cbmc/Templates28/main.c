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
struct A_14_ { unsigned char __field0; };
struct B_5__4_ { unsigned char __field0; };

char _str[17] = "b.a.func() == 14";
char _str_1[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cbmc/Templates28/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
int A_14___func(struct A_14_* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _ZN1AILi14EE4funcEv
int A_14___func(struct A_14_* v0) {
bb1:
  struct A_14_* this2;
  int __retval3;
  this2 = v0;
  struct A_14_* t4 = this2;
  int c5 = 14;
  __retval3 = c5;
  int t6 = __retval3;
  return t6;
}

// function: main
int main() {
bb7:
  int __retval8;
  struct B_5__4_ b9;
  int c10 = 0;
  __retval8 = c10;
  struct A_14_* cast11 = (struct A_14_*)&(b9);
  int r12 = A_14___func(cast11);
  int c13 = 14;
  _Bool c14 = ((r12 == c13)) ? 1 : 0;
  if (c14) {
  } else {
    char* cast15 = (char*)&(_str);
    char* c16 = _str_1;
    unsigned int c17 = 25;
    char* cast18 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast15, c16, c17, cast18);
  }
  int t19 = __retval8;
  return t19;
}

