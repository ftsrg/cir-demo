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
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int __const_main_myints[3] = {1, 2, 3};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[47] = "The 3! possible permutations with 3 elements:\n";
char _str_1[2] = " ";
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
    do {
        long c6 = 0;
        int t7 = myints2[c6];
        struct std__basic_ostream_char__std__char_traits_char__* std8;
        __VERIFIER_nondet_memory(&std8, sizeof(std8));
        char* cast9 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std10;
        __VERIFIER_nondet_memory(&std10, sizeof(std10));
        long c11 = 1;
        int t12 = myints2[c11];
        struct std__basic_ostream_char__std__char_traits_char__* std13;
        __VERIFIER_nondet_memory(&std13, sizeof(std13));
        char* cast14 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std15;
        __VERIFIER_nondet_memory(&std15, sizeof(std15));
        long c16 = 2;
        int t17 = myints2[c16];
        struct std__basic_ostream_char__std__char_traits_char__* std18;
        __VERIFIER_nondet_memory(&std18, sizeof(std18));
        struct std__basic_ostream_char__std__char_traits_char__* std19;
        __VERIFIER_nondet_memory(&std19, sizeof(std19));
      int* cast20 = (int*)&(myints2);
      int* cast21 = (int*)&(myints2);
      int c22 = 3;
      int* ptr23 = &(cast21)[c22];
      _Bool std24;
      __VERIFIER_nondet_memory(&std24, sizeof(std24));
      if (!std24) break;
    } while (1);
  int c25 = 0;
  __retval1 = c25;
  int t26 = __retval1;
  return t26;
}

