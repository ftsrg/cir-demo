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
struct __gnu_cxx____ops___Iter_pred_bool_____int__ { void* _M_pred; };
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
char _str[15] = "second[2] != 0";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm85/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[17] = "second contains:";
char _str_3[2] = " ";
char _str_4[26] = "vector::_M_realloc_append";
char _str_5[26] = "vector::_M_default_append";
char _str_6[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_7[19] = "__n < this->size()";
_Bool IsOdd(int p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
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
  struct std__vector_int__std__allocator_int__ first12;
  struct std__vector_int__std__allocator_int__ second13;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it14;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp015;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp116;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp217;
  int ref_tmp018;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp319;
  int c20 = 0;
  __retval11 = c20;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&first12, sizeof(first12));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
    __VERIFIER_nondet_memory(&second13, sizeof(second13));
      // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
      __VERIFIER_nondet_memory(&it14, sizeof(it14));
        int i21;
        int c22 = 1;
        i21 = c22;
        while (1) {
          int t24 = i21;
          int c25 = 5;
          _Bool c26 = ((t24 < c25)) ? 1 : 0;
          if (!c26) break;
          // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int const&)
          __VERIFIER_nondet_memory(&first12, sizeof(first12));
          __VERIFIER_nondet_memory(&i21, sizeof(i21));
        for_step23: ;
          int t27 = i21;
          int u28 = t27 + 1;
          i21 = u28;
        }
      unsigned long std29 = __VERIFIER_nondet_unsigned_long();
      // externalized std:: op: std::vector<int, std::allocator<int> >::resize(unsigned long)
      __VERIFIER_nondet_memory(&second13, sizeof(second13));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std30;
      __VERIFIER_nondet_memory(&std30, sizeof(std30));
      agg_tmp015 = std30;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std31;
      __VERIFIER_nondet_memory(&std31, sizeof(std31));
      agg_tmp116 = std31;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std32;
      __VERIFIER_nondet_memory(&std32, sizeof(std32));
      agg_tmp217 = std32;
      int c33 = 0;
      ref_tmp018 = c33;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t34 = agg_tmp015;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t35 = agg_tmp116;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t36 = agg_tmp217;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std37;
      __VERIFIER_nondet_memory(&std37, sizeof(std37));
      agg_tmp319 = std37;
      unsigned long c38 = 2;
      int* std39;
      __VERIFIER_nondet_memory(&std39, sizeof(std39));
      int t40 = *std39;
      int c41 = 0;
      _Bool c42 = ((t40 != c41)) ? 1 : 0;
      if (c42) {
      } else {
        char* cast43 = (char*)&(_str);
        char* c44 = _str_1;
        unsigned int c45 = 27;
        char* cast46 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast43, c44, c45, cast46);
      }
      char* cast47 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* std48;
      __VERIFIER_nondet_memory(&std48, sizeof(std48));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp149;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp250;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std51;
        __VERIFIER_nondet_memory(&std51, sizeof(std51));
        ref_tmp149 = std51;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std52;
        __VERIFIER_nondet_memory(&std52, sizeof(std52));
        while (1) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std54;
          __VERIFIER_nondet_memory(&std54, sizeof(std54));
          ref_tmp250 = std54;
          _Bool std55;
          __VERIFIER_nondet_memory(&std55, sizeof(std55));
          _Bool u56 = !std55;
          if (!u56) break;
          char* cast57 = (char*)&(_str_3);
          struct std__basic_ostream_char__std__char_traits_char__* std58;
          __VERIFIER_nondet_memory(&std58, sizeof(std58));
          int* std59;
          __VERIFIER_nondet_memory(&std59, sizeof(std59));
          int t60 = *std59;
          struct std__basic_ostream_char__std__char_traits_char__* std61;
          __VERIFIER_nondet_memory(&std61, sizeof(std61));
        for_step53: ;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std62;
          __VERIFIER_nondet_memory(&std62, sizeof(std62));
        }
      struct std__basic_ostream_char__std__char_traits_char__* std63;
      __VERIFIER_nondet_memory(&std63, sizeof(std63));
      int c64 = 0;
      __retval11 = c64;
      int t65 = __retval11;
      int ret_val66 = t65;
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&second13, sizeof(second13));
      }
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&first12, sizeof(first12));
      }
      return ret_val66;
  int t67 = __retval11;
  return t67;
}

