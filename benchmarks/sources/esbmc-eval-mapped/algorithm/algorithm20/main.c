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
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[17] = "myvector[0] == 0";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm20/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[17] = "myvector[2] == 0";
char _str_3[17] = "myvector[4] == 0";
char _str_4[17] = "myvector[6] == 0";
char _str_5[17] = "myvector[8] == 0";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_6[19] = "myvector contains:";
char _str_7[2] = " ";
char _str_8[26] = "vector::_M_realloc_append";
char _str_9[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_10[19] = "__n < this->size()";
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
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp014;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp115;
  int ref_tmp016;
  int c17 = 0;
  __retval11 = c17;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&myvector12, sizeof(myvector12));
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it13, sizeof(it13));
      int i18;
      int c19 = 1;
      i18 = c19;
      while (1) {
        int t21 = i18;
        int c22 = 10;
        _Bool c23 = ((t21 < c22)) ? 1 : 0;
        if (!c23) break;
        // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int const&)
        __VERIFIER_nondet_memory(&myvector12, sizeof(myvector12));
        __VERIFIER_nondet_memory(&i18, sizeof(i18));
      for_step20: ;
        int t24 = i18;
        int u25 = t24 + 1;
        i18 = u25;
      }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    agg_tmp014 = std26;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    agg_tmp115 = std27;
    int c28 = 0;
    ref_tmp016 = c28;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t29 = agg_tmp014;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t30 = agg_tmp115;
    // externalized std:: op: void std::replace_if<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, bool (*)(int), int>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, bool (*)(int), int const&)
    __VERIFIER_nondet_memory(&ref_tmp016, sizeof(ref_tmp016));
    unsigned long c31 = 0;
    int* std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    int t33 = *std32;
    int c34 = 0;
    _Bool c35 = ((t33 == c34)) ? 1 : 0;
    if (c35) {
    } else {
      char* cast36 = (char*)&(_str);
      char* c37 = _str_1;
      unsigned int c38 = 25;
      char* cast39 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast36, c37, c38, cast39);
    }
    unsigned long c40 = 2;
    int* std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
    int t42 = *std41;
    int c43 = 0;
    _Bool c44 = ((t42 == c43)) ? 1 : 0;
    if (c44) {
    } else {
      char* cast45 = (char*)&(_str_2);
      char* c46 = _str_1;
      unsigned int c47 = 26;
      char* cast48 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast45, c46, c47, cast48);
    }
    unsigned long c49 = 4;
    int* std50;
    __VERIFIER_nondet_memory(&std50, sizeof(std50));
    int t51 = *std50;
    int c52 = 0;
    _Bool c53 = ((t51 == c52)) ? 1 : 0;
    if (c53) {
    } else {
      char* cast54 = (char*)&(_str_3);
      char* c55 = _str_1;
      unsigned int c56 = 27;
      char* cast57 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast54, c55, c56, cast57);
    }
    unsigned long c58 = 6;
    int* std59;
    __VERIFIER_nondet_memory(&std59, sizeof(std59));
    int t60 = *std59;
    int c61 = 0;
    _Bool c62 = ((t60 == c61)) ? 1 : 0;
    if (c62) {
    } else {
      char* cast63 = (char*)&(_str_4);
      char* c64 = _str_1;
      unsigned int c65 = 28;
      char* cast66 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast63, c64, c65, cast66);
    }
    unsigned long c67 = 8;
    int* std68;
    __VERIFIER_nondet_memory(&std68, sizeof(std68));
    int t69 = *std68;
    int c70 = 0;
    _Bool c71 = ((t69 == c70)) ? 1 : 0;
    if (c71) {
    } else {
      char* cast72 = (char*)&(_str_5);
      char* c73 = _str_1;
      unsigned int c74 = 29;
      char* cast75 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast72, c73, c74, cast75);
    }
    char* cast76 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* std77;
    __VERIFIER_nondet_memory(&std77, sizeof(std77));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp178;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp279;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std80;
      __VERIFIER_nondet_memory(&std80, sizeof(std80));
      ref_tmp178 = std80;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std81;
      __VERIFIER_nondet_memory(&std81, sizeof(std81));
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std83;
        __VERIFIER_nondet_memory(&std83, sizeof(std83));
        ref_tmp279 = std83;
        _Bool std84;
        __VERIFIER_nondet_memory(&std84, sizeof(std84));
        _Bool u85 = !std84;
        if (!u85) break;
        char* cast86 = (char*)&(_str_7);
        struct std__basic_ostream_char__std__char_traits_char__* std87;
        __VERIFIER_nondet_memory(&std87, sizeof(std87));
        int* std88;
        __VERIFIER_nondet_memory(&std88, sizeof(std88));
        int t89 = *std88;
        struct std__basic_ostream_char__std__char_traits_char__* std90;
        __VERIFIER_nondet_memory(&std90, sizeof(std90));
      for_step82: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std91;
        __VERIFIER_nondet_memory(&std91, sizeof(std91));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std92;
    __VERIFIER_nondet_memory(&std92, sizeof(std92));
    int c93 = 0;
    __retval11 = c93;
    int t94 = __retval11;
    int ret_val95 = t94;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector12, sizeof(myvector12));
    }
    return ret_val95;
  int t96 = __retval11;
  return t96;
}

