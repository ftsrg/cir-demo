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
struct A_double_ { double t; };
struct A_int_ { int t; };
struct A_A_double__ { struct A_double_ t; };
struct A_A_int__ { struct A_int_ t; };

char _str[12] = "a1.t.t==3.0";
char _str_1[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cbmc/Templates7/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[10] = "a2.t.t==2";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: main
int main() {
bb0:
  int __retval1;
  struct A_A_double__ a12;
  struct A_A_int__ a23;
  int c4 = 0;
  __retval1 = c4;
  double c5 = 0x1.8p1;
  a12.t.t = c5;
  double t6 = a12.t.t;
  double c7 = 0x1.8p1;
  _Bool c8 = ((t6 == c7)) ? 1 : 0;
  if (c8) {
  } else {
    char* cast9 = (char*)&(_str);
    char* c10 = _str_1;
    unsigned int c11 = 23;
    char* cast12 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast9, c10, c11, cast12);
  }
  int c13 = 2;
  a23.t.t = c13;
  int t14 = a23.t.t;
  int c15 = 2;
  _Bool c16 = ((t14 == c15)) ? 1 : 0;
  if (c16) {
  } else {
    char* cast17 = (char*)&(_str_2);
    char* c18 = _str_1;
    unsigned int c19 = 26;
    char* cast20 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast17, c18, c19, cast20);
  }
  int t21 = __retval1;
  return t21;
}

