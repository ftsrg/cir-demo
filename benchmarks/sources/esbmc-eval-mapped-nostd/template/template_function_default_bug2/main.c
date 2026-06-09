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

char _str[5] = "s==2";
char _str_1[127] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/template/template_function_default_bug2/main.cpp";
char __PRETTY_FUNCTION____Z1fIidEvT_T0_[35] = "void f(S, T) [S = int, T = double]";
char _str_2[5] = "t==0";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void void_f_int__double_(int p0, double p1);
int main();

// function: _Z1fIidEvT_T0_
void void_f_int__double_(int v0, double v1) {
bb2:
  int s3;
  double t4;
  s3 = v0;
  t4 = v1;
  int t5 = s3;
  int c6 = 2;
  _Bool c7 = ((t5 == c6)) ? 1 : 0;
  if (c7) {
  } else {
    char* cast8 = (char*)&(_str);
    char* c9 = _str_1;
    unsigned int c10 = 13;
    char* cast11 = (char*)&(__PRETTY_FUNCTION____Z1fIidEvT_T0_);
    __assert_fail(cast8, c9, c10, cast11);
  }
  double t12 = t4;
  int c13 = 0;
  double cast14 = (double)c13;
  _Bool c15 = ((t12 == cast14)) ? 1 : 0;
  if (c15) {
  } else {
    char* cast16 = (char*)&(_str_2);
    char* c17 = _str_1;
    unsigned int c18 = 14;
    char* cast19 = (char*)&(__PRETTY_FUNCTION____Z1fIidEvT_T0_);
    __assert_fail(cast16, c17, c18, cast19);
  }
  return;
}

// function: main
int main() {
bb20:
  int __retval21;
  int c22 = 0;
  __retval21 = c22;
  int c23 = 2;
  int c24 = 0;
  double cast25 = (double)c24;
  void_f_int__double_(c23, cast25);
  int c26 = 2;
  int c27 = 3;
  double cast28 = (double)c27;
  void_f_int__double_(c26, cast28);
  int c29 = 0;
  __retval21 = c29;
  int t30 = __retval21;
  return t30;
}

