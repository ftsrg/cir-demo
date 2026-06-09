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
struct std__set_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int __const_main_b[9] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "myset.size() == 9";
char _str_1[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-lower_bound-bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[13] = "*itlow != 30";
char _str_3[12] = "*itup == 70";
char _str_4[18] = "myset.size() == 5";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[16] = "myset contains:";
char _str_6[2] = " ";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  int b2[9];
  struct std__set_int__std__less_int___std__allocator_int__ myset3;
  struct std___Rb_tree_const_iterator_int_ it4;
  struct std___Rb_tree_const_iterator_int_ itlow5;
  struct std___Rb_tree_const_iterator_int_ itup6;
  struct std___Rb_tree_const_iterator_int_ ref_tmp07;
  int ref_tmp18;
  struct std___Rb_tree_const_iterator_int_ ref_tmp29;
  int ref_tmp310;
  struct std___Rb_tree_const_iterator_int_ agg_tmp011;
  struct std___Rb_tree_const_iterator_int_ agg_tmp112;
  struct std___Rb_tree_const_iterator_int_ agg_tmp213;
  int c14 = 0;
  __retval1 = c14;
  // array copy
  __builtin_memcpy(b2, __const_main_b, (unsigned long)9 * sizeof(__const_main_b[0]));
  int* cast15 = (int*)&(b2);
  int* cast16 = (int*)&(b2);
  int c17 = 9;
  int* ptr18 = &(cast16)[c17];
  // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::set<int*>(int*, int*)
  __VERIFIER_nondet_memory(&myset3, sizeof(myset3));
  __VERIFIER_nondet_memory(cast15, sizeof(*cast15));
  __VERIFIER_nondet_memory(ptr18, sizeof(*ptr18));
    // externalized std:: op: std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator()
    __VERIFIER_nondet_memory(&it4, sizeof(it4));
    // externalized std:: op: std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator()
    __VERIFIER_nondet_memory(&itlow5, sizeof(itlow5));
    // externalized std:: op: std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator()
    __VERIFIER_nondet_memory(&itup6, sizeof(itup6));
    unsigned long std19 = __VERIFIER_nondet_unsigned_long();
    unsigned long c20 = 9;
    _Bool c21 = ((std19 == c20)) ? 1 : 0;
    if (c21) {
    } else {
      char* cast22 = (char*)&(_str);
      char* c23 = _str_1;
      unsigned int c24 = 22;
      char* cast25 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast22, c23, c24, cast25);
    }
    int c26 = 30;
    ref_tmp18 = c26;
    struct std___Rb_tree_const_iterator_int_ std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    ref_tmp07 = std27;
    struct std___Rb_tree_const_iterator_int_* std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    int* std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    int t30 = *std29;
    int c31 = 30;
    _Bool c32 = ((t30 != c31)) ? 1 : 0;
    if (c32) {
    } else {
      char* cast33 = (char*)&(_str_2);
      char* c34 = _str_1;
      unsigned int c35 = 24;
      char* cast36 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast33, c34, c35, cast36);
    }
    int c37 = 60;
    ref_tmp310 = c37;
    struct std___Rb_tree_const_iterator_int_ std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    ref_tmp29 = std38;
    struct std___Rb_tree_const_iterator_int_* std39;
    __VERIFIER_nondet_memory(&std39, sizeof(std39));
    int* std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    int t41 = *std40;
    int c42 = 70;
    _Bool c43 = ((t41 == c42)) ? 1 : 0;
    if (c43) {
    } else {
      char* cast44 = (char*)&(_str_3);
      char* c45 = _str_1;
      unsigned int c46 = 26;
      char* cast47 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast44, c45, c46, cast47);
    }
    agg_tmp011 = itlow5; // copy
    agg_tmp112 = itup6; // copy
    struct std___Rb_tree_const_iterator_int_ t48 = agg_tmp011;
    struct std___Rb_tree_const_iterator_int_ t49 = agg_tmp112;
    struct std___Rb_tree_const_iterator_int_ std50;
    __VERIFIER_nondet_memory(&std50, sizeof(std50));
    agg_tmp213 = std50;
    unsigned long std51 = __VERIFIER_nondet_unsigned_long();
    unsigned long c52 = 5;
    _Bool c53 = ((std51 == c52)) ? 1 : 0;
    if (c53) {
    } else {
      char* cast54 = (char*)&(_str_4);
      char* c55 = _str_1;
      unsigned int c56 = 28;
      char* cast57 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast54, c55, c56, cast57);
    }
    char* cast58 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* std59;
    __VERIFIER_nondet_memory(&std59, sizeof(std59));
      struct std___Rb_tree_const_iterator_int_ ref_tmp460;
      struct std___Rb_tree_const_iterator_int_ ref_tmp561;
      struct std___Rb_tree_const_iterator_int_ agg_tmp362;
      struct std___Rb_tree_const_iterator_int_ std63;
      __VERIFIER_nondet_memory(&std63, sizeof(std63));
      ref_tmp460 = std63;
      struct std___Rb_tree_const_iterator_int_* std64;
      __VERIFIER_nondet_memory(&std64, sizeof(std64));
      while (1) {
        struct std___Rb_tree_const_iterator_int_ std66;
        __VERIFIER_nondet_memory(&std66, sizeof(std66));
        ref_tmp561 = std66;
        _Bool std67;
        __VERIFIER_nondet_memory(&std67, sizeof(std67));
        _Bool u68 = !std67;
        if (!u68) break;
        char* cast69 = (char*)&(_str_6);
        struct std__basic_ostream_char__std__char_traits_char__* std70;
        __VERIFIER_nondet_memory(&std70, sizeof(std70));
        int* std71;
        __VERIFIER_nondet_memory(&std71, sizeof(std71));
        int t72 = *std71;
        struct std__basic_ostream_char__std__char_traits_char__* std73;
        __VERIFIER_nondet_memory(&std73, sizeof(std73));
      for_step65: ;
        int c74 = 0;
        struct std___Rb_tree_const_iterator_int_ std75;
        __VERIFIER_nondet_memory(&std75, sizeof(std75));
        agg_tmp362 = std75;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std76;
    __VERIFIER_nondet_memory(&std76, sizeof(std76));
    int c77 = 0;
    __retval1 = c77;
    int t78 = __retval1;
    int ret_val79 = t78;
    {
      // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::~set()
      __VERIFIER_nondet_memory(&myset3, sizeof(myset3));
    }
    return ret_val79;
  int t80 = __retval1;
  return t80;
}

