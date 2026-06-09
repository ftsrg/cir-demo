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

int __const_main_b[9] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[13] = "*itlow == 40";
char _str_1[121] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multiset/multiset-upper_bound-bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[12] = "*itup != 70";
char _str_3[18] = "myset.size() == 6";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[16] = "myset contains:";
char _str_5[2] = " ";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  int b2[9];
  struct std__multiset_int__std__less_int___std__allocator_int__ myset3;
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
  // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::multiset<int*>(int*, int*)
  __VERIFIER_nondet_memory(&myset3, sizeof(myset3));
  __VERIFIER_nondet_memory(cast15, sizeof(*cast15));
  __VERIFIER_nondet_memory(ptr18, sizeof(*ptr18));
    // externalized std:: op: std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator()
    __VERIFIER_nondet_memory(&it4, sizeof(it4));
    // externalized std:: op: std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator()
    __VERIFIER_nondet_memory(&itlow5, sizeof(itlow5));
    // externalized std:: op: std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator()
    __VERIFIER_nondet_memory(&itup6, sizeof(itup6));
    int c19 = 30;
    ref_tmp18 = c19;
    struct std___Rb_tree_const_iterator_int_ std20;
    __VERIFIER_nondet_memory(&std20, sizeof(std20));
    ref_tmp07 = std20;
    struct std___Rb_tree_const_iterator_int_* std21;
    __VERIFIER_nondet_memory(&std21, sizeof(std21));
    int* std22;
    __VERIFIER_nondet_memory(&std22, sizeof(std22));
    int t23 = *std22;
    int c24 = 40;
    _Bool c25 = ((t23 == c24)) ? 1 : 0;
    if (c25) {
    } else {
      char* cast26 = (char*)&(_str);
      char* c27 = _str_1;
      unsigned int c28 = 22;
      char* cast29 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast26, c27, c28, cast29);
    }
    int c30 = 60;
    ref_tmp310 = c30;
    struct std___Rb_tree_const_iterator_int_ std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    ref_tmp29 = std31;
    struct std___Rb_tree_const_iterator_int_* std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    int* std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    int t34 = *std33;
    int c35 = 70;
    _Bool c36 = ((t34 != c35)) ? 1 : 0;
    if (c36) {
    } else {
      char* cast37 = (char*)&(_str_2);
      char* c38 = _str_1;
      unsigned int c39 = 24;
      char* cast40 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast37, c38, c39, cast40);
    }
    agg_tmp011 = itlow5; // copy
    agg_tmp112 = itup6; // copy
    struct std___Rb_tree_const_iterator_int_ t41 = agg_tmp011;
    struct std___Rb_tree_const_iterator_int_ t42 = agg_tmp112;
    struct std___Rb_tree_const_iterator_int_ std43;
    __VERIFIER_nondet_memory(&std43, sizeof(std43));
    agg_tmp213 = std43;
    unsigned long std44 = __VERIFIER_nondet_unsigned_long();
    unsigned long c45 = 6;
    _Bool c46 = ((std44 == c45)) ? 1 : 0;
    if (c46) {
    } else {
      char* cast47 = (char*)&(_str_3);
      char* c48 = _str_1;
      unsigned int c49 = 27;
      char* cast50 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast47, c48, c49, cast50);
    }
    char* cast51 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std52;
    __VERIFIER_nondet_memory(&std52, sizeof(std52));
      struct std___Rb_tree_const_iterator_int_ ref_tmp453;
      struct std___Rb_tree_const_iterator_int_ ref_tmp554;
      struct std___Rb_tree_const_iterator_int_ agg_tmp355;
      struct std___Rb_tree_const_iterator_int_ std56;
      __VERIFIER_nondet_memory(&std56, sizeof(std56));
      ref_tmp453 = std56;
      struct std___Rb_tree_const_iterator_int_* std57;
      __VERIFIER_nondet_memory(&std57, sizeof(std57));
      while (1) {
        struct std___Rb_tree_const_iterator_int_ std59;
        __VERIFIER_nondet_memory(&std59, sizeof(std59));
        ref_tmp554 = std59;
        _Bool std60;
        __VERIFIER_nondet_memory(&std60, sizeof(std60));
        _Bool u61 = !std60;
        if (!u61) break;
        char* cast62 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* std63;
        __VERIFIER_nondet_memory(&std63, sizeof(std63));
        int* std64;
        __VERIFIER_nondet_memory(&std64, sizeof(std64));
        int t65 = *std64;
        struct std__basic_ostream_char__std__char_traits_char__* std66;
        __VERIFIER_nondet_memory(&std66, sizeof(std66));
      for_step58: ;
        int c67 = 0;
        struct std___Rb_tree_const_iterator_int_ std68;
        __VERIFIER_nondet_memory(&std68, sizeof(std68));
        agg_tmp355 = std68;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std69;
    __VERIFIER_nondet_memory(&std69, sizeof(std69));
    int c70 = 0;
    __retval1 = c70;
    int t71 = __retval1;
    int ret_val72 = t71;
    {
      // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::~multiset()
      __VERIFIER_nondet_memory(&myset3, sizeof(myset3));
    }
    return ret_val72;
  int t73 = __retval1;
  return t73;
}

