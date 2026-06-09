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

char _str[5] = "a==5";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/while_declaration/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
void operator_delete(void* p0, unsigned long p1) { free(p0); }
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: main
int main() {
bb0:
  int __retval1;
  int a2;
  int c3 = 0;
  __retval1 = c3;
  int c4 = 0;
  a2 = c4;
    int* x5;
    int* __new_result6;
    while (1) {
      unsigned long c7 = 4;
      void* r8 = operator_new(c7);
        int* cast9 = (int*)r8;
        __new_result6 = cast9;
      int* t10 = __new_result6;
      x5 = t10;
      int* t11 = x5;
      _Bool cast12 = (_Bool)t11;
      if (!cast12) break;
        int t13 = a2;
        int u14 = t13 + 1;
        a2 = u14;
          int t15 = a2;
          int c16 = 5;
          _Bool c17 = ((t15 == c16)) ? 1 : 0;
          if (c17) {
            break;
          }
    }
  int t18 = a2;
  int c19 = 5;
  _Bool c20 = ((t18 == c19)) ? 1 : 0;
  if (c20) {
  } else {
    char* cast21 = (char*)&(_str);
    char* c22 = _str_1;
    unsigned int c23 = 22;
    char* cast24 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast21, c22, c23, cast24);
  }
  int c25 = 0;
  __retval1 = c25;
  int t26 = __retval1;
  return t26;
}

