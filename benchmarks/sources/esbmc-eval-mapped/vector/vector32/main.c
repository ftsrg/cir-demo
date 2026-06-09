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
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints[3] = {1776, 7, 4};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[16] = "Size of first: ";
char _str_1[18] = "first.size() == 7";
char _str_2[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/vector32/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[17] = "Size of second: ";
char _str_4[19] = "second.size() == 5";
char _str_5[16] = "Size of third: ";
char _str_6[18] = "third.size() == 3";
char _str_7[49] = "cannot create std::vector larger than max_size()";
char _str_8[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_9[9] = "__n >= 0";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__vector_int__std__allocator_int__ first2;
  struct std__vector_int__std__allocator_int__ second3;
  struct std__vector_int__std__allocator_int__ third4;
  int ref_tmp05;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it6;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp17;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp28;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp09;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp110;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp311;
  int myints12[3];
  int c13 = 0;
  __retval1 = c13;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&first2, sizeof(first2));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
    __VERIFIER_nondet_memory(&second3, sizeof(second3));
      // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
      __VERIFIER_nondet_memory(&third4, sizeof(third4));
        unsigned long c14 = 7;
        int c15 = 100;
        ref_tmp05 = c15;
        // externalized std:: op: std::vector<int, std::allocator<int> >::assign(unsigned long, int const&)
        __VERIFIER_nondet_memory(&first2, sizeof(first2));
        __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
        // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
        __VERIFIER_nondet_memory(&it6, sizeof(it6));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std16;
        __VERIFIER_nondet_memory(&std16, sizeof(std16));
        ref_tmp28 = std16;
        long c17 = 1;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std18;
        __VERIFIER_nondet_memory(&std18, sizeof(std18));
        ref_tmp17 = std18;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std19;
        __VERIFIER_nondet_memory(&std19, sizeof(std19));
        agg_tmp09 = it6; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std20;
        __VERIFIER_nondet_memory(&std20, sizeof(std20));
        ref_tmp311 = std20;
        long c21 = 1;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std22;
        __VERIFIER_nondet_memory(&std22, sizeof(std22));
        agg_tmp110 = std22;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t23 = agg_tmp09;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t24 = agg_tmp110;
        // externalized std:: op: void std::vector<int, std::allocator<int> >::assign<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, void>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >)
        __VERIFIER_nondet_memory(&second3, sizeof(second3));
        // array copy
        __builtin_memcpy(myints12, __const_main_myints, (unsigned long)3 * sizeof(__const_main_myints[0]));
        int* cast25 = (int*)&(myints12);
        int* cast26 = (int*)&(myints12);
        int c27 = 3;
        int* ptr28 = &(cast26)[c27];
        // externalized std:: op: void std::vector<int, std::allocator<int> >::assign<int*, void>(int*, int*)
        __VERIFIER_nondet_memory(&third4, sizeof(third4));
        __VERIFIER_nondet_memory(cast25, sizeof(*cast25));
        __VERIFIER_nondet_memory(ptr28, sizeof(*ptr28));
        char* cast29 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* std30;
        __VERIFIER_nondet_memory(&std30, sizeof(std30));
        unsigned long std31 = __VERIFIER_nondet_unsigned_long();
        int cast32 = (int)std31;
        struct std__basic_ostream_char__std__char_traits_char__* std33;
        __VERIFIER_nondet_memory(&std33, sizeof(std33));
        struct std__basic_ostream_char__std__char_traits_char__* std34;
        __VERIFIER_nondet_memory(&std34, sizeof(std34));
        unsigned long std35 = __VERIFIER_nondet_unsigned_long();
        unsigned long c36 = 7;
        _Bool c37 = ((std35 == c36)) ? 1 : 0;
        if (c37) {
        } else {
          char* cast38 = (char*)&(_str_1);
          char* c39 = _str_2;
          unsigned int c40 = 31;
          char* cast41 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast38, c39, c40, cast41);
        }
        char* cast42 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std43;
        __VERIFIER_nondet_memory(&std43, sizeof(std43));
        unsigned long std44 = __VERIFIER_nondet_unsigned_long();
        int cast45 = (int)std44;
        struct std__basic_ostream_char__std__char_traits_char__* std46;
        __VERIFIER_nondet_memory(&std46, sizeof(std46));
        struct std__basic_ostream_char__std__char_traits_char__* std47;
        __VERIFIER_nondet_memory(&std47, sizeof(std47));
        unsigned long std48 = __VERIFIER_nondet_unsigned_long();
        unsigned long c49 = 5;
        _Bool c50 = ((std48 == c49)) ? 1 : 0;
        if (c50) {
        } else {
          char* cast51 = (char*)&(_str_4);
          char* c52 = _str_2;
          unsigned int c53 = 33;
          char* cast54 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast51, c52, c53, cast54);
        }
        char* cast55 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* std56;
        __VERIFIER_nondet_memory(&std56, sizeof(std56));
        unsigned long std57 = __VERIFIER_nondet_unsigned_long();
        int cast58 = (int)std57;
        struct std__basic_ostream_char__std__char_traits_char__* std59;
        __VERIFIER_nondet_memory(&std59, sizeof(std59));
        struct std__basic_ostream_char__std__char_traits_char__* std60;
        __VERIFIER_nondet_memory(&std60, sizeof(std60));
        unsigned long std61 = __VERIFIER_nondet_unsigned_long();
        unsigned long c62 = 3;
        _Bool c63 = ((std61 == c62)) ? 1 : 0;
        if (c63) {
        } else {
          char* cast64 = (char*)&(_str_6);
          char* c65 = _str_2;
          unsigned int c66 = 35;
          char* cast67 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast64, c65, c66, cast67);
        }
        int c68 = 0;
        __retval1 = c68;
        int t69 = __retval1;
        int ret_val70 = t69;
        {
          // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
          __VERIFIER_nondet_memory(&third4, sizeof(third4));
        }
        {
          // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
          __VERIFIER_nondet_memory(&second3, sizeof(second3));
        }
        {
          // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
          __VERIFIER_nondet_memory(&first2, sizeof(first2));
        }
        return ret_val70;
  int t71 = __retval1;
  return t71;
}

