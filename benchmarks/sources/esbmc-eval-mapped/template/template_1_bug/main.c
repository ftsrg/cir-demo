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
struct FixedArray25_int_ { int anValue[25]; };

char _str[26] = "sMyArray.anValue[10] == 5";
char _str_1[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/template/template_1_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[27] = "sMyArray.anValue[15] == 10";
char _str_3[26] = "sMyArray.anValue[10] != 5";
int* int__Value_int_(struct FixedArray25_int_* p0, int p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _Z5ValueIiERT_R12FixedArray25IS0_Ei
int* int__Value_int_(struct FixedArray25_int_* v0, int v1) {
bb2:
  struct FixedArray25_int_* rArray3;
  int nIndex4;
  int* __retval5;
  rArray3 = v0;
  nIndex4 = v1;
  int t6 = nIndex4;
  long cast7 = (long)t6;
  struct FixedArray25_int_* t8 = rArray3;
  __retval5 = &t8->anValue[cast7];
  int* t9 = __retval5;
  return t9;
}

// function: main
int main() {
bb10:
  int __retval11;
  struct FixedArray25_int_ sMyArray12;
  int c13 = 0;
  __retval11 = c13;
  int c14 = 5;
  int c15 = 10;
  int* r16 = int__Value_int_(&sMyArray12, c15);
  *r16 = c14;
  long c17 = 10;
  int t18 = sMyArray12.anValue[c17];
  int c19 = 5;
  _Bool c20 = ((t18 == c19)) ? 1 : 0;
  if (c20) {
  } else {
    char* cast21 = (char*)&(_str);
    char* c22 = _str_1;
    unsigned int c23 = 31;
    char* cast24 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast21, c22, c23, cast24);
  }
  int c25 = 10;
  int c26 = 15;
  int* r27 = int__Value_int_(&sMyArray12, c26);
  *r27 = c25;
  long c28 = 15;
  int t29 = sMyArray12.anValue[c28];
  int c30 = 10;
  _Bool c31 = ((t29 == c30)) ? 1 : 0;
  if (c31) {
  } else {
    char* cast32 = (char*)&(_str_2);
    char* c33 = _str_1;
    unsigned int c34 = 33;
    char* cast35 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast32, c33, c34, cast35);
  }
  long c36 = 10;
  int t37 = sMyArray12.anValue[c36];
  int c38 = 5;
  _Bool c39 = ((t37 != c38)) ? 1 : 0;
  if (c39) {
  } else {
    char* cast40 = (char*)&(_str_3);
    char* c41 = _str_1;
    unsigned int c42 = 34;
    char* cast43 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast40, c41, c42, cast43);
  }
  int c44 = 0;
  __retval11 = c44;
  int t45 = __retval11;
  return t45;
}

