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
struct std__iterator_std__output_iterator_tag__void__void__void__void_;
struct std__ostream_iterator_int__char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__* _M_stream; char* _M_string; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int __const_main_a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[2] = " ";
char _str_1[22] = "Array a contains:\n   ";
char _str_2[39] = "\nArray a after swapping a[0] and a[1] ";
char _str_3[16] = "using swap:\n   ";
char _str_4[21] = "using iter_swap:\n   ";
char _str_5[49] = "\nArray a after swapping the first five elements\n";
char _str_6[33] = "with the last five elements:\n   ";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int SIZE2;
  int a3[10];
  struct std__ostream_iterator_int__char__std__char_traits_char__ output4;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp05;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp16;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp27;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp38;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp49;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp510;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp611;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp712;
  int c13 = 0;
  __retval1 = c13;
  int c14 = 10;
  SIZE2 = c14;
  // array copy
  __builtin_memcpy(a3, __const_main_a, (unsigned long)10 * sizeof(__const_main_a[0]));
  char* cast15 = (char*)&(_str);
  // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream&, char const*)
  __VERIFIER_nondet_memory(&output4, sizeof(output4));
  __VERIFIER_nondet_memory(&_ZSt4cout, sizeof(*&_ZSt4cout));
  __VERIFIER_nondet_memory(cast15, sizeof(*cast15));
  char* cast16 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std17;
  __VERIFIER_nondet_memory(&std17, sizeof(std17));
  int* cast18 = (int*)&(a3);
  int* cast19 = (int*)&(a3);
  int t20 = SIZE2;
  int* ptr21 = &(cast19)[t20];
  // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
  __VERIFIER_nondet_memory(&agg_tmp05, sizeof(agg_tmp05));
  __VERIFIER_nondet_memory(&output4, sizeof(output4));
  struct std__ostream_iterator_int__char__std__char_traits_char__ t22 = agg_tmp05;
  struct std__ostream_iterator_int__char__std__char_traits_char__ std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  agg_tmp16 = std23;
  long c24 = 0;
  long c25 = 1;
  // externalized std:: op: std::enable_if<__and_<std::__not_<std::__is_tuple_like<int> >, std::is_move_constructible<int>, std::is_move_assignable<int> >::value, void>::type std::swap<int>(int&, int&)
  __VERIFIER_nondet_memory(&a3[c24], sizeof(a3[c24]));
  __VERIFIER_nondet_memory(&a3[c25], sizeof(a3[c25]));
  char* cast26 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std27;
  __VERIFIER_nondet_memory(&std27, sizeof(std27));
  char* cast28 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std29;
  __VERIFIER_nondet_memory(&std29, sizeof(std29));
  int* cast30 = (int*)&(a3);
  int* cast31 = (int*)&(a3);
  int t32 = SIZE2;
  int* ptr33 = &(cast31)[t32];
  // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
  __VERIFIER_nondet_memory(&agg_tmp27, sizeof(agg_tmp27));
  __VERIFIER_nondet_memory(&output4, sizeof(output4));
  struct std__ostream_iterator_int__char__std__char_traits_char__ t34 = agg_tmp27;
  struct std__ostream_iterator_int__char__std__char_traits_char__ std35;
  __VERIFIER_nondet_memory(&std35, sizeof(std35));
  agg_tmp38 = std35;
  long c36 = 0;
  long c37 = 1;
  // externalized std:: op: void std::iter_swap<int*, int*>(int*, int*)
  __VERIFIER_nondet_memory(&a3[c36], sizeof(a3[c36]));
  __VERIFIER_nondet_memory(&a3[c37], sizeof(a3[c37]));
  char* cast38 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std39;
  __VERIFIER_nondet_memory(&std39, sizeof(std39));
  char* cast40 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std41;
  __VERIFIER_nondet_memory(&std41, sizeof(std41));
  int* cast42 = (int*)&(a3);
  int* cast43 = (int*)&(a3);
  int t44 = SIZE2;
  int* ptr45 = &(cast43)[t44];
  // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
  __VERIFIER_nondet_memory(&agg_tmp49, sizeof(agg_tmp49));
  __VERIFIER_nondet_memory(&output4, sizeof(output4));
  struct std__ostream_iterator_int__char__std__char_traits_char__ t46 = agg_tmp49;
  struct std__ostream_iterator_int__char__std__char_traits_char__ std47;
  __VERIFIER_nondet_memory(&std47, sizeof(std47));
  agg_tmp510 = std47;
  int* cast48 = (int*)&(a3);
  int* cast49 = (int*)&(a3);
  int c50 = 5;
  int* ptr51 = &(cast49)[c50];
  int* cast52 = (int*)&(a3);
  int c53 = 5;
  int* ptr54 = &(cast52)[c53];
  int* std55;
  __VERIFIER_nondet_memory(&std55, sizeof(std55));
  char* cast56 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std57;
  __VERIFIER_nondet_memory(&std57, sizeof(std57));
  char* cast58 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std59;
  __VERIFIER_nondet_memory(&std59, sizeof(std59));
  int* cast60 = (int*)&(a3);
  int* cast61 = (int*)&(a3);
  int t62 = SIZE2;
  int* ptr63 = &(cast61)[t62];
  // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
  __VERIFIER_nondet_memory(&agg_tmp611, sizeof(agg_tmp611));
  __VERIFIER_nondet_memory(&output4, sizeof(output4));
  struct std__ostream_iterator_int__char__std__char_traits_char__ t64 = agg_tmp611;
  struct std__ostream_iterator_int__char__std__char_traits_char__ std65;
  __VERIFIER_nondet_memory(&std65, sizeof(std65));
  agg_tmp712 = std65;
  struct std__basic_ostream_char__std__char_traits_char__* std66;
  __VERIFIER_nondet_memory(&std66, sizeof(std66));
  int c67 = 0;
  __retval1 = c67;
  int t68 = __retval1;
  return t68;
}

