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

int a __attribute__((aligned(4))) = 0;
int* dev_a __attribute__((aligned(8)));
char _str[14] = "dev_a != NULL";
char _str_1[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/operator_new/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[12] = "*dev_a == 0";
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: main
int main() {
bb0:
  int __retval1;
  int c2 = 0;
  __retval1 = c2;
  unsigned long c3 = 4;
  void* r4 = operator_new(c3);
  int* cast5 = (int*)r4;
  dev_a = cast5;
  int* t6 = dev_a;
  int* c7 = ((void*)0);
  _Bool c8 = ((t6 != c7)) ? 1 : 0;
  if (c8) {
  } else {
    char* cast9 = (char*)&(_str);
    char* c10 = _str_1;
    unsigned int c11 = 20;
    char* cast12 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast9, c10, c11, cast12);
  }
  int* t13 = dev_a;
  int t14 = *t13;
  int c15 = 0;
  _Bool c16 = ((t14 == c15)) ? 1 : 0;
  if (c16) {
  } else {
    char* cast17 = (char*)&(_str_2);
    char* c18 = _str_1;
    unsigned int c19 = 21;
    char* cast20 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast17, c18, c19, cast20);
  }
  int c21 = 0;
  __retval1 = c21;
  int t22 = __retval1;
  return t22;
}

