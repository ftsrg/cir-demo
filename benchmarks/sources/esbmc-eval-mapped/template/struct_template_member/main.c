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
struct Foo { unsigned char __field0; };

int int_Foo__bar_int_(struct Foo* p0);
int main();

// function: _ZN3Foo3barIiEET_v
int int_Foo__bar_int_(struct Foo* v0) {
bb1:
  struct Foo* this2;
  int __retval3;
  this2 = v0;
  struct Foo* t4 = this2;
  int c5 = 0;
  __retval3 = c5;
  int t6 = __retval3;
  return t6;
}

// function: main
int main() {
bb7:
  int __retval8;
  struct Foo f9;
  int c10 = 0;
  __retval8 = c10;
  int r11 = int_Foo__bar_int_(&f9);
  int c12 = 0;
  __retval8 = c12;
  int t13 = __retval8;
  return t13;
}

