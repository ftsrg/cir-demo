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
struct std___Setw { int _M_n; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

char __const_main_s2[8] = "ABCDXYZ";
char __const_main_s1[8] = "ABCDEFG";
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[6] = "s1 = ";
char _str_1[7] = "\ns2 = ";
char _str_2[22] = "\nmemcmp(s1, s2, 4) = ";
char _str_3[22] = "\nmemcmp(s1, s2, 7) = ";
char _str_4[22] = "\nmemcmp(s2, s1, 7) = ";
extern int memcmp(void* p0, void* p1, unsigned long p2);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  char s12[8];
  char s23[8];
  struct std___Setw agg_tmp04;
  struct std___Setw agg_tmp15;
  struct std___Setw agg_tmp26;
  int c7 = 0;
  __retval1 = c7;
  // array copy
  __builtin_memcpy(s12, __const_main_s1, (unsigned long)8 * sizeof(__const_main_s1[0]));
  // array copy
  __builtin_memcpy(s23, __const_main_s2, (unsigned long)8 * sizeof(__const_main_s2[0]));
  char* cast8 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std9;
  __VERIFIER_nondet_memory(&std9, sizeof(std9));
  char* cast10 = (char*)&(s12);
  struct std__basic_ostream_char__std__char_traits_char__* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  char* cast12 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std13;
  __VERIFIER_nondet_memory(&std13, sizeof(std13));
  char* cast14 = (char*)&(s23);
  struct std__basic_ostream_char__std__char_traits_char__* std15;
  __VERIFIER_nondet_memory(&std15, sizeof(std15));
  struct std__basic_ostream_char__std__char_traits_char__* std16;
  __VERIFIER_nondet_memory(&std16, sizeof(std16));
  char* cast17 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std18;
  __VERIFIER_nondet_memory(&std18, sizeof(std18));
  int c19 = 3;
  struct std___Setw std20;
  __VERIFIER_nondet_memory(&std20, sizeof(std20));
  agg_tmp04 = std20;
  struct std___Setw t21 = agg_tmp04;
  struct std__basic_ostream_char__std__char_traits_char__* std22;
  __VERIFIER_nondet_memory(&std22, sizeof(std22));
  char* cast23 = (char*)&(s12);
  void* cast24 = (void*)cast23;
  char* cast25 = (char*)&(s23);
  void* cast26 = (void*)cast25;
  unsigned long c27 = 4;
  int r28 = memcmp(cast24, cast26, c27);
  struct std__basic_ostream_char__std__char_traits_char__* std29;
  __VERIFIER_nondet_memory(&std29, sizeof(std29));
  char* cast30 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
  int c32 = 3;
  struct std___Setw std33;
  __VERIFIER_nondet_memory(&std33, sizeof(std33));
  agg_tmp15 = std33;
  struct std___Setw t34 = agg_tmp15;
  struct std__basic_ostream_char__std__char_traits_char__* std35;
  __VERIFIER_nondet_memory(&std35, sizeof(std35));
  char* cast36 = (char*)&(s12);
  void* cast37 = (void*)cast36;
  char* cast38 = (char*)&(s23);
  void* cast39 = (void*)cast38;
  unsigned long c40 = 7;
  int r41 = memcmp(cast37, cast39, c40);
  struct std__basic_ostream_char__std__char_traits_char__* std42;
  __VERIFIER_nondet_memory(&std42, sizeof(std42));
  char* cast43 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std44;
  __VERIFIER_nondet_memory(&std44, sizeof(std44));
  int c45 = 3;
  struct std___Setw std46;
  __VERIFIER_nondet_memory(&std46, sizeof(std46));
  agg_tmp26 = std46;
  struct std___Setw t47 = agg_tmp26;
  struct std__basic_ostream_char__std__char_traits_char__* std48;
  __VERIFIER_nondet_memory(&std48, sizeof(std48));
  char* cast49 = (char*)&(s23);
  void* cast50 = (void*)cast49;
  char* cast51 = (char*)&(s12);
  void* cast52 = (void*)cast51;
  unsigned long c53 = 7;
  int r54 = memcmp(cast50, cast52, c53);
  struct std__basic_ostream_char__std__char_traits_char__* std55;
  __VERIFIER_nondet_memory(&std55, sizeof(std55));
  struct std__basic_ostream_char__std__char_traits_char__* std56;
  __VERIFIER_nondet_memory(&std56, sizeof(std56));
  int c57 = 0;
  __retval1 = c57;
  int t58 = __retval1;
  return t58;
}

