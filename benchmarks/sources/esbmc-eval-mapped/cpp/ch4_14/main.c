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

int __const_main_a[5] = {0, 1, 2, 3, 4};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[46] = "Effects of passing entire array by reference:";
char _str_1[41] = "\n\nThe values of the original array are:\n";
char _str_2[39] = "The values of the modified array are:\n";
char _str_3[4] = "\n\n\n";
char _str_4[43] = "Effects of passing array element by value:";
char _str_5[24] = "\n\nThe value of a[3] is ";
char _str_6[22] = "The value of a[3] is ";
char _str_7[27] = "Value in modifyElement is ";
void modifyArray(int* p0, int p1);
void modifyElement(int p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z11modifyArrayPii
void modifyArray(int* v0, int v1) {
bb2:
  int* b3;
  int sizeOfArray4;
  b3 = v0;
  sizeOfArray4 = v1;
    int k5;
    int c6 = 0;
    k5 = c6;
    while (1) {
      int t8 = k5;
      int t9 = sizeOfArray4;
      _Bool c10 = ((t8 < t9)) ? 1 : 0;
      if (!c10) break;
      int c11 = 2;
      int t12 = k5;
      long cast13 = (long)t12;
      int* t14 = b3;
      int* ptr15 = &(t14)[cast13];
      int t16 = *ptr15;
      int b17 = t16 * c11;
      *ptr15 = b17;
    for_step7: ;
      int t18 = k5;
      int u19 = t18 + 1;
      k5 = u19;
    }
  return;
}

// function: _Z13modifyElementi
void modifyElement(int v20) {
bb21:
  int e22;
  e22 = v20;
  char* cast23 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std24;
  __VERIFIER_nondet_memory(&std24, sizeof(std24));
  int c25 = 2;
  int t26 = e22;
  int b27 = t26 * c25;
  e22 = b27;
  struct std__basic_ostream_char__std__char_traits_char__* std28;
  __VERIFIER_nondet_memory(&std28, sizeof(std28));
  struct std__basic_ostream_char__std__char_traits_char__* std29;
  __VERIFIER_nondet_memory(&std29, sizeof(std29));
  return;
}

// function: main
int main() {
bb30:
  int __retval31;
  int arraySize32;
  int a33[5];
  int c34 = 0;
  __retval31 = c34;
  int c35 = 5;
  arraySize32 = c35;
  // array copy
  __builtin_memcpy(a33, __const_main_a, (unsigned long)5 * sizeof(__const_main_a[0]));
  char* cast36 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std37;
  __VERIFIER_nondet_memory(&std37, sizeof(std37));
  char* cast38 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std39;
  __VERIFIER_nondet_memory(&std39, sizeof(std39));
    int i40;
    struct std___Setw agg_tmp041;
    int c42 = 0;
    i40 = c42;
    while (1) {
      int t44 = i40;
      int t45 = arraySize32;
      _Bool c46 = ((t44 < t45)) ? 1 : 0;
      if (!c46) break;
      int c47 = 3;
      struct std___Setw std48;
      __VERIFIER_nondet_memory(&std48, sizeof(std48));
      agg_tmp041 = std48;
      struct std___Setw t49 = agg_tmp041;
      struct std__basic_ostream_char__std__char_traits_char__* std50;
      __VERIFIER_nondet_memory(&std50, sizeof(std50));
      int t51 = i40;
      long cast52 = (long)t51;
      int t53 = a33[cast52];
      struct std__basic_ostream_char__std__char_traits_char__* std54;
      __VERIFIER_nondet_memory(&std54, sizeof(std54));
    for_step43: ;
      int t55 = i40;
      int u56 = t55 + 1;
      i40 = u56;
    }
  struct std__basic_ostream_char__std__char_traits_char__* std57;
  __VERIFIER_nondet_memory(&std57, sizeof(std57));
  int* cast58 = (int*)&(a33);
  int t59 = arraySize32;
  modifyArray(cast58, t59);
  char* cast60 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std61;
  __VERIFIER_nondet_memory(&std61, sizeof(std61));
    int j62;
    struct std___Setw agg_tmp163;
    int c64 = 0;
    j62 = c64;
    while (1) {
      int t66 = j62;
      int t67 = arraySize32;
      _Bool c68 = ((t66 < t67)) ? 1 : 0;
      if (!c68) break;
      int c69 = 3;
      struct std___Setw std70;
      __VERIFIER_nondet_memory(&std70, sizeof(std70));
      agg_tmp163 = std70;
      struct std___Setw t71 = agg_tmp163;
      struct std__basic_ostream_char__std__char_traits_char__* std72;
      __VERIFIER_nondet_memory(&std72, sizeof(std72));
      int t73 = j62;
      long cast74 = (long)t73;
      int t75 = a33[cast74];
      struct std__basic_ostream_char__std__char_traits_char__* std76;
      __VERIFIER_nondet_memory(&std76, sizeof(std76));
    for_step65: ;
      int t77 = j62;
      int u78 = t77 + 1;
      j62 = u78;
    }
  char* cast79 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std80;
  __VERIFIER_nondet_memory(&std80, sizeof(std80));
  char* cast81 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std82;
  __VERIFIER_nondet_memory(&std82, sizeof(std82));
  char* cast83 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std84;
  __VERIFIER_nondet_memory(&std84, sizeof(std84));
  long c85 = 3;
  int t86 = a33[c85];
  struct std__basic_ostream_char__std__char_traits_char__* std87;
  __VERIFIER_nondet_memory(&std87, sizeof(std87));
  char c88 = 10;
  struct std__basic_ostream_char__std__char_traits_char__* std89;
  __VERIFIER_nondet_memory(&std89, sizeof(std89));
  long c90 = 3;
  int t91 = a33[c90];
  modifyElement(t91);
  char* cast92 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std93;
  __VERIFIER_nondet_memory(&std93, sizeof(std93));
  long c94 = 3;
  int t95 = a33[c94];
  struct std__basic_ostream_char__std__char_traits_char__* std96;
  __VERIFIER_nondet_memory(&std96, sizeof(std96));
  struct std__basic_ostream_char__std__char_traits_char__* std97;
  __VERIFIER_nondet_memory(&std97, sizeof(std97));
  int c98 = 0;
  __retval31 = c98;
  int t99 = __retval31;
  return t99;
}

