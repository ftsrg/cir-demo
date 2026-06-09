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

char __const_main_src[3] = "ht";
char _str[13] = "dest[1]=='t'";
char _str_1[98] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/memcpy/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
void* memcpy(void* p0, void* p1, int p2);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _Z6memcpyPvPKvi
void* memcpy(void* v0, void* v1, int v2) {
bb3:
  void* dst4;
  void* src5;
  int n6;
  void* __retval7;
  char* cdst8;
  char* csrc9;
  dst4 = v0;
  src5 = v1;
  n6 = v2;
  void* t10 = dst4;
  char* cast11 = (char*)t10;
  cdst8 = cast11;
  void* t12 = src5;
  char* cast13 = (char*)t12;
  csrc9 = cast13;
    int i14;
    int c15 = 0;
    i14 = c15;
    while (1) {
      int t17 = i14;
      int t18 = n6;
      _Bool c19 = ((t17 < t18)) ? 1 : 0;
      if (!c19) break;
      int t20 = i14;
      long cast21 = (long)t20;
      char* t22 = csrc9;
      char* ptr23 = &(t22)[cast21];
      char t24 = *ptr23;
      int t25 = i14;
      long cast26 = (long)t25;
      char* t27 = cdst8;
      char* ptr28 = &(t27)[cast26];
      *ptr28 = t24;
    for_step16: ;
      int t29 = i14;
      int u30 = t29 + 1;
      i14 = u30;
    }
  void* t31 = dst4;
  __retval7 = t31;
  void* t32 = __retval7;
  return t32;
}

// function: main
int main() {
bb33:
  int __retval34;
  char src35[3];
  char dest36[3];
  int c37 = 0;
  __retval34 = c37;
  // array copy
  __builtin_memcpy(src35, __const_main_src, (unsigned long)3 * sizeof(__const_main_src[0]));
  char* cast38 = (char*)&(dest36);
  void* cast39 = (void*)cast38;
  char* cast40 = (char*)&(src35);
  void* cast41 = (void*)cast40;
  int c42 = 3;
  void* r43 = memcpy(cast39, cast41, c42);
  long c44 = 1;
  char t45 = dest36[c44];
  int cast46 = (int)t45;
  int c47 = 116;
  _Bool c48 = ((cast46 == c47)) ? 1 : 0;
  if (c48) {
  } else {
    char* cast49 = (char*)&(_str);
    char* c50 = _str_1;
    unsigned int c51 = 27;
    char* cast52 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast49, c50, c51, cast52);
  }
  int c53 = 0;
  __retval34 = c53;
  int t54 = __retval34;
  return t54;
}

