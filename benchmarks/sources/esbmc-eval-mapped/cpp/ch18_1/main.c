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
char _str[39] = "Enter an integer between 1 and 32000: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[20] = " is a multiple of X";
char _str_2[24] = " is not a multiple of X";
_Bool multiple(int p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z8multiplei
_Bool multiple(int v0) {
bb1:
  int num2;
  _Bool __retval3;
  _Bool mult4;
  num2 = v0;
  _Bool c5 = 1;
  mult4 = c5;
    int i6;
    int mask7;
    int c8 = 0;
    i6 = c8;
    int c9 = 1;
    mask7 = c9;
    while (1) {
      int t11 = i6;
      int c12 = 10;
      _Bool c13 = ((t11 < c12)) ? 1 : 0;
      if (!c13) break;
        int t14 = num2;
        int t15 = mask7;
        int b16 = t14 & t15;
        int c17 = 0;
        _Bool c18 = ((b16 != c17)) ? 1 : 0;
        if (c18) {
          _Bool c19 = 0;
          mult4 = c19;
          break;
        }
    for_step10: ;
      int t20 = i6;
      int u21 = t20 + 1;
      i6 = u21;
      int c22 = 1;
      int t23 = mask7;
      int s24 = t23 << c22;
      mask7 = s24;
    }
  _Bool t25 = mult4;
  __retval3 = t25;
  _Bool t26 = __retval3;
  return t26;
}

// function: main
int main() {
bb27:
  int __retval28;
  int y29;
  int c30 = 0;
  __retval28 = c30;
  char* cast31 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std32;
  __VERIFIER_nondet_memory(&std32, sizeof(std32));
  struct std__basic_istream_char__std__char_traits_char__* std33;
  __VERIFIER_nondet_memory(&std33, sizeof(std33));
    int t34 = y29;
    _Bool r35 = multiple(t34);
    if (r35) {
      int t36 = y29;
      struct std__basic_ostream_char__std__char_traits_char__* std37;
      __VERIFIER_nondet_memory(&std37, sizeof(std37));
      char* cast38 = (char*)&(_str_1);
      struct std__basic_ostream_char__std__char_traits_char__* std39;
      __VERIFIER_nondet_memory(&std39, sizeof(std39));
      struct std__basic_ostream_char__std__char_traits_char__* std40;
      __VERIFIER_nondet_memory(&std40, sizeof(std40));
    } else {
      int t41 = y29;
      struct std__basic_ostream_char__std__char_traits_char__* std42;
      __VERIFIER_nondet_memory(&std42, sizeof(std42));
      char* cast43 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* std44;
      __VERIFIER_nondet_memory(&std44, sizeof(std44));
      struct std__basic_ostream_char__std__char_traits_char__* std45;
      __VERIFIER_nondet_memory(&std45, sizeof(std45));
    }
  int c46 = 0;
  __retval28 = c46;
  int t47 = __retval28;
  return t47;
}

