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

char __const_main_str[80] = "these ";
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[9] = "strings ";
char _str_1[5] = "are ";
char _str_2[14] = "concatenated.";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
extern char* strcat(char* p0, char* p1);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  char str2[80];
  int c3 = 0;
  __retval1 = c3;
  // array copy
  __builtin_memcpy(str2, __const_main_str, (unsigned long)80 * sizeof(__const_main_str[0]));
  char* cast4 = (char*)&(str2);
  char* cast5 = (char*)&(_str);
  char* r6 = strcat(cast4, cast5);
  char* cast7 = (char*)&(str2);
  char* cast8 = (char*)&(_str_1);
  char* r9 = strcat(cast7, cast8);
  char* cast10 = (char*)&(str2);
  char* cast11 = (char*)&(_str_2);
  char* r12 = strcat(cast10, cast11);
  char* cast13 = (char*)&(str2);
  struct std__basic_ostream_char__std__char_traits_char__* std14;
  __VERIFIER_nondet_memory(&std14, sizeof(std14));
  struct std__basic_ostream_char__std__char_traits_char__* std15;
  __VERIFIER_nondet_memory(&std15, sizeof(std15));
  int c16 = 0;
  __retval1 = c16;
  int t17 = __retval1;
  return t17;
}

