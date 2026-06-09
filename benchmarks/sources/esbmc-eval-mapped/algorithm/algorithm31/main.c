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
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ { void* _M_comp; };
struct __gnu_cxx____ops___Iter_equal_to_iter { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints[9] = {10, 20, 20, 20, 30, 30, 20, 20, 10};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "myvector[0] == 10";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm31/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "myvector[1] == 20";
char _str_3[18] = "myvector[2] == 30";
char _str_4[18] = "myvector[3] == 20";
char _str_5[18] = "myvector[4] == 10";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_6[19] = "myvector contains:";
char _str_7[2] = " ";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_8[49] = "cannot create std::vector larger than max_size()";
char _str_9[26] = "vector::_M_default_append";
char _str_10[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_11[19] = "__n < this->size()";
_Bool myfunction(int p0, int p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern long __VERIFIER_nondet_long(void);
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
  _Bool c8 = ((t6 == t7)) ? 1 : 0;
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
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp116;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp017;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp118;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp219;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp220;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp321;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp422;
  int c23 = 0;
  __retval11 = c23;
  // array copy
  __builtin_memcpy(myints12, __const_main_myints, (unsigned long)9 * sizeof(__const_main_myints[0]));
  int* cast24 = (int*)&(myints12);
  int* cast25 = (int*)&(myints12);
  int c26 = 9;
  int* ptr27 = &(cast25)[c26];
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp014, sizeof(ref_tmp014));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&myvector13, sizeof(myvector13));
    __VERIFIER_nondet_memory(cast24, sizeof(*cast24));
    __VERIFIER_nondet_memory(ptr27, sizeof(*ptr27));
    __VERIFIER_nondet_memory(&ref_tmp014, sizeof(ref_tmp014));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp014, sizeof(ref_tmp014));
  }
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it15, sizeof(it15));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    agg_tmp017 = std28;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    agg_tmp118 = std29;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t30 = agg_tmp017;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t31 = agg_tmp118;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    ref_tmp116 = std32;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std34;
    __VERIFIER_nondet_memory(&std34, sizeof(std34));
    ref_tmp219 = std34;
    long std35 = __VERIFIER_nondet_long();
    unsigned long cast36 = (unsigned long)std35;
    // externalized std:: op: std::vector<int, std::allocator<int> >::resize(unsigned long)
    __VERIFIER_nondet_memory(&myvector13, sizeof(myvector13));
    unsigned long c37 = 0;
    int* std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    int t39 = *std38;
    int c40 = 10;
    _Bool c41 = ((t39 == c40)) ? 1 : 0;
    if (c41) {
    } else {
      char* cast42 = (char*)&(_str);
      char* c43 = _str_1;
      unsigned int c44 = 30;
      char* cast45 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast42, c43, c44, cast45);
    }
    unsigned long c46 = 1;
    int* std47;
    __VERIFIER_nondet_memory(&std47, sizeof(std47));
    int t48 = *std47;
    int c49 = 20;
    _Bool c50 = ((t48 == c49)) ? 1 : 0;
    if (c50) {
    } else {
      char* cast51 = (char*)&(_str_2);
      char* c52 = _str_1;
      unsigned int c53 = 31;
      char* cast54 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast51, c52, c53, cast54);
    }
    unsigned long c55 = 2;
    int* std56;
    __VERIFIER_nondet_memory(&std56, sizeof(std56));
    int t57 = *std56;
    int c58 = 30;
    _Bool c59 = ((t57 == c58)) ? 1 : 0;
    if (c59) {
    } else {
      char* cast60 = (char*)&(_str_3);
      char* c61 = _str_1;
      unsigned int c62 = 32;
      char* cast63 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast60, c61, c62, cast63);
    }
    unsigned long c64 = 3;
    int* std65;
    __VERIFIER_nondet_memory(&std65, sizeof(std65));
    int t66 = *std65;
    int c67 = 20;
    _Bool c68 = ((t66 == c67)) ? 1 : 0;
    if (c68) {
    } else {
      char* cast69 = (char*)&(_str_4);
      char* c70 = _str_1;
      unsigned int c71 = 33;
      char* cast72 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast69, c70, c71, cast72);
    }
    unsigned long c73 = 4;
    int* std74;
    __VERIFIER_nondet_memory(&std74, sizeof(std74));
    int t75 = *std74;
    int c76 = 10;
    _Bool c77 = ((t75 == c76)) ? 1 : 0;
    if (c77) {
    } else {
      char* cast78 = (char*)&(_str_5);
      char* c79 = _str_1;
      unsigned int c80 = 34;
      char* cast81 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast78, c79, c80, cast81);
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std82;
    __VERIFIER_nondet_memory(&std82, sizeof(std82));
    agg_tmp220 = std82;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std83;
    __VERIFIER_nondet_memory(&std83, sizeof(std83));
    agg_tmp321 = std83;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t84 = agg_tmp220;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t85 = agg_tmp321;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std86;
    __VERIFIER_nondet_memory(&std86, sizeof(std86));
    agg_tmp422 = std86;
    char* cast87 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* std88;
    __VERIFIER_nondet_memory(&std88, sizeof(std88));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp389;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp490;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std91;
      __VERIFIER_nondet_memory(&std91, sizeof(std91));
      ref_tmp389 = std91;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std92;
      __VERIFIER_nondet_memory(&std92, sizeof(std92));
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std94;
        __VERIFIER_nondet_memory(&std94, sizeof(std94));
        ref_tmp490 = std94;
        _Bool std95;
        __VERIFIER_nondet_memory(&std95, sizeof(std95));
        _Bool u96 = !std95;
        if (!u96) break;
        char* cast97 = (char*)&(_str_7);
        struct std__basic_ostream_char__std__char_traits_char__* std98;
        __VERIFIER_nondet_memory(&std98, sizeof(std98));
        int* std99;
        __VERIFIER_nondet_memory(&std99, sizeof(std99));
        int t100 = *std99;
        struct std__basic_ostream_char__std__char_traits_char__* std101;
        __VERIFIER_nondet_memory(&std101, sizeof(std101));
      for_step93: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std102;
        __VERIFIER_nondet_memory(&std102, sizeof(std102));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std103;
    __VERIFIER_nondet_memory(&std103, sizeof(std103));
    int c104 = 0;
    __retval11 = c104;
    int t105 = __retval11;
    int ret_val106 = t105;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector13, sizeof(myvector13));
    }
    return ret_val106;
  int t107 = __retval11;
  return t107;
}

