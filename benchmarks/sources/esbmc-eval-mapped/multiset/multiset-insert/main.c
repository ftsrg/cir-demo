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
struct __gnu_cxx____aligned_membuf_int_ { unsigned char _M_storage[4]; };
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
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__multiset_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int __const_main_myints[3] = {5, 10, 15};
char _str[18] = "myset.size() == 5";
char _str_1[112] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multiset/multiset-insert/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[10] = "*it == 10";
char _str_3[10] = "*it == 20";
char _str_4[10] = "*it == 24";
char _str_5[10] = "*it == 25";
char _str_6[10] = "*it == 26";
char _str_7[10] = "*it == 30";
char _str_8[10] = "*it == 40";
char _str_9[10] = "*it == 50";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__multiset_int__std__less_int___std__allocator_int__ myset2;
  struct std___Rb_tree_const_iterator_int_ it3;
  struct std___Rb_tree_const_iterator_int_ ref_tmp14;
  int ref_tmp25;
  struct std___Rb_tree_const_iterator_int_ agg_tmp16;
  int ref_tmp37;
  struct std___Rb_tree_const_iterator_int_ agg_tmp28;
  struct std___Rb_tree_const_iterator_int_ agg_tmp39;
  int ref_tmp410;
  struct std___Rb_tree_const_iterator_int_ agg_tmp411;
  struct std___Rb_tree_const_iterator_int_ agg_tmp512;
  int ref_tmp513;
  struct std___Rb_tree_const_iterator_int_ agg_tmp614;
  int myints15[3];
  struct std___Rb_tree_const_iterator_int_ ref_tmp616;
  struct std___Rb_tree_const_iterator_int_ agg_tmp717;
  struct std___Rb_tree_const_iterator_int_ agg_tmp818;
  struct std___Rb_tree_const_iterator_int_ agg_tmp919;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1020;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1121;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1222;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1323;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1424;
  int c25 = 0;
  __retval1 = c25;
  // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::multiset()
  __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    // externalized std:: op: std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
      int i26;
      int ref_tmp027;
      struct std___Rb_tree_const_iterator_int_ agg_tmp028;
      int c29 = 1;
      i26 = c29;
      while (1) {
        int t31 = i26;
        int c32 = 5;
        _Bool c33 = ((t31 <= c32)) ? 1 : 0;
        if (!c33) break;
        int t34 = i26;
        int c35 = 10;
        int b36 = t34 * c35;
        ref_tmp027 = b36;
        struct std___Rb_tree_const_iterator_int_ std37;
        __VERIFIER_nondet_memory(&std37, sizeof(std37));
        agg_tmp028 = std37;
      for_step30: ;
        int t38 = i26;
        int u39 = t38 + 1;
        i26 = u39;
      }
    unsigned long std40 = __VERIFIER_nondet_unsigned_long();
    unsigned long c41 = 5;
    _Bool c42 = ((std40 == c41)) ? 1 : 0;
    if (c42) {
    } else {
      char* cast43 = (char*)&(_str);
      char* c44 = _str_1;
      unsigned int c45 = 21;
      char* cast46 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast43, c44, c45, cast46);
    }
    int c47 = 20;
    ref_tmp25 = c47;
    struct std___Rb_tree_const_iterator_int_ std48;
    __VERIFIER_nondet_memory(&std48, sizeof(std48));
    ref_tmp14 = std48;
    struct std___Rb_tree_const_iterator_int_* std49;
    __VERIFIER_nondet_memory(&std49, sizeof(std49));
    agg_tmp16 = it3; // copy
    int c50 = 25;
    ref_tmp37 = c50;
    struct std___Rb_tree_const_iterator_int_ t51 = agg_tmp16;
    struct std___Rb_tree_const_iterator_int_ std52;
    __VERIFIER_nondet_memory(&std52, sizeof(std52));
    agg_tmp28 = std52;
    agg_tmp39 = it3; // copy
    int c53 = 24;
    ref_tmp410 = c53;
    struct std___Rb_tree_const_iterator_int_ t54 = agg_tmp39;
    struct std___Rb_tree_const_iterator_int_ std55;
    __VERIFIER_nondet_memory(&std55, sizeof(std55));
    agg_tmp411 = std55;
    agg_tmp512 = it3; // copy
    int c56 = 26;
    ref_tmp513 = c56;
    struct std___Rb_tree_const_iterator_int_ t57 = agg_tmp512;
    struct std___Rb_tree_const_iterator_int_ std58;
    __VERIFIER_nondet_memory(&std58, sizeof(std58));
    agg_tmp614 = std58;
    // array copy
    __builtin_memcpy(myints15, __const_main_myints, (unsigned long)3 * sizeof(__const_main_myints[0]));
    struct std___Rb_tree_const_iterator_int_ std59;
    __VERIFIER_nondet_memory(&std59, sizeof(std59));
    ref_tmp616 = std59;
    struct std___Rb_tree_const_iterator_int_* std60;
    __VERIFIER_nondet_memory(&std60, sizeof(std60));
    int* std61;
    __VERIFIER_nondet_memory(&std61, sizeof(std61));
    int t62 = *std61;
    int c63 = 10;
    _Bool c64 = ((t62 == c63)) ? 1 : 0;
    if (c64) {
    } else {
      char* cast65 = (char*)&(_str_2);
      char* c66 = _str_1;
      unsigned int c67 = 33;
      char* cast68 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast65, c66, c67, cast68);
    }
    int c69 = 0;
    struct std___Rb_tree_const_iterator_int_ std70;
    __VERIFIER_nondet_memory(&std70, sizeof(std70));
    agg_tmp717 = std70;
    int* std71;
    __VERIFIER_nondet_memory(&std71, sizeof(std71));
    int t72 = *std71;
    int c73 = 20;
    _Bool c74 = ((t72 == c73)) ? 1 : 0;
    if (c74) {
    } else {
      char* cast75 = (char*)&(_str_3);
      char* c76 = _str_1;
      unsigned int c77 = 35;
      char* cast78 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast75, c76, c77, cast78);
    }
    int c79 = 0;
    struct std___Rb_tree_const_iterator_int_ std80;
    __VERIFIER_nondet_memory(&std80, sizeof(std80));
    agg_tmp818 = std80;
    int* std81;
    __VERIFIER_nondet_memory(&std81, sizeof(std81));
    int t82 = *std81;
    int c83 = 20;
    _Bool c84 = ((t82 == c83)) ? 1 : 0;
    if (c84) {
    } else {
      char* cast85 = (char*)&(_str_3);
      char* c86 = _str_1;
      unsigned int c87 = 37;
      char* cast88 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast85, c86, c87, cast88);
    }
    int c89 = 0;
    struct std___Rb_tree_const_iterator_int_ std90;
    __VERIFIER_nondet_memory(&std90, sizeof(std90));
    agg_tmp919 = std90;
    int* std91;
    __VERIFIER_nondet_memory(&std91, sizeof(std91));
    int t92 = *std91;
    int c93 = 24;
    _Bool c94 = ((t92 == c93)) ? 1 : 0;
    if (c94) {
    } else {
      char* cast95 = (char*)&(_str_4);
      char* c96 = _str_1;
      unsigned int c97 = 39;
      char* cast98 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast95, c96, c97, cast98);
    }
    int c99 = 0;
    struct std___Rb_tree_const_iterator_int_ std100;
    __VERIFIER_nondet_memory(&std100, sizeof(std100));
    agg_tmp1020 = std100;
    int* std101;
    __VERIFIER_nondet_memory(&std101, sizeof(std101));
    int t102 = *std101;
    int c103 = 25;
    _Bool c104 = ((t102 == c103)) ? 1 : 0;
    if (c104) {
    } else {
      char* cast105 = (char*)&(_str_5);
      char* c106 = _str_1;
      unsigned int c107 = 41;
      char* cast108 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast105, c106, c107, cast108);
    }
    int c109 = 0;
    struct std___Rb_tree_const_iterator_int_ std110;
    __VERIFIER_nondet_memory(&std110, sizeof(std110));
    agg_tmp1121 = std110;
    int* std111;
    __VERIFIER_nondet_memory(&std111, sizeof(std111));
    int t112 = *std111;
    int c113 = 26;
    _Bool c114 = ((t112 == c113)) ? 1 : 0;
    if (c114) {
    } else {
      char* cast115 = (char*)&(_str_6);
      char* c116 = _str_1;
      unsigned int c117 = 43;
      char* cast118 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast115, c116, c117, cast118);
    }
    int c119 = 0;
    struct std___Rb_tree_const_iterator_int_ std120;
    __VERIFIER_nondet_memory(&std120, sizeof(std120));
    agg_tmp1222 = std120;
    int* std121;
    __VERIFIER_nondet_memory(&std121, sizeof(std121));
    int t122 = *std121;
    int c123 = 30;
    _Bool c124 = ((t122 == c123)) ? 1 : 0;
    if (c124) {
    } else {
      char* cast125 = (char*)&(_str_7);
      char* c126 = _str_1;
      unsigned int c127 = 45;
      char* cast128 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast125, c126, c127, cast128);
    }
    int c129 = 0;
    struct std___Rb_tree_const_iterator_int_ std130;
    __VERIFIER_nondet_memory(&std130, sizeof(std130));
    agg_tmp1323 = std130;
    int* std131;
    __VERIFIER_nondet_memory(&std131, sizeof(std131));
    int t132 = *std131;
    int c133 = 40;
    _Bool c134 = ((t132 == c133)) ? 1 : 0;
    if (c134) {
    } else {
      char* cast135 = (char*)&(_str_8);
      char* c136 = _str_1;
      unsigned int c137 = 47;
      char* cast138 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast135, c136, c137, cast138);
    }
    int c139 = 0;
    struct std___Rb_tree_const_iterator_int_ std140;
    __VERIFIER_nondet_memory(&std140, sizeof(std140));
    agg_tmp1424 = std140;
    int* std141;
    __VERIFIER_nondet_memory(&std141, sizeof(std141));
    int t142 = *std141;
    int c143 = 50;
    _Bool c144 = ((t142 == c143)) ? 1 : 0;
    if (c144) {
    } else {
      char* cast145 = (char*)&(_str_9);
      char* c146 = _str_1;
      unsigned int c147 = 49;
      char* cast148 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast145, c146, c147, cast148);
    }
    int c149 = 0;
    __retval1 = c149;
    int t150 = __retval1;
    int ret_val151 = t150;
    {
      // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::~multiset()
      __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    }
    return ret_val151;
  int t152 = __retval1;
  return t152;
}

