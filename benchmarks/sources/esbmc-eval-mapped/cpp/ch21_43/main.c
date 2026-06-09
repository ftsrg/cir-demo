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

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[29] = "The minimum of 12 and 7 is: ";
char _str_1[30] = "\nThe maximum of 12 and 7 is: ";
char _str_2[33] = "\nThe minimum of 'G' and 'Z' is: ";
char _str_3[33] = "\nThe maximum of 'G' and 'Z' is: ";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int ref_tmp02;
  int ref_tmp13;
  int ref_tmp24;
  int ref_tmp35;
  char ref_tmp46;
  char ref_tmp57;
  char ref_tmp68;
  char ref_tmp79;
  int c10 = 0;
  __retval1 = c10;
  char* cast11 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std12;
  __VERIFIER_nondet_memory(&std12, sizeof(std12));
  int c13 = 12;
  ref_tmp02 = c13;
  int c14 = 7;
  ref_tmp13 = c14;
  int* std15;
  __VERIFIER_nondet_memory(&std15, sizeof(std15));
  int t16 = *std15;
  struct std__basic_ostream_char__std__char_traits_char__* std17;
  __VERIFIER_nondet_memory(&std17, sizeof(std17));
  char* cast18 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
  int c20 = 12;
  ref_tmp24 = c20;
  int c21 = 7;
  ref_tmp35 = c21;
  int* std22;
  __VERIFIER_nondet_memory(&std22, sizeof(std22));
  int t23 = *std22;
  struct std__basic_ostream_char__std__char_traits_char__* std24;
  __VERIFIER_nondet_memory(&std24, sizeof(std24));
  char* cast25 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std26;
  __VERIFIER_nondet_memory(&std26, sizeof(std26));
  char c27 = 71;
  ref_tmp46 = c27;
  char c28 = 90;
  ref_tmp57 = c28;
  char* std29;
  __VERIFIER_nondet_memory(&std29, sizeof(std29));
  char t30 = *std29;
  struct std__basic_ostream_char__std__char_traits_char__* std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
  char* cast32 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std33;
  __VERIFIER_nondet_memory(&std33, sizeof(std33));
  char c34 = 71;
  ref_tmp68 = c34;
  char c35 = 90;
  ref_tmp79 = c35;
  char* std36;
  __VERIFIER_nondet_memory(&std36, sizeof(std36));
  char t37 = *std36;
  struct std__basic_ostream_char__std__char_traits_char__* std38;
  __VERIFIER_nondet_memory(&std38, sizeof(std38));
  struct std__basic_ostream_char__std__char_traits_char__* std39;
  __VERIFIER_nondet_memory(&std39, sizeof(std39));
  int c40 = 0;
  __retval1 = c40;
  int t41 = __retval1;
  return t41;
}

