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

char _str[7] = "c!=a+b";
char _str_1[97] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/ch1_6/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern int nondet_int();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: main
int main() {
bb0:
  int __retval1;
  int a2;
  int b3;
  int c4;
  int c5 = 0;
  __retval1 = c5;
  int r6 = nondet_int();
  a2 = r6;
  int r7 = nondet_int();
  b3 = r7;
  int t8 = a2;
  int t9 = b3;
  int b10 = t8 + t9;
  c4 = b10;
  int t11 = c4;
  int t12 = a2;
  int t13 = b3;
  int b14 = t12 + t13;
  _Bool c15 = ((t11 != b14)) ? 1 : 0;
  if (c15) {
  } else {
    char* cast16 = (char*)&(_str);
    char* c17 = _str_1;
    unsigned int c18 = 19;
    char* cast19 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast16, c17, c18, cast19);
  }
  int c20 = 0;
  __retval1 = c20;
  int t21 = __retval1;
  return t21;
}

