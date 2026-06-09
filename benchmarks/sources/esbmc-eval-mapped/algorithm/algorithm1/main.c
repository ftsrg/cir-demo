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
struct myclass { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_;
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[2] = " ";
struct myclass myobject;
char _str_1[19] = "myvector contains:";
char _str_2[18] = "myvector[0] == 11";
char _str_3[108] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[18] = "myvector[1] == 21";
char _str_5[18] = "myvector[2] == 31";
char _str_6[20] = "\nmyvector contains:";
char _str_7[18] = "myvector[0] == 10";
char _str_8[18] = "myvector[1] == 20";
char _str_9[18] = "myvector[2] == 30";
char _str_10[26] = "vector::_M_realloc_append";
char _str_11[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_12[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_13[19] = "__n < this->size()";
void myfunction(int* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z10myfunctionRi
void myfunction(int* v0) {
bb1:
  int* i2;
  i2 = v0;
  int* t3 = i2;
  int t4 = *t3;
  int u5 = t4 + 1;
  *t3 = u5;
  char* cast6 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std7;
  __VERIFIER_nondet_memory(&std7, sizeof(std7));
  int* t8 = i2;
  int t9 = *t8;
  struct std__basic_ostream_char__std__char_traits_char__* std10;
  __VERIFIER_nondet_memory(&std10, sizeof(std10));
  return;
}

// function: main
int main() {
bb11:
  int __retval12;
  struct std__vector_int__std__allocator_int__ myvector13;
  int ref_tmp014;
  int ref_tmp115;
  int ref_tmp216;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp017;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp118;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp219;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp320;
  struct myclass agg_tmp421;
  struct myclass agg_tmp522;
  int c23 = 0;
  __retval12 = c23;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&myvector13, sizeof(myvector13));
    int c24 = 10;
    ref_tmp014 = c24;
    // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&myvector13, sizeof(myvector13));
    __VERIFIER_nondet_memory(&ref_tmp014, sizeof(ref_tmp014));
    int c25 = 20;
    ref_tmp115 = c25;
    // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&myvector13, sizeof(myvector13));
    __VERIFIER_nondet_memory(&ref_tmp115, sizeof(ref_tmp115));
    int c26 = 30;
    ref_tmp216 = c26;
    // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&myvector13, sizeof(myvector13));
    __VERIFIER_nondet_memory(&ref_tmp216, sizeof(ref_tmp216));
    char* cast27 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    agg_tmp017 = std29;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
    agg_tmp118 = std30;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t31 = agg_tmp017;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t32 = agg_tmp118;
    void* std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    unsigned long c34 = 0;
    int* std35;
    __VERIFIER_nondet_memory(&std35, sizeof(std35));
    int t36 = *std35;
    int c37 = 11;
    _Bool c38 = ((t36 == c37)) ? 1 : 0;
    if (c38) {
    } else {
      char* cast39 = (char*)&(_str_2);
      char* c40 = _str_3;
      unsigned int c41 = 32;
      char* cast42 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast39, c40, c41, cast42);
    }
    unsigned long c43 = 1;
    int* std44;
    __VERIFIER_nondet_memory(&std44, sizeof(std44));
    int t45 = *std44;
    int c46 = 21;
    _Bool c47 = ((t45 == c46)) ? 1 : 0;
    if (c47) {
    } else {
      char* cast48 = (char*)&(_str_4);
      char* c49 = _str_3;
      unsigned int c50 = 33;
      char* cast51 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast48, c49, c50, cast51);
    }
    unsigned long c52 = 2;
    int* std53;
    __VERIFIER_nondet_memory(&std53, sizeof(std53));
    int t54 = *std53;
    int c55 = 31;
    _Bool c56 = ((t54 == c55)) ? 1 : 0;
    if (c56) {
    } else {
      char* cast57 = (char*)&(_str_5);
      char* c58 = _str_3;
      unsigned int c59 = 34;
      char* cast60 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast57, c58, c59, cast60);
    }
    char* cast61 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* std62;
    __VERIFIER_nondet_memory(&std62, sizeof(std62));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std63;
    __VERIFIER_nondet_memory(&std63, sizeof(std63));
    agg_tmp219 = std63;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std64;
    __VERIFIER_nondet_memory(&std64, sizeof(std64));
    agg_tmp320 = std64;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t65 = agg_tmp219;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t66 = agg_tmp320;
    struct myclass t67 = agg_tmp421;
    struct myclass std68;
    __VERIFIER_nondet_memory(&std68, sizeof(std68));
    agg_tmp522 = std68;
    unsigned long c69 = 0;
    int* std70;
    __VERIFIER_nondet_memory(&std70, sizeof(std70));
    int t71 = *std70;
    int c72 = 10;
    _Bool c73 = ((t71 == c72)) ? 1 : 0;
    if (c73) {
    } else {
      char* cast74 = (char*)&(_str_7);
      char* c75 = _str_3;
      unsigned int c76 = 39;
      char* cast77 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast74, c75, c76, cast77);
    }
    unsigned long c78 = 1;
    int* std79;
    __VERIFIER_nondet_memory(&std79, sizeof(std79));
    int t80 = *std79;
    int c81 = 20;
    _Bool c82 = ((t80 == c81)) ? 1 : 0;
    if (c82) {
    } else {
      char* cast83 = (char*)&(_str_8);
      char* c84 = _str_3;
      unsigned int c85 = 40;
      char* cast86 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast83, c84, c85, cast86);
    }
    unsigned long c87 = 2;
    int* std88;
    __VERIFIER_nondet_memory(&std88, sizeof(std88));
    int t89 = *std88;
    int c90 = 30;
    _Bool c91 = ((t89 == c90)) ? 1 : 0;
    if (c91) {
    } else {
      char* cast92 = (char*)&(_str_9);
      char* c93 = _str_3;
      unsigned int c94 = 41;
      char* cast95 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast92, c93, c94, cast95);
    }
    struct std__basic_ostream_char__std__char_traits_char__* std96;
    __VERIFIER_nondet_memory(&std96, sizeof(std96));
    int c97 = 0;
    __retval12 = c97;
    int t98 = __retval12;
    int ret_val99 = t98;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector13, sizeof(myvector13));
    }
    return ret_val99;
  int t100 = __retval12;
  return t100;
}

