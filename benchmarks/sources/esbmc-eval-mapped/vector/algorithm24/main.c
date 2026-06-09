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
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "myvector[3] == 10";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm24/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "myvector[3] == 20";
char _str_3[18] = "myvector[3] != 33";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[19] = "myvector contains:";
char _str_5[2] = " ";
char _str_6[49] = "cannot create std::vector larger than max_size()";
char _str_7[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_8[9] = "__n >= 0";
char _str_9[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_10[19] = "__n < this->size()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void void_fill_n_esbmc___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, int p1, int* p2);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z12fill_n_esbmcIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiiEvT_T0_RKT1_
void void_fill_n_esbmc___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v0, int v1, int* v2) {
bb3:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ first4;
  int n5;
  int* val6;
  first4 = v0;
  n5 = v1;
  val6 = v2;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp07;
    while (1) {
      int t9 = n5;
      int c10 = 0;
      _Bool c11 = ((t9 > c10)) ? 1 : 0;
      if (!c11) break;
      int* t12 = val6;
      int t13 = *t12;
      int c14 = 0;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std15;
      __VERIFIER_nondet_memory(&std15, sizeof(std15));
      ref_tmp07 = std15;
      int* std16;
      __VERIFIER_nondet_memory(&std16, sizeof(std16));
      *std16 = t13;
    for_step8: ;
      int t17 = n5;
      int u18 = t17 - 1;
      n5 = u18;
    }
  return;
}

// function: main
int main() {
bb19:
  int __retval20;
  struct std__vector_int__std__allocator_int__ myvector21;
  int ref_tmp022;
  struct std__allocator_int_ ref_tmp123;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp024;
  int ref_tmp225;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp126;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp327;
  int ref_tmp428;
  int c29 = 0;
  __retval20 = c29;
  unsigned long c30 = 8;
  int c31 = 10;
  ref_tmp022 = c31;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp123, sizeof(ref_tmp123));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, int const&, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&myvector21, sizeof(myvector21));
    __VERIFIER_nondet_memory(&ref_tmp022, sizeof(ref_tmp022));
    __VERIFIER_nondet_memory(&ref_tmp123, sizeof(ref_tmp123));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp123, sizeof(ref_tmp123));
  }
    unsigned long c32 = 3;
    int* std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    int t34 = *std33;
    int c35 = 10;
    _Bool c36 = ((t34 == c35)) ? 1 : 0;
    if (c36) {
    } else {
      char* cast37 = (char*)&(_str);
      char* c38 = _str_1;
      unsigned int c39 = 22;
      char* cast40 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast37, c38, c39, cast40);
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
    agg_tmp024 = std41;
    int c42 = 4;
    int c43 = 20;
    ref_tmp225 = c43;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t44 = agg_tmp024;
    void_fill_n_esbmc___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__int_(t44, c42, &ref_tmp225);
    unsigned long c45 = 3;
    int* std46;
    __VERIFIER_nondet_memory(&std46, sizeof(std46));
    int t47 = *std46;
    int c48 = 20;
    _Bool c49 = ((t47 == c48)) ? 1 : 0;
    if (c49) {
    } else {
      char* cast50 = (char*)&(_str_2);
      char* c51 = _str_1;
      unsigned int c52 = 24;
      char* cast53 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast50, c51, c52, cast53);
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std54;
    __VERIFIER_nondet_memory(&std54, sizeof(std54));
    ref_tmp327 = std54;
    long c55 = 3;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std56;
    __VERIFIER_nondet_memory(&std56, sizeof(std56));
    agg_tmp126 = std56;
    int c57 = 3;
    int c58 = 33;
    ref_tmp428 = c58;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t59 = agg_tmp126;
    void_fill_n_esbmc___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__int_(t59, c57, &ref_tmp428);
    unsigned long c60 = 3;
    int* std61;
    __VERIFIER_nondet_memory(&std61, sizeof(std61));
    int t62 = *std61;
    int c63 = 33;
    _Bool c64 = ((t62 != c63)) ? 1 : 0;
    if (c64) {
    } else {
      char* cast65 = (char*)&(_str_3);
      char* c66 = _str_1;
      unsigned int c67 = 26;
      char* cast68 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast65, c66, c67, cast68);
    }
    char* cast69 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std70;
    __VERIFIER_nondet_memory(&std70, sizeof(std70));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it71;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp572;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std73;
      __VERIFIER_nondet_memory(&std73, sizeof(std73));
      it71 = std73;
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std75;
        __VERIFIER_nondet_memory(&std75, sizeof(std75));
        ref_tmp572 = std75;
        _Bool std76;
        __VERIFIER_nondet_memory(&std76, sizeof(std76));
        _Bool u77 = !std76;
        if (!u77) break;
        char* cast78 = (char*)&(_str_5);
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
    __retval20 = c85;
    int t86 = __retval20;
    int ret_val87 = t86;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector21, sizeof(myvector21));
    }
    return ret_val87;
  int t88 = __retval20;
  return t88;
}

