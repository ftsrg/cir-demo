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
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ { void* _M_comp; };
struct __gnu_cxx____ops___Iter_comp_val_bool_____int__int__ { void* _M_comp; };
struct __gnu_cxx____ops___Val_comp_iter_bool_____int__int__ { void* _M_comp; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct myclass { unsigned char __field0; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____cmp_cat____unspec { unsigned char __field0; };
struct std____detail___Synth3way { unsigned char __field0; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std__strong_ordering { char _M_value; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints1[3] = {12, 32, 71};
int __const_main_myints[3] = {32, 71, 12};
struct std____cmp_cat____unspec __const__ZSt21__unguarded_partitionIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterIPFbiiEEEET_SC_SC_SC_T0__agg_tmp5;
struct std____cmp_cat____unspec __const__ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterIPFbiiEEEEvT_SC_SC_T0__agg_tmp3;
struct myclass myobject;
char _str[18] = "myvector[0] == 12";
char _str_1[121] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm40_sort1-c++03/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "myvector[1] == 32";
char _str_3[18] = "myvector[2] == 71";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_4[49] = "cannot create std::vector larger than max_size()";
struct std____detail___Synth3way _ZNSt8__detail11__synth3wayE;
char _str_5[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[19] = "__n < this->size()";
_Bool myfunction(int p0, int p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z10myfunctionii
_Bool myfunction(int v0, int v1) {
bb2:
  int i3;
  int j4;
  _Bool __retval5;
  i3 = v0;
  j4 = v1;
  int t6 = i3;
  int t7 = j4;
  _Bool c8 = ((t6 < t7)) ? 1 : 0;
  __retval5 = c8;
  _Bool t9 = __retval5;
  return t9;
}

// function: main
int main() {
bb10:
  int __retval11;
  int myints12[3];
  int myints113[3];
  struct std__vector_int__std__allocator_int__ myvector14;
  struct std__allocator_int_ ref_tmp015;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it16;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp017;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp118;
  int c19 = 0;
  __retval11 = c19;
  // array copy
  __builtin_memcpy(myints12, __const_main_myints, (unsigned long)3 * sizeof(__const_main_myints[0]));
  // array copy
  __builtin_memcpy(myints113, __const_main_myints1, (unsigned long)3 * sizeof(__const_main_myints1[0]));
  int* cast20 = (int*)&(myints12);
  int* cast21 = (int*)&(myints12);
  int c22 = 3;
  int* ptr23 = &(cast21)[c22];
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp015, sizeof(ref_tmp015));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&myvector14, sizeof(myvector14));
    __VERIFIER_nondet_memory(cast20, sizeof(*cast20));
    __VERIFIER_nondet_memory(ptr23, sizeof(*ptr23));
    __VERIFIER_nondet_memory(&ref_tmp015, sizeof(ref_tmp015));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp015, sizeof(ref_tmp015));
  }
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it16, sizeof(it16));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std24;
    __VERIFIER_nondet_memory(&std24, sizeof(std24));
    agg_tmp017 = std24;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std25;
    __VERIFIER_nondet_memory(&std25, sizeof(std25));
    agg_tmp118 = std25;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t26 = agg_tmp017;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t27 = agg_tmp118;
    // externalized std:: op: void std::sort<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, bool (*)(int, int)>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, bool (*)(int, int))
    unsigned long c28 = 0;
    int* std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    int t30 = *std29;
    int c31 = 12;
    _Bool c32 = ((t30 == c31)) ? 1 : 0;
    if (c32) {
    } else {
      char* cast33 = (char*)&(_str);
      char* c34 = _str_1;
      unsigned int c35 = 33;
      char* cast36 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast33, c34, c35, cast36);
    }
    unsigned long c37 = 1;
    int* std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    int t39 = *std38;
    int c40 = 32;
    _Bool c41 = ((t39 == c40)) ? 1 : 0;
    if (c41) {
    } else {
      char* cast42 = (char*)&(_str_2);
      char* c43 = _str_1;
      unsigned int c44 = 34;
      char* cast45 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast42, c43, c44, cast45);
    }
    unsigned long c46 = 2;
    int* std47;
    __VERIFIER_nondet_memory(&std47, sizeof(std47));
    int t48 = *std47;
    int c49 = 71;
    _Bool c50 = ((t48 == c49)) ? 1 : 0;
    if (c50) {
    } else {
      char* cast51 = (char*)&(_str_3);
      char* c52 = _str_1;
      unsigned int c53 = 35;
      char* cast54 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast51, c52, c53, cast54);
    }
    struct std__basic_ostream_char__std__char_traits_char__* std55;
    __VERIFIER_nondet_memory(&std55, sizeof(std55));
    int c56 = 0;
    __retval11 = c56;
    int t57 = __retval11;
    int ret_val58 = t57;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector14, sizeof(myvector14));
    }
    return ret_val58;
  int t59 = __retval11;
  return t59;
}

