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

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____aligned_membuf_int_ { unsigned char _M_storage[4]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Identity_int_ { unsigned char __field0; };
struct std___Rb_tree_const_iterator_int_ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* _M_t; };
struct std___Rb_tree_iterator_int_ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_std__less_int__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_int_;
struct std____new_allocator_std___Rb_tree_node_int__;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_int__;
struct std__less_int_;
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__multiset_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int __const_main_b[5] = {10, 20, 30, 40, 50};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "myset.size() == 5";
char _str_1[114] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multiset/multiset-find-bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[10] = "*it == 20";
char _str_3[10] = "*it != 50";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[16] = "myset contains:";
char _str_5[2] = " ";
char _str_6[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_tree.h";
char __PRETTY_FUNCTION____ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiE[210] = "iterator std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>>::erase(const_iterator) [_Key = int, _Val = int, _KeyOfValue = std::_Identity<int>, _Compare = std::less<int>, _Alloc = std::allocator<int>]";
char _str_7[20] = "__position != end()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  int b2[5];
  struct std__multiset_int__std__less_int___std__allocator_int__ myset3;
  struct std___Rb_tree_const_iterator_int_ it4;
  int i5;
  struct std___Rb_tree_const_iterator_int_ ref_tmp06;
  int ref_tmp17;
  struct std___Rb_tree_const_iterator_int_ agg_tmp08;
  struct std___Rb_tree_const_iterator_int_ agg_tmp19;
  struct std___Rb_tree_const_iterator_int_ agg_tmp210;
  int ref_tmp211;
  struct std___Rb_tree_const_iterator_int_ agg_tmp312;
  struct std___Rb_tree_const_iterator_int_ ref_tmp313;
  struct std___Rb_tree_const_iterator_int_ agg_tmp414;
  struct std___Rb_tree_const_iterator_int_ agg_tmp515;
  int c16 = 0;
  __retval1 = c16;
  // array copy
  __builtin_memcpy(b2, __const_main_b, (unsigned long)5 * sizeof(__const_main_b[0]));
  int* cast17 = (int*)&(b2);
  int* cast18 = (int*)&(b2);
  int c19 = 5;
  int* ptr20 = &(cast18)[c19];
  // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::multiset<int*>(int*, int*)
  __VERIFIER_nondet_memory(&myset3, sizeof(myset3));
  __VERIFIER_nondet_memory(cast17, sizeof(*cast17));
  __VERIFIER_nondet_memory(ptr20, sizeof(*ptr20));
    // externalized std:: op: std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator()
    __VERIFIER_nondet_memory(&it4, sizeof(it4));
    unsigned long std21 = __VERIFIER_nondet_unsigned_long();
    unsigned long c22 = 5;
    _Bool c23 = ((std21 == c22)) ? 1 : 0;
    if (c23) {
    } else {
      char* cast24 = (char*)&(_str);
      char* c25 = _str_1;
      unsigned int c26 = 21;
      char* cast27 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast24, c25, c26, cast27);
    }
    int c28 = 20;
    ref_tmp17 = c28;
    struct std___Rb_tree_const_iterator_int_ std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    ref_tmp06 = std29;
    struct std___Rb_tree_const_iterator_int_* std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
    int* std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    int t32 = *std31;
    int c33 = 20;
    _Bool c34 = ((t32 == c33)) ? 1 : 0;
    if (c34) {
    } else {
      char* cast35 = (char*)&(_str_2);
      char* c36 = _str_1;
      unsigned int c37 = 23;
      char* cast38 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast35, c36, c37, cast38);
    }
    agg_tmp08 = it4; // copy
    struct std___Rb_tree_const_iterator_int_ t39 = agg_tmp08;
    struct std___Rb_tree_const_iterator_int_ std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    agg_tmp19 = std40;
    int c41 = 40;
    ref_tmp211 = c41;
    struct std___Rb_tree_const_iterator_int_ std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    agg_tmp210 = std42;
    struct std___Rb_tree_const_iterator_int_ t43 = agg_tmp210;
    struct std___Rb_tree_const_iterator_int_ std44;
    __VERIFIER_nondet_memory(&std44, sizeof(std44));
    agg_tmp312 = std44;
    struct std___Rb_tree_const_iterator_int_ std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
    ref_tmp313 = std45;
    struct std___Rb_tree_const_iterator_int_* std46;
    __VERIFIER_nondet_memory(&std46, sizeof(std46));
    int c47 = 0;
    struct std___Rb_tree_const_iterator_int_ std48;
    __VERIFIER_nondet_memory(&std48, sizeof(std48));
    agg_tmp414 = std48;
    int c49 = 0;
    struct std___Rb_tree_const_iterator_int_ std50;
    __VERIFIER_nondet_memory(&std50, sizeof(std50));
    agg_tmp515 = std50;
    int* std51;
    __VERIFIER_nondet_memory(&std51, sizeof(std51));
    int t52 = *std51;
    int c53 = 50;
    _Bool c54 = ((t52 != c53)) ? 1 : 0;
    if (c54) {
    } else {
      char* cast55 = (char*)&(_str_3);
      char* c56 = _str_1;
      unsigned int c57 = 28;
      char* cast58 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast55, c56, c57, cast58);
    }
    char* cast59 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std60;
    __VERIFIER_nondet_memory(&std60, sizeof(std60));
      struct std___Rb_tree_const_iterator_int_ ref_tmp461;
      struct std___Rb_tree_const_iterator_int_ ref_tmp562;
      struct std___Rb_tree_const_iterator_int_ agg_tmp663;
      struct std___Rb_tree_const_iterator_int_ std64;
      __VERIFIER_nondet_memory(&std64, sizeof(std64));
      ref_tmp461 = std64;
      struct std___Rb_tree_const_iterator_int_* std65;
      __VERIFIER_nondet_memory(&std65, sizeof(std65));
      while (1) {
        struct std___Rb_tree_const_iterator_int_ std67;
        __VERIFIER_nondet_memory(&std67, sizeof(std67));
        ref_tmp562 = std67;
        _Bool std68;
        __VERIFIER_nondet_memory(&std68, sizeof(std68));
        _Bool u69 = !std68;
        if (!u69) break;
        char* cast70 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* std71;
        __VERIFIER_nondet_memory(&std71, sizeof(std71));
        int* std72;
        __VERIFIER_nondet_memory(&std72, sizeof(std72));
        int t73 = *std72;
        struct std__basic_ostream_char__std__char_traits_char__* std74;
        __VERIFIER_nondet_memory(&std74, sizeof(std74));
      for_step66: ;
        int c75 = 0;
        struct std___Rb_tree_const_iterator_int_ std76;
        __VERIFIER_nondet_memory(&std76, sizeof(std76));
        agg_tmp663 = std76;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std77;
    __VERIFIER_nondet_memory(&std77, sizeof(std77));
    int c78 = 0;
    __retval1 = c78;
    int t79 = __retval1;
    int ret_val80 = t79;
    {
      // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::~multiset()
      __VERIFIER_nondet_memory(&myset3, sizeof(myset3));
    }
    return ret_val80;
  int t81 = __retval1;
  return t81;
}

