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
struct A_true_ { _Bool b; };

struct A_true_ a;
struct A_true_ b;
struct A_true_ c;
struct A_true_ d;
struct A_true_ e;
char _str[50] = "0 == ( (a.b && b.b && c.b && d.b && e.b) ? 0 : 1)";
char _str_1[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/gcc-template-tests/arg6/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
void A_true___A(struct A_true_* p0);
void __cxx_global_var_init();
void __cxx_global_var_init_1();
void __cxx_global_var_init_2();
void __cxx_global_var_init_3();
void __cxx_global_var_init_4();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();
__attribute__((constructor)) void _GLOBAL__sub_I_main_cpp();

// function: _ZN1AILb1EEC2Ev
void A_true___A(struct A_true_* v0) {
bb1:
  struct A_true_* this2;
  this2 = v0;
  struct A_true_* t3 = this2;
  _Bool c4 = 1;
  t3->b = c4;
  return;
}

// function: __cxx_global_var_init
void __cxx_global_var_init() {
bb5:
  A_true___A(&a);
  return;
}

// function: __cxx_global_var_init.1
void __cxx_global_var_init_1() {
bb6:
  A_true___A(&b);
  return;
}

// function: __cxx_global_var_init.2
void __cxx_global_var_init_2() {
bb7:
  A_true___A(&c);
  return;
}

// function: __cxx_global_var_init.3
void __cxx_global_var_init_3() {
bb8:
  A_true___A(&d);
  return;
}

// function: __cxx_global_var_init.4
void __cxx_global_var_init_4() {
bb9:
  A_true___A(&e);
  return;
}

// function: main
int main() {
bb10:
  int __retval11;
  int c12 = 0;
  __retval11 = c12;
  int c13 = 0;
  _Bool t14 = (&a)->b;
  _Bool ternary15;
  if (t14) {
    _Bool t16 = (&b)->b;
    ternary15 = (_Bool)t16;
  } else {
    _Bool c17 = 0;
    ternary15 = (_Bool)c17;
  }
  _Bool ternary18;
  if (ternary15) {
    _Bool t19 = (&c)->b;
    ternary18 = (_Bool)t19;
  } else {
    _Bool c20 = 0;
    ternary18 = (_Bool)c20;
  }
  _Bool ternary21;
  if (ternary18) {
    _Bool t22 = (&d)->b;
    ternary21 = (_Bool)t22;
  } else {
    _Bool c23 = 0;
    ternary21 = (_Bool)c23;
  }
  _Bool ternary24;
  if (ternary21) {
    _Bool t25 = (&e)->b;
    ternary24 = (_Bool)t25;
  } else {
    _Bool c26 = 0;
    ternary24 = (_Bool)c26;
  }
  int c27 = 0;
  int c28 = 1;
  int sel29 = ternary24 ? c27 : c28;
  _Bool c30 = ((c13 == sel29)) ? 1 : 0;
  if (c30) {
  } else {
    char* cast31 = (char*)&(_str);
    char* c32 = _str_1;
    unsigned int c33 = 22;
    char* cast34 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast31, c32, c33, cast34);
  }
  int t35 = __retval11;
  return t35;
}

// function: _GLOBAL__sub_I_main.cpp
__attribute__((constructor)) void _GLOBAL__sub_I_main_cpp() {
bb36:
  __cxx_global_var_init();
  __cxx_global_var_init_1();
  __cxx_global_var_init_2();
  __cxx_global_var_init_3();
  __cxx_global_var_init_4();
  return;
}

