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
struct __gnu_cxx____ops___Iter_less_val { unsigned char __field0; };
struct __gnu_cxx____ops___Val_less_iter { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int __const_main_myints[3] = {1, 2, 3};
struct __gnu_cxx____ops___Iter_less_val __const__ZSt13__adjust_heapIPiliN9__gnu_cxx5__ops15_Iter_less_iterEEvT_T0_S5_T1_T2____cmp;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[47] = "The 3! possible permutations with 3 elements:\n";
char _str_1[2] = " ";
char _str_2[15] = "myints[0] == 1";
char _str_3[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm123-c++03/main.cpp";
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
  // externalized std:: op: void std::reverse<int*>(int*, int*)
  __VERIFIER_nondet_memory(cast10, sizeof(*cast10));
  __VERIFIER_nondet_memory(ptr13, sizeof(*ptr13));
    do {
        long c14 = 0;
        int t15 = myints2[c14];
        struct std__basic_ostream_char__std__char_traits_char__* std16;
        __VERIFIER_nondet_memory(&std16, sizeof(std16));
        char* cast17 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std18;
        __VERIFIER_nondet_memory(&std18, sizeof(std18));
        long c19 = 1;
        int t20 = myints2[c19];
        struct std__basic_ostream_char__std__char_traits_char__* std21;
        __VERIFIER_nondet_memory(&std21, sizeof(std21));
        char* cast22 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std23;
        __VERIFIER_nondet_memory(&std23, sizeof(std23));
        long c24 = 2;
        int t25 = myints2[c24];
        struct std__basic_ostream_char__std__char_traits_char__* std26;
        __VERIFIER_nondet_memory(&std26, sizeof(std26));
        struct std__basic_ostream_char__std__char_traits_char__* std27;
        __VERIFIER_nondet_memory(&std27, sizeof(std27));
        long c28 = 0;
        int t29 = myints2[c28];
        int c30 = 1;
        _Bool c31 = ((t29 == c30)) ? 1 : 0;
        if (c31) {
        } else {
          char* cast32 = (char*)&(_str_2);
          char* c33 = _str_3;
          unsigned int c34 = 24;
          char* cast35 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast32, c33, c34, cast35);
        }
      int* cast36 = (int*)&(myints2);
      int* cast37 = (int*)&(myints2);
      int c38 = 3;
      int* ptr39 = &(cast37)[c38];
      _Bool std40;
      __VERIFIER_nondet_memory(&std40, sizeof(std40));
      if (!std40) break;
    } while (1);
  int c41 = 0;
  __retval1 = c41;
  int t42 = __retval1;
  return t42;
}

