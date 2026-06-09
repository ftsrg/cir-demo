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
struct A_bool_ { _Bool b; };

char _str[11] = "a.b==false";
char _str_1[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cbmc/Templates17/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: main
int main() {
bb0:
  int __retval1;
  struct A_bool_ a2;
  int c3 = 0;
  __retval1 = c3;
  _Bool c4 = 0;
  a2.b = c4;
  _Bool t5 = a2.b;
  int cast6 = (int)t5;
  _Bool c7 = 0;
  int cast8 = (int)c7;
  _Bool c9 = ((cast6 == cast8)) ? 1 : 0;
  if (c9) {
  } else {
    char* cast10 = (char*)&(_str);
    char* c11 = _str_1;
    unsigned int c12 = 28;
    char* cast13 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast10, c11, c12, cast13);
  }
  int t14 = __retval1;
  return t14;
}

