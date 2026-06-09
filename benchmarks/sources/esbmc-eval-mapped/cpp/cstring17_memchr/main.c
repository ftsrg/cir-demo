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
struct std__basic_ostream_char__std__char_traits_char__;

char __const_main_str[15] = "Example string";
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[23] = "'p' found at position ";
char _str_1[2] = ".";
char _str_2[15] = "'p' not found.";
extern void* memchr(void* p0, int p1, unsigned long p2);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  char* pch2;
  char str3[15];
  int c4 = 0;
  __retval1 = c4;
  // array copy
  __builtin_memcpy(str3, __const_main_str, (unsigned long)15 * sizeof(__const_main_str[0]));
  char* cast5 = (char*)&(str3);
  void* cast6 = (void*)cast5;
  int c7 = 112;
  unsigned long c8 = 14;
  void* r9 = memchr(cast6, c7, c8);
  char* cast10 = (char*)r9;
  pch2 = cast10;
    char* t11 = pch2;
    char* c12 = ((void*)0);
    _Bool c13 = ((t11 != c12)) ? 1 : 0;
    if (c13) {
      char* cast14 = (char*)&(_str);
      struct std__basic_ostream_char__std__char_traits_char__* std15;
      __VERIFIER_nondet_memory(&std15, sizeof(std15));
      char* t16 = pch2;
      char* cast17 = (char*)&(str3);
      long diff18 = t16 - cast17;
      long c19 = 1;
      long b20 = diff18 + c19;
      struct std__basic_ostream_char__std__char_traits_char__* std21;
      __VERIFIER_nondet_memory(&std21, sizeof(std21));
      char* cast22 = (char*)&(_str_1);
      struct std__basic_ostream_char__std__char_traits_char__* std23;
      __VERIFIER_nondet_memory(&std23, sizeof(std23));
      struct std__basic_ostream_char__std__char_traits_char__* std24;
      __VERIFIER_nondet_memory(&std24, sizeof(std24));
    } else {
      char* cast25 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* std26;
      __VERIFIER_nondet_memory(&std26, sizeof(std26));
      struct std__basic_ostream_char__std__char_traits_char__* std27;
      __VERIFIER_nondet_memory(&std27, sizeof(std27));
    }
  int c28 = 0;
  __retval1 = c28;
  int t29 = __retval1;
  return t29;
}

