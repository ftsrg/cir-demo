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

int __const_main_myints[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[17] = "myvector[0] == 9";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm34/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[17] = "myvector[1] == 8";
char _str_3[17] = "myvector[2] == 7";
char _str_4[17] = "myvector[3] == 6";
char _str_5[17] = "myvector[4] == 5";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_6[19] = "myvector contains:";
char _str_7[2] = " ";
char _str_8[26] = "vector::_M_default_append";
char _str_9[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_10[19] = "__n < this->size()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int myints2[9];
  struct std__vector_int__std__allocator_int__ myvector3;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it4;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp05;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp16;
  int c7 = 0;
  __retval1 = c7;
  // array copy
  __builtin_memcpy(myints2, __const_main_myints, (unsigned long)9 * sizeof(__const_main_myints[0]));
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&myvector3, sizeof(myvector3));
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it4, sizeof(it4));
    unsigned long c8 = 9;
    // externalized std:: op: std::vector<int, std::allocator<int> >::resize(unsigned long)
    __VERIFIER_nondet_memory(&myvector3, sizeof(myvector3));
    int* cast9 = (int*)&(myints2);
    int* cast10 = (int*)&(myints2);
    int c11 = 9;
    int* ptr12 = &(cast10)[c11];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std13;
    __VERIFIER_nondet_memory(&std13, sizeof(std13));
    agg_tmp05 = std13;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t14 = agg_tmp05;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std15;
    __VERIFIER_nondet_memory(&std15, sizeof(std15));
    agg_tmp16 = std15;
    unsigned long c16 = 0;
    int* std17;
    __VERIFIER_nondet_memory(&std17, sizeof(std17));
    int t18 = *std17;
    int c19 = 9;
    _Bool c20 = ((t18 == c19)) ? 1 : 0;
    if (c20) {
    } else {
      char* cast21 = (char*)&(_str);
      char* c22 = _str_1;
      unsigned int c23 = 23;
      char* cast24 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast21, c22, c23, cast24);
    }
    unsigned long c25 = 1;
    int* std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    int t27 = *std26;
    int c28 = 8;
    _Bool c29 = ((t27 == c28)) ? 1 : 0;
    if (c29) {
    } else {
      char* cast30 = (char*)&(_str_2);
      char* c31 = _str_1;
      unsigned int c32 = 24;
      char* cast33 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast30, c31, c32, cast33);
    }
    unsigned long c34 = 2;
    int* std35;
    __VERIFIER_nondet_memory(&std35, sizeof(std35));
    int t36 = *std35;
    int c37 = 7;
    _Bool c38 = ((t36 == c37)) ? 1 : 0;
    if (c38) {
    } else {
      char* cast39 = (char*)&(_str_3);
      char* c40 = _str_1;
      unsigned int c41 = 25;
      char* cast42 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast39, c40, c41, cast42);
    }
    unsigned long c43 = 3;
    int* std44;
    __VERIFIER_nondet_memory(&std44, sizeof(std44));
    int t45 = *std44;
    int c46 = 6;
    _Bool c47 = ((t45 == c46)) ? 1 : 0;
    if (c47) {
    } else {
      char* cast48 = (char*)&(_str_4);
      char* c49 = _str_1;
      unsigned int c50 = 26;
      char* cast51 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast48, c49, c50, cast51);
    }
    unsigned long c52 = 4;
    int* std53;
    __VERIFIER_nondet_memory(&std53, sizeof(std53));
    int t54 = *std53;
    int c55 = 5;
    _Bool c56 = ((t54 == c55)) ? 1 : 0;
    if (c56) {
    } else {
      char* cast57 = (char*)&(_str_5);
      char* c58 = _str_1;
      unsigned int c59 = 27;
      char* cast60 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast57, c58, c59, cast60);
    }
    char* cast61 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* std62;
    __VERIFIER_nondet_memory(&std62, sizeof(std62));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp063;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp164;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std65;
      __VERIFIER_nondet_memory(&std65, sizeof(std65));
      ref_tmp063 = std65;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std66;
      __VERIFIER_nondet_memory(&std66, sizeof(std66));
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std68;
        __VERIFIER_nondet_memory(&std68, sizeof(std68));
        ref_tmp164 = std68;
        _Bool std69;
        __VERIFIER_nondet_memory(&std69, sizeof(std69));
        _Bool u70 = !std69;
        if (!u70) break;
        char* cast71 = (char*)&(_str_7);
        struct std__basic_ostream_char__std__char_traits_char__* std72;
        __VERIFIER_nondet_memory(&std72, sizeof(std72));
        int* std73;
        __VERIFIER_nondet_memory(&std73, sizeof(std73));
        int t74 = *std73;
        struct std__basic_ostream_char__std__char_traits_char__* std75;
        __VERIFIER_nondet_memory(&std75, sizeof(std75));
      for_step67: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std76;
        __VERIFIER_nondet_memory(&std76, sizeof(std76));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std77;
    __VERIFIER_nondet_memory(&std77, sizeof(std77));
    int c78 = 0;
    __retval1 = c78;
    int t79 = __retval1;
    int ret_val80 = t79;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector3, sizeof(myvector3));
    }
    return ret_val80;
  int t81 = __retval1;
  return t81;
}

