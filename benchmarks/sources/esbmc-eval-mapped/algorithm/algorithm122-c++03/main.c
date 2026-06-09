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
// Struct definitions (auto-parsed)
struct __gnu_cxx____ops___Iter_less_iter { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_less_val { unsigned char __field0; };
struct __gnu_cxx____ops___Val_less_iter { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int __const_main_myints[3] = {1, 2, 3};
struct __gnu_cxx____ops___Iter_less_val __const__ZSt13__adjust_heapIPiliN9__gnu_cxx5__ops15_Iter_less_iterEEvT_T0_S5_T1_T2____cmp;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[47] = "The 3! possible permutations with 3 elements:\n";
char _str_1[15] = "myints[2] == 3";
char _str_2[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm122-c++03/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int myints2[3];
  int c3 = 0;
  __retval1 = c3;
  // array copy
  __builtin_memcpy(myints2, __const_main_myints, (unsigned long)3 * sizeof(__const_main_myints[0]));
  char* cast4 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std5;
  __VERIFIER_nondet_memory(&std5, sizeof(std5));
  int* cast6 = (int*)&(myints2);
  int* cast7 = (int*)&(myints2);
  int c8 = 3;
  int* ptr9 = &(cast7)[c8];
  // externalized std:: op: void std::sort<int*>(int*, int*)
  __VERIFIER_nondet_memory(cast6, sizeof(*cast6));
  __VERIFIER_nondet_memory(ptr9, sizeof(*ptr9));
  int* cast10 = (int*)&(myints2);
  int* cast11 = (int*)&(myints2);
  int c12 = 3;
  int* ptr13 = &(cast11)[c12];
  _Bool std14;
  __VERIFIER_nondet_memory(&std14, sizeof(std14));
  long c15 = 2;
  int t16 = myints2[c15];
  int c17 = 3;
  _Bool c18 = ((t16 == c17)) ? 1 : 0;
  if (c18) {
  } else {
    char* cast19 = (char*)&(_str_1);
    char* c20 = _str_2;
    unsigned int c21 = 21;
    char* cast22 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast19, c20, c21, cast22);
  }
  int c23 = 0;
  __retval1 = c23;
  int t24 = __retval1;
  return t24;
}

