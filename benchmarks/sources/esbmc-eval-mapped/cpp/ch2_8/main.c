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
struct std___Setprecision { int _M_n; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_istream_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base10floatfieldE_const __attribute__((aligned(4))) = 260;
int _ZNSt8ios_base5fixedE_const __attribute__((aligned(4))) = 4;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[25] = "Enter grade, -1 to end: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[18] = "Class average is ";
char _str_2[23] = "No grades were entered";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int total2;
  int gradeCounter3;
  int grade4;
  double average5;
  int c6 = 0;
  __retval1 = c6;
  int c7 = 0;
  total2 = c7;
  int c8 = 0;
  gradeCounter3 = c8;
  char* cast9 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std10;
  __VERIFIER_nondet_memory(&std10, sizeof(std10));
  struct std__basic_istream_char__std__char_traits_char__* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
    while (1) {
      int t12 = grade4;
      int c13 = -1;
      _Bool c14 = ((t12 != c13)) ? 1 : 0;
      if (!c14) break;
        int t15 = total2;
        int t16 = grade4;
        int b17 = t15 + t16;
        total2 = b17;
        int t18 = gradeCounter3;
        int c19 = 1;
        int b20 = t18 + c19;
        gradeCounter3 = b20;
        char* cast21 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* std22;
        __VERIFIER_nondet_memory(&std22, sizeof(std22));
        struct std__basic_istream_char__std__char_traits_char__* std23;
        __VERIFIER_nondet_memory(&std23, sizeof(std23));
    }
    int t24 = gradeCounter3;
    int c25 = 0;
    _Bool c26 = ((t24 != c25)) ? 1 : 0;
    if (c26) {
      struct std___Setprecision agg_tmp027;
      int t28 = total2;
      double cast29 = (double)t28;
      int t30 = gradeCounter3;
      double cast31 = (double)t30;
      double b32 = cast29 / cast31;
      average5 = b32;
      char* cast33 = (char*)&(_str_1);
      struct std__basic_ostream_char__std__char_traits_char__* std34;
      __VERIFIER_nondet_memory(&std34, sizeof(std34));
      int c35 = 2;
      struct std___Setprecision std36;
      __VERIFIER_nondet_memory(&std36, sizeof(std36));
      agg_tmp027 = std36;
      struct std___Setprecision t37 = agg_tmp027;
      struct std__basic_ostream_char__std__char_traits_char__* std38;
      __VERIFIER_nondet_memory(&std38, sizeof(std38));
      struct std__basic_ostream_char__std__char_traits_char__* std39;
      __VERIFIER_nondet_memory(&std39, sizeof(std39));
      double t40 = average5;
      struct std__basic_ostream_char__std__char_traits_char__* std41;
      __VERIFIER_nondet_memory(&std41, sizeof(std41));
      struct std__basic_ostream_char__std__char_traits_char__* std42;
      __VERIFIER_nondet_memory(&std42, sizeof(std42));
    } else {
      char* cast43 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* std44;
      __VERIFIER_nondet_memory(&std44, sizeof(std44));
      struct std__basic_ostream_char__std__char_traits_char__* std45;
      __VERIFIER_nondet_memory(&std45, sizeof(std45));
    }
  int c46 = 0;
  __retval1 = c46;
  int t47 = __retval1;
  return t47;
}

