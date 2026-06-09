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

char _str[16] = "(True<int,0>())";
char _str_1[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cbmc/Templates25/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
_Bool bool_True_int__0_();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _Z4TrueIiLi0EEbv
_Bool bool_True_int__0_() {
bb0:
  _Bool __retval1;
  _Bool c2 = 1;
  __retval1 = c2;
  _Bool t3 = __retval1;
  return t3;
}

// function: main
int main() {
bb4:
  int __retval5;
  int c6 = 0;
  __retval5 = c6;
  _Bool r7 = bool_True_int__0_();
  if (r7) {
  } else {
    char* cast8 = (char*)&(_str);
    char* c9 = _str_1;
    unsigned int c10 = 15;
    char* cast11 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast8, c9, c10, cast11);
  }
  int t12 = __retval5;
  return t12;
}

