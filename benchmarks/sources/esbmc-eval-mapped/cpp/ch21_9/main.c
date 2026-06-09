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
struct __gnu_cxx____aligned_membuf_std__pair_const_int__double__ { unsigned char _M_storage[16]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Head_base_0UL__int_____false_ { int* _M_head_impl; };
struct std___Index_tuple_0UL_ { unsigned char __field0; };
struct std___Index_tuple__ { unsigned char __field0; };
struct std___Rb_tree_const_iterator_std__pair_const_int__double__ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_int__std__pair_const_int__double___std___Select1st_std__pair_const_int__double____std__less_int___std__allocator_std__pair_const_int__double______Alloc_node { struct std___Rb_tree_int__std__pair_const_int__double___std___Select1st_std__pair_const_int__double____std__less_int___std__allocator_std__pair_const_int__double___* _M_t; };
struct std___Rb_tree_int__std__pair_const_int__double___std___Select1st_std__pair_const_int__double____std__less_int___std__allocator_std__pair_const_int__double______Auto_node { struct std___Rb_tree_int__std__pair_const_int__double___std___Select1st_std__pair_const_int__double____std__less_int___std__allocator_std__pair_const_int__double___* _M_t; struct std___Rb_tree_node_std__pair_const_int__double__* _M_node; };
struct std___Rb_tree_iterator_std__pair_const_int__double__ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_std__less_int__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_std__pair_const_int__double__;
struct std___Select1st_std__pair_const_int__double__ { unsigned char __field0; };
struct std___Tuple_impl_0UL__int____ { struct std___Head_base_0UL__int_____false_ __field0; };
struct std____new_allocator_std___Rb_tree_node_std__pair_const_int__double___;
struct std____pair_base_const_int__double_;
struct std____pair_base_std___Rb_tree_iterator_std__pair_const_int__double____bool_;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_std__pair_const_int__double___;
struct std__less_int_ { unsigned char __field0; };
struct std__pair_const_int__double_ { int first; double second; };
struct std__pair_std___Rb_tree_iterator_std__pair_const_int__double____bool_ { struct std___Rb_tree_iterator_std__pair_const_int__double__ first; _Bool second; unsigned char __field2[7]; } __attribute__((packed));
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std__piecewise_construct_t { unsigned char __field0; };
struct std__tuple__ { unsigned char __field0; };
struct std__tuple_int____ { struct std___Tuple_impl_0UL__int____ __field0; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__std__pair_const_int__double___std___Select1st_std__pair_const_int__double____std__less_int___std__allocator_std__pair_const_int__double______Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Rb_tree_int__std__pair_const_int__double___std___Select1st_std__pair_const_int__double____std__less_int___std__allocator_std__pair_const_int__double___ { struct std___Rb_tree_int__std__pair_const_int__double___std___Select1st_std__pair_const_int__double____std__less_int___std__allocator_std__pair_const_int__double______Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__map_int__double__std__less_int___std__allocator_std__pair_const_int__double___ { struct std___Rb_tree_int__std__pair_const_int__double___std___Select1st_std__pair_const_int__double____std__less_int___std__allocator_std__pair_const_int__double___ _M_t; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[27] = "pairs contains:\nKey\tValue\n";
char _str_1[45] = "\nAfter subscript operations, pairs contains:";
char _str_2[12] = "\nKey\tValue\n";
struct std__piecewise_construct_t _ZSt19piecewise_construct;
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__map_int__double__std__less_int___std__allocator_std__pair_const_int__double___ pairs2;
  struct std__pair_const_int__double_ ref_tmp03;
  int ref_tmp14;
  double ref_tmp25;
  struct std__pair_std___Rb_tree_iterator_std__pair_const_int__double____bool_ agg_tmp06;
  struct std__pair_const_int__double_ ref_tmp37;
  int ref_tmp48;
  double ref_tmp59;
  struct std__pair_std___Rb_tree_iterator_std__pair_const_int__double____bool_ agg_tmp110;
  struct std__pair_const_int__double_ ref_tmp611;
  int ref_tmp712;
  double ref_tmp813;
  struct std__pair_std___Rb_tree_iterator_std__pair_const_int__double____bool_ agg_tmp214;
  struct std__pair_const_int__double_ ref_tmp915;
  int ref_tmp1016;
  double ref_tmp1117;
  struct std__pair_std___Rb_tree_iterator_std__pair_const_int__double____bool_ agg_tmp318;
  struct std__pair_const_int__double_ ref_tmp1219;
  int ref_tmp1320;
  double ref_tmp1421;
  struct std__pair_std___Rb_tree_iterator_std__pair_const_int__double____bool_ agg_tmp422;
  struct std__pair_const_int__double_ ref_tmp1523;
  int ref_tmp1624;
  double ref_tmp1725;
  struct std__pair_std___Rb_tree_iterator_std__pair_const_int__double____bool_ agg_tmp526;
  struct std__pair_const_int__double_ ref_tmp1827;
  int ref_tmp1928;
  double ref_tmp2029;
  struct std__pair_std___Rb_tree_iterator_std__pair_const_int__double____bool_ agg_tmp630;
  struct std__pair_const_int__double_ ref_tmp2131;
  int ref_tmp2232;
  double ref_tmp2333;
  struct std__pair_std___Rb_tree_iterator_std__pair_const_int__double____bool_ agg_tmp734;
  int ref_tmp2735;
  int ref_tmp2836;
  int c37 = 0;
  __retval1 = c37;
  // externalized std:: op: std::map<int, double, std::less<int>, std::allocator<std::pair<int const, double> > >::map()
  __VERIFIER_nondet_memory(&pairs2, sizeof(pairs2));
    int c38 = 15;
    ref_tmp14 = c38;
    double c39 = 0x1.599999999999ap1;
    ref_tmp25 = c39;
    // externalized std:: op: _ZNSt4pairIKidEC2IidQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS3_S4_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
    __VERIFIER_nondet_memory(&ref_tmp25, sizeof(ref_tmp25));
    struct std__pair_std___Rb_tree_iterator_std__pair_const_int__double____bool_ std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    agg_tmp06 = std40;
    int c41 = 30;
    ref_tmp48 = c41;
    double c42 = 0x1.bc70a3d70a3d7p6;
    ref_tmp59 = c42;
    // externalized std:: op: _ZNSt4pairIKidEC2IidQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS3_S4_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp37, sizeof(ref_tmp37));
    __VERIFIER_nondet_memory(&ref_tmp48, sizeof(ref_tmp48));
    __VERIFIER_nondet_memory(&ref_tmp59, sizeof(ref_tmp59));
    struct std__pair_std___Rb_tree_iterator_std__pair_const_int__double____bool_ std43;
    __VERIFIER_nondet_memory(&std43, sizeof(std43));
    agg_tmp110 = std43;
    int c44 = 5;
    ref_tmp712 = c44;
    double c45 = 0x1.f90cccccccccdp9;
    ref_tmp813 = c45;
    // externalized std:: op: _ZNSt4pairIKidEC2IidQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS3_S4_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp611, sizeof(ref_tmp611));
    __VERIFIER_nondet_memory(&ref_tmp712, sizeof(ref_tmp712));
    __VERIFIER_nondet_memory(&ref_tmp813, sizeof(ref_tmp813));
    struct std__pair_std___Rb_tree_iterator_std__pair_const_int__double____bool_ std46;
    __VERIFIER_nondet_memory(&std46, sizeof(std46));
    agg_tmp214 = std46;
    int c47 = 10;
    ref_tmp1016 = c47;
    double c48 = 0x1.63851eb851eb8p4;
    ref_tmp1117 = c48;
    // externalized std:: op: _ZNSt4pairIKidEC2IidQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS3_S4_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp915, sizeof(ref_tmp915));
    __VERIFIER_nondet_memory(&ref_tmp1016, sizeof(ref_tmp1016));
    __VERIFIER_nondet_memory(&ref_tmp1117, sizeof(ref_tmp1117));
    struct std__pair_std___Rb_tree_iterator_std__pair_const_int__double____bool_ std49;
    __VERIFIER_nondet_memory(&std49, sizeof(std49));
    agg_tmp318 = std49;
    int c50 = 25;
    ref_tmp1320 = c50;
    double c51 = 0x1.0aa9fbe76c8b4p5;
    ref_tmp1421 = c51;
    // externalized std:: op: _ZNSt4pairIKidEC2IidQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS3_S4_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp1219, sizeof(ref_tmp1219));
    __VERIFIER_nondet_memory(&ref_tmp1320, sizeof(ref_tmp1320));
    __VERIFIER_nondet_memory(&ref_tmp1421, sizeof(ref_tmp1421));
    struct std__pair_std___Rb_tree_iterator_std__pair_const_int__double____bool_ std52;
    __VERIFIER_nondet_memory(&std52, sizeof(std52));
    agg_tmp422 = std52;
    int c53 = 5;
    ref_tmp1624 = c53;
    double c54 = 0x1.3628f5c28f5c3p6;
    ref_tmp1725 = c54;
    // externalized std:: op: _ZNSt4pairIKidEC2IidQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS3_S4_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp1523, sizeof(ref_tmp1523));
    __VERIFIER_nondet_memory(&ref_tmp1624, sizeof(ref_tmp1624));
    __VERIFIER_nondet_memory(&ref_tmp1725, sizeof(ref_tmp1725));
    struct std__pair_std___Rb_tree_iterator_std__pair_const_int__double____bool_ std55;
    __VERIFIER_nondet_memory(&std55, sizeof(std55));
    agg_tmp526 = std55;
    int c56 = 20;
    ref_tmp1928 = c56;
    double c57 = 0x1.2b0a3d70a3d71p3;
    ref_tmp2029 = c57;
    // externalized std:: op: _ZNSt4pairIKidEC2IidQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS3_S4_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp1827, sizeof(ref_tmp1827));
    __VERIFIER_nondet_memory(&ref_tmp1928, sizeof(ref_tmp1928));
    __VERIFIER_nondet_memory(&ref_tmp2029, sizeof(ref_tmp2029));
    struct std__pair_std___Rb_tree_iterator_std__pair_const_int__double____bool_ std58;
    __VERIFIER_nondet_memory(&std58, sizeof(std58));
    agg_tmp630 = std58;
    int c59 = 15;
    ref_tmp2232 = c59;
    double c60 = 0x1.8d33333333333p6;
    ref_tmp2333 = c60;
    // externalized std:: op: _ZNSt4pairIKidEC2IidQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS3_S4_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp2131, sizeof(ref_tmp2131));
    __VERIFIER_nondet_memory(&ref_tmp2232, sizeof(ref_tmp2232));
    __VERIFIER_nondet_memory(&ref_tmp2333, sizeof(ref_tmp2333));
    struct std__pair_std___Rb_tree_iterator_std__pair_const_int__double____bool_ std61;
    __VERIFIER_nondet_memory(&std61, sizeof(std61));
    agg_tmp734 = std61;
    char* cast62 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std63;
    __VERIFIER_nondet_memory(&std63, sizeof(std63));
      struct std___Rb_tree_const_iterator_std__pair_const_int__double__ iter64;
      struct std___Rb_tree_iterator_std__pair_const_int__double__ ref_tmp2465;
      struct std___Rb_tree_const_iterator_std__pair_const_int__double__ ref_tmp2566;
      struct std___Rb_tree_iterator_std__pair_const_int__double__ ref_tmp2667;
      struct std___Rb_tree_iterator_std__pair_const_int__double__ std68;
      __VERIFIER_nondet_memory(&std68, sizeof(std68));
      ref_tmp2465 = std68;
      // externalized std:: op: std::_Rb_tree_const_iterator<std::pair<int const, double> >::_Rb_tree_const_iterator(std::_Rb_tree_iterator<std::pair<int const, double> > const&)
      __VERIFIER_nondet_memory(&iter64, sizeof(iter64));
      __VERIFIER_nondet_memory(&ref_tmp2465, sizeof(ref_tmp2465));
      while (1) {
        struct std___Rb_tree_iterator_std__pair_const_int__double__ std70;
        __VERIFIER_nondet_memory(&std70, sizeof(std70));
        ref_tmp2667 = std70;
        // externalized std:: op: std::_Rb_tree_const_iterator<std::pair<int const, double> >::_Rb_tree_const_iterator(std::_Rb_tree_iterator<std::pair<int const, double> > const&)
        __VERIFIER_nondet_memory(&ref_tmp2566, sizeof(ref_tmp2566));
        __VERIFIER_nondet_memory(&ref_tmp2667, sizeof(ref_tmp2667));
        _Bool std71;
        __VERIFIER_nondet_memory(&std71, sizeof(std71));
        _Bool u72 = !std71;
        if (!u72) break;
        struct std__pair_const_int__double_* std73;
        __VERIFIER_nondet_memory(&std73, sizeof(std73));
        int t74 = std73->first;
        struct std__basic_ostream_char__std__char_traits_char__* std75;
        __VERIFIER_nondet_memory(&std75, sizeof(std75));
        char c76 = 9;
        struct std__basic_ostream_char__std__char_traits_char__* std77;
        __VERIFIER_nondet_memory(&std77, sizeof(std77));
        struct std__pair_const_int__double_* std78;
        __VERIFIER_nondet_memory(&std78, sizeof(std78));
        double t79 = std78->second;
        struct std__basic_ostream_char__std__char_traits_char__* std80;
        __VERIFIER_nondet_memory(&std80, sizeof(std80));
        char c81 = 10;
        struct std__basic_ostream_char__std__char_traits_char__* std82;
        __VERIFIER_nondet_memory(&std82, sizeof(std82));
      for_step69: ;
        struct std___Rb_tree_const_iterator_std__pair_const_int__double__* std83;
        __VERIFIER_nondet_memory(&std83, sizeof(std83));
      }
    double c84 = 0x1.387feb851eb85p13;
    int c85 = 25;
    ref_tmp2735 = c85;
    double* std86;
    __VERIFIER_nondet_memory(&std86, sizeof(std86));
    *std86 = c84;
    double c87 = 0x1.11eb70a3d70a4p13;
    int c88 = 40;
    ref_tmp2836 = c88;
    double* std89;
    __VERIFIER_nondet_memory(&std89, sizeof(std89));
    *std89 = c87;
    char* cast90 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std91;
    __VERIFIER_nondet_memory(&std91, sizeof(std91));
    char* cast92 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std93;
    __VERIFIER_nondet_memory(&std93, sizeof(std93));
      struct std___Rb_tree_const_iterator_std__pair_const_int__double__ iter294;
      struct std___Rb_tree_iterator_std__pair_const_int__double__ ref_tmp2995;
      struct std___Rb_tree_const_iterator_std__pair_const_int__double__ ref_tmp3096;
      struct std___Rb_tree_iterator_std__pair_const_int__double__ ref_tmp3197;
      struct std___Rb_tree_iterator_std__pair_const_int__double__ std98;
      __VERIFIER_nondet_memory(&std98, sizeof(std98));
      ref_tmp2995 = std98;
      // externalized std:: op: std::_Rb_tree_const_iterator<std::pair<int const, double> >::_Rb_tree_const_iterator(std::_Rb_tree_iterator<std::pair<int const, double> > const&)
      __VERIFIER_nondet_memory(&iter294, sizeof(iter294));
      __VERIFIER_nondet_memory(&ref_tmp2995, sizeof(ref_tmp2995));
      while (1) {
        struct std___Rb_tree_iterator_std__pair_const_int__double__ std100;
        __VERIFIER_nondet_memory(&std100, sizeof(std100));
        ref_tmp3197 = std100;
        // externalized std:: op: std::_Rb_tree_const_iterator<std::pair<int const, double> >::_Rb_tree_const_iterator(std::_Rb_tree_iterator<std::pair<int const, double> > const&)
        __VERIFIER_nondet_memory(&ref_tmp3096, sizeof(ref_tmp3096));
        __VERIFIER_nondet_memory(&ref_tmp3197, sizeof(ref_tmp3197));
        _Bool std101;
        __VERIFIER_nondet_memory(&std101, sizeof(std101));
        _Bool u102 = !std101;
        if (!u102) break;
        struct std__pair_const_int__double_* std103;
        __VERIFIER_nondet_memory(&std103, sizeof(std103));
        int t104 = std103->first;
        struct std__basic_ostream_char__std__char_traits_char__* std105;
        __VERIFIER_nondet_memory(&std105, sizeof(std105));
        char c106 = 9;
        struct std__basic_ostream_char__std__char_traits_char__* std107;
        __VERIFIER_nondet_memory(&std107, sizeof(std107));
        struct std__pair_const_int__double_* std108;
        __VERIFIER_nondet_memory(&std108, sizeof(std108));
        double t109 = std108->second;
        struct std__basic_ostream_char__std__char_traits_char__* std110;
        __VERIFIER_nondet_memory(&std110, sizeof(std110));
        char c111 = 10;
        struct std__basic_ostream_char__std__char_traits_char__* std112;
        __VERIFIER_nondet_memory(&std112, sizeof(std112));
      for_step99: ;
        struct std___Rb_tree_const_iterator_std__pair_const_int__double__* std113;
        __VERIFIER_nondet_memory(&std113, sizeof(std113));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std114;
    __VERIFIER_nondet_memory(&std114, sizeof(std114));
    int c115 = 0;
    __retval1 = c115;
    int t116 = __retval1;
    int ret_val117 = t116;
    {
      // externalized std:: op: std::map<int, double, std::less<int>, std::allocator<std::pair<int const, double> > >::~map()
      __VERIFIER_nondet_memory(&pairs2, sizeof(pairs2));
    }
    return ret_val117;
  int t118 = __retval1;
  return t118;
}

