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

char _str[2] = "0";
char _str_1[114] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/gcc-template-tests/array13/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
void* void__Foo_int__2__(int* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _Z3FooIA2_iEPvT_
void* void__Foo_int__2__(int* v0) {
bb1:
  int* arg2;
  void* __retval3;
  arg2 = v0;
  long c4 = 0;
  int* t5 = arg2;
  int* ptr6 = &(t5)[c4];
  void* cast7 = (void*)ptr6;
  __retval3 = cast7;
  void* t8 = __retval3;
  return t8;
}

// function: main
int main() {
bb9:
  int __retval10;
  int bry11[2];
  int c12 = 0;
  __retval10 = c12;
    int* cast13 = (int*)&(bry11);
    void* r14 = void__Foo_int__2__(cast13);
    int* cast15 = (int*)&(bry11);
    void* cast16 = (void*)cast15;
    _Bool c17 = ((r14 != cast16)) ? 1 : 0;
    if (c17) {
      char* cast18 = (char*)&(_str);
      char* c19 = _str_1;
      unsigned int c20 = 21;
      char* cast21 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast18, c19, c20, cast21);
    }
  int t22 = __retval10;
  return t22;
}

