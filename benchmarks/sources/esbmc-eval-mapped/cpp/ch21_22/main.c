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
struct __gnu_cxx____ops___Iter_less_iter { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__iterator_std__output_iterator_tag__void__void__void__void_;
struct std__ostream_iterator_int__char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__* _M_stream; char* _M_string; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int __const_main_a3[5] = {4, 5, 6, 11, 15};
int __const_main_a2[5] = {4, 5, 6, 7, 8};
int __const_main_a1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[2] = " ";
char _str_1[14] = "a1 contains: ";
char _str_2[15] = "\na2 contains: ";
char _str_3[15] = "\na3 contains: ";
char _str_4[17] = "\n\na1 includes a2";
char _str_5[25] = "\n\na1 does not include a2";
char _str_6[16] = "\na1 includes a3";
char _str_7[24] = "\na1 does not include a3";
char _str_8[35] = "\n\nset_difference of a1 and a2 is: ";
char _str_9[37] = "\n\nset_intersection of a1 and a2 is: ";
char _str_10[45] = "\n\nset_symmetric_difference of a1 and a2 is: ";
char _str_11[30] = "\n\nset_union of a1 and a3 is: ";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int SIZE12;
  int SIZE23;
  int SIZE34;
  int a15[10];
  int a26[5];
  int a37[5];
  struct std__ostream_iterator_int__char__std__char_traits_char__ output8;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp09;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp110;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp211;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp312;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp413;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp514;
  int difference15[10];
  int* ptr16;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp617;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp718;
  int intersection19[10];
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp820;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp921;
  int symmetric_difference22[10];
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp1023;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp1124;
  int unionSet25[20];
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp1226;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp1327;
  int c28 = 0;
  __retval1 = c28;
  int c29 = 10;
  SIZE12 = c29;
  int c30 = 5;
  SIZE23 = c30;
  int c31 = 20;
  SIZE34 = c31;
  // array copy
  __builtin_memcpy(a15, __const_main_a1, (unsigned long)10 * sizeof(__const_main_a1[0]));
  // array copy
  __builtin_memcpy(a26, __const_main_a2, (unsigned long)5 * sizeof(__const_main_a2[0]));
  // array copy
  __builtin_memcpy(a37, __const_main_a3, (unsigned long)5 * sizeof(__const_main_a3[0]));
  char* cast32 = (char*)&(_str);
  // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream&, char const*)
  __VERIFIER_nondet_memory(&output8, sizeof(output8));
  __VERIFIER_nondet_memory(&_ZSt4cout, sizeof(*&_ZSt4cout));
  __VERIFIER_nondet_memory(cast32, sizeof(*cast32));
  char* cast33 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std34;
  __VERIFIER_nondet_memory(&std34, sizeof(std34));
  int* cast35 = (int*)&(a15);
  int* cast36 = (int*)&(a15);
  int t37 = SIZE12;
  int* ptr38 = &(cast36)[t37];
  // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
  __VERIFIER_nondet_memory(&agg_tmp09, sizeof(agg_tmp09));
  __VERIFIER_nondet_memory(&output8, sizeof(output8));
  struct std__ostream_iterator_int__char__std__char_traits_char__ t39 = agg_tmp09;
  struct std__ostream_iterator_int__char__std__char_traits_char__ std40;
  __VERIFIER_nondet_memory(&std40, sizeof(std40));
  agg_tmp110 = std40;
  char* cast41 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std42;
  __VERIFIER_nondet_memory(&std42, sizeof(std42));
  int* cast43 = (int*)&(a26);
  int* cast44 = (int*)&(a26);
  int t45 = SIZE23;
  int* ptr46 = &(cast44)[t45];
  // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
  __VERIFIER_nondet_memory(&agg_tmp211, sizeof(agg_tmp211));
  __VERIFIER_nondet_memory(&output8, sizeof(output8));
  struct std__ostream_iterator_int__char__std__char_traits_char__ t47 = agg_tmp211;
  struct std__ostream_iterator_int__char__std__char_traits_char__ std48;
  __VERIFIER_nondet_memory(&std48, sizeof(std48));
  agg_tmp312 = std48;
  char* cast49 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std50;
  __VERIFIER_nondet_memory(&std50, sizeof(std50));
  int* cast51 = (int*)&(a37);
  int* cast52 = (int*)&(a37);
  int t53 = SIZE23;
  int* ptr54 = &(cast52)[t53];
  // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
  __VERIFIER_nondet_memory(&agg_tmp413, sizeof(agg_tmp413));
  __VERIFIER_nondet_memory(&output8, sizeof(output8));
  struct std__ostream_iterator_int__char__std__char_traits_char__ t55 = agg_tmp413;
  struct std__ostream_iterator_int__char__std__char_traits_char__ std56;
  __VERIFIER_nondet_memory(&std56, sizeof(std56));
  agg_tmp514 = std56;
    int* cast57 = (int*)&(a15);
    int* cast58 = (int*)&(a15);
    int t59 = SIZE12;
    int* ptr60 = &(cast58)[t59];
    int* cast61 = (int*)&(a26);
    int* cast62 = (int*)&(a26);
    int t63 = SIZE23;
    int* ptr64 = &(cast62)[t63];
    _Bool std65;
    __VERIFIER_nondet_memory(&std65, sizeof(std65));
    if (std65) {
      char* cast66 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* std67;
      __VERIFIER_nondet_memory(&std67, sizeof(std67));
    } else {
      char* cast68 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* std69;
      __VERIFIER_nondet_memory(&std69, sizeof(std69));
    }
    int* cast70 = (int*)&(a15);
    int* cast71 = (int*)&(a15);
    int t72 = SIZE12;
    int* ptr73 = &(cast71)[t72];
    int* cast74 = (int*)&(a37);
    int* cast75 = (int*)&(a37);
    int t76 = SIZE23;
    int* ptr77 = &(cast75)[t76];
    _Bool std78;
    __VERIFIER_nondet_memory(&std78, sizeof(std78));
    if (std78) {
      char* cast79 = (char*)&(_str_6);
      struct std__basic_ostream_char__std__char_traits_char__* std80;
      __VERIFIER_nondet_memory(&std80, sizeof(std80));
    } else {
      char* cast81 = (char*)&(_str_7);
      struct std__basic_ostream_char__std__char_traits_char__* std82;
      __VERIFIER_nondet_memory(&std82, sizeof(std82));
    }
  int* cast83 = (int*)&(a15);
  int* cast84 = (int*)&(a15);
  int t85 = SIZE12;
  int* ptr86 = &(cast84)[t85];
  int* cast87 = (int*)&(a26);
  int* cast88 = (int*)&(a26);
  int t89 = SIZE23;
  int* ptr90 = &(cast88)[t89];
  int* cast91 = (int*)&(difference15);
  int* std92;
  __VERIFIER_nondet_memory(&std92, sizeof(std92));
  ptr16 = std92;
  char* cast93 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* std94;
  __VERIFIER_nondet_memory(&std94, sizeof(std94));
  int* cast95 = (int*)&(difference15);
  int* t96 = ptr16;
  // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
  __VERIFIER_nondet_memory(&agg_tmp617, sizeof(agg_tmp617));
  __VERIFIER_nondet_memory(&output8, sizeof(output8));
  struct std__ostream_iterator_int__char__std__char_traits_char__ t97 = agg_tmp617;
  struct std__ostream_iterator_int__char__std__char_traits_char__ std98;
  __VERIFIER_nondet_memory(&std98, sizeof(std98));
  agg_tmp718 = std98;
  int* cast99 = (int*)&(a15);
  int* cast100 = (int*)&(a15);
  int t101 = SIZE12;
  int* ptr102 = &(cast100)[t101];
  int* cast103 = (int*)&(a26);
  int* cast104 = (int*)&(a26);
  int t105 = SIZE23;
  int* ptr106 = &(cast104)[t105];
  int* cast107 = (int*)&(intersection19);
  int* std108;
  __VERIFIER_nondet_memory(&std108, sizeof(std108));
  ptr16 = std108;
  char* cast109 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* std110;
  __VERIFIER_nondet_memory(&std110, sizeof(std110));
  int* cast111 = (int*)&(intersection19);
  int* t112 = ptr16;
  // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
  __VERIFIER_nondet_memory(&agg_tmp820, sizeof(agg_tmp820));
  __VERIFIER_nondet_memory(&output8, sizeof(output8));
  struct std__ostream_iterator_int__char__std__char_traits_char__ t113 = agg_tmp820;
  struct std__ostream_iterator_int__char__std__char_traits_char__ std114;
  __VERIFIER_nondet_memory(&std114, sizeof(std114));
  agg_tmp921 = std114;
  int* cast115 = (int*)&(a15);
  int* cast116 = (int*)&(a15);
  int t117 = SIZE12;
  int* ptr118 = &(cast116)[t117];
  int* cast119 = (int*)&(a26);
  int* cast120 = (int*)&(a26);
  int t121 = SIZE23;
  int* ptr122 = &(cast120)[t121];
  int* cast123 = (int*)&(symmetric_difference22);
  int* std124;
  __VERIFIER_nondet_memory(&std124, sizeof(std124));
  ptr16 = std124;
  char* cast125 = (char*)&(_str_10);
  struct std__basic_ostream_char__std__char_traits_char__* std126;
  __VERIFIER_nondet_memory(&std126, sizeof(std126));
  int* cast127 = (int*)&(symmetric_difference22);
  int* t128 = ptr16;
  // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
  __VERIFIER_nondet_memory(&agg_tmp1023, sizeof(agg_tmp1023));
  __VERIFIER_nondet_memory(&output8, sizeof(output8));
  struct std__ostream_iterator_int__char__std__char_traits_char__ t129 = agg_tmp1023;
  struct std__ostream_iterator_int__char__std__char_traits_char__ std130;
  __VERIFIER_nondet_memory(&std130, sizeof(std130));
  agg_tmp1124 = std130;
  int* cast131 = (int*)&(a15);
  int* cast132 = (int*)&(a15);
  int t133 = SIZE12;
  int* ptr134 = &(cast132)[t133];
  int* cast135 = (int*)&(a37);
  int* cast136 = (int*)&(a37);
  int t137 = SIZE23;
  int* ptr138 = &(cast136)[t137];
  int* cast139 = (int*)&(unionSet25);
  int* std140;
  __VERIFIER_nondet_memory(&std140, sizeof(std140));
  ptr16 = std140;
  char* cast141 = (char*)&(_str_11);
  struct std__basic_ostream_char__std__char_traits_char__* std142;
  __VERIFIER_nondet_memory(&std142, sizeof(std142));
  int* cast143 = (int*)&(unionSet25);
  int* t144 = ptr16;
  // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
  __VERIFIER_nondet_memory(&agg_tmp1226, sizeof(agg_tmp1226));
  __VERIFIER_nondet_memory(&output8, sizeof(output8));
  struct std__ostream_iterator_int__char__std__char_traits_char__ t145 = agg_tmp1226;
  struct std__ostream_iterator_int__char__std__char_traits_char__ std146;
  __VERIFIER_nondet_memory(&std146, sizeof(std146));
  agg_tmp1327 = std146;
  struct std__basic_ostream_char__std__char_traits_char__* std147;
  __VERIFIER_nondet_memory(&std147, sizeof(std147));
  int c148 = 0;
  __retval1 = c148;
  int t149 = __retval1;
  return t149;
}

