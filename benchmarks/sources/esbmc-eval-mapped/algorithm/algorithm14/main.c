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

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "myvector[0] == 10";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm14/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "myvector[1] == 20";
char _str_3[18] = "myvector[2] == 30";
char _str_4[18] = "myvector[3] == 10";
char _str_5[18] = "myvector[4] == 20";
char _str_6[18] = "myvector[5] == 30";
char _str_7[18] = "myvector[6] == 40";
char _str_8[18] = "myvector[7] == 50";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_9[19] = "myvector contains:";
char _str_10[2] = " ";
char _str_11[26] = "vector::_M_realloc_append";
char _str_12[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_13[15] = "!this->empty()";
char _str_14[26] = "vector::_M_default_append";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_15[19] = "__n < this->size()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__vector_int__std__allocator_int__ myvector2;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it3;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp04;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp15;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp16;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp27;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp38;
  int c9 = 0;
  __retval1 = c9;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
      int i10;
      int ref_tmp011;
      int c12 = 1;
      i10 = c12;
      while (1) {
        int t14 = i10;
        int c15 = 5;
        _Bool c16 = ((t14 <= c15)) ? 1 : 0;
        if (!c16) break;
        int t17 = i10;
        int c18 = 10;
        int b19 = t17 * c18;
        ref_tmp011 = b19;
        // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
        __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
        __VERIFIER_nondet_memory(&ref_tmp011, sizeof(ref_tmp011));
      for_step13: ;
        int t20 = i10;
        int u21 = t20 + 1;
        i10 = u21;
      }
    unsigned long std22 = __VERIFIER_nondet_unsigned_long();
    unsigned long c23 = 3;
    unsigned long b24 = std22 + c23;
    // externalized std:: op: std::vector<int, std::allocator<int> >::resize(unsigned long)
    __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std25;
    __VERIFIER_nondet_memory(&std25, sizeof(std25));
    agg_tmp04 = std25;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    ref_tmp16 = std26;
    long c27 = 5;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    agg_tmp15 = std28;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    agg_tmp27 = std29;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t30 = agg_tmp04;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t31 = agg_tmp15;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t32 = agg_tmp27;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    agg_tmp38 = std33;
    unsigned long c34 = 0;
    int* std35;
    __VERIFIER_nondet_memory(&std35, sizeof(std35));
    int t36 = *std35;
    int c37 = 10;
    _Bool c38 = ((t36 == c37)) ? 1 : 0;
    if (c38) {
    } else {
      char* cast39 = (char*)&(_str);
      char* c40 = _str_1;
      unsigned int c41 = 26;
      char* cast42 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast39, c40, c41, cast42);
    }
    unsigned long c43 = 1;
    int* std44;
    __VERIFIER_nondet_memory(&std44, sizeof(std44));
    int t45 = *std44;
    int c46 = 20;
    _Bool c47 = ((t45 == c46)) ? 1 : 0;
    if (c47) {
    } else {
      char* cast48 = (char*)&(_str_2);
      char* c49 = _str_1;
      unsigned int c50 = 27;
      char* cast51 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast48, c49, c50, cast51);
    }
    unsigned long c52 = 2;
    int* std53;
    __VERIFIER_nondet_memory(&std53, sizeof(std53));
    int t54 = *std53;
    int c55 = 30;
    _Bool c56 = ((t54 == c55)) ? 1 : 0;
    if (c56) {
    } else {
      char* cast57 = (char*)&(_str_3);
      char* c58 = _str_1;
      unsigned int c59 = 28;
      char* cast60 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast57, c58, c59, cast60);
    }
    unsigned long c61 = 3;
    int* std62;
    __VERIFIER_nondet_memory(&std62, sizeof(std62));
    int t63 = *std62;
    int c64 = 10;
    _Bool c65 = ((t63 == c64)) ? 1 : 0;
    if (c65) {
    } else {
      char* cast66 = (char*)&(_str_4);
      char* c67 = _str_1;
      unsigned int c68 = 29;
      char* cast69 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast66, c67, c68, cast69);
    }
    unsigned long c70 = 4;
    int* std71;
    __VERIFIER_nondet_memory(&std71, sizeof(std71));
    int t72 = *std71;
    int c73 = 20;
    _Bool c74 = ((t72 == c73)) ? 1 : 0;
    if (c74) {
    } else {
      char* cast75 = (char*)&(_str_5);
      char* c76 = _str_1;
      unsigned int c77 = 30;
      char* cast78 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast75, c76, c77, cast78);
    }
    unsigned long c79 = 5;
    int* std80;
    __VERIFIER_nondet_memory(&std80, sizeof(std80));
    int t81 = *std80;
    int c82 = 30;
    _Bool c83 = ((t81 == c82)) ? 1 : 0;
    if (c83) {
    } else {
      char* cast84 = (char*)&(_str_6);
      char* c85 = _str_1;
      unsigned int c86 = 31;
      char* cast87 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast84, c85, c86, cast87);
    }
    unsigned long c88 = 6;
    int* std89;
    __VERIFIER_nondet_memory(&std89, sizeof(std89));
    int t90 = *std89;
    int c91 = 40;
    _Bool c92 = ((t90 == c91)) ? 1 : 0;
    if (c92) {
    } else {
      char* cast93 = (char*)&(_str_7);
      char* c94 = _str_1;
      unsigned int c95 = 32;
      char* cast96 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast93, c94, c95, cast96);
    }
    unsigned long c97 = 7;
    int* std98;
    __VERIFIER_nondet_memory(&std98, sizeof(std98));
    int t99 = *std98;
    int c100 = 50;
    _Bool c101 = ((t99 == c100)) ? 1 : 0;
    if (c101) {
    } else {
      char* cast102 = (char*)&(_str_8);
      char* c103 = _str_1;
      unsigned int c104 = 33;
      char* cast105 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast102, c103, c104, cast105);
    }
    char* cast106 = (char*)&(_str_9);
    struct std__basic_ostream_char__std__char_traits_char__* std107;
    __VERIFIER_nondet_memory(&std107, sizeof(std107));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2108;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3109;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std110;
      __VERIFIER_nondet_memory(&std110, sizeof(std110));
      ref_tmp2108 = std110;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std111;
      __VERIFIER_nondet_memory(&std111, sizeof(std111));
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std113;
        __VERIFIER_nondet_memory(&std113, sizeof(std113));
        ref_tmp3109 = std113;
        _Bool std114;
        __VERIFIER_nondet_memory(&std114, sizeof(std114));
        _Bool u115 = !std114;
        if (!u115) break;
        char* cast116 = (char*)&(_str_10);
        struct std__basic_ostream_char__std__char_traits_char__* std117;
        __VERIFIER_nondet_memory(&std117, sizeof(std117));
        int* std118;
        __VERIFIER_nondet_memory(&std118, sizeof(std118));
        int t119 = *std118;
        struct std__basic_ostream_char__std__char_traits_char__* std120;
        __VERIFIER_nondet_memory(&std120, sizeof(std120));
      for_step112: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std121;
        __VERIFIER_nondet_memory(&std121, sizeof(std121));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std122;
    __VERIFIER_nondet_memory(&std122, sizeof(std122));
    int c123 = 0;
    __retval1 = c123;
    int t124 = __retval1;
    int ret_val125 = t124;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    }
    return ret_val125;
  int t126 = __retval1;
  return t126;
}

