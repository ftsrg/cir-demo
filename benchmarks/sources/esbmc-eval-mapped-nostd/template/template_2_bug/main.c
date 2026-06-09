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

char _str[13] = "Value1(x)!=5";
char _str_1[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/template/template_2_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
int* int__Value1_int_(int* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _Z6Value1IiERT_S1_
int* int__Value1_int_(int* v0) {
bb1:
  int* value2;
  int* __retval3;
  value2 = v0;
  int* t4 = value2;
  __retval3 = t4;
  int* t5 = __retval3;
  return t5;
}

// function: main
int main() {
bb6:
  int __retval7;
  int x8;
  int c9 = 0;
  __retval7 = c9;
  int c10 = 5;
  x8 = c10;
  int* r11 = int__Value1_int_(&x8);
  int t12 = *r11;
  int c13 = 5;
  _Bool c14 = ((t12 != c13)) ? 1 : 0;
  if (c14) {
  } else {
    char* cast15 = (char*)&(_str);
    char* c16 = _str_1;
    unsigned int c17 = 21;
    char* cast18 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast15, c16, c17, cast18);
  }
  int c19 = 0;
  __retval7 = c19;
  int t20 = __retval7;
  return t20;
}

