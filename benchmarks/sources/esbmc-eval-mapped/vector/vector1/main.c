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
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints[4] = {16, 2, 77, 29};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[27] = "The contents of fifth are:";
char _str_1[2] = " ";
char _str_2[49] = "cannot create std::vector larger than max_size()";
char _str_3[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_4[9] = "__n >= 0";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_5[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[19] = "__n < this->size()";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  unsigned int i2;
  struct std__vector_int__std__allocator_int__ first3;
  struct std__vector_int__std__allocator_int__ second4;
  int ref_tmp05;
  struct std__allocator_int_ ref_tmp16;
  struct std__vector_int__std__allocator_int__ third7;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp08;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp19;
  struct std__allocator_int_ ref_tmp210;
  struct std__vector_int__std__allocator_int__ fourth11;
  int myints12[4];
  struct std__vector_int__std__allocator_int__ fifth13;
  struct std__allocator_int_ ref_tmp314;
  int c15 = 0;
  __retval1 = c15;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&first3, sizeof(first3));
    unsigned long c16 = 4;
    int c17 = 100;
    ref_tmp05 = c17;
    // externalized std:: op: std::allocator<int>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
      // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, int const&, std::allocator<int> const&)
      __VERIFIER_nondet_memory(&second4, sizeof(second4));
      __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
      __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
    {
      // externalized std:: op: std::allocator<int>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
    }
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std18;
      __VERIFIER_nondet_memory(&std18, sizeof(std18));
      agg_tmp08 = std18;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std19;
      __VERIFIER_nondet_memory(&std19, sizeof(std19));
      agg_tmp19 = std19;
      // externalized std:: op: std::allocator<int>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp210, sizeof(ref_tmp210));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t20 = agg_tmp08;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t21 = agg_tmp19;
        // externalized std:: op: std::vector<int, std::allocator<int> >::vector<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, void>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, std::allocator<int> const&)
        __VERIFIER_nondet_memory(&third7, sizeof(third7));
        __VERIFIER_nondet_memory(&ref_tmp210, sizeof(ref_tmp210));
      {
        // externalized std:: op: std::allocator<int>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp210, sizeof(ref_tmp210));
      }
        // externalized std:: op: std::vector<int, std::allocator<int> >::vector(std::vector<int, std::allocator<int> > const&)
        __VERIFIER_nondet_memory(&fourth11, sizeof(fourth11));
        __VERIFIER_nondet_memory(&third7, sizeof(third7));
          // array copy
          __builtin_memcpy(myints12, __const_main_myints, (unsigned long)4 * sizeof(__const_main_myints[0]));
          int* cast22 = (int*)&(myints12);
          int* cast23 = (int*)&(myints12);
          unsigned long c24 = 16;
          unsigned long c25 = 4;
          unsigned long b26 = c24 / c25;
          int* ptr27 = &(cast23)[b26];
          // externalized std:: op: std::allocator<int>::allocator()
          __VERIFIER_nondet_memory(&ref_tmp314, sizeof(ref_tmp314));
            // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
            __VERIFIER_nondet_memory(&fifth13, sizeof(fifth13));
            __VERIFIER_nondet_memory(cast22, sizeof(*cast22));
            __VERIFIER_nondet_memory(ptr27, sizeof(*ptr27));
            __VERIFIER_nondet_memory(&ref_tmp314, sizeof(ref_tmp314));
          {
            // externalized std:: op: std::allocator<int>::~allocator()
            __VERIFIER_nondet_memory(&ref_tmp314, sizeof(ref_tmp314));
          }
            char* cast28 = (char*)&(_str);
            struct std__basic_ostream_char__std__char_traits_char__* std29;
            __VERIFIER_nondet_memory(&std29, sizeof(std29));
              unsigned int c30 = 0;
              i2 = c30;
              while (1) {
                unsigned int t32 = i2;
                unsigned long cast33 = (unsigned long)t32;
                unsigned long std34 = __VERIFIER_nondet_unsigned_long();
                _Bool c35 = ((cast33 < std34)) ? 1 : 0;
                if (!c35) break;
                char* cast36 = (char*)&(_str_1);
                struct std__basic_ostream_char__std__char_traits_char__* std37;
                __VERIFIER_nondet_memory(&std37, sizeof(std37));
                unsigned int t38 = i2;
                unsigned long cast39 = (unsigned long)t38;
                int* std40;
                __VERIFIER_nondet_memory(&std40, sizeof(std40));
                int t41 = *std40;
                struct std__basic_ostream_char__std__char_traits_char__* std42;
                __VERIFIER_nondet_memory(&std42, sizeof(std42));
              for_step31: ;
                unsigned int t43 = i2;
                unsigned int u44 = t43 + 1;
                i2 = u44;
              }
            struct std__basic_ostream_char__std__char_traits_char__* std45;
            __VERIFIER_nondet_memory(&std45, sizeof(std45));
            int c46 = 0;
            __retval1 = c46;
            int t47 = __retval1;
            int ret_val48 = t47;
            {
              // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
              __VERIFIER_nondet_memory(&fifth13, sizeof(fifth13));
            }
            {
              // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
              __VERIFIER_nondet_memory(&fourth11, sizeof(fourth11));
            }
            {
              // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
              __VERIFIER_nondet_memory(&third7, sizeof(third7));
            }
            {
              // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
              __VERIFIER_nondet_memory(&second4, sizeof(second4));
            }
            {
              // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
              __VERIFIER_nondet_memory(&first3, sizeof(first3));
            }
            return ret_val48;
  int t49 = __retval1;
  return t49;
}

