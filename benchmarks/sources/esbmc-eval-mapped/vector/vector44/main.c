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
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____cmp_cat____unspec { unsigned char __field0; };
struct std____detail___Synth3way { unsigned char __field0; };
struct std____new_allocator_int_;
struct std__allocator_int_;
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__strong_ordering { char _M_value; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
union std__vector_int__std__allocator_int_____Temporary_value___Storage { unsigned char _M_byte; int _M_val; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std__vector_int__std__allocator_int_____Temporary_value { struct std__vector_int__std__allocator_int__* _M_this; union std__vector_int__std__allocator_int_____Temporary_value___Storage _M_storage; unsigned char __field2[4]; } __attribute__((packed));
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

struct std____cmp_cat____unspec __const_main_agg_tmp3;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[19] = "myvector contains:";
char _str_1[9] = "*it != 0";
char _str_2[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/vector44/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[2] = " ";
char _str_4[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/vector.tcc";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE6insertEN9__gnu_cxx17__normal_iteratorIPKiS1_EERS4_[112] = "iterator std::vector<int>::insert(const_iterator value_type &) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_5[31] = "__position != const_iterator()";
char _str_6[26] = "vector::_M_realloc_insert";
struct std____detail___Synth3way _ZNSt8__detail11__synth3wayE;
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__vector_int__std__allocator_int__ myvector2;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it3;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp14;
  int c5 = 0;
  __retval1 = c5;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
      int i6;
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp07;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp08;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp19;
      int c10 = 1;
      i6 = c10;
      while (1) {
        int t12 = i6;
        int c13 = 5;
        _Bool c14 = ((t12 <= c13)) ? 1 : 0;
        if (!c14) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std15;
        __VERIFIER_nondet_memory(&std15, sizeof(std15));
        ref_tmp08 = std15;
        // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE
        __VERIFIER_nondet_memory(&agg_tmp07, sizeof(agg_tmp07));
        __VERIFIER_nondet_memory(&ref_tmp08, sizeof(ref_tmp08));
        struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t16 = agg_tmp07;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std17;
        __VERIFIER_nondet_memory(&std17, sizeof(std17));
        agg_tmp19 = std17;
      for_step11: ;
        int t18 = i6;
        int u19 = t18 + 1;
        i6 = u19;
      }
    char* cast20 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std21;
    __VERIFIER_nondet_memory(&std21, sizeof(std21));
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std22;
    __VERIFIER_nondet_memory(&std22, sizeof(std22));
    ref_tmp14 = std22;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std23;
    __VERIFIER_nondet_memory(&std23, sizeof(std23));
    int* std24;
    __VERIFIER_nondet_memory(&std24, sizeof(std24));
    int t25 = *std24;
    int c26 = 0;
    _Bool c27 = ((t25 != c26)) ? 1 : 0;
    if (c27) {
    } else {
      char* cast28 = (char*)&(_str_1);
      char* c29 = _str_2;
      unsigned int c30 = 22;
      char* cast31 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast28, c29, c30, cast31);
    }
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp232;
      struct std__strong_ordering agg_tmp233;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp334;
      struct std____cmp_cat____unspec agg_tmp335;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp436;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std37;
      __VERIFIER_nondet_memory(&std37, sizeof(std37));
      ref_tmp232 = std37;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std38;
      __VERIFIER_nondet_memory(&std38, sizeof(std38));
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std40;
        __VERIFIER_nondet_memory(&std40, sizeof(std40));
        ref_tmp334 = std40;
        struct std__strong_ordering std41;
        __VERIFIER_nondet_memory(&std41, sizeof(std41));
        agg_tmp233 = std41;
        agg_tmp335 = *&__const_main_agg_tmp3; // copy
        struct std__strong_ordering t42 = agg_tmp233;
        struct std____cmp_cat____unspec t43 = agg_tmp335;
        _Bool std44;
        __VERIFIER_nondet_memory(&std44, sizeof(std44));
        if (!std44) break;
        char* cast45 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std46;
        __VERIFIER_nondet_memory(&std46, sizeof(std46));
        int* std47;
        __VERIFIER_nondet_memory(&std47, sizeof(std47));
        int t48 = *std47;
        struct std__basic_ostream_char__std__char_traits_char__* std49;
        __VERIFIER_nondet_memory(&std49, sizeof(std49));
      for_step39: ;
        int c50 = 0;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std51;
        __VERIFIER_nondet_memory(&std51, sizeof(std51));
        agg_tmp436 = std51;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std52;
    __VERIFIER_nondet_memory(&std52, sizeof(std52));
    int c53 = 0;
    __retval1 = c53;
    int t54 = __retval1;
    int ret_val55 = t54;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    }
    return ret_val55;
  int t56 = __retval1;
  return t56;
}

