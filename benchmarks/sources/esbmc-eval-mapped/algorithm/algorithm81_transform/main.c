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
struct std__allocator_int_ { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

char _str[16] = "second[2] != 31";
char _str_1[119] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm81_transform/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[49] = "cannot create std::vector larger than max_size()";
char _str_3[26] = "vector::_M_realloc_append";
char _str_4[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_5[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[19] = "__n < this->size()";
int op_increase(int p0);
int op_sum(int p0, int p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z11op_increasei
int op_increase(int v0) {
bb1:
  int i2;
  int __retval3;
  i2 = v0;
  int t4 = i2;
  int u5 = t4 + 1;
  i2 = u5;
  __retval3 = u5;
  int t6 = __retval3;
  return t6;
}

// function: _Z6op_sumii
int op_sum(int v7, int v8) {
bb9:
  int i10;
  int j11;
  int __retval12;
  i10 = v7;
  j11 = v8;
  int t13 = i10;
  int t14 = j11;
  int b15 = t13 + t14;
  __retval12 = b15;
  int t16 = __retval12;
  return t16;
}

// function: main
int main() {
bb17:
  int __retval18;
  struct std__vector_int__std__allocator_int__ first19;
  struct std__vector_int__std__allocator_int__ second20;
  struct std__allocator_int_ ref_tmp021;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it22;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp023;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp124;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp225;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp326;
  int c27 = 0;
  __retval18 = c27;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&first19, sizeof(first19));
    unsigned long c28 = 5;
    // externalized std:: op: std::allocator<int>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp021, sizeof(ref_tmp021));
      // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, std::allocator<int> const&)
      __VERIFIER_nondet_memory(&second20, sizeof(second20));
      __VERIFIER_nondet_memory(&ref_tmp021, sizeof(ref_tmp021));
    {
      // externalized std:: op: std::allocator<int>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp021, sizeof(ref_tmp021));
    }
      // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
      __VERIFIER_nondet_memory(&it22, sizeof(it22));
        int i29;
        int ref_tmp130;
        int c31 = 1;
        i29 = c31;
        while (1) {
          int t33 = i29;
          int c34 = 6;
          _Bool c35 = ((t33 < c34)) ? 1 : 0;
          if (!c35) break;
          int t36 = i29;
          int c37 = 10;
          int b38 = t36 * c37;
          ref_tmp130 = b38;
          // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
          __VERIFIER_nondet_memory(&first19, sizeof(first19));
          __VERIFIER_nondet_memory(&ref_tmp130, sizeof(ref_tmp130));
        for_step32: ;
          int t39 = i29;
          int u40 = t39 + 1;
          i29 = u40;
        }
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std41;
      __VERIFIER_nondet_memory(&std41, sizeof(std41));
      agg_tmp023 = std41;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std42;
      __VERIFIER_nondet_memory(&std42, sizeof(std42));
      agg_tmp124 = std42;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std43;
      __VERIFIER_nondet_memory(&std43, sizeof(std43));
      agg_tmp225 = std43;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t44 = agg_tmp023;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t45 = agg_tmp124;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t46 = agg_tmp225;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std47;
      __VERIFIER_nondet_memory(&std47, sizeof(std47));
      agg_tmp326 = std47;
      unsigned long c48 = 2;
      int* std49;
      __VERIFIER_nondet_memory(&std49, sizeof(std49));
      int t50 = *std49;
      int c51 = 31;
      _Bool c52 = ((t50 != c51)) ? 1 : 0;
      if (c52) {
      } else {
        char* cast53 = (char*)&(_str);
        char* c54 = _str_1;
        unsigned int c55 = 29;
        char* cast56 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast53, c54, c55, cast56);
      }
      struct std__basic_ostream_char__std__char_traits_char__* std57;
      __VERIFIER_nondet_memory(&std57, sizeof(std57));
      int c58 = 0;
      __retval18 = c58;
      int t59 = __retval18;
      int ret_val60 = t59;
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&second20, sizeof(second20));
      }
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&first19, sizeof(first19));
      }
      return ret_val60;
  int t61 = __retval18;
  return t61;
}

