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
struct A_B_ { unsigned char __field0; };
struct B { unsigned char __field0; };
struct C { unsigned char __field0; };
struct D { struct A_B_ __field0; };

int g __attribute__((aligned(4))) = 0;
char _str[6] = "g==10";
char _str_1[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cbmc/Templates6/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[6] = "g==20";
void C__C(struct C* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void C___C(struct C* p0);
void D__D(struct D* p0);
void D___D(struct D* p0);
int main();
void A_B___A(struct A_B_* p0);
void A_B____A(struct A_B_* p0);
void B__B(struct B* p0);
void B___B(struct B* p0);

// function: _ZN1CC2Ev
void C__C(struct C* v0) {
bb1:
  struct C* this2;
  this2 = v0;
  struct C* t3 = this2;
  struct A_B_* cast4 = (struct A_B_*)t3;
  A_B___A(cast4);
  return;
}

// function: _ZN1CD2Ev
void C___C(struct C* v5) {
bb6:
  struct C* this7;
  this7 = v5;
  struct C* t8 = this7;
  {
    struct A_B_* cast9 = (struct A_B_*)t8;
    A_B____A(cast9);
  }
  return;
}

// function: _ZN1DC2Ev
void D__D(struct D* v10) {
bb11:
  struct D* this12;
  this12 = v10;
  struct D* t13 = this12;
  struct A_B_* base14 = (struct A_B_*)((char *)t13 + 0);
  A_B___A(base14);
  return;
}

// function: _ZN1DD2Ev
void D___D(struct D* v15) {
bb16:
  struct D* this17;
  this17 = v15;
  struct D* t18 = this17;
  {
    struct A_B_* base19 = (struct A_B_*)((char *)t18 + 0);
    A_B____A(base19);
  }
  return;
}

// function: main
int main() {
bb20:
  int __retval21;
  int c22 = 0;
  __retval21 = c22;
    struct C c23;
    C__C(&c23);
      int t24 = g;
      int c25 = 10;
      _Bool c26 = ((t24 == c25)) ? 1 : 0;
      if (c26) {
      } else {
        char* cast27 = (char*)&(_str);
        char* c28 = _str_1;
        unsigned int c29 = 38;
        char* cast30 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast27, c28, c29, cast30);
      }
    {
      C___C(&c23);
    }
  int t31 = g;
  int c32 = 20;
  _Bool c33 = ((t31 == c32)) ? 1 : 0;
  if (c33) {
  } else {
    char* cast34 = (char*)&(_str_2);
    char* c35 = _str_1;
    unsigned int c36 = 41;
    char* cast37 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast34, c35, c36, cast37);
  }
    struct D d38;
    D__D(&d38);
      int t39 = g;
      int c40 = 10;
      _Bool c41 = ((t39 == c40)) ? 1 : 0;
      if (c41) {
      } else {
        char* cast42 = (char*)&(_str);
        char* c43 = _str_1;
        unsigned int c44 = 45;
        char* cast45 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast42, c43, c44, cast45);
      }
    {
      D___D(&d38);
    }
  int t46 = g;
  int c47 = 20;
  _Bool c48 = ((t46 == c47)) ? 1 : 0;
  if (c48) {
  } else {
    char* cast49 = (char*)&(_str_2);
    char* c50 = _str_1;
    unsigned int c51 = 48;
    char* cast52 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast49, c50, c51, cast52);
  }
  int t53 = __retval21;
  return t53;
}

// function: _ZN1AI1BEC2Ev
void A_B___A(struct A_B_* v54) {
bb55:
  struct A_B_* this56;
  this56 = v54;
  struct A_B_* t57 = this56;
  struct B* cast58 = (struct B*)t57;
  B__B(cast58);
  return;
}

// function: _ZN1AI1BED2Ev
void A_B____A(struct A_B_* v59) {
bb60:
  struct A_B_* this61;
  this61 = v59;
  struct A_B_* t62 = this61;
    int t63 = g;
    int u64 = t63 + 1;
    *&g = u64;
  {
    struct B* cast65 = (struct B*)t62;
    B___B(cast65);
  }
  return;
}

// function: _ZN1BC2Ev
void B__B(struct B* v66) {
bb67:
  struct B* this68;
  this68 = v66;
  struct B* t69 = this68;
  int c70 = 10;
  *&g = c70;
  return;
}

// function: _ZN1BD2Ev
void B___B(struct B* v71) {
bb72:
  struct B* this73;
  this73 = v71;
  struct B* t74 = this73;
  int c75 = 20;
  *&g = c75;
  return;
}

