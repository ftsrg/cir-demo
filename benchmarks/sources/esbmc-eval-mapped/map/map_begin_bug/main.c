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
struct __gnu_cxx____aligned_membuf_std__pair_const_char__int__ { unsigned char _M_storage[8]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Head_base_0UL__char_____false_ { char* _M_head_impl; };
struct std___Index_tuple_0UL_ { unsigned char __field0; };
struct std___Index_tuple__ { unsigned char __field0; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Auto_node { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___* _M_t; struct std___Rb_tree_node_std__pair_const_char__int__* _M_node; };
struct std___Rb_tree_const_iterator_std__pair_const_char__int__ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_iterator_std__pair_const_char__int__ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_std__less_char__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_std__pair_const_char__int__;
struct std___Select1st_std__pair_const_char__int__ { unsigned char __field0; };
struct std___Tuple_impl_0UL__char____ { struct std___Head_base_0UL__char_____false_ __field0; };
struct std____new_allocator_std___Rb_tree_node_std__pair_const_char__int___;
struct std____pair_base_const_char__int_;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_std__pair_const_char__int___;
struct std__less_char_ { unsigned char __field0; };
struct std__pair_const_char__int_;
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std__piecewise_construct_t { unsigned char __field0; };
struct std__tuple__ { unsigned char __field0; };
struct std__tuple_char____ { struct std___Tuple_impl_0UL__char____ __field0; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ { struct std___Rb_tree_key_compare_std__less_char__ __field0; struct std___Rb_tree_header __field1; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ _M_impl; };
struct std__map_char__int__std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ _M_t; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[19] = "(*it).first != 'a'";
char _str_1[105] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/map/map_begin_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[20] = "(*it).second == 200";
char _str_3[19] = "(*it).first == 'b'";
char _str_4[20] = "(*it).second != 100";
char _str_5[19] = "(*it).first == 'c'";
char _str_6[20] = "(*it).second != 300";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_7[5] = " => ";
struct std__piecewise_construct_t _ZSt19piecewise_construct;
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__map_char__int__std__less_char___std__allocator_std__pair_const_char__int___ mymap2;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ it3;
  char ref_tmp04;
  char ref_tmp15;
  char ref_tmp26;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp37;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp08;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp19;
  int c10 = 0;
  __retval1 = c10;
  // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::map()
  __VERIFIER_nondet_memory(&mymap2, sizeof(mymap2));
    // externalized std:: op: std::_Rb_tree_iterator<std::pair<char const, int> >::_Rb_tree_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    int c11 = 100;
    char c12 = 98;
    ref_tmp04 = c12;
    int* std13;
    __VERIFIER_nondet_memory(&std13, sizeof(std13));
    *std13 = c11;
    int c14 = 200;
    char c15 = 97;
    ref_tmp15 = c15;
    int* std16;
    __VERIFIER_nondet_memory(&std16, sizeof(std16));
    *std16 = c14;
    int c17 = 300;
    char c18 = 99;
    ref_tmp26 = c18;
    int* std19;
    __VERIFIER_nondet_memory(&std19, sizeof(std19));
    *std19 = c17;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std20;
    __VERIFIER_nondet_memory(&std20, sizeof(std20));
    ref_tmp37 = std20;
    struct std___Rb_tree_iterator_std__pair_const_char__int__* std21;
    __VERIFIER_nondet_memory(&std21, sizeof(std21));
    struct std__pair_const_char__int_* std22;
    __VERIFIER_nondet_memory(&std22, sizeof(std22));
    char t23 = std22->first;
    int cast24 = (int)t23;
    int c25 = 97;
    _Bool c26 = ((cast24 != c25)) ? 1 : 0;
    if (c26) {
    } else {
      char* cast27 = (char*)&(_str);
      char* c28 = _str_1;
      unsigned int c29 = 24;
      char* cast30 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast27, c28, c29, cast30);
    }
    struct std__pair_const_char__int_* std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    int t32 = std31->second;
    int c33 = 200;
    _Bool c34 = ((t32 == c33)) ? 1 : 0;
    if (c34) {
    } else {
      char* cast35 = (char*)&(_str_2);
      char* c36 = _str_1;
      unsigned int c37 = 25;
      char* cast38 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast35, c36, c37, cast38);
    }
    int c39 = 0;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    agg_tmp08 = std40;
    struct std__pair_const_char__int_* std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
    char t42 = std41->first;
    int cast43 = (int)t42;
    int c44 = 98;
    _Bool c45 = ((cast43 == c44)) ? 1 : 0;
    if (c45) {
    } else {
      char* cast46 = (char*)&(_str_3);
      char* c47 = _str_1;
      unsigned int c48 = 27;
      char* cast49 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast46, c47, c48, cast49);
    }
    struct std__pair_const_char__int_* std50;
    __VERIFIER_nondet_memory(&std50, sizeof(std50));
    int t51 = std50->second;
    int c52 = 100;
    _Bool c53 = ((t51 != c52)) ? 1 : 0;
    if (c53) {
    } else {
      char* cast54 = (char*)&(_str_4);
      char* c55 = _str_1;
      unsigned int c56 = 28;
      char* cast57 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast54, c55, c56, cast57);
    }
    int c58 = 0;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std59;
    __VERIFIER_nondet_memory(&std59, sizeof(std59));
    agg_tmp19 = std59;
    struct std__pair_const_char__int_* std60;
    __VERIFIER_nondet_memory(&std60, sizeof(std60));
    char t61 = std60->first;
    int cast62 = (int)t61;
    int c63 = 99;
    _Bool c64 = ((cast62 == c63)) ? 1 : 0;
    if (c64) {
    } else {
      char* cast65 = (char*)&(_str_5);
      char* c66 = _str_1;
      unsigned int c67 = 30;
      char* cast68 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast65, c66, c67, cast68);
    }
    struct std__pair_const_char__int_* std69;
    __VERIFIER_nondet_memory(&std69, sizeof(std69));
    int t70 = std69->second;
    int c71 = 300;
    _Bool c72 = ((t70 != c71)) ? 1 : 0;
    if (c72) {
    } else {
      char* cast73 = (char*)&(_str_6);
      char* c74 = _str_1;
      unsigned int c75 = 31;
      char* cast76 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast73, c74, c75, cast76);
    }
      struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp477;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp578;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp279;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ std80;
      __VERIFIER_nondet_memory(&std80, sizeof(std80));
      ref_tmp477 = std80;
      struct std___Rb_tree_iterator_std__pair_const_char__int__* std81;
      __VERIFIER_nondet_memory(&std81, sizeof(std81));
      while (1) {
        struct std___Rb_tree_iterator_std__pair_const_char__int__ std83;
        __VERIFIER_nondet_memory(&std83, sizeof(std83));
        ref_tmp578 = std83;
        _Bool std84;
        __VERIFIER_nondet_memory(&std84, sizeof(std84));
        _Bool u85 = !std84;
        if (!u85) break;
        struct std__pair_const_char__int_* std86;
        __VERIFIER_nondet_memory(&std86, sizeof(std86));
        char t87 = std86->first;
        struct std__basic_ostream_char__std__char_traits_char__* std88;
        __VERIFIER_nondet_memory(&std88, sizeof(std88));
        char* cast89 = (char*)&(_str_7);
        struct std__basic_ostream_char__std__char_traits_char__* std90;
        __VERIFIER_nondet_memory(&std90, sizeof(std90));
        struct std__pair_const_char__int_* std91;
        __VERIFIER_nondet_memory(&std91, sizeof(std91));
        int t92 = std91->second;
        struct std__basic_ostream_char__std__char_traits_char__* std93;
        __VERIFIER_nondet_memory(&std93, sizeof(std93));
        struct std__basic_ostream_char__std__char_traits_char__* std94;
        __VERIFIER_nondet_memory(&std94, sizeof(std94));
      for_step82: ;
        int c95 = 0;
        struct std___Rb_tree_iterator_std__pair_const_char__int__ std96;
        __VERIFIER_nondet_memory(&std96, sizeof(std96));
        agg_tmp279 = std96;
      }
    int c97 = 0;
    __retval1 = c97;
    int t98 = __retval1;
    int ret_val99 = t98;
    {
      // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~map()
      __VERIFIER_nondet_memory(&mymap2, sizeof(mymap2));
    }
    return ret_val99;
  int t100 = __retval1;
  return t100;
}

