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

// Struct definitions (auto-parsed)
struct __gnu_cxx____aligned_membuf_std__pair_const_char__int__ { unsigned char _M_storage[8]; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Auto_node { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___* _M_t; struct std___Rb_tree_node_std__pair_const_char__int__* _M_node; };
struct std___Rb_tree_const_iterator_std__pair_const_char__int__ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_iterator_std__pair_const_char__int__ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_std__less_char__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_std__pair_const_char__int__;
struct std___Select1st_std__pair_const_char__int__ { unsigned char __field0; };
struct std____new_allocator_std___Rb_tree_node_std__pair_const_char__int___;
struct std____pair_base_char__int_;
struct std____pair_base_const_char__int_;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_std__pair_const_char__int___;
struct std__less_char_;
struct std__pair_char__int_ { char first; int second; };
struct std__pair_const_char__int_;
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ { struct std___Rb_tree_key_compare_std__less_char__ __field0; struct std___Rb_tree_header __field1; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ _M_impl; };
struct std__multimap_char__int__std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ _M_t; };

char _str[17] = "it->first == 'x'";
char _str_1[114] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multimap/multimap_find_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[17] = "it->second == 20";
char _str_3[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_tree.h";
char __PRETTY_FUNCTION____ZNSt8_Rb_treeIcSt4pairIKciESt10_Select1stIS2_ESt4lessIcESaIS2_EE5eraseB5cxx11ESt17_Rb_tree_iteratorIS2_E[325] = "iterator std::_Rb_tree<char, std::pair<const char, int>, std::_Select1st<std::pair<const char, int>>, std::less<char>>::erase(iterator) [_Key = char, _Val = std::pair<const char, int>, _KeyOfValue = std::_Select1st<std::pair<const char, int>>, _Compare = std::less<char>, _Alloc = std::allocator<std::pair<const char, int>>]";
char _str_4[20] = "__position != end()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__multimap_char__int__std__less_char___std__allocator_std__pair_const_char__int___ mymm2;
  struct std__pair_char__int_ ref_tmp03;
  char ref_tmp14;
  int ref_tmp25;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp06;
  struct std__pair_char__int_ ref_tmp37;
  char ref_tmp48;
  int ref_tmp59;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp110;
  struct std__pair_char__int_ ref_tmp611;
  char ref_tmp712;
  int ref_tmp813;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp214;
  struct std__pair_char__int_ ref_tmp915;
  char ref_tmp1016;
  int ref_tmp1117;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp318;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ it19;
  char ref_tmp1220;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp421;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp522;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp623;
  char ref_tmp1324;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp725;
  int c26 = 0;
  __retval1 = c26;
  // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::multimap()
  __VERIFIER_nondet_memory(&mymm2, sizeof(mymm2));
    char c27 = 120;
    ref_tmp14 = c27;
    int c28 = 10;
    ref_tmp25 = c28;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
    __VERIFIER_nondet_memory(&ref_tmp25, sizeof(ref_tmp25));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    agg_tmp06 = std29;
    char c30 = 121;
    ref_tmp48 = c30;
    int c31 = 20;
    ref_tmp59 = c31;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp37, sizeof(ref_tmp37));
    __VERIFIER_nondet_memory(&ref_tmp48, sizeof(ref_tmp48));
    __VERIFIER_nondet_memory(&ref_tmp59, sizeof(ref_tmp59));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    agg_tmp110 = std32;
    char c33 = 122;
    ref_tmp712 = c33;
    int c34 = 30;
    ref_tmp813 = c34;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp611, sizeof(ref_tmp611));
    __VERIFIER_nondet_memory(&ref_tmp712, sizeof(ref_tmp712));
    __VERIFIER_nondet_memory(&ref_tmp813, sizeof(ref_tmp813));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std35;
    __VERIFIER_nondet_memory(&std35, sizeof(std35));
    agg_tmp214 = std35;
    char c36 = 122;
    ref_tmp1016 = c36;
    int c37 = 40;
    ref_tmp1117 = c37;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp915, sizeof(ref_tmp915));
    __VERIFIER_nondet_memory(&ref_tmp1016, sizeof(ref_tmp1016));
    __VERIFIER_nondet_memory(&ref_tmp1117, sizeof(ref_tmp1117));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    agg_tmp318 = std38;
    char c39 = 120;
    ref_tmp1220 = c39;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    it19 = std40;
    struct std__pair_const_char__int_* std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
    char t42 = std41->first;
    int cast43 = (int)t42;
    int c44 = 120;
    _Bool c45 = ((cast43 == c44)) ? 1 : 0;
    if (c45) {
    } else {
      char* cast46 = (char*)&(_str);
      char* c47 = _str_1;
      unsigned int c48 = 24;
      char* cast49 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast46, c47, c48, cast49);
    }
    struct std__pair_const_char__int_* std50;
    __VERIFIER_nondet_memory(&std50, sizeof(std50));
    int t51 = std50->second;
    int c52 = 20;
    _Bool c53 = ((t51 == c52)) ? 1 : 0;
    if (c53) {
    } else {
      char* cast54 = (char*)&(_str_2);
      char* c55 = _str_1;
      unsigned int c56 = 25;
      char* cast57 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast54, c55, c56, cast57);
    }
    agg_tmp421 = it19; // copy
    struct std___Rb_tree_iterator_std__pair_const_char__int__ t58 = agg_tmp421;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std59;
    __VERIFIER_nondet_memory(&std59, sizeof(std59));
    agg_tmp522 = std59;
    char c60 = 122;
    ref_tmp1324 = c60;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std61;
    __VERIFIER_nondet_memory(&std61, sizeof(std61));
    agg_tmp623 = std61;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ t62 = agg_tmp623;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std63;
    __VERIFIER_nondet_memory(&std63, sizeof(std63));
    agg_tmp725 = std63;
    int c64 = 0;
    __retval1 = c64;
    int t65 = __retval1;
    int ret_val66 = t65;
    {
      // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~multimap()
      __VERIFIER_nondet_memory(&mymm2, sizeof(mymm2));
    }
    return ret_val66;
  int t67 = __retval1;
  return t67;
}

