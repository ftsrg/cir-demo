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

char _str[8] = "z==1.0f";
char _str_1[124] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/template_function_specialization/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[7] = "y==3.0";
char _str_3[5] = "x==2";
int int_teste_int_(int p0, int p1, int p2);
double double_teste_double_(double p0, double p1, double p2);
float float_teste_float_(float p0, float p1, float p2);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _Z5testeIiET_S0_S0_S0_
int int_teste_int_(int v0, int v1, int v2) {
bb3:
  int value14;
  int value25;
  int value36;
  int __retval7;
  value14 = v0;
  value25 = v1;
  value36 = v2;
  int t8 = value25;
  __retval7 = t8;
  int t9 = __retval7;
  return t9;
}

// function: _Z5testeIdET_S0_S0_S0_
double double_teste_double_(double v10, double v11, double v12) {
bb13:
  double value114;
  double value215;
  double value316;
  double __retval17;
  value114 = v10;
  value215 = v11;
  value316 = v12;
  double t18 = value316;
  __retval17 = t18;
  double t19 = __retval17;
  return t19;
}

// function: _Z5testeIfET_S0_S0_S0_
float float_teste_float_(float v20, float v21, float v22) {
bb23:
  float value124;
  float value225;
  float value326;
  float __retval27;
  value124 = v20;
  value225 = v21;
  value326 = v22;
  float t28 = value124;
  __retval27 = t28;
  float t29 = __retval27;
  return t29;
}

// function: main
int main() {
bb30:
  int __retval31;
  float z32;
  double y33;
  int x34;
  int c35 = 0;
  __retval31 = c35;
  float c36 = 0x1p0f;
  float c37 = 0x1p1f;
  float c38 = 0x1.8p1f;
  float r39 = float_teste_float_(c36, c37, c38);
  z32 = r39;
  float t40 = z32;
  float c41 = 0x1p0f;
  _Bool c42 = ((t40 == c41)) ? 1 : 0;
  if (c42) {
  } else {
    char* cast43 = (char*)&(_str);
    char* c44 = _str_1;
    unsigned int c45 = 31;
    char* cast46 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast43, c44, c45, cast46);
  }
  double c47 = 0x1p0;
  double c48 = 0x1p1;
  double c49 = 0x1.8p1;
  double r50 = double_teste_double_(c47, c48, c49);
  y33 = r50;
  double t51 = y33;
  double c52 = 0x1.8p1;
  _Bool c53 = ((t51 == c52)) ? 1 : 0;
  if (c53) {
  } else {
    char* cast54 = (char*)&(_str_2);
    char* c55 = _str_1;
    unsigned int c56 = 34;
    char* cast57 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast54, c55, c56, cast57);
  }
  int c58 = 1;
  int c59 = 2;
  int c60 = 3;
  int r61 = int_teste_int_(c58, c59, c60);
  x34 = r61;
  int t62 = x34;
  int c63 = 2;
  _Bool c64 = ((t62 == c63)) ? 1 : 0;
  if (c64) {
  } else {
    char* cast65 = (char*)&(_str_3);
    char* c66 = _str_1;
    unsigned int c67 = 37;
    char* cast68 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast65, c66, c67, cast68);
  }
  int t69 = __retval31;
  return t69;
}

