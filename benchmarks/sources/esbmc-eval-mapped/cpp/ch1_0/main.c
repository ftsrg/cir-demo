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
char _str_1[97] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/ch1_0/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: main
int main() {
bb0:
  int __retval1;
  int c2 = 0;
  __retval1 = c2;
    int c3 = 1;
    _Bool cast4 = (_Bool)c3;
    _Bool ternary5;
    if (cast4) {
      _Bool c6 = 1;
      ternary5 = (_Bool)c6;
    } else {
      int c7 = 0;
      _Bool cast8 = (_Bool)c7;
      ternary5 = (_Bool)cast8;
    }
    if (ternary5) {
      char* cast9 = (char*)&(_str);
      char* c10 = _str_1;
      unsigned int c11 = 13;
      char* cast12 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast9, c10, c11, cast12);
    }
  int c13 = 0;
  __retval1 = c13;
  int t14 = __retval1;
  return t14;
}

