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

extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct Point3 { int __field0; int __field1; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Setprecision { int _M_n; };
struct Circle4 { struct Point3 __field0; double __field1; };
struct Cylinder { struct Circle4 __field0; double __field1; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base10floatfieldE_const __attribute__((aligned(4))) = 260;
int _ZNSt8ios_base5fixedE_const __attribute__((aligned(4))) = 4;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[17] = "X coordinate is ";
char _str_1[18] = "\nY coordinate is ";
char _str_2[12] = "\nRadius is ";
char _str_3[12] = "\nHeight is ";
char _str_4[45] = "\n\nThe new location and radius of circle are\n";
char _str_5[15] = "\n\nDiameter is ";
char _str_6[19] = "\nCircumference is ";
char _str_7[10] = "\nArea is ";
char _str_8[12] = "\nVolume is ";
extern void Cylinder__Cylinder(struct Cylinder* p0, int p1, int p2, double p3, double p4);
extern int Point3__getX___const(struct Point3* p0);
extern int Point3__getY___const(struct Point3* p0);
extern double Circle4__getRadius___const(struct Circle4* p0);
extern double Cylinder__getHeight___const(struct Cylinder* p0);
extern void Point3__setX(struct Point3* p0, int p1);
extern void Point3__setY(struct Point3* p0, int p1);
extern void Circle4__setRadius(struct Circle4* p0, double p1);
extern void Cylinder__setHeight(struct Cylinder* p0, double p1);
extern void Cylinder__print___const(struct Cylinder* p0);
extern double Circle4__getDiameter___const(struct Circle4* p0);
extern double Circle4__getCircumference___const(struct Circle4* p0);
extern double Cylinder__getArea___const(struct Cylinder* p0);
extern double Cylinder__getVolume___const(struct Cylinder* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct Cylinder cylinder2;
  struct std___Setprecision agg_tmp03;
  int c4 = 0;
  __retval1 = c4;
  int c5 = 12;
  int c6 = 23;
  double c7 = 0x1.4p1;
  double c8 = 0x1.6cccccccccccdp2;
  Cylinder__Cylinder(&cylinder2, c5, c6, c7, c8);
  char* cast9 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std10;
  __VERIFIER_nondet_memory(&std10, sizeof(std10));
  struct Point3* base11 = (struct Point3*)((char *)&(cylinder2) + 0);
  int r12 = Point3__getX___const(base11);
  struct std__basic_ostream_char__std__char_traits_char__* std13;
  __VERIFIER_nondet_memory(&std13, sizeof(std13));
  char* cast14 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std15;
  __VERIFIER_nondet_memory(&std15, sizeof(std15));
  struct Point3* base16 = (struct Point3*)((char *)&(cylinder2) + 0);
  int r17 = Point3__getY___const(base16);
  struct std__basic_ostream_char__std__char_traits_char__* std18;
  __VERIFIER_nondet_memory(&std18, sizeof(std18));
  char* cast19 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std20;
  __VERIFIER_nondet_memory(&std20, sizeof(std20));
  struct Circle4* base21 = (struct Circle4*)((char *)&(cylinder2) + 0);
  double r22 = Circle4__getRadius___const(base21);
  struct std__basic_ostream_char__std__char_traits_char__* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  char* cast24 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std25;
  __VERIFIER_nondet_memory(&std25, sizeof(std25));
  double r26 = Cylinder__getHeight___const(&cylinder2);
  struct std__basic_ostream_char__std__char_traits_char__* std27;
  __VERIFIER_nondet_memory(&std27, sizeof(std27));
  struct Point3* base28 = (struct Point3*)((char *)&(cylinder2) + 0);
  int c29 = 2;
  Point3__setX(base28, c29);
  struct Point3* base30 = (struct Point3*)((char *)&(cylinder2) + 0);
  int c31 = 2;
  Point3__setY(base30, c31);
  struct Circle4* base32 = (struct Circle4*)((char *)&(cylinder2) + 0);
  double c33 = 0x1.1p2;
  Circle4__setRadius(base32, c33);
  int c34 = 10;
  double cast35 = (double)c34;
  Cylinder__setHeight(&cylinder2, cast35);
  char* cast36 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std37;
  __VERIFIER_nondet_memory(&std37, sizeof(std37));
  Cylinder__print___const(&cylinder2);
  struct std__basic_ostream_char__std__char_traits_char__* std38;
  __VERIFIER_nondet_memory(&std38, sizeof(std38));
  int c39 = 2;
  struct std___Setprecision std40;
  __VERIFIER_nondet_memory(&std40, sizeof(std40));
  agg_tmp03 = std40;
  struct std___Setprecision t41 = agg_tmp03;
  struct std__basic_ostream_char__std__char_traits_char__* std42;
  __VERIFIER_nondet_memory(&std42, sizeof(std42));
  char* cast43 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std44;
  __VERIFIER_nondet_memory(&std44, sizeof(std44));
  struct Circle4* base45 = (struct Circle4*)((char *)&(cylinder2) + 0);
  double r46 = Circle4__getDiameter___const(base45);
  struct std__basic_ostream_char__std__char_traits_char__* std47;
  __VERIFIER_nondet_memory(&std47, sizeof(std47));
  char* cast48 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std49;
  __VERIFIER_nondet_memory(&std49, sizeof(std49));
  struct Circle4* base50 = (struct Circle4*)((char *)&(cylinder2) + 0);
  double r51 = Circle4__getCircumference___const(base50);
  struct std__basic_ostream_char__std__char_traits_char__* std52;
  __VERIFIER_nondet_memory(&std52, sizeof(std52));
  char* cast53 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std54;
  __VERIFIER_nondet_memory(&std54, sizeof(std54));
  double r55 = Cylinder__getArea___const(&cylinder2);
  struct std__basic_ostream_char__std__char_traits_char__* std56;
  __VERIFIER_nondet_memory(&std56, sizeof(std56));
  char* cast57 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* std58;
  __VERIFIER_nondet_memory(&std58, sizeof(std58));
  double r59 = Cylinder__getVolume___const(&cylinder2);
  struct std__basic_ostream_char__std__char_traits_char__* std60;
  __VERIFIER_nondet_memory(&std60, sizeof(std60));
  struct std__basic_ostream_char__std__char_traits_char__* std61;
  __VERIFIER_nondet_memory(&std61, sizeof(std61));
  int c62 = 0;
  __retval1 = c62;
  int t63 = __retval1;
  return t63;
}

