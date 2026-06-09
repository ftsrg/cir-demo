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
struct Y_B_ { unsigned char __field0; };

int _ZN1B1AE __attribute__((aligned(4))) = 0;
char _str[10] = "B::A == 1";
char _str_1[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cbmc/Templates5/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
void Y_B___f(struct Y_B_* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _ZN1YI1BE1fEv
void Y_B___f(struct Y_B_* v0) {
bb1:
  struct Y_B_* this2;
  this2 = v0;
  struct Y_B_* t3 = this2;
  int t4 = _ZN1B1AE;
  int u5 = t4 + 1;
  *&_ZN1B1AE = u5;
  return;
}

// function: main
int main() {
bb6:
  int __retval7;
  struct Y_B_ y8;
  int c9 = 0;
  __retval7 = c9;
  Y_B___f(&y8);
  int t10 = _ZN1B1AE;
  int c11 = 1;
  _Bool c12 = ((t10 == c11)) ? 1 : 0;
  if (c12) {
  } else {
    char* cast13 = (char*)&(_str);
    char* c14 = _str_1;
    unsigned int c15 = 30;
    char* cast16 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast13, c14, c15, cast16);
  }
  int t17 = __retval7;
  return t17;
}

