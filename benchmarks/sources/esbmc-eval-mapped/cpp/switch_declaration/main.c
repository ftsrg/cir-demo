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
char _str_1[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/switch_declaration/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: main
int main() {
bb0:
  int __retval1;
  int c2 = 0;
  __retval1 = c2;
    int x3;
    int c4 = 0;
    x3 = c4;
    int t5 = x3;
    switch (t5) {
    case 1:
      char* cast6 = (char*)&(_str);
      char* c7 = _str_1;
      unsigned int c8 = 15;
      char* cast9 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast6, c7, c8, cast9);
      break;
    case 0:
      break;
    default:
      char* cast10 = (char*)&(_str);
      char* c11 = _str_1;
      unsigned int c12 = 22;
      char* cast13 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast10, c11, c12, cast13);
      break;
    }
  int c14 = 0;
  __retval1 = c14;
  int t15 = __retval1;
  return t15;
}

