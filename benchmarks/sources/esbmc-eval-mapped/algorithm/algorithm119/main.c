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
char _str[11] = "max(1,2)==";
char _str_1[11] = "max(2,1)==";
char _str_2[15] = "max('a','z')==";
char _str_3[17] = "max(3.14,2.73)==";
char _str_4[23] = "max(3.14,2.73) != 3.14";
char _str_5[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm119/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
  double ref_tmp68;
  double ref_tmp79;
  int c10 = 0;
  __retval1 = c10;
  char* cast11 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std12;
  __VERIFIER_nondet_memory(&std12, sizeof(std12));
  int c13 = 1;
  ref_tmp02 = c13;
  int c14 = 2;
  ref_tmp13 = c14;
  int* std15;
  __VERIFIER_nondet_memory(&std15, sizeof(std15));
  int t16 = *std15;
  struct std__basic_ostream_char__std__char_traits_char__* std17;
  __VERIFIER_nondet_memory(&std17, sizeof(std17));
  struct std__basic_ostream_char__std__char_traits_char__* std18;
  __VERIFIER_nondet_memory(&std18, sizeof(std18));
  char* cast19 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std20;
  __VERIFIER_nondet_memory(&std20, sizeof(std20));
  int c21 = 2;
  ref_tmp24 = c21;
  int c22 = 1;
  ref_tmp35 = c22;
  int* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  int t24 = *std23;
  struct std__basic_ostream_char__std__char_traits_char__* std25;
  __VERIFIER_nondet_memory(&std25, sizeof(std25));
  struct std__basic_ostream_char__std__char_traits_char__* std26;
  __VERIFIER_nondet_memory(&std26, sizeof(std26));
  char* cast27 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std28;
  __VERIFIER_nondet_memory(&std28, sizeof(std28));
  char c29 = 97;
  ref_tmp46 = c29;
  char c30 = 122;
  ref_tmp57 = c30;
  char* std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
  char t32 = *std31;
  struct std__basic_ostream_char__std__char_traits_char__* std33;
  __VERIFIER_nondet_memory(&std33, sizeof(std33));
  struct std__basic_ostream_char__std__char_traits_char__* std34;
  __VERIFIER_nondet_memory(&std34, sizeof(std34));
  char* cast35 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std36;
  __VERIFIER_nondet_memory(&std36, sizeof(std36));
  double c37 = 0x1.91eb851eb851fp1;
  ref_tmp68 = c37;
  double c38 = 0x1.5d70a3d70a3d7p1;
  ref_tmp79 = c38;
  double* std39;
  __VERIFIER_nondet_memory(&std39, sizeof(std39));
  double t40 = *std39;
  struct std__basic_ostream_char__std__char_traits_char__* std41;
  __VERIFIER_nondet_memory(&std41, sizeof(std41));
  struct std__basic_ostream_char__std__char_traits_char__* std42;
  __VERIFIER_nondet_memory(&std42, sizeof(std42));
  char* cast43 = (char*)&(_str_4);
  char* c44 = _str_5;
  unsigned int c45 = 21;
  char* cast46 = (char*)&(__PRETTY_FUNCTION___main);
  __assert_fail(cast43, c44, c45, cast46);
  int c47 = 0;
  __retval1 = c47;
  int t48 = __retval1;
  return t48;
}

