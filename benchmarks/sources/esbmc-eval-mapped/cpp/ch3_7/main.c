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
char _str[37] = "Enter three floating-point numbers: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[13] = "Maximum is: ";
double maximum(double p0, double p1, double p2);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z7maximumddd
double maximum(double v0, double v1, double v2) {
bb3:
  double x4;
  double y5;
  double z6;
  double __retval7;
  double max8;
  x4 = v0;
  y5 = v1;
  z6 = v2;
  double t9 = x4;
  max8 = t9;
    double t10 = y5;
    double t11 = max8;
    _Bool c12 = ((t10 > t11)) ? 1 : 0;
    if (c12) {
      double t13 = y5;
      max8 = t13;
    }
    double t14 = z6;
    double t15 = max8;
    _Bool c16 = ((t14 > t15)) ? 1 : 0;
    if (c16) {
      double t17 = z6;
      max8 = t17;
    }
  double t18 = max8;
  __retval7 = t18;
  double t19 = __retval7;
  return t19;
}

// function: main
int main() {
bb20:
  int __retval21;
  double number122;
  double number223;
  double number324;
  int c25 = 0;
  __retval21 = c25;
  char* cast26 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std27;
  __VERIFIER_nondet_memory(&std27, sizeof(std27));
  struct std__basic_ostream_char__std__char_traits_char__* std28;
  __VERIFIER_nondet_memory(&std28, sizeof(std28));
  struct std__basic_istream_char__std__char_traits_char__* std29;
  __VERIFIER_nondet_memory(&std29, sizeof(std29));
  struct std__basic_istream_char__std__char_traits_char__* std30;
  __VERIFIER_nondet_memory(&std30, sizeof(std30));
  struct std__basic_istream_char__std__char_traits_char__* std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
  char* cast32 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std33;
  __VERIFIER_nondet_memory(&std33, sizeof(std33));
  double t34 = number122;
  double t35 = number223;
  double t36 = number324;
  double r37 = maximum(t34, t35, t36);
  struct std__basic_ostream_char__std__char_traits_char__* std38;
  __VERIFIER_nondet_memory(&std38, sizeof(std38));
  struct std__basic_ostream_char__std__char_traits_char__* std39;
  __VERIFIER_nondet_memory(&std39, sizeof(std39));
  int c40 = 0;
  __retval21 = c40;
  int t41 = __retval21;
  return t41;
}

