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
struct B_double_ { double t; };
struct B_long_ { long __field0; };

char _str[2] = "0";
char _str_1[114] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/gcc-template-tests/using17/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
long B_long___f(struct B_long_* p0);
int main();

// function: _ZN1BIlE1fEv
long B_long___f(struct B_long_* v0) {
bb1:
  struct B_long_* this2;
  long __retval3;
  long i4;
  this2 = v0;
  struct B_long_* t5 = this2;
  long c6 = 1;
  i4 = c6;
  long t7 = i4;
  __retval3 = t7;
  long t8 = __retval3;
  return t8;
}

// function: main
int main() {
bb9:
  int __retval10;
  int t11;
  struct B_double_ b12;
  struct B_long_ b213;
  double tt14;
  int c15 = 0;
  __retval10 = c15;
  int c16 = 4;
  t11 = c16;
    int t17 = t11;
    int c18 = 4;
    _Bool c19 = ((t17 != c18)) ? 1 : 0;
    if (c19) {
      char* cast20 = (char*)&(_str);
      char* c21 = _str_1;
      unsigned int c22 = 38;
      char* cast23 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast20, c21, c22, cast23);
    }
  int c24 = 3;
  double cast25 = (double)c24;
  b12.t = cast25;
    double t26 = b12.t;
    int c27 = 3;
    double cast28 = (double)c27;
    _Bool c29 = ((t26 != cast28)) ? 1 : 0;
    if (c29) {
      char* cast30 = (char*)&(_str);
      char* c31 = _str_1;
      unsigned int c32 = 43;
      char* cast33 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast30, c31, c32, cast33);
    }
    long r34 = B_long___f(&b213);
    long c35 = 1;
    _Bool c36 = ((r34 != c35)) ? 1 : 0;
    if (c36) {
      char* cast37 = (char*)&(_str);
      char* c38 = _str_1;
      unsigned int c39 = 47;
      char* cast40 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast37, c38, c39, cast40);
    }
  int c41 = 12;
  double cast42 = (double)c41;
  tt14 = cast42;
    double t43 = tt14;
    int c44 = 12;
    double cast45 = (double)c44;
    _Bool c46 = ((t43 != cast45)) ? 1 : 0;
    if (c46) {
      char* cast47 = (char*)&(_str);
      char* c48 = _str_1;
      unsigned int c49 = 51;
      char* cast50 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast47, c48, c49, cast50);
    }
  int t51 = __retval10;
  return t51;
}

