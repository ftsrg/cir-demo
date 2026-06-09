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
char _str_1[2] = " ";
char _str_2[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/vector.tcc";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE6insertEN9__gnu_cxx17__normal_iteratorIPKiS1_EERS4_[112] = "iterator std::vector<int>::insert(const_iterator value_type &) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_3[31] = "__position != const_iterator()";
char _str_4[26] = "vector::_M_realloc_insert";
struct std____detail___Synth3way _ZNSt8__detail11__synth3wayE;
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__vector_int__std__allocator_int__ myvector2;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it3;
  int c4 = 0;
  __retval1 = c4;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
      int i5;
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp06;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp07;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp18;
      int c9 = 1;
      i5 = c9;
      while (1) {
        int t11 = i5;
        int c12 = 5;
        _Bool c13 = ((t11 <= c12)) ? 1 : 0;
        if (!c13) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std14;
        __VERIFIER_nondet_memory(&std14, sizeof(std14));
        ref_tmp07 = std14;
        // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE
        __VERIFIER_nondet_memory(&agg_tmp06, sizeof(agg_tmp06));
        __VERIFIER_nondet_memory(&ref_tmp07, sizeof(ref_tmp07));
        struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t15 = agg_tmp06;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std16;
        __VERIFIER_nondet_memory(&std16, sizeof(std16));
        agg_tmp18 = std16;
      for_step10: ;
        int t17 = i5;
        int u18 = t17 + 1;
        i5 = u18;
      }
    char* cast19 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std20;
    __VERIFIER_nondet_memory(&std20, sizeof(std20));
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp121;
      struct std__strong_ordering agg_tmp222;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp223;
      struct std____cmp_cat____unspec agg_tmp324;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp425;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std26;
      __VERIFIER_nondet_memory(&std26, sizeof(std26));
      ref_tmp121 = std26;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std27;
      __VERIFIER_nondet_memory(&std27, sizeof(std27));
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std29;
        __VERIFIER_nondet_memory(&std29, sizeof(std29));
        ref_tmp223 = std29;
        struct std__strong_ordering std30;
        __VERIFIER_nondet_memory(&std30, sizeof(std30));
        agg_tmp222 = std30;
        agg_tmp324 = *&__const_main_agg_tmp3; // copy
        struct std__strong_ordering t31 = agg_tmp222;
        struct std____cmp_cat____unspec t32 = agg_tmp324;
        _Bool std33;
        __VERIFIER_nondet_memory(&std33, sizeof(std33));
        if (!std33) break;
        char* cast34 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std35;
        __VERIFIER_nondet_memory(&std35, sizeof(std35));
        int* std36;
        __VERIFIER_nondet_memory(&std36, sizeof(std36));
        int t37 = *std36;
        struct std__basic_ostream_char__std__char_traits_char__* std38;
        __VERIFIER_nondet_memory(&std38, sizeof(std38));
      for_step28: ;
        int c39 = 0;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std40;
        __VERIFIER_nondet_memory(&std40, sizeof(std40));
        agg_tmp425 = std40;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
    int c42 = 0;
    __retval1 = c42;
    int t43 = __retval1;
    int ret_val44 = t43;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    }
    return ret_val44;
  int t45 = __retval1;
  return t45;
}

