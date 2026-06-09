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

char _str[20] = "C<int>::k[0] == 'C'";
char _str_1[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cbmc/Templates31/main.cpp";
char __PRETTY_FUNCTION___main[23] = "int main(int, char **)";
char _str_2[21] = "C<char>::k[0] == 'C'";
char _str_3[2] = "C";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main(int p0, char** p1);

char* _ZN1CIiE1kE __attribute__((aligned(8))) = (char*)(_str_3);
char* _ZN1CIcE1kE __attribute__((aligned(8))) = (char*)(_str_3);
// function: main
int main(int v0, char** v1) {
bb2:
  int argc3;
  char** argv4;
  int __retval5;
  argc3 = v0;
  argv4 = v1;
  int c6 = 0;
  __retval5 = c6;
  long c7 = 0;
  char* t8 = _ZN1CIiE1kE;
  char* ptr9 = &(t8)[c7];
  char t10 = *ptr9;
  int cast11 = (int)t10;
  int c12 = 67;
  _Bool c13 = ((cast11 == c12)) ? 1 : 0;
  if (c13) {
  } else {
    char* cast14 = (char*)&(_str);
    char* c15 = _str_1;
    unsigned int c16 = 21;
    char* cast17 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast14, c15, c16, cast17);
  }
  long c18 = 0;
  char* t19 = _ZN1CIcE1kE;
  char* ptr20 = &(t19)[c18];
  char t21 = *ptr20;
  int cast22 = (int)t21;
  int c23 = 67;
  _Bool c24 = ((cast22 == c23)) ? 1 : 0;
  if (c24) {
  } else {
    char* cast25 = (char*)&(_str_2);
    char* c26 = _str_1;
    unsigned int c27 = 22;
    char* cast28 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast25, c26, c27, cast28);
  }
  int c29 = 0;
  __retval5 = c29;
  int t30 = __retval5;
  return t30;
}

