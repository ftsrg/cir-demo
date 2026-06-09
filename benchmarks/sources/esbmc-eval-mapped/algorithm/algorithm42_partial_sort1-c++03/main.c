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
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ { void* _M_comp; };
struct __gnu_cxx____ops___Iter_comp_val_bool_____int__int__ { void* _M_comp; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____cmp_cat____unspec { unsigned char __field0; };
struct std____detail___Synth3way { unsigned char __field0; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std__strong_ordering { char _M_value; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints[9] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
struct std____cmp_cat____unspec __const__ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterIPFbiiEEEEvT_SC_SC_T0__agg_tmp3;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[17] = "myvector[0] == 1";
char _str_1[129] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm42_partial_sort1-c++03/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[17] = "myvector[1] == 2";
char _str_3[17] = "myvector[2] == 3";
char _str_4[17] = "myvector[3] == 4";
char _str_5[16] = "myvector[4] > 4";
char _str_6[16] = "myvector[5] > 4";
char _str_7[16] = "myvector[6] > 4";
char _str_8[16] = "myvector[7] > 4";
char _str_9[16] = "myvector[8] > 4";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_10[19] = "myvector contains:";
char _str_11[2] = " ";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_12[49] = "cannot create std::vector larger than max_size()";
struct std____detail___Synth3way _ZNSt8__detail11__synth3wayE;
char _str_13[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_14[19] = "__n < this->size()";
_Bool myfunction(int p0, int p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z10myfunctionii
_Bool myfunction(int v0, int v1) {
bb2:
  int i3;
  int j4;
  _Bool __retval5;
  i3 = v0;
  j4 = v1;
  int t6 = i3;
  int t7 = j4;
  _Bool c8 = ((t6 < t7)) ? 1 : 0;
  __retval5 = c8;
  _Bool t9 = __retval5;
  return t9;
}

// function: main
int main() {
bb10:
  int __retval11;
  int myints12[9];
  struct std__vector_int__std__allocator_int__ myvector13;
  struct std__allocator_int_ ref_tmp014;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it15;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp016;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp117;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp118;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp219;
  int c20 = 0;
  __retval11 = c20;
  // array copy
  __builtin_memcpy(myints12, __const_main_myints, (unsigned long)9 * sizeof(__const_main_myints[0]));
  int* cast21 = (int*)&(myints12);
  int* cast22 = (int*)&(myints12);
  int c23 = 9;
  int* ptr24 = &(cast22)[c23];
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp014, sizeof(ref_tmp014));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&myvector13, sizeof(myvector13));
    __VERIFIER_nondet_memory(cast21, sizeof(*cast21));
    __VERIFIER_nondet_memory(ptr24, sizeof(*ptr24));
    __VERIFIER_nondet_memory(&ref_tmp014, sizeof(ref_tmp014));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp014, sizeof(ref_tmp014));
  }
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it15, sizeof(it15));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std25;
    __VERIFIER_nondet_memory(&std25, sizeof(std25));
    agg_tmp016 = std25;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    ref_tmp118 = std26;
    long c27 = 5;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    agg_tmp117 = std28;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    agg_tmp219 = std29;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t30 = agg_tmp016;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t31 = agg_tmp117;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t32 = agg_tmp219;
    // externalized std:: op: void std::partial_sort<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, bool (*)(int, int)>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, bool (*)(int, int))
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
    int c45 = 2;
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
    int c63 = 4;
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
    int c72 = 4;
    _Bool c73 = ((t71 > c72)) ? 1 : 0;
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
    int c81 = 4;
    _Bool c82 = ((t80 > c81)) ? 1 : 0;
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
    _Bool c91 = ((t89 > c90)) ? 1 : 0;
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
    int c99 = 4;
    _Bool c100 = ((t98 > c99)) ? 1 : 0;
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
    int c108 = 4;
    _Bool c109 = ((t107 > c108)) ? 1 : 0;
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
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2116;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3117;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std118;
      __VERIFIER_nondet_memory(&std118, sizeof(std118));
      ref_tmp2116 = std118;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std119;
      __VERIFIER_nondet_memory(&std119, sizeof(std119));
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std121;
        __VERIFIER_nondet_memory(&std121, sizeof(std121));
        ref_tmp3117 = std121;
        _Bool std122;
        __VERIFIER_nondet_memory(&std122, sizeof(std122));
        _Bool u123 = !std122;
        if (!u123) break;
        char* cast124 = (char*)&(_str_11);
        struct std__basic_ostream_char__std__char_traits_char__* std125;
        __VERIFIER_nondet_memory(&std125, sizeof(std125));
        int* std126;
        __VERIFIER_nondet_memory(&std126, sizeof(std126));
        int t127 = *std126;
        struct std__basic_ostream_char__std__char_traits_char__* std128;
        __VERIFIER_nondet_memory(&std128, sizeof(std128));
      for_step120: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std129;
        __VERIFIER_nondet_memory(&std129, sizeof(std129));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std130;
    __VERIFIER_nondet_memory(&std130, sizeof(std130));
    int c131 = 0;
    __retval11 = c131;
    int t132 = __retval11;
    int ret_val133 = t132;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector13, sizeof(myvector13));
    }
    return ret_val133;
  int t134 = __retval11;
  return t134;
}

