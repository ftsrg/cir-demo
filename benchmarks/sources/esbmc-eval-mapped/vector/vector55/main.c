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
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____detail____move_iter_cat_int___;
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__move_iterator_int___ { int* _M_current; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____imove___IterMove { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
union std__vector_int__std__allocator_int_____Temporary_value___Storage { unsigned char _M_byte; int _M_val; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__vector_int__std__allocator_int_____Temporary_value { struct std__vector_int__std__allocator_int__* _M_this; union std__vector_int__std__allocator_int_____Temporary_value___Storage _M_storage; unsigned char __field2[4]; } __attribute__((packed));
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

char _str[17] = "myvector[0]==200";
char _str_1[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/vector55/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[17] = "myvector[1]!=300";
char _str_3[49] = "cannot create std::vector larger than max_size()";
char _str_4[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_5[9] = "__n >= 0";
char _str_6[26] = "vector::_M_realloc_insert";
char _str_7[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_8[19] = "__n < this->size()";
char _str_9[23] = "vector::_M_fill_insert";
char _str_10[23] = "vector::_M_fill_append";
struct std__ranges____imove___IterMove _ZNSt6ranges4_Cpo9iter_moveE;
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
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it5;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp26;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp37;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp08;
  int ref_tmp49;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp110;
  int ref_tmp511;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp212;
  int c13 = 0;
  __retval1 = c13;
  unsigned long c14 = 3;
  int c15 = 100;
  ref_tmp03 = c15;
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
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it5, sizeof(it5));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std16;
    __VERIFIER_nondet_memory(&std16, sizeof(std16));
    ref_tmp26 = std16;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std17;
    __VERIFIER_nondet_memory(&std17, sizeof(std17));
    // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE
    __VERIFIER_nondet_memory(&agg_tmp08, sizeof(agg_tmp08));
    __VERIFIER_nondet_memory(&it5, sizeof(it5));
    int c18 = 200;
    ref_tmp49 = c18;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t19 = agg_tmp08;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std20;
    __VERIFIER_nondet_memory(&std20, sizeof(std20));
    ref_tmp37 = std20;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std21;
    __VERIFIER_nondet_memory(&std21, sizeof(std21));
    unsigned long c22 = 0;
    int* std23;
    __VERIFIER_nondet_memory(&std23, sizeof(std23));
    int t24 = *std23;
    int c25 = 200;
    _Bool c26 = ((t24 == c25)) ? 1 : 0;
    if (c26) {
    } else {
      char* cast27 = (char*)&(_str);
      char* c28 = _str_1;
      unsigned int c29 = 21;
      char* cast30 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast27, c28, c29, cast30);
    }
    // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE
    __VERIFIER_nondet_memory(&agg_tmp110, sizeof(agg_tmp110));
    __VERIFIER_nondet_memory(&it5, sizeof(it5));
    unsigned long c31 = 2;
    int c32 = 300;
    ref_tmp511 = c32;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t33 = agg_tmp110;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std34;
    __VERIFIER_nondet_memory(&std34, sizeof(std34));
    agg_tmp212 = std34;
    unsigned long c35 = 1;
    int* std36;
    __VERIFIER_nondet_memory(&std36, sizeof(std36));
    int t37 = *std36;
    int c38 = 300;
    _Bool c39 = ((t37 != c38)) ? 1 : 0;
    if (c39) {
    } else {
      char* cast40 = (char*)&(_str_2);
      char* c41 = _str_1;
      unsigned int c42 = 23;
      char* cast43 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast40, c41, c42, cast43);
    }
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

