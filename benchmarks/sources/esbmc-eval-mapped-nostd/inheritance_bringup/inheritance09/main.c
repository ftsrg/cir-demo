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
struct Base1 { int value; };
struct Base2 { char letter; };
struct Derived { struct Base1 __field0; struct Base2 __field1; double real; };

char _str[22] = "base1.getData() == 10";
char _str_1[121] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/inheritance_bringup/inheritance09/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[23] = "base2.getData() == 'Z'";
char _str_3[30] = "derived.Base1::getData() == 7";
char _str_4[32] = "derived.Base2::getData() == 'A'";
char _str_5[25] = "derived.getReal() == 3.5";
char _str_6[25] = "base1Ptr->getData() == 7";
char _str_7[27] = "base2Ptr->getData() == 'A'";
void Base1__Base1(struct Base1* p0, int p1);
void Base2__Base2(struct Base2* p0, char p1);
void Derived__Derived(struct Derived* p0, int p1, char p2, double p3);
int Base1__getData___const(struct Base1* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
char Base2__getData___const(struct Base2* p0);
double Derived__getReal___const(struct Derived* p0);
int main();

// function: _ZN5Base1C2Ei
void Base1__Base1(struct Base1* v0, int v1) {
bb2:
  struct Base1* this3;
  int parameterValue4;
  this3 = v0;
  parameterValue4 = v1;
  struct Base1* t5 = this3;
  int t6 = parameterValue4;
  t5->value = t6;
  return;
}

// function: _ZN5Base2C2Ec
void Base2__Base2(struct Base2* v7, char v8) {
bb9:
  struct Base2* this10;
  char characterData11;
  this10 = v7;
  characterData11 = v8;
  struct Base2* t12 = this10;
  char t13 = characterData11;
  t12->letter = t13;
  return;
}

// function: _ZN7DerivedC2Eicd
void Derived__Derived(struct Derived* v14, int v15, char v16, double v17) {
bb18:
  struct Derived* this19;
  int integer20;
  char character21;
  double double122;
  this19 = v14;
  integer20 = v15;
  character21 = v16;
  double122 = v17;
  struct Derived* t23 = this19;
  struct Base1* base24 = (struct Base1*)((char *)t23 + 0);
  int t25 = integer20;
  Base1__Base1(base24, t25);
  struct Base2* base26 = (struct Base2*)((char *)t23 + 4);
  char t27 = character21;
  Base2__Base2(base26, t27);
  double t28 = double122;
  t23->real = t28;
  return;
}

// function: _ZNK5Base17getDataEv
int Base1__getData___const(struct Base1* v29) {
bb30:
  struct Base1* this31;
  int __retval32;
  this31 = v29;
  struct Base1* t33 = this31;
  int t34 = t33->value;
  __retval32 = t34;
  int t35 = __retval32;
  return t35;
}

// function: _ZNK5Base27getDataEv
char Base2__getData___const(struct Base2* v36) {
bb37:
  struct Base2* this38;
  char __retval39;
  this38 = v36;
  struct Base2* t40 = this38;
  char t41 = t40->letter;
  __retval39 = t41;
  char t42 = __retval39;
  return t42;
}

// function: _ZNK7Derived7getRealEv
double Derived__getReal___const(struct Derived* v43) {
bb44:
  struct Derived* this45;
  double __retval46;
  this45 = v43;
  struct Derived* t47 = this45;
  double t48 = t47->real;
  __retval46 = t48;
  double t49 = __retval46;
  return t49;
}

// function: main
int main() {
bb50:
  int __retval51;
  struct Base1 base152;
  struct Base1* base1Ptr53;
  struct Base2 base254;
  struct Base2* base2Ptr55;
  struct Derived derived56;
  int c57 = 0;
  __retval51 = c57;
  int c58 = 10;
  Base1__Base1(&base152, c58);
  struct Base1* c59 = ((void*)0);
  base1Ptr53 = c59;
  char c60 = 90;
  Base2__Base2(&base254, c60);
  struct Base2* c61 = ((void*)0);
  base2Ptr55 = c61;
  int c62 = 7;
  char c63 = 65;
  double c64 = 0x1.cp1;
  Derived__Derived(&derived56, c62, c63, c64);
  int r65 = Base1__getData___const(&base152);
  int c66 = 10;
  _Bool c67 = ((r65 == c66)) ? 1 : 0;
  if (c67) {
  } else {
    char* cast68 = (char*)&(_str);
    char* c69 = _str_1;
    unsigned int c70 = 66;
    char* cast71 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast68, c69, c70, cast71);
  }
  char r72 = Base2__getData___const(&base254);
  int cast73 = (int)r72;
  int c74 = 90;
  _Bool c75 = ((cast73 == c74)) ? 1 : 0;
  if (c75) {
  } else {
    char* cast76 = (char*)&(_str_2);
    char* c77 = _str_1;
    unsigned int c78 = 67;
    char* cast79 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast76, c77, c78, cast79);
  }
  struct Base1* base80 = (struct Base1*)((char *)&(derived56) + 0);
  int r81 = Base1__getData___const(base80);
  int c82 = 7;
  _Bool c83 = ((r81 == c82)) ? 1 : 0;
  if (c83) {
  } else {
    char* cast84 = (char*)&(_str_3);
    char* c85 = _str_1;
    unsigned int c86 = 69;
    char* cast87 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast84, c85, c86, cast87);
  }
  struct Base2* base88 = (struct Base2*)((char *)&(derived56) + 4);
  char r89 = Base2__getData___const(base88);
  int cast90 = (int)r89;
  int c91 = 65;
  _Bool c92 = ((cast90 == c91)) ? 1 : 0;
  if (c92) {
  } else {
    char* cast93 = (char*)&(_str_4);
    char* c94 = _str_1;
    unsigned int c95 = 70;
    char* cast96 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast93, c94, c95, cast96);
  }
  double r97 = Derived__getReal___const(&derived56);
  double c98 = 0x1.cp1;
  _Bool c99 = ((r97 == c98)) ? 1 : 0;
  if (c99) {
  } else {
    char* cast100 = (char*)&(_str_5);
    char* c101 = _str_1;
    unsigned int c102 = 71;
    char* cast103 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast100, c101, c102, cast103);
  }
  struct Base1* base104 = (struct Base1*)((char *)&(derived56) + 0);
  base1Ptr53 = base104;
  struct Base1* t105 = base1Ptr53;
  int r106 = Base1__getData___const(t105);
  int c107 = 7;
  _Bool c108 = ((r106 == c107)) ? 1 : 0;
  if (c108) {
  } else {
    char* cast109 = (char*)&(_str_6);
    char* c110 = _str_1;
    unsigned int c111 = 74;
    char* cast112 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast109, c110, c111, cast112);
  }
  struct Base2* base113 = ((&(derived56)) ? (struct Base2*)((char *)&(derived56) + 4) : (struct Base2*)0);
  base2Ptr55 = base113;
  struct Base2* t114 = base2Ptr55;
  char r115 = Base2__getData___const(t114);
  int cast116 = (int)r115;
  int c117 = 65;
  _Bool c118 = ((cast116 == c117)) ? 1 : 0;
  if (c118) {
  } else {
    char* cast119 = (char*)&(_str_7);
    char* c120 = _str_1;
    unsigned int c121 = 77;
    char* cast122 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast119, c120, c121, cast122);
  }
  int c123 = 0;
  __retval51 = c123;
  int t124 = __retval51;
  return t124;
}

