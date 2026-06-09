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
char _str[14] = "Enter grade: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[18] = "Class average is ";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int total2;
  int gradeCounter3;
  int grade4;
  int average5;
  int c6 = 0;
  __retval1 = c6;
  int c7 = 0;
  total2 = c7;
  int c8 = 1;
  gradeCounter3 = c8;
    while (1) {
      int t9 = gradeCounter3;
      int c10 = 10;
      _Bool c11 = ((t9 <= c10)) ? 1 : 0;
      if (!c11) break;
        char* cast12 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* std13;
        __VERIFIER_nondet_memory(&std13, sizeof(std13));
        struct std__basic_istream_char__std__char_traits_char__* std14;
        __VERIFIER_nondet_memory(&std14, sizeof(std14));
        int t15 = total2;
        int t16 = grade4;
        int b17 = t15 + t16;
        total2 = b17;
        int t18 = gradeCounter3;
        int c19 = 1;
        int b20 = t18 + c19;
        gradeCounter3 = b20;
    }
  int t21 = total2;
  int c22 = 10;
  int b23 = t21 / c22;
  average5 = b23;
  char* cast24 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std25;
  __VERIFIER_nondet_memory(&std25, sizeof(std25));
  int t26 = average5;
  struct std__basic_ostream_char__std__char_traits_char__* std27;
  __VERIFIER_nondet_memory(&std27, sizeof(std27));
  struct std__basic_ostream_char__std__char_traits_char__* std28;
  __VERIFIER_nondet_memory(&std28, sizeof(std28));
  int c29 = 0;
  __retval1 = c29;
  int t30 = __retval1;
  return t30;
}

