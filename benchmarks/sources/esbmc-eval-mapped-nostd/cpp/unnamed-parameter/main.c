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
struct a { int b; };

int f __attribute__((aligned(4))) = 42;
char _str[10] = "a.b == 42";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/unnamed-parameter/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
void a__a(struct a* p0, int p1, int* p2);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _ZN1aC2EiPi
void a__a(struct a* v0, int v1, int* v2) {
bb3:
  struct a* this4;
  int unnamed5;
  int* c6;
  this4 = v0;
  unnamed5 = v1;
  c6 = v2;
  struct a* t7 = this4;
  int* t8 = c6;
  int t9 = *t8;
  t7->b = t9;
  return;
}

// function: main
int main() {
bb10:
  int __retval11;
  struct a a12;
  int c13 = 0;
  __retval11 = c13;
  int c14 = 0;
  a__a(&a12, c14, &f);
  int t15 = a12.b;
  int c16 = 42;
  _Bool c17 = ((t15 == c16)) ? 1 : 0;
  if (c17) {
  } else {
    char* cast18 = (char*)&(_str);
    char* c19 = _str_1;
    unsigned int c20 = 21;
    char* cast21 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast18, c19, c20, cast21);
  }
  int t22 = __retval11;
  return t22;
}

