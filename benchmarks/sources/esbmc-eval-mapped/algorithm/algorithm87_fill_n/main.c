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
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "myvector[3] != 33";
char _str_1[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm87_fill_n/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[19] = "myvector contains:";
char _str_3[2] = " ";
char _str_4[49] = "cannot create std::vector larger than max_size()";
char _str_5[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_6[9] = "__n >= 0";
char _str_7[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_8[19] = "__n < this->size()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__vector_int__std__allocator_int__ myvector2;
  int ref_tmp03;
  struct std__allocator_int_ ref_tmp14;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp05;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp26;
  int ref_tmp37;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp18;
  int c9 = 0;
  __retval1 = c9;
  unsigned long c10 = 8;
  int c11 = 10;
  ref_tmp03 = c11;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, int const&, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
  }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std12;
    __VERIFIER_nondet_memory(&std12, sizeof(std12));
    ref_tmp26 = std12;
    long c13 = 3;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std14;
    __VERIFIER_nondet_memory(&std14, sizeof(std14));
    agg_tmp05 = std14;
    int c15 = 3;
    int c16 = 33;
    ref_tmp37 = c16;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t17 = agg_tmp05;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std18;
    __VERIFIER_nondet_memory(&std18, sizeof(std18));
    agg_tmp18 = std18;
    unsigned long c19 = 3;
    int* std20;
    __VERIFIER_nondet_memory(&std20, sizeof(std20));
    int t21 = *std20;
    int c22 = 33;
    _Bool c23 = ((t21 != c22)) ? 1 : 0;
    if (c23) {
    } else {
      char* cast24 = (char*)&(_str);
      char* c25 = _str_1;
      unsigned int c26 = 23;
      char* cast27 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast24, c25, c26, cast27);
    }
    char* cast28 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it30;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp431;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std32;
      __VERIFIER_nondet_memory(&std32, sizeof(std32));
      it30 = std32;
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std34;
        __VERIFIER_nondet_memory(&std34, sizeof(std34));
        ref_tmp431 = std34;
        _Bool std35;
        __VERIFIER_nondet_memory(&std35, sizeof(std35));
        _Bool u36 = !std35;
        if (!u36) break;
        char* cast37 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std38;
        __VERIFIER_nondet_memory(&std38, sizeof(std38));
        int* std39;
        __VERIFIER_nondet_memory(&std39, sizeof(std39));
        int t40 = *std39;
        struct std__basic_ostream_char__std__char_traits_char__* std41;
        __VERIFIER_nondet_memory(&std41, sizeof(std41));
      for_step33: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std42;
        __VERIFIER_nondet_memory(&std42, sizeof(std42));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std43;
    __VERIFIER_nondet_memory(&std43, sizeof(std43));
    int c44 = 0;
    __retval1 = c44;
    int t45 = __retval1;
    int ret_val46 = t45;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    }
    return ret_val46;
  int t47 = __retval1;
  return t47;
}

