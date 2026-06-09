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
struct Bar_int_ { unsigned char __field0; };
struct Baz { unsigned char __field0; };
struct Foo_int_ { unsigned char __field0; };

char _str[17] = "0 == (bar.foo())";
char _str_1[113] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/gcc-template-tests/using3/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
int Foo_int___i(struct Foo_int_* p0, int p1);
int Baz__k(struct Baz* p0, int p1);
int Bar_int___foo(struct Bar_int_* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _ZN3FooIiE1iEi
int Foo_int___i(struct Foo_int_* v0, int v1) {
bb2:
  struct Foo_int_* this3;
  int unnamed4;
  int __retval5;
  this3 = v0;
  unnamed4 = v1;
  struct Foo_int_* t6 = this3;
  int c7 = 1;
  __retval5 = c7;
  int t8 = __retval5;
  return t8;
}

// function: _ZN3Baz1kEi
int Baz__k(struct Baz* v9, int v10) {
bb11:
  struct Baz* this12;
  int unnamed13;
  int __retval14;
  this12 = v9;
  unnamed13 = v10;
  struct Baz* t15 = this12;
  int c16 = 2;
  __retval14 = c16;
  int t17 = __retval14;
  return t17;
}

// function: _ZN3BarIiE3fooEv
int Bar_int___foo(struct Bar_int_* v18) {
bb19:
  struct Bar_int_* this20;
  int __retval21;
  this20 = v18;
  struct Bar_int_* t22 = this20;
    struct Foo_int_* base23 = (struct Foo_int_*)((char *)t22 + 0);
    int c24 = 1;
    int r25 = Foo_int___i(base23, c24);
    int c26 = 1;
    _Bool c27 = ((r25 != c26)) ? 1 : 0;
    if (c27) {
      int c28 = 1;
      __retval21 = c28;
      int t29 = __retval21;
      return t29;
    }
    struct Baz* base30 = (struct Baz*)((char *)t22 + 0);
    int c31 = 1;
    int r32 = Baz__k(base30, c31);
    int c33 = 2;
    _Bool c34 = ((r32 != c33)) ? 1 : 0;
    if (c34) {
      int c35 = 2;
      __retval21 = c35;
      int t36 = __retval21;
      return t36;
    }
  int c37 = 0;
  __retval21 = c37;
  int t38 = __retval21;
  return t38;
}

// function: main
int main() {
bb39:
  int __retval40;
  struct Bar_int_ bar41;
  int c42 = 0;
  __retval40 = c42;
  int c43 = 0;
  int r44 = Bar_int___foo(&bar41);
  _Bool c45 = ((c43 == r44)) ? 1 : 0;
  if (c45) {
  } else {
    char* cast46 = (char*)&(_str);
    char* c47 = _str_1;
    unsigned int c48 = 49;
    char* cast49 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast46, c47, c48, cast49);
  }
  int t50 = __retval40;
  return t50;
}

