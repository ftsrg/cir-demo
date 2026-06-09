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

char _str[18] = "0 == ( b != true)";
char _str_1[119] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/gcc-template-tests/mem-partial2/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
_Bool outer_true___inner_true__false___test();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _ZN5outerILb1EE5innerILb1ELb0EE4testEv
_Bool outer_true___inner_true__false___test() {
bb0:
  _Bool __retval1;
  _Bool c2 = 1;
  __retval1 = c2;
  _Bool t3 = __retval1;
  return t3;
}

// function: main
int main() {
bb4:
  int __retval5;
  _Bool b6;
  int c7 = 0;
  __retval5 = c7;
  _Bool r8 = outer_true___inner_true__false___test();
  b6 = r8;
  int c9 = 0;
  _Bool t10 = b6;
  int cast11 = (int)t10;
  _Bool c12 = 1;
  int cast13 = (int)c12;
  _Bool c14 = ((cast11 != cast13)) ? 1 : 0;
  int cast15 = (int)c14;
  _Bool c16 = ((c9 == cast15)) ? 1 : 0;
  if (c16) {
  } else {
    char* cast17 = (char*)&(_str);
    char* c18 = _str_1;
    unsigned int c19 = 37;
    char* cast20 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast17, c18, c19, cast20);
  }
  int t21 = __retval5;
  return t21;
}

