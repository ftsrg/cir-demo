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
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_istream_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[48] = "Enter the length of the radius of your sphere: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[30] = "Volume of sphere with radius ";
char _str_2[5] = " is ";
double _ZL2PI __attribute__((aligned(8))) = 0x1.921f9f01b866ep1;
extern double pow(double p0, double p1);
double sphereVolume(double p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z12sphereVolumed
double sphereVolume(double v0) {
bb1:
  double radius2;
  double __retval3;
  radius2 = v0;
  double c4 = 0x1p2;
  double c5 = 0x1.8p1;
  double b6 = c4 / c5;
  double t7 = _ZL2PI;
  double b8 = b6 * t7;
  double t9 = radius2;
  int c10 = 3;
  double cast11 = (double)c10;
  double r12 = pow(t9, cast11);
  double b13 = b8 * r12;
  __retval3 = b13;
  double t14 = __retval3;
  return t14;
}

// function: main
int main() {
bb15:
  int __retval16;
  double radiusValue17;
  int c18 = 0;
  __retval16 = c18;
  char* cast19 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std20;
  __VERIFIER_nondet_memory(&std20, sizeof(std20));
  struct std__basic_istream_char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  char* cast22 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  double t24 = radiusValue17;
  struct std__basic_ostream_char__std__char_traits_char__* std25;
  __VERIFIER_nondet_memory(&std25, sizeof(std25));
  char* cast26 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std27;
  __VERIFIER_nondet_memory(&std27, sizeof(std27));
  double t28 = radiusValue17;
  double r29 = sphereVolume(t28);
  struct std__basic_ostream_char__std__char_traits_char__* std30;
  __VERIFIER_nondet_memory(&std30, sizeof(std30));
  struct std__basic_ostream_char__std__char_traits_char__* std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
  int c32 = 0;
  __retval16 = c32;
  int t33 = __retval16;
  return t33;
}

