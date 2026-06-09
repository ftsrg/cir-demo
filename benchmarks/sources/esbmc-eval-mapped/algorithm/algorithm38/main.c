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
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_;
struct std__bidirectional_iterator_tag { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[17] = "myvector[0] == 1";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm38/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[17] = "myvector[1] == 9";
char _str_3[17] = "myvector[2] == 3";
char _str_4[17] = "myvector[3] == 7";
char _str_5[17] = "myvector[4] == 5";
char _str_6[17] = "myvector[5] == 6";
char _str_7[17] = "myvector[6] == 4";
char _str_8[17] = "myvector[7] == 8";
char _str_9[17] = "myvector[8] == 2";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_10[13] = "odd members:";
char _str_11[2] = " ";
char _str_12[15] = "\neven members:";
char _str_13[26] = "vector::_M_realloc_append";
char _str_14[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_15[19] = "__n < this->size()";
_Bool IsOdd(int p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z5IsOddi
_Bool IsOdd(int v0) {
bb1:
  int i2;
  _Bool __retval3;
  i2 = v0;
  int t4 = i2;
  int c5 = 2;
  int b6 = t4 % c5;
  int c7 = 1;
  _Bool c8 = ((b6 == c7)) ? 1 : 0;
  __retval3 = c8;
  _Bool t9 = __retval3;
  return t9;
}

// function: main
int main() {
bb10:
  int __retval11;
  struct std__vector_int__std__allocator_int__ myvector12;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it13;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ bound14;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp015;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp016;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp117;
  int c18 = 0;
  __retval11 = c18;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&myvector12, sizeof(myvector12));
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it13, sizeof(it13));
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&bound14, sizeof(bound14));
      int i19;
      int c20 = 1;
      i19 = c20;
      while (1) {
        int t22 = i19;
        int c23 = 10;
        _Bool c24 = ((t22 < c23)) ? 1 : 0;
        if (!c24) break;
        // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int const&)
        __VERIFIER_nondet_memory(&myvector12, sizeof(myvector12));
        __VERIFIER_nondet_memory(&i19, sizeof(i19));
      for_step21: ;
        int t25 = i19;
        int u26 = t25 + 1;
        i19 = u26;
      }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    agg_tmp016 = std27;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    agg_tmp117 = std28;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t29 = agg_tmp016;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t30 = agg_tmp117;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    ref_tmp015 = std31;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    unsigned long c33 = 0;
    int* std34;
    __VERIFIER_nondet_memory(&std34, sizeof(std34));
    int t35 = *std34;
    int c36 = 1;
    _Bool c37 = ((t35 == c36)) ? 1 : 0;
    if (c37) {
    } else {
      char* cast38 = (char*)&(_str);
      char* c39 = _str_1;
      unsigned int c40 = 29;
      char* cast41 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast38, c39, c40, cast41);
    }
    unsigned long c42 = 1;
    int* std43;
    __VERIFIER_nondet_memory(&std43, sizeof(std43));
    int t44 = *std43;
    int c45 = 9;
    _Bool c46 = ((t44 == c45)) ? 1 : 0;
    if (c46) {
    } else {
      char* cast47 = (char*)&(_str_2);
      char* c48 = _str_1;
      unsigned int c49 = 30;
      char* cast50 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast47, c48, c49, cast50);
    }
    unsigned long c51 = 2;
    int* std52;
    __VERIFIER_nondet_memory(&std52, sizeof(std52));
    int t53 = *std52;
    int c54 = 3;
    _Bool c55 = ((t53 == c54)) ? 1 : 0;
    if (c55) {
    } else {
      char* cast56 = (char*)&(_str_3);
      char* c57 = _str_1;
      unsigned int c58 = 31;
      char* cast59 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast56, c57, c58, cast59);
    }
    unsigned long c60 = 3;
    int* std61;
    __VERIFIER_nondet_memory(&std61, sizeof(std61));
    int t62 = *std61;
    int c63 = 7;
    _Bool c64 = ((t62 == c63)) ? 1 : 0;
    if (c64) {
    } else {
      char* cast65 = (char*)&(_str_4);
      char* c66 = _str_1;
      unsigned int c67 = 32;
      char* cast68 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast65, c66, c67, cast68);
    }
    unsigned long c69 = 4;
    int* std70;
    __VERIFIER_nondet_memory(&std70, sizeof(std70));
    int t71 = *std70;
    int c72 = 5;
    _Bool c73 = ((t71 == c72)) ? 1 : 0;
    if (c73) {
    } else {
      char* cast74 = (char*)&(_str_5);
      char* c75 = _str_1;
      unsigned int c76 = 33;
      char* cast77 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast74, c75, c76, cast77);
    }
    unsigned long c78 = 5;
    int* std79;
    __VERIFIER_nondet_memory(&std79, sizeof(std79));
    int t80 = *std79;
    int c81 = 6;
    _Bool c82 = ((t80 == c81)) ? 1 : 0;
    if (c82) {
    } else {
      char* cast83 = (char*)&(_str_6);
      char* c84 = _str_1;
      unsigned int c85 = 34;
      char* cast86 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast83, c84, c85, cast86);
    }
    unsigned long c87 = 6;
    int* std88;
    __VERIFIER_nondet_memory(&std88, sizeof(std88));
    int t89 = *std88;
    int c90 = 4;
    _Bool c91 = ((t89 == c90)) ? 1 : 0;
    if (c91) {
    } else {
      char* cast92 = (char*)&(_str_7);
      char* c93 = _str_1;
      unsigned int c94 = 35;
      char* cast95 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast92, c93, c94, cast95);
    }
    unsigned long c96 = 7;
    int* std97;
    __VERIFIER_nondet_memory(&std97, sizeof(std97));
    int t98 = *std97;
    int c99 = 8;
    _Bool c100 = ((t98 == c99)) ? 1 : 0;
    if (c100) {
    } else {
      char* cast101 = (char*)&(_str_8);
      char* c102 = _str_1;
      unsigned int c103 = 36;
      char* cast104 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast101, c102, c103, cast104);
    }
    unsigned long c105 = 8;
    int* std106;
    __VERIFIER_nondet_memory(&std106, sizeof(std106));
    int t107 = *std106;
    int c108 = 2;
    _Bool c109 = ((t107 == c108)) ? 1 : 0;
    if (c109) {
    } else {
      char* cast110 = (char*)&(_str_9);
      char* c111 = _str_1;
      unsigned int c112 = 37;
      char* cast113 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast110, c111, c112, cast113);
    }
    char* cast114 = (char*)&(_str_10);
    struct std__basic_ostream_char__std__char_traits_char__* std115;
    __VERIFIER_nondet_memory(&std115, sizeof(std115));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1116;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std117;
      __VERIFIER_nondet_memory(&std117, sizeof(std117));
      ref_tmp1116 = std117;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std118;
      __VERIFIER_nondet_memory(&std118, sizeof(std118));
      while (1) {
        _Bool std120;
        __VERIFIER_nondet_memory(&std120, sizeof(std120));
        _Bool u121 = !std120;
        if (!u121) break;
        char* cast122 = (char*)&(_str_11);
        struct std__basic_ostream_char__std__char_traits_char__* std123;
        __VERIFIER_nondet_memory(&std123, sizeof(std123));
        int* std124;
        __VERIFIER_nondet_memory(&std124, sizeof(std124));
        int t125 = *std124;
        struct std__basic_ostream_char__std__char_traits_char__* std126;
        __VERIFIER_nondet_memory(&std126, sizeof(std126));
      for_step119: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std127;
        __VERIFIER_nondet_memory(&std127, sizeof(std127));
      }
    char* cast128 = (char*)&(_str_12);
    struct std__basic_ostream_char__std__char_traits_char__* std129;
    __VERIFIER_nondet_memory(&std129, sizeof(std129));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2130;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std131;
      __VERIFIER_nondet_memory(&std131, sizeof(std131));
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std133;
        __VERIFIER_nondet_memory(&std133, sizeof(std133));
        ref_tmp2130 = std133;
        _Bool std134;
        __VERIFIER_nondet_memory(&std134, sizeof(std134));
        _Bool u135 = !std134;
        if (!u135) break;
        char* cast136 = (char*)&(_str_11);
        struct std__basic_ostream_char__std__char_traits_char__* std137;
        __VERIFIER_nondet_memory(&std137, sizeof(std137));
        int* std138;
        __VERIFIER_nondet_memory(&std138, sizeof(std138));
        int t139 = *std138;
        struct std__basic_ostream_char__std__char_traits_char__* std140;
        __VERIFIER_nondet_memory(&std140, sizeof(std140));
      for_step132: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std141;
        __VERIFIER_nondet_memory(&std141, sizeof(std141));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std142;
    __VERIFIER_nondet_memory(&std142, sizeof(std142));
    int c143 = 0;
    __retval11 = c143;
    int t144 = __retval11;
    int ret_val145 = t144;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector12, sizeof(myvector12));
    }
    return ret_val145;
  int t146 = __retval11;
  return t146;
}

