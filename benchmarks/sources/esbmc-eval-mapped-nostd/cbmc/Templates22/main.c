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

char _str[30] = "func<int>(&x) == func<int>(x)";
char _str_1[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cbmc/Templates22/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
int int_func_int_(int* p0);
int int_func_int__2(int p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _Z4funcIiET_PS0_
int int_func_int_(int* v0) {
bb1:
  int* t2;
  int __retval3;
  t2 = v0;
  int* t4 = t2;
  int t5 = *t4;
  __retval3 = t5;
  int t6 = __retval3;
  return t6;
}

// function: _Z4funcIiET_S0_
int int_func_int__2(int v7) {
bb8:
  int t9;
  int __retval10;
  t9 = v7;
  int t11 = t9;
  __retval10 = t11;
  int t12 = __retval10;
  return t12;
}

// function: main
int main() {
bb13:
  int __retval14;
  int x15;
  int c16 = 0;
  __retval14 = c16;
  int c17 = 10;
  x15 = c17;
  int r18 = int_func_int_(&x15);
  int t19 = x15;
  int r20 = int_func_int__2(t19);
  _Bool c21 = ((r18 == r20)) ? 1 : 0;
  if (c21) {
  } else {
    char* cast22 = (char*)&(_str);
    char* c23 = _str_1;
    unsigned int c24 = 19;
    char* cast25 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast22, c23, c24, cast25);
  }
  int t26 = __retval14;
  return t26;
}

