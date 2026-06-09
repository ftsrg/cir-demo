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
struct std__basic_istream_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int __const_main_a[10] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[37] = "Enter 1 to sort in ascending order,\n";
char _str_1[38] = "Enter 2 to sort in descending order: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_2[31] = "\nData items in original order\n";
char _str_3[32] = "\nData items in ascending order\n";
char _str_4[33] = "\nData items in descending order\n";
void swap(int* p0, int* p1);
void bubble_int___int__bool____(int* p0, int p1, void* p2);
_Bool ascending(int p0, int p1);
_Bool descending(int p0, int p1);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z4swapPiS_
void swap(int* v0, int* v1) {
bb2:
  int* element1Ptr3;
  int* element2Ptr4;
  int hold5;
  element1Ptr3 = v0;
  element2Ptr4 = v1;
  int* t6 = element1Ptr3;
  int t7 = *t6;
  hold5 = t7;
  int* t8 = element2Ptr4;
  int t9 = *t8;
  int* t10 = element1Ptr3;
  *t10 = t9;
  int t11 = hold5;
  int* t12 = element2Ptr4;
  *t12 = t11;
  return;
}

// function: _Z6bubblePiiPFbiiE
void bubble_int___int__bool____(int* v13, int v14, void* v15) {
bb16:
  int* work17;
  int size18;
  void* compare19;
  work17 = v13;
  size18 = v14;
  compare19 = v15;
    int pass20;
    int c21 = 1;
    pass20 = c21;
    while (1) {
      int t23 = pass20;
      int t24 = size18;
      _Bool c25 = ((t23 < t24)) ? 1 : 0;
      if (!c25) break;
        int count26;
        int c27 = 0;
        count26 = c27;
        while (1) {
          int t29 = count26;
          int t30 = size18;
          int c31 = 1;
          int b32 = t30 - c31;
          _Bool c33 = ((t29 < b32)) ? 1 : 0;
          if (!c33) break;
            void* t34 = compare19;
            int t35 = count26;
            long cast36 = (long)t35;
            int* t37 = work17;
            int* ptr38 = &(t37)[cast36];
            int t39 = *ptr38;
            int t40 = count26;
            int c41 = 1;
            int b42 = t40 + c41;
            long cast43 = (long)b42;
            int* t44 = work17;
            int* ptr45 = &(t44)[cast43];
            int t46 = *ptr45;
            _Bool r47 = ((_Bool (*)(int, int))t34)(t39, t46);
            if (r47) {
              int t48 = count26;
              long cast49 = (long)t48;
              int* t50 = work17;
              int* ptr51 = &(t50)[cast49];
              int t52 = count26;
              int c53 = 1;
              int b54 = t52 + c53;
              long cast55 = (long)b54;
              int* t56 = work17;
              int* ptr57 = &(t56)[cast55];
              swap(ptr51, ptr57);
            }
        for_step28: ;
          int t58 = count26;
          int u59 = t58 + 1;
          count26 = u59;
        }
    for_step22: ;
      int t60 = pass20;
      int u61 = t60 + 1;
      pass20 = u61;
    }
  return;
}

// function: _Z9ascendingii
_Bool ascending(int v62, int v63) {
bb64:
  int a65;
  int b66;
  _Bool __retval67;
  a65 = v62;
  b66 = v63;
  int t68 = b66;
  int t69 = a65;
  _Bool c70 = ((t68 < t69)) ? 1 : 0;
  __retval67 = c70;
  _Bool t71 = __retval67;
  return t71;
}

// function: _Z10descendingii
_Bool descending(int v72, int v73) {
bb74:
  int a75;
  int b76;
  _Bool __retval77;
  a75 = v72;
  b76 = v73;
  int t78 = b76;
  int t79 = a75;
  _Bool c80 = ((t78 > t79)) ? 1 : 0;
  __retval77 = c80;
  _Bool t81 = __retval77;
  return t81;
}

// function: main
int main() {
bb82:
  int __retval83;
  int arraySize84;
  int order85;
  int counter86;
  int a87[10];
  int c88 = 0;
  __retval83 = c88;
  int c89 = 10;
  arraySize84 = c89;
  // array copy
  __builtin_memcpy(a87, __const_main_a, (unsigned long)10 * sizeof(__const_main_a[0]));
  char* cast90 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std91;
  __VERIFIER_nondet_memory(&std91, sizeof(std91));
  char* cast92 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std93;
  __VERIFIER_nondet_memory(&std93, sizeof(std93));
  struct std__basic_istream_char__std__char_traits_char__* std94;
  __VERIFIER_nondet_memory(&std94, sizeof(std94));
  char* cast95 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std96;
  __VERIFIER_nondet_memory(&std96, sizeof(std96));
    struct std___Setw agg_tmp097;
    int c98 = 0;
    counter86 = c98;
    while (1) {
      int t100 = counter86;
      int t101 = arraySize84;
      _Bool c102 = ((t100 < t101)) ? 1 : 0;
      if (!c102) break;
      int c103 = 4;
      struct std___Setw std104;
      __VERIFIER_nondet_memory(&std104, sizeof(std104));
      agg_tmp097 = std104;
      struct std___Setw t105 = agg_tmp097;
      struct std__basic_ostream_char__std__char_traits_char__* std106;
      __VERIFIER_nondet_memory(&std106, sizeof(std106));
      int t107 = counter86;
      long cast108 = (long)t107;
      int t109 = a87[cast108];
      struct std__basic_ostream_char__std__char_traits_char__* std110;
      __VERIFIER_nondet_memory(&std110, sizeof(std110));
    for_step99: ;
      int t111 = counter86;
      int u112 = t111 + 1;
      counter86 = u112;
    }
    int t113 = order85;
    int c114 = 1;
    _Bool c115 = ((t113 == c114)) ? 1 : 0;
    if (c115) {
      int* cast116 = (int*)&(a87);
      int t117 = arraySize84;
      bubble_int___int__bool____(cast116, t117, &ascending);
      char* cast118 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* std119;
      __VERIFIER_nondet_memory(&std119, sizeof(std119));
    } else {
      int* cast120 = (int*)&(a87);
      int t121 = arraySize84;
      bubble_int___int__bool____(cast120, t121, &descending);
      char* cast122 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* std123;
      __VERIFIER_nondet_memory(&std123, sizeof(std123));
    }
    struct std___Setw agg_tmp1124;
    int c125 = 0;
    counter86 = c125;
    while (1) {
      int t127 = counter86;
      int t128 = arraySize84;
      _Bool c129 = ((t127 < t128)) ? 1 : 0;
      if (!c129) break;
      int c130 = 4;
      struct std___Setw std131;
      __VERIFIER_nondet_memory(&std131, sizeof(std131));
      agg_tmp1124 = std131;
      struct std___Setw t132 = agg_tmp1124;
      struct std__basic_ostream_char__std__char_traits_char__* std133;
      __VERIFIER_nondet_memory(&std133, sizeof(std133));
      int t134 = counter86;
      long cast135 = (long)t134;
      int t136 = a87[cast135];
      struct std__basic_ostream_char__std__char_traits_char__* std137;
      __VERIFIER_nondet_memory(&std137, sizeof(std137));
    for_step126: ;
      int t138 = counter86;
      int u139 = t138 + 1;
      counter86 = u139;
    }
  struct std__basic_ostream_char__std__char_traits_char__* std140;
  __VERIFIER_nondet_memory(&std140, sizeof(std140));
  int c141 = 0;
  __retval83 = c141;
  int t142 = __retval83;
  return t142;
}

