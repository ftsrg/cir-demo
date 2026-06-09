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
struct std___Setfill_char_ { char _M_c; };
struct std___Setw { int _M_n; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base3decE_const __attribute__((aligned(4))) = 2;
int _ZNSt8ios_base5rightE_const __attribute__((aligned(4))) = 128;
int _ZNSt8ios_base9basefieldE_const __attribute__((aligned(4))) = 74;
int _ZNSt8ios_base3hexE_const __attribute__((aligned(4))) = 8;
int _ZNSt8ios_base8internalE_const __attribute__((aligned(4))) = 16;
int _ZNSt8ios_base11adjustfieldE_const __attribute__((aligned(4))) = 176;
int _ZNSt8ios_base4leftE_const __attribute__((aligned(4))) = 32;
int _ZNSt8ios_base8showbaseE_const __attribute__((aligned(4))) = 512;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[42] = " printed as int right and left justified\n";
char _str_1[41] = "and as hex with internal justification.\n";
char _str_2[41] = "Using the default pad character (space):";
char _str_3[34] = "Using various padding characters:";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern char __VERIFIER_nondet_char(void);
// function: main
int main() {
bb0:
  int __retval1;
  int x2;
  struct std___Setw agg_tmp03;
  struct std___Setw agg_tmp14;
  struct std___Setw agg_tmp25;
  struct std___Setw agg_tmp36;
  struct std___Setw agg_tmp47;
  struct std___Setfill_char_ agg_tmp58;
  struct std___Setw agg_tmp69;
  struct std___Setfill_char_ agg_tmp710;
  int c11 = 0;
  __retval1 = c11;
  int c12 = 10000;
  x2 = c12;
  int t13 = x2;
  struct std__basic_ostream_char__std__char_traits_char__* std14;
  __VERIFIER_nondet_memory(&std14, sizeof(std14));
  char* cast15 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std16;
  __VERIFIER_nondet_memory(&std16, sizeof(std16));
  char* cast17 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std18;
  __VERIFIER_nondet_memory(&std18, sizeof(std18));
  char* cast19 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std20;
  __VERIFIER_nondet_memory(&std20, sizeof(std20));
  struct std__basic_ostream_char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  struct std__basic_ostream_char__std__char_traits_char__* std22;
  __VERIFIER_nondet_memory(&std22, sizeof(std22));
  int c23 = 10;
  struct std___Setw std24;
  __VERIFIER_nondet_memory(&std24, sizeof(std24));
  agg_tmp03 = std24;
  struct std___Setw t25 = agg_tmp03;
  struct std__basic_ostream_char__std__char_traits_char__* std26;
  __VERIFIER_nondet_memory(&std26, sizeof(std26));
  int t27 = x2;
  struct std__basic_ostream_char__std__char_traits_char__* std28;
  __VERIFIER_nondet_memory(&std28, sizeof(std28));
  struct std__basic_ostream_char__std__char_traits_char__* std29;
  __VERIFIER_nondet_memory(&std29, sizeof(std29));
  struct std__basic_ostream_char__std__char_traits_char__* std30;
  __VERIFIER_nondet_memory(&std30, sizeof(std30));
  int c31 = 10;
  struct std___Setw std32;
  __VERIFIER_nondet_memory(&std32, sizeof(std32));
  agg_tmp14 = std32;
  struct std___Setw t33 = agg_tmp14;
  struct std__basic_ostream_char__std__char_traits_char__* std34;
  __VERIFIER_nondet_memory(&std34, sizeof(std34));
  int t35 = x2;
  struct std__basic_ostream_char__std__char_traits_char__* std36;
  __VERIFIER_nondet_memory(&std36, sizeof(std36));
  struct std__basic_ostream_char__std__char_traits_char__* std37;
  __VERIFIER_nondet_memory(&std37, sizeof(std37));
  struct std__basic_ostream_char__std__char_traits_char__* std38;
  __VERIFIER_nondet_memory(&std38, sizeof(std38));
  int c39 = 10;
  struct std___Setw std40;
  __VERIFIER_nondet_memory(&std40, sizeof(std40));
  agg_tmp25 = std40;
  struct std___Setw t41 = agg_tmp25;
  struct std__basic_ostream_char__std__char_traits_char__* std42;
  __VERIFIER_nondet_memory(&std42, sizeof(std42));
  struct std__basic_ostream_char__std__char_traits_char__* std43;
  __VERIFIER_nondet_memory(&std43, sizeof(std43));
  int t44 = x2;
  struct std__basic_ostream_char__std__char_traits_char__* std45;
  __VERIFIER_nondet_memory(&std45, sizeof(std45));
  struct std__basic_ostream_char__std__char_traits_char__* std46;
  __VERIFIER_nondet_memory(&std46, sizeof(std46));
  struct std__basic_ostream_char__std__char_traits_char__* std47;
  __VERIFIER_nondet_memory(&std47, sizeof(std47));
  char* cast48 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std49;
  __VERIFIER_nondet_memory(&std49, sizeof(std49));
  struct std__basic_ostream_char__std__char_traits_char__* std50;
  __VERIFIER_nondet_memory(&std50, sizeof(std50));
  struct std__basic_ostream_char__std__char_traits_char__* std51;
  __VERIFIER_nondet_memory(&std51, sizeof(std51));
  void** v52 = (void**)&_ZSt4cout;
  void* v53 = *((void**)v52);
  unsigned char* cast54 = (unsigned char*)v53;
  long c55 = -24;
  unsigned char* ptr56 = &(cast54)[c55];
  long* cast57 = (long*)ptr56;
  long t58 = *cast57;
  unsigned char* cast59 = (unsigned char*)&_ZSt4cout;
  unsigned char* ptr60 = &(cast59)[t58];
  struct std__basic_ostream_char__std__char_traits_char__* cast61 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr60;
  struct std__basic_ios_char__std__char_traits_char__* cast62 = (struct std__basic_ios_char__std__char_traits_char__*)cast61;
  char c63 = 42;
  char std64 = __VERIFIER_nondet_char();
  int c65 = 10;
  struct std___Setw std66;
  __VERIFIER_nondet_memory(&std66, sizeof(std66));
  agg_tmp36 = std66;
  struct std___Setw t67 = agg_tmp36;
  struct std__basic_ostream_char__std__char_traits_char__* std68;
  __VERIFIER_nondet_memory(&std68, sizeof(std68));
  struct std__basic_ostream_char__std__char_traits_char__* std69;
  __VERIFIER_nondet_memory(&std69, sizeof(std69));
  int t70 = x2;
  struct std__basic_ostream_char__std__char_traits_char__* std71;
  __VERIFIER_nondet_memory(&std71, sizeof(std71));
  struct std__basic_ostream_char__std__char_traits_char__* std72;
  __VERIFIER_nondet_memory(&std72, sizeof(std72));
  struct std__basic_ostream_char__std__char_traits_char__* std73;
  __VERIFIER_nondet_memory(&std73, sizeof(std73));
  int c74 = 10;
  struct std___Setw std75;
  __VERIFIER_nondet_memory(&std75, sizeof(std75));
  agg_tmp47 = std75;
  struct std___Setw t76 = agg_tmp47;
  struct std__basic_ostream_char__std__char_traits_char__* std77;
  __VERIFIER_nondet_memory(&std77, sizeof(std77));
  char c78 = 37;
  struct std___Setfill_char_ std79;
  __VERIFIER_nondet_memory(&std79, sizeof(std79));
  agg_tmp58 = std79;
  struct std___Setfill_char_ t80 = agg_tmp58;
  struct std__basic_ostream_char__std__char_traits_char__* std81;
  __VERIFIER_nondet_memory(&std81, sizeof(std81));
  int t82 = x2;
  struct std__basic_ostream_char__std__char_traits_char__* std83;
  __VERIFIER_nondet_memory(&std83, sizeof(std83));
  struct std__basic_ostream_char__std__char_traits_char__* std84;
  __VERIFIER_nondet_memory(&std84, sizeof(std84));
  struct std__basic_ostream_char__std__char_traits_char__* std85;
  __VERIFIER_nondet_memory(&std85, sizeof(std85));
  int c86 = 10;
  struct std___Setw std87;
  __VERIFIER_nondet_memory(&std87, sizeof(std87));
  agg_tmp69 = std87;
  struct std___Setw t88 = agg_tmp69;
  struct std__basic_ostream_char__std__char_traits_char__* std89;
  __VERIFIER_nondet_memory(&std89, sizeof(std89));
  char c90 = 94;
  struct std___Setfill_char_ std91;
  __VERIFIER_nondet_memory(&std91, sizeof(std91));
  agg_tmp710 = std91;
  struct std___Setfill_char_ t92 = agg_tmp710;
  struct std__basic_ostream_char__std__char_traits_char__* std93;
  __VERIFIER_nondet_memory(&std93, sizeof(std93));
  struct std__basic_ostream_char__std__char_traits_char__* std94;
  __VERIFIER_nondet_memory(&std94, sizeof(std94));
  int t95 = x2;
  struct std__basic_ostream_char__std__char_traits_char__* std96;
  __VERIFIER_nondet_memory(&std96, sizeof(std96));
  struct std__basic_ostream_char__std__char_traits_char__* std97;
  __VERIFIER_nondet_memory(&std97, sizeof(std97));
  int c98 = 0;
  __retval1 = c98;
  int t99 = __retval1;
  return t99;
}

