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
char _str[30] = "mymap.find('a')->first == 'a'";
char _str_1[100] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/map/map_find/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[30] = "mymap.find('a')->second == 50";
char _str_3[30] = "mymap.find('b')->first == 'b'";
char _str_4[31] = "mymap.find('b')->second == 100";
char _str_5[30] = "mymap.find('c')->first == 'c'";
char _str_6[31] = "mymap.find('c')->second == 150";
char _str_7[30] = "mymap.find('d')->first == 'd'";
char _str_8[31] = "mymap.find('d')->second == 200";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_9[19] = "elements in mymap:";
char _str_10[6] = "a => ";
char _str_11[6] = "c => ";
struct std__piecewise_construct_t _ZSt19piecewise_construct;
char _str_12[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_tree.h";
char __PRETTY_FUNCTION____ZNSt8_Rb_treeIcSt4pairIKciESt10_Select1stIS2_ESt4lessIcESaIS2_EE5eraseB5cxx11ESt17_Rb_tree_iteratorIS2_E[325] = "iterator std::_Rb_tree<char, std::pair<const char, int>, std::_Select1st<std::pair<const char, int>>, std::less<char>>::erase(iterator) [_Key = char, _Val = std::pair<const char, int>, _KeyOfValue = std::_Select1st<std::pair<const char, int>>, _Compare = std::less<char>, _Alloc = std::allocator<std::pair<const char, int>>]";
char _str_13[20] = "__position != end()";
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
  char ref_tmp37;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp48;
  char ref_tmp59;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp610;
  char ref_tmp711;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp812;
  char ref_tmp913;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp1014;
  char ref_tmp1115;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp1216;
  char ref_tmp1317;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp1418;
  char ref_tmp1519;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp1620;
  char ref_tmp1721;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp1822;
  char ref_tmp1923;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp2024;
  char ref_tmp2125;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp026;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp127;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp228;
  char ref_tmp2229;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp330;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp2331;
  char ref_tmp2432;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp2533;
  char ref_tmp2634;
  int c35 = 0;
  __retval1 = c35;
  // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::map()
  __VERIFIER_nondet_memory(&mymap2, sizeof(mymap2));
    // externalized std:: op: std::_Rb_tree_iterator<std::pair<char const, int> >::_Rb_tree_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    int c36 = 50;
    char c37 = 97;
    ref_tmp04 = c37;
    int* std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    *std38 = c36;
    int c39 = 100;
    char c40 = 98;
    ref_tmp15 = c40;
    int* std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
    *std41 = c39;
    int c42 = 150;
    char c43 = 99;
    ref_tmp26 = c43;
    int* std44;
    __VERIFIER_nondet_memory(&std44, sizeof(std44));
    *std44 = c42;
    int c45 = 200;
    char c46 = 100;
    ref_tmp37 = c46;
    int* std47;
    __VERIFIER_nondet_memory(&std47, sizeof(std47));
    *std47 = c45;
    char c48 = 97;
    ref_tmp59 = c48;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std49;
    __VERIFIER_nondet_memory(&std49, sizeof(std49));
    ref_tmp48 = std49;
    struct std__pair_const_char__int_* std50;
    __VERIFIER_nondet_memory(&std50, sizeof(std50));
    char t51 = std50->first;
    int cast52 = (int)t51;
    int c53 = 97;
    _Bool c54 = ((cast52 == c53)) ? 1 : 0;
    if (c54) {
    } else {
      char* cast55 = (char*)&(_str);
      char* c56 = _str_1;
      unsigned int c57 = 24;
      char* cast58 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast55, c56, c57, cast58);
    }
    char c59 = 97;
    ref_tmp711 = c59;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std60;
    __VERIFIER_nondet_memory(&std60, sizeof(std60));
    ref_tmp610 = std60;
    struct std__pair_const_char__int_* std61;
    __VERIFIER_nondet_memory(&std61, sizeof(std61));
    int t62 = std61->second;
    int c63 = 50;
    _Bool c64 = ((t62 == c63)) ? 1 : 0;
    if (c64) {
    } else {
      char* cast65 = (char*)&(_str_2);
      char* c66 = _str_1;
      unsigned int c67 = 25;
      char* cast68 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast65, c66, c67, cast68);
    }
    char c69 = 98;
    ref_tmp913 = c69;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std70;
    __VERIFIER_nondet_memory(&std70, sizeof(std70));
    ref_tmp812 = std70;
    struct std__pair_const_char__int_* std71;
    __VERIFIER_nondet_memory(&std71, sizeof(std71));
    char t72 = std71->first;
    int cast73 = (int)t72;
    int c74 = 98;
    _Bool c75 = ((cast73 == c74)) ? 1 : 0;
    if (c75) {
    } else {
      char* cast76 = (char*)&(_str_3);
      char* c77 = _str_1;
      unsigned int c78 = 27;
      char* cast79 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast76, c77, c78, cast79);
    }
    char c80 = 98;
    ref_tmp1115 = c80;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std81;
    __VERIFIER_nondet_memory(&std81, sizeof(std81));
    ref_tmp1014 = std81;
    struct std__pair_const_char__int_* std82;
    __VERIFIER_nondet_memory(&std82, sizeof(std82));
    int t83 = std82->second;
    int c84 = 100;
    _Bool c85 = ((t83 == c84)) ? 1 : 0;
    if (c85) {
    } else {
      char* cast86 = (char*)&(_str_4);
      char* c87 = _str_1;
      unsigned int c88 = 28;
      char* cast89 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast86, c87, c88, cast89);
    }
    char c90 = 99;
    ref_tmp1317 = c90;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std91;
    __VERIFIER_nondet_memory(&std91, sizeof(std91));
    ref_tmp1216 = std91;
    struct std__pair_const_char__int_* std92;
    __VERIFIER_nondet_memory(&std92, sizeof(std92));
    char t93 = std92->first;
    int cast94 = (int)t93;
    int c95 = 99;
    _Bool c96 = ((cast94 == c95)) ? 1 : 0;
    if (c96) {
    } else {
      char* cast97 = (char*)&(_str_5);
      char* c98 = _str_1;
      unsigned int c99 = 30;
      char* cast100 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast97, c98, c99, cast100);
    }
    char c101 = 99;
    ref_tmp1519 = c101;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std102;
    __VERIFIER_nondet_memory(&std102, sizeof(std102));
    ref_tmp1418 = std102;
    struct std__pair_const_char__int_* std103;
    __VERIFIER_nondet_memory(&std103, sizeof(std103));
    int t104 = std103->second;
    int c105 = 150;
    _Bool c106 = ((t104 == c105)) ? 1 : 0;
    if (c106) {
    } else {
      char* cast107 = (char*)&(_str_6);
      char* c108 = _str_1;
      unsigned int c109 = 31;
      char* cast110 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast107, c108, c109, cast110);
    }
    char c111 = 100;
    ref_tmp1721 = c111;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std112;
    __VERIFIER_nondet_memory(&std112, sizeof(std112));
    ref_tmp1620 = std112;
    struct std__pair_const_char__int_* std113;
    __VERIFIER_nondet_memory(&std113, sizeof(std113));
    char t114 = std113->first;
    int cast115 = (int)t114;
    int c116 = 100;
    _Bool c117 = ((cast115 == c116)) ? 1 : 0;
    if (c117) {
    } else {
      char* cast118 = (char*)&(_str_7);
      char* c119 = _str_1;
      unsigned int c120 = 33;
      char* cast121 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast118, c119, c120, cast121);
    }
    char c122 = 100;
    ref_tmp1923 = c122;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std123;
    __VERIFIER_nondet_memory(&std123, sizeof(std123));
    ref_tmp1822 = std123;
    struct std__pair_const_char__int_* std124;
    __VERIFIER_nondet_memory(&std124, sizeof(std124));
    int t125 = std124->second;
    int c126 = 200;
    _Bool c127 = ((t125 == c126)) ? 1 : 0;
    if (c127) {
    } else {
      char* cast128 = (char*)&(_str_8);
      char* c129 = _str_1;
      unsigned int c130 = 34;
      char* cast131 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast128, c129, c130, cast131);
    }
    char c132 = 98;
    ref_tmp2125 = c132;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std133;
    __VERIFIER_nondet_memory(&std133, sizeof(std133));
    ref_tmp2024 = std133;
    struct std___Rb_tree_iterator_std__pair_const_char__int__* std134;
    __VERIFIER_nondet_memory(&std134, sizeof(std134));
    agg_tmp026 = it3; // copy
    struct std___Rb_tree_iterator_std__pair_const_char__int__ t135 = agg_tmp026;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std136;
    __VERIFIER_nondet_memory(&std136, sizeof(std136));
    agg_tmp127 = std136;
    char c137 = 100;
    ref_tmp2229 = c137;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std138;
    __VERIFIER_nondet_memory(&std138, sizeof(std138));
    agg_tmp228 = std138;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ t139 = agg_tmp228;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std140;
    __VERIFIER_nondet_memory(&std140, sizeof(std140));
    agg_tmp330 = std140;
    char* cast141 = (char*)&(_str_9);
    struct std__basic_ostream_char__std__char_traits_char__* std142;
    __VERIFIER_nondet_memory(&std142, sizeof(std142));
    struct std__basic_ostream_char__std__char_traits_char__* std143;
    __VERIFIER_nondet_memory(&std143, sizeof(std143));
    char* cast144 = (char*)&(_str_10);
    struct std__basic_ostream_char__std__char_traits_char__* std145;
    __VERIFIER_nondet_memory(&std145, sizeof(std145));
    char c146 = 97;
    ref_tmp2432 = c146;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std147;
    __VERIFIER_nondet_memory(&std147, sizeof(std147));
    ref_tmp2331 = std147;
    struct std__pair_const_char__int_* std148;
    __VERIFIER_nondet_memory(&std148, sizeof(std148));
    int t149 = std148->second;
    struct std__basic_ostream_char__std__char_traits_char__* std150;
    __VERIFIER_nondet_memory(&std150, sizeof(std150));
    struct std__basic_ostream_char__std__char_traits_char__* std151;
    __VERIFIER_nondet_memory(&std151, sizeof(std151));
    char* cast152 = (char*)&(_str_11);
    struct std__basic_ostream_char__std__char_traits_char__* std153;
    __VERIFIER_nondet_memory(&std153, sizeof(std153));
    char c154 = 99;
    ref_tmp2634 = c154;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std155;
    __VERIFIER_nondet_memory(&std155, sizeof(std155));
    ref_tmp2533 = std155;
    struct std__pair_const_char__int_* std156;
    __VERIFIER_nondet_memory(&std156, sizeof(std156));
    int t157 = std156->second;
    struct std__basic_ostream_char__std__char_traits_char__* std158;
    __VERIFIER_nondet_memory(&std158, sizeof(std158));
    struct std__basic_ostream_char__std__char_traits_char__* std159;
    __VERIFIER_nondet_memory(&std159, sizeof(std159));
    int c160 = 0;
    __retval1 = c160;
    int t161 = __retval1;
    int ret_val162 = t161;
    {
      // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~map()
      __VERIFIER_nondet_memory(&mymap2, sizeof(mymap2));
    }
    return ret_val162;
  int t163 = __retval1;
  return t163;
}

