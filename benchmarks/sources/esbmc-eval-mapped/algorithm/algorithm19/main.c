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
struct std__ranges____distance_fn { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints[8] = {10, 20, 30, 30, 20, 10, 10, 20};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "myvector[1] == 99";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm19/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "myvector[4] == 99";
char _str_3[18] = "myvector[7] == 99";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[19] = "myvector contains:";
char _str_5[2] = " ";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_6[49] = "cannot create std::vector larger than max_size()";
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
  int myints2[8];
  struct std__vector_int__std__allocator_int__ myvector3;
  struct std__allocator_int_ ref_tmp04;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp05;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp16;
  int ref_tmp17;
  int ref_tmp28;
  int c9 = 0;
  __retval1 = c9;
  // array copy
  __builtin_memcpy(myints2, __const_main_myints, (unsigned long)8 * sizeof(__const_main_myints[0]));
  int* cast10 = (int*)&(myints2);
  int* cast11 = (int*)&(myints2);
  int c12 = 8;
  int* ptr13 = &(cast11)[c12];
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&myvector3, sizeof(myvector3));
    __VERIFIER_nondet_memory(cast10, sizeof(*cast10));
    __VERIFIER_nondet_memory(ptr13, sizeof(*ptr13));
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
  }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std14;
    __VERIFIER_nondet_memory(&std14, sizeof(std14));
    agg_tmp05 = std14;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std15;
    __VERIFIER_nondet_memory(&std15, sizeof(std15));
    agg_tmp16 = std15;
    int c16 = 20;
    ref_tmp17 = c16;
    int c17 = 99;
    ref_tmp28 = c17;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t18 = agg_tmp05;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t19 = agg_tmp16;
    // externalized std:: op: void std::replace<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, int>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, int const&, int const&)
    __VERIFIER_nondet_memory(&ref_tmp17, sizeof(ref_tmp17));
    __VERIFIER_nondet_memory(&ref_tmp28, sizeof(ref_tmp28));
    unsigned long c20 = 1;
    int* std21;
    __VERIFIER_nondet_memory(&std21, sizeof(std21));
    int t22 = *std21;
    int c23 = 99;
    _Bool c24 = ((t22 == c23)) ? 1 : 0;
    if (c24) {
    } else {
      char* cast25 = (char*)&(_str);
      char* c26 = _str_1;
      unsigned int c27 = 20;
      char* cast28 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast25, c26, c27, cast28);
    }
    unsigned long c29 = 4;
    int* std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
    int t31 = *std30;
    int c32 = 99;
    _Bool c33 = ((t31 == c32)) ? 1 : 0;
    if (c33) {
    } else {
      char* cast34 = (char*)&(_str_2);
      char* c35 = _str_1;
      unsigned int c36 = 21;
      char* cast37 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast34, c35, c36, cast37);
    }
    unsigned long c38 = 7;
    int* std39;
    __VERIFIER_nondet_memory(&std39, sizeof(std39));
    int t40 = *std39;
    int c41 = 99;
    _Bool c42 = ((t40 == c41)) ? 1 : 0;
    if (c42) {
    } else {
      char* cast43 = (char*)&(_str_3);
      char* c44 = _str_1;
      unsigned int c45 = 22;
      char* cast46 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast43, c44, c45, cast46);
    }
    char* cast47 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std48;
    __VERIFIER_nondet_memory(&std48, sizeof(std48));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it49;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp350;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std51;
      __VERIFIER_nondet_memory(&std51, sizeof(std51));
      it49 = std51;
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std53;
        __VERIFIER_nondet_memory(&std53, sizeof(std53));
        ref_tmp350 = std53;
        _Bool std54;
        __VERIFIER_nondet_memory(&std54, sizeof(std54));
        _Bool u55 = !std54;
        if (!u55) break;
        char* cast56 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* std57;
        __VERIFIER_nondet_memory(&std57, sizeof(std57));
        int* std58;
        __VERIFIER_nondet_memory(&std58, sizeof(std58));
        int t59 = *std58;
        struct std__basic_ostream_char__std__char_traits_char__* std60;
        __VERIFIER_nondet_memory(&std60, sizeof(std60));
      for_step52: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std61;
        __VERIFIER_nondet_memory(&std61, sizeof(std61));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std62;
    __VERIFIER_nondet_memory(&std62, sizeof(std62));
    int c63 = 0;
    __retval1 = c63;
    int t64 = __retval1;
    int ret_val65 = t64;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector3, sizeof(myvector3));
    }
    return ret_val65;
  int t66 = __retval1;
  return t66;
}

