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
struct Complex { double real; double imaginary; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[4] = "x: ";
char _str_1[5] = "\ny: ";
char _str_2[5] = "\nz: ";
char _str_3[14] = "\n\nx = y + z:\n";
char _str_4[4] = " = ";
char _str_5[4] = " + ";
char _str_6[14] = "\n\nx = y - z:\n";
char _str_7[4] = " - ";
extern void Complex__Complex(struct Complex* p0, double p1, double p2);
extern void Complex__print___const(struct Complex* p0);
extern struct Complex Complex__operator__Complex_const___const_2(struct Complex* p0, struct Complex* p1);
struct Complex* Complex__operator_(struct Complex* p0, struct Complex* p1);
extern struct Complex Complex__operator__Complex_const___const(struct Complex* p0, struct Complex* p1);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _ZN7ComplexaSEOS_
struct Complex* Complex__operator_(struct Complex* v0, struct Complex* v1) {
bb2:
  struct Complex* this3;
  struct Complex* unnamed4;
  struct Complex* __retval5;
  this3 = v0;
  unnamed4 = v1;
  struct Complex* t6 = this3;
  struct Complex* t7 = unnamed4;
  double t8 = t7->real;
  t6->real = t8;
  struct Complex* t9 = unnamed4;
  double t10 = t9->imaginary;
  t6->imaginary = t10;
  __retval5 = t6;
  struct Complex* t11 = __retval5;
  return t11;
}

// function: main
int main() {
bb12:
  int __retval13;
  struct Complex x14;
  struct Complex y15;
  struct Complex z16;
  struct Complex ref_tmp017;
  struct Complex ref_tmp118;
  int c19 = 0;
  __retval13 = c19;
  double c20 = 0x0p0;
  double c21 = 0x0p0;
  Complex__Complex(&x14, c20, c21);
  double c22 = 0x1.1333333333333p2;
  double c23 = 0x1.0666666666666p3;
  Complex__Complex(&y15, c22, c23);
  double c24 = 0x1.a666666666666p1;
  double c25 = 0x1.199999999999ap0;
  Complex__Complex(&z16, c24, c25);
  char* cast26 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std27;
  __VERIFIER_nondet_memory(&std27, sizeof(std27));
  Complex__print___const(&x14);
  char* cast28 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std29;
  __VERIFIER_nondet_memory(&std29, sizeof(std29));
  Complex__print___const(&y15);
  char* cast30 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
  Complex__print___const(&z16);
  struct Complex r32 = Complex__operator__Complex_const___const_2(&y15, &z16);
  ref_tmp017 = r32;
  struct Complex* r33 = Complex__operator_(&x14, &ref_tmp017);
  char* cast34 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std35;
  __VERIFIER_nondet_memory(&std35, sizeof(std35));
  Complex__print___const(&x14);
  char* cast36 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std37;
  __VERIFIER_nondet_memory(&std37, sizeof(std37));
  Complex__print___const(&y15);
  char* cast38 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std39;
  __VERIFIER_nondet_memory(&std39, sizeof(std39));
  Complex__print___const(&z16);
  struct Complex r40 = Complex__operator__Complex_const___const(&y15, &z16);
  ref_tmp118 = r40;
  struct Complex* r41 = Complex__operator_(&x14, &ref_tmp118);
  char* cast42 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std43;
  __VERIFIER_nondet_memory(&std43, sizeof(std43));
  Complex__print___const(&x14);
  char* cast44 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std45;
  __VERIFIER_nondet_memory(&std45, sizeof(std45));
  Complex__print___const(&y15);
  char* cast46 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std47;
  __VERIFIER_nondet_memory(&std47, sizeof(std47));
  Complex__print___const(&z16);
  struct std__basic_ostream_char__std__char_traits_char__* std48;
  __VERIFIER_nondet_memory(&std48, sizeof(std48));
  int c49 = 0;
  __retval13 = c49;
  int t50 = __retval13;
  return t50;
}

