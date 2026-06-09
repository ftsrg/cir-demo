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
struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ { double* _M_current; };
struct __gnu_cxx____ops___Iter_comp_iter_bool_____double__double__ { void* _M_comp; };
struct __gnu_cxx____ops___Iter_comp_val_bool_____double__double__ { void* _M_comp; };
struct __gnu_cxx____ops___Val_comp_iter_bool_____double__double__ { void* _M_comp; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Temporary_buffer___gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double_____double____Impl { long _M_len; double* _M_buffer; };
struct std___UninitDestroyGuard_double____void_ { double* _M_first; double** _M_cur; };
struct std___Vector_base_double__std__allocator_double_____Vector_impl_data { double* _M_start; double* _M_finish; double* _M_end_of_storage; };
struct std____new_allocator_double_;
struct std____pair_base_double____long_;
struct std__allocator_double_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__nothrow_t { unsigned char __field0; };
struct std__pair_double____long_ { double* first; long second; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__vector_double__std__allocator_double_____Guard_alloc { double* _M_storage; unsigned long _M_len; struct std___Vector_base_double__std__allocator_double__* _M_vect; };
struct std___Temporary_buffer___gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double_____double_ { long _M_original_len; struct std___Temporary_buffer___gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double_____double____Impl _M_impl; };
struct std___Vector_base_double__std__allocator_double_____Vector_impl { struct std___Vector_base_double__std__allocator_double_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_double__std__allocator_double__ { struct std___Vector_base_double__std__allocator_double_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_double__std__allocator_double__ { struct std___Vector_base_double__std__allocator_double__ __field0; };

double __const_main_mydoubles[5] = {0x1.68f5c28f5c28fp0, 0x1.2ae147ae147aep2, 0x1.bae147ae147aep0, 0x1.51eb851eb851fp0, 0x1.9eb851eb851ecp0};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[27] = "\nusing 'compare_as_ints' :";
char _str_1[20] = "myvector[0] != 1.41";
char _str_2[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm100/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[2] = " ";
char _str_4[49] = "cannot create std::vector larger than max_size()";
char _str_5[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIdSaIdEEixEm[101] = "reference std::vector<double>::operator[](size_type) [_Tp = double, _Alloc = std::allocator<double>]";
char _str_6[19] = "__n < this->size()";
_Bool compare_as_ints(double p0, double p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z15compare_as_intsdd
_Bool compare_as_ints(double v0, double v1) {
bb2:
  double i3;
  double j4;
  _Bool __retval5;
  i3 = v0;
  j4 = v1;
  double t6 = i3;
  int cast7 = (int)t6;
  double t8 = j4;
  int cast9 = (int)t8;
  _Bool c10 = ((cast7 < cast9)) ? 1 : 0;
  __retval5 = c10;
  _Bool t11 = __retval5;
  return t11;
}

// function: main
int main() {
bb12:
  int __retval13;
  double mydoubles14[5];
  struct std__vector_double__std__allocator_double__ myvector15;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ it16;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ agg_tmp017;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ agg_tmp118;
  int c19 = 0;
  __retval13 = c19;
  // array copy
  __builtin_memcpy(mydoubles14, __const_main_mydoubles, (unsigned long)5 * sizeof(__const_main_mydoubles[0]));
  // externalized std:: op: std::vector<double, std::allocator<double> >::vector()
  __VERIFIER_nondet_memory(&myvector15, sizeof(myvector15));
    // externalized std:: op: __gnu_cxx::__normal_iterator<double*, std::vector<double, std::allocator<double> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it16, sizeof(it16));
    double* cast20 = (double*)&(mydoubles14);
    double* cast21 = (double*)&(mydoubles14);
    int c22 = 5;
    double* ptr23 = &(cast21)[c22];
    // externalized std:: op: void std::vector<double, std::allocator<double> >::assign<double*, void>(double*, double*)
    __VERIFIER_nondet_memory(&myvector15, sizeof(myvector15));
    __VERIFIER_nondet_memory(cast20, sizeof(*cast20));
    __VERIFIER_nondet_memory(ptr23, sizeof(*ptr23));
    char* cast24 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std25;
    __VERIFIER_nondet_memory(&std25, sizeof(std25));
    struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    agg_tmp017 = std26;
    struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    agg_tmp118 = std27;
    struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ t28 = agg_tmp017;
    struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ t29 = agg_tmp118;
    // externalized std:: op: void std::stable_sort<__gnu_cxx::__normal_iterator<double*, std::vector<double, std::allocator<double> > >, bool (*)(double, double)>(__gnu_cxx::__normal_iterator<double*, std::vector<double, std::allocator<double> > >, __gnu_cxx::__normal_iterator<double*, std::vector<double, std::allocator<double> > >, bool (*)(double, double))
    unsigned long c30 = 0;
    double* std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    double t32 = *std31;
    double c33 = 0x1.68f5c28f5c28fp0;
    _Bool c34 = ((t32 != c33)) ? 1 : 0;
    if (c34) {
    } else {
      char* cast35 = (char*)&(_str_1);
      char* c36 = _str_2;
      unsigned int c37 = 37;
      char* cast38 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast35, c36, c37, cast38);
    }
      struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ ref_tmp039;
      struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ ref_tmp140;
      struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ std41;
      __VERIFIER_nondet_memory(&std41, sizeof(std41));
      ref_tmp039 = std41;
      struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* std42;
      __VERIFIER_nondet_memory(&std42, sizeof(std42));
      while (1) {
        struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ std44;
        __VERIFIER_nondet_memory(&std44, sizeof(std44));
        ref_tmp140 = std44;
        _Bool std45;
        __VERIFIER_nondet_memory(&std45, sizeof(std45));
        _Bool u46 = !std45;
        if (!u46) break;
        char* cast47 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std48;
        __VERIFIER_nondet_memory(&std48, sizeof(std48));
        double* std49;
        __VERIFIER_nondet_memory(&std49, sizeof(std49));
        double t50 = *std49;
        struct std__basic_ostream_char__std__char_traits_char__* std51;
        __VERIFIER_nondet_memory(&std51, sizeof(std51));
      for_step43: ;
        struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* std52;
        __VERIFIER_nondet_memory(&std52, sizeof(std52));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std53;
    __VERIFIER_nondet_memory(&std53, sizeof(std53));
    int c54 = 0;
    __retval13 = c54;
    int t55 = __retval13;
    int ret_val56 = t55;
    {
      // externalized std:: op: std::vector<double, std::allocator<double> >::~vector()
      __VERIFIER_nondet_memory(&myvector15, sizeof(myvector15));
    }
    return ret_val56;
  int t57 = __retval13;
  return t57;
}

