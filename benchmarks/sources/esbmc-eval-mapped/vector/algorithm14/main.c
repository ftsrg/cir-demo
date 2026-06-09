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
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_;
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
char _str[18] = "myvector[3] == 10";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm14/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "myvector[7] != 50";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[19] = "myvector contains:";
char _str_4[2] = " ";
char _str_5[26] = "vector::_M_realloc_append";
char _str_6[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_7[15] = "!this->empty()";
char _str_8[26] = "vector::_M_default_append";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_9[19] = "__n < this->size()";
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______copy_backward_esbmc___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: _Z19copy_backward_esbmcIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_ET0_T_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______copy_backward_esbmc___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v2) {
bb3:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ first4;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ last5;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ dest6;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval7;
  first4 = v0;
  last5 = v1;
  dest6 = v2;
    while (1) {
      _Bool std8;
      __VERIFIER_nondet_memory(&std8, sizeof(std8));
      _Bool u9 = !std8;
      if (!u9) break;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std10;
      __VERIFIER_nondet_memory(&std10, sizeof(std10));
      int* std11;
      __VERIFIER_nondet_memory(&std11, sizeof(std11));
      int t12 = *std11;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std13;
      __VERIFIER_nondet_memory(&std13, sizeof(std13));
      int* std14;
      __VERIFIER_nondet_memory(&std14, sizeof(std14));
      *std14 = t12;
    }
  __retval7 = dest6; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t15 = __retval7;
  return t15;
}

// function: main
int main() {
bb16:
  int __retval17;
  struct std__vector_int__std__allocator_int__ myvector18;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it19;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp020;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp121;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp122;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp223;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp324;
  int c25 = 0;
  __retval17 = c25;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&myvector18, sizeof(myvector18));
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it19, sizeof(it19));
      int i26;
      int ref_tmp027;
      int c28 = 1;
      i26 = c28;
      while (1) {
        int t30 = i26;
        int c31 = 5;
        _Bool c32 = ((t30 <= c31)) ? 1 : 0;
        if (!c32) break;
        int t33 = i26;
        int c34 = 10;
        int b35 = t33 * c34;
        ref_tmp027 = b35;
        // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
        __VERIFIER_nondet_memory(&myvector18, sizeof(myvector18));
        __VERIFIER_nondet_memory(&ref_tmp027, sizeof(ref_tmp027));
      for_step29: ;
        int t36 = i26;
        int u37 = t36 + 1;
        i26 = u37;
      }
    unsigned long std38 = __VERIFIER_nondet_unsigned_long();
    unsigned long c39 = 3;
    unsigned long b40 = std38 + c39;
    // externalized std:: op: std::vector<int, std::allocator<int> >::resize(unsigned long)
    __VERIFIER_nondet_memory(&myvector18, sizeof(myvector18));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
    agg_tmp020 = std41;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    ref_tmp122 = std42;
    long c43 = 5;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std44;
    __VERIFIER_nondet_memory(&std44, sizeof(std44));
    agg_tmp121 = std44;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
    agg_tmp223 = std45;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t46 = agg_tmp020;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t47 = agg_tmp121;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t48 = agg_tmp223;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r49 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______copy_backward_esbmc___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t46, t47, t48);
    agg_tmp324 = r49;
    unsigned long c50 = 3;
    int* std51;
    __VERIFIER_nondet_memory(&std51, sizeof(std51));
    int t52 = *std51;
    int c53 = 10;
    _Bool c54 = ((t52 == c53)) ? 1 : 0;
    if (c54) {
    } else {
      char* cast55 = (char*)&(_str);
      char* c56 = _str_1;
      unsigned int c57 = 32;
      char* cast58 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast55, c56, c57, cast58);
    }
    unsigned long c59 = 7;
    int* std60;
    __VERIFIER_nondet_memory(&std60, sizeof(std60));
    int t61 = *std60;
    int c62 = 50;
    _Bool c63 = ((t61 != c62)) ? 1 : 0;
    if (c63) {
    } else {
      char* cast64 = (char*)&(_str_2);
      char* c65 = _str_1;
      unsigned int c66 = 33;
      char* cast67 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast64, c65, c66, cast67);
    }
    char* cast68 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std69;
    __VERIFIER_nondet_memory(&std69, sizeof(std69));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp270;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp371;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std72;
      __VERIFIER_nondet_memory(&std72, sizeof(std72));
      ref_tmp270 = std72;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std73;
      __VERIFIER_nondet_memory(&std73, sizeof(std73));
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std75;
        __VERIFIER_nondet_memory(&std75, sizeof(std75));
        ref_tmp371 = std75;
        _Bool std76;
        __VERIFIER_nondet_memory(&std76, sizeof(std76));
        _Bool u77 = !std76;
        if (!u77) break;
        char* cast78 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* std79;
        __VERIFIER_nondet_memory(&std79, sizeof(std79));
        int* std80;
        __VERIFIER_nondet_memory(&std80, sizeof(std80));
        int t81 = *std80;
        struct std__basic_ostream_char__std__char_traits_char__* std82;
        __VERIFIER_nondet_memory(&std82, sizeof(std82));
      for_step74: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std83;
        __VERIFIER_nondet_memory(&std83, sizeof(std83));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std84;
    __VERIFIER_nondet_memory(&std84, sizeof(std84));
    int c85 = 0;
    __retval17 = c85;
    int t86 = __retval17;
    int ret_val87 = t86;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector18, sizeof(myvector18));
    }
    return ret_val87;
  int t88 = __retval17;
  return t88;
}

