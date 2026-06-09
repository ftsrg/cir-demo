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

char _str[2] = "a";
char _str_1[2] = "b";
char _str_2[9] = "0 == (1)";
char _str_3[113] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/gcc-template-tests/spec29/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
int int_qCompare_char_(char* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _Z8qCompareIcEiPKT_S2_
int int_qCompare_char_(char* v0, char* v1) {
bb2:
  char* t13;
  char* t24;
  int __retval5;
  t13 = v0;
  t24 = v1;
  int c6 = 4;
  __retval5 = c6;
  int t7 = __retval5;
  return t7;
}

// function: main
int main() {
bb8:
  int __retval9;
  int c10 = 0;
  __retval9 = c10;
    char* cast11 = (char*)&(_str);
    char* cast12 = (char*)&(_str_1);
    int r13 = int_qCompare_char_(cast11, cast12);
    int c14 = 4;
    _Bool c15 = ((r13 != c14)) ? 1 : 0;
    if (c15) {
      char* cast16 = (char*)&(_str_2);
      char* c17 = _str_3;
      unsigned int c18 = 20;
      char* cast19 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast16, c17, c18, cast19);
    }
  int t20 = __retval9;
  return t20;
}

