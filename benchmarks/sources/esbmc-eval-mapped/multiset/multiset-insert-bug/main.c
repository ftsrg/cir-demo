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
char _str_1[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multiset/multiset-insert-bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[19] = "myset.size() == 12";
char _str_3[9] = "*it == 5";
char _str_4[10] = "*it == 10";
char _str_5[10] = "*it != 15";
char _str_6[10] = "*it == 20";
char _str_7[10] = "*it == 24";
char _str_8[10] = "*it == 25";
char _str_9[10] = "*it == 26";
char _str_10[10] = "*it == 30";
char _str_11[10] = "*it == 40";
char _str_12[10] = "*it != 50";
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
  struct std___Rb_tree_const_iterator_int_ agg_tmp1525;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1626;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1727;
  int c28 = 0;
  __retval1 = c28;
  // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::multiset()
  __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    // externalized std:: op: std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
      int i29;
      int ref_tmp030;
      struct std___Rb_tree_const_iterator_int_ agg_tmp031;
      int c32 = 1;
      i29 = c32;
      while (1) {
        int t34 = i29;
        int c35 = 5;
        _Bool c36 = ((t34 <= c35)) ? 1 : 0;
        if (!c36) break;
        int t37 = i29;
        int c38 = 10;
        int b39 = t37 * c38;
        ref_tmp030 = b39;
        struct std___Rb_tree_const_iterator_int_ std40;
        __VERIFIER_nondet_memory(&std40, sizeof(std40));
        agg_tmp031 = std40;
      for_step33: ;
        int t41 = i29;
        int u42 = t41 + 1;
        i29 = u42;
      }
    unsigned long std43 = __VERIFIER_nondet_unsigned_long();
    unsigned long c44 = 5;
    _Bool c45 = ((std43 == c44)) ? 1 : 0;
    if (c45) {
    } else {
      char* cast46 = (char*)&(_str);
      char* c47 = _str_1;
      unsigned int c48 = 21;
      char* cast49 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast46, c47, c48, cast49);
    }
    int c50 = 20;
    ref_tmp25 = c50;
    struct std___Rb_tree_const_iterator_int_ std51;
    __VERIFIER_nondet_memory(&std51, sizeof(std51));
    ref_tmp14 = std51;
    struct std___Rb_tree_const_iterator_int_* std52;
    __VERIFIER_nondet_memory(&std52, sizeof(std52));
    agg_tmp16 = it3; // copy
    int c53 = 25;
    ref_tmp37 = c53;
    struct std___Rb_tree_const_iterator_int_ t54 = agg_tmp16;
    struct std___Rb_tree_const_iterator_int_ std55;
    __VERIFIER_nondet_memory(&std55, sizeof(std55));
    agg_tmp28 = std55;
    agg_tmp39 = it3; // copy
    int c56 = 24;
    ref_tmp410 = c56;
    struct std___Rb_tree_const_iterator_int_ t57 = agg_tmp39;
    struct std___Rb_tree_const_iterator_int_ std58;
    __VERIFIER_nondet_memory(&std58, sizeof(std58));
    agg_tmp411 = std58;
    agg_tmp512 = it3; // copy
    int c59 = 26;
    ref_tmp513 = c59;
    struct std___Rb_tree_const_iterator_int_ t60 = agg_tmp512;
    struct std___Rb_tree_const_iterator_int_ std61;
    __VERIFIER_nondet_memory(&std61, sizeof(std61));
    agg_tmp614 = std61;
    // array copy
    __builtin_memcpy(myints15, __const_main_myints, (unsigned long)3 * sizeof(__const_main_myints[0]));
    int* cast62 = (int*)&(myints15);
    int* cast63 = (int*)&(myints15);
    int c64 = 3;
    int* ptr65 = &(cast63)[c64];
    // externalized std:: op: void std::multiset<int, std::less<int>, std::allocator<int> >::insert<int*>(int*, int*)
    __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    __VERIFIER_nondet_memory(cast62, sizeof(*cast62));
    __VERIFIER_nondet_memory(ptr65, sizeof(*ptr65));
    unsigned long std66 = __VERIFIER_nondet_unsigned_long();
    unsigned long c67 = 12;
    _Bool c68 = ((std66 == c67)) ? 1 : 0;
    if (c68) {
    } else {
      char* cast69 = (char*)&(_str_2);
      char* c70 = _str_1;
      unsigned int c71 = 31;
      char* cast72 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast69, c70, c71, cast72);
    }
    struct std___Rb_tree_const_iterator_int_ std73;
    __VERIFIER_nondet_memory(&std73, sizeof(std73));
    ref_tmp616 = std73;
    struct std___Rb_tree_const_iterator_int_* std74;
    __VERIFIER_nondet_memory(&std74, sizeof(std74));
    int* std75;
    __VERIFIER_nondet_memory(&std75, sizeof(std75));
    int t76 = *std75;
    int c77 = 5;
    _Bool c78 = ((t76 == c77)) ? 1 : 0;
    if (c78) {
    } else {
      char* cast79 = (char*)&(_str_3);
      char* c80 = _str_1;
      unsigned int c81 = 34;
      char* cast82 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast79, c80, c81, cast82);
    }
    int c83 = 0;
    struct std___Rb_tree_const_iterator_int_ std84;
    __VERIFIER_nondet_memory(&std84, sizeof(std84));
    agg_tmp717 = std84;
    int* std85;
    __VERIFIER_nondet_memory(&std85, sizeof(std85));
    int t86 = *std85;
    int c87 = 10;
    _Bool c88 = ((t86 == c87)) ? 1 : 0;
    if (c88) {
    } else {
      char* cast89 = (char*)&(_str_4);
      char* c90 = _str_1;
      unsigned int c91 = 36;
      char* cast92 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast89, c90, c91, cast92);
    }
    int c93 = 0;
    struct std___Rb_tree_const_iterator_int_ std94;
    __VERIFIER_nondet_memory(&std94, sizeof(std94));
    agg_tmp818 = std94;
    int* std95;
    __VERIFIER_nondet_memory(&std95, sizeof(std95));
    int t96 = *std95;
    int c97 = 10;
    _Bool c98 = ((t96 == c97)) ? 1 : 0;
    if (c98) {
    } else {
      char* cast99 = (char*)&(_str_4);
      char* c100 = _str_1;
      unsigned int c101 = 38;
      char* cast102 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast99, c100, c101, cast102);
    }
    int c103 = 0;
    struct std___Rb_tree_const_iterator_int_ std104;
    __VERIFIER_nondet_memory(&std104, sizeof(std104));
    agg_tmp919 = std104;
    int* std105;
    __VERIFIER_nondet_memory(&std105, sizeof(std105));
    int t106 = *std105;
    int c107 = 15;
    _Bool c108 = ((t106 != c107)) ? 1 : 0;
    if (c108) {
    } else {
      char* cast109 = (char*)&(_str_5);
      char* c110 = _str_1;
      unsigned int c111 = 40;
      char* cast112 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast109, c110, c111, cast112);
    }
    int c113 = 0;
    struct std___Rb_tree_const_iterator_int_ std114;
    __VERIFIER_nondet_memory(&std114, sizeof(std114));
    agg_tmp1020 = std114;
    int* std115;
    __VERIFIER_nondet_memory(&std115, sizeof(std115));
    int t116 = *std115;
    int c117 = 20;
    _Bool c118 = ((t116 == c117)) ? 1 : 0;
    if (c118) {
    } else {
      char* cast119 = (char*)&(_str_6);
      char* c120 = _str_1;
      unsigned int c121 = 42;
      char* cast122 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast119, c120, c121, cast122);
    }
    int c123 = 0;
    struct std___Rb_tree_const_iterator_int_ std124;
    __VERIFIER_nondet_memory(&std124, sizeof(std124));
    agg_tmp1121 = std124;
    int* std125;
    __VERIFIER_nondet_memory(&std125, sizeof(std125));
    int t126 = *std125;
    int c127 = 20;
    _Bool c128 = ((t126 == c127)) ? 1 : 0;
    if (c128) {
    } else {
      char* cast129 = (char*)&(_str_6);
      char* c130 = _str_1;
      unsigned int c131 = 44;
      char* cast132 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast129, c130, c131, cast132);
    }
    int c133 = 0;
    struct std___Rb_tree_const_iterator_int_ std134;
    __VERIFIER_nondet_memory(&std134, sizeof(std134));
    agg_tmp1222 = std134;
    int* std135;
    __VERIFIER_nondet_memory(&std135, sizeof(std135));
    int t136 = *std135;
    int c137 = 24;
    _Bool c138 = ((t136 == c137)) ? 1 : 0;
    if (c138) {
    } else {
      char* cast139 = (char*)&(_str_7);
      char* c140 = _str_1;
      unsigned int c141 = 46;
      char* cast142 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast139, c140, c141, cast142);
    }
    int c143 = 0;
    struct std___Rb_tree_const_iterator_int_ std144;
    __VERIFIER_nondet_memory(&std144, sizeof(std144));
    agg_tmp1323 = std144;
    int* std145;
    __VERIFIER_nondet_memory(&std145, sizeof(std145));
    int t146 = *std145;
    int c147 = 25;
    _Bool c148 = ((t146 == c147)) ? 1 : 0;
    if (c148) {
    } else {
      char* cast149 = (char*)&(_str_8);
      char* c150 = _str_1;
      unsigned int c151 = 48;
      char* cast152 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast149, c150, c151, cast152);
    }
    int c153 = 0;
    struct std___Rb_tree_const_iterator_int_ std154;
    __VERIFIER_nondet_memory(&std154, sizeof(std154));
    agg_tmp1424 = std154;
    int* std155;
    __VERIFIER_nondet_memory(&std155, sizeof(std155));
    int t156 = *std155;
    int c157 = 26;
    _Bool c158 = ((t156 == c157)) ? 1 : 0;
    if (c158) {
    } else {
      char* cast159 = (char*)&(_str_9);
      char* c160 = _str_1;
      unsigned int c161 = 50;
      char* cast162 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast159, c160, c161, cast162);
    }
    int c163 = 0;
    struct std___Rb_tree_const_iterator_int_ std164;
    __VERIFIER_nondet_memory(&std164, sizeof(std164));
    agg_tmp1525 = std164;
    int* std165;
    __VERIFIER_nondet_memory(&std165, sizeof(std165));
    int t166 = *std165;
    int c167 = 30;
    _Bool c168 = ((t166 == c167)) ? 1 : 0;
    if (c168) {
    } else {
      char* cast169 = (char*)&(_str_10);
      char* c170 = _str_1;
      unsigned int c171 = 52;
      char* cast172 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast169, c170, c171, cast172);
    }
    int c173 = 0;
    struct std___Rb_tree_const_iterator_int_ std174;
    __VERIFIER_nondet_memory(&std174, sizeof(std174));
    agg_tmp1626 = std174;
    int* std175;
    __VERIFIER_nondet_memory(&std175, sizeof(std175));
    int t176 = *std175;
    int c177 = 40;
    _Bool c178 = ((t176 == c177)) ? 1 : 0;
    if (c178) {
    } else {
      char* cast179 = (char*)&(_str_11);
      char* c180 = _str_1;
      unsigned int c181 = 54;
      char* cast182 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast179, c180, c181, cast182);
    }
    int c183 = 0;
    struct std___Rb_tree_const_iterator_int_ std184;
    __VERIFIER_nondet_memory(&std184, sizeof(std184));
    agg_tmp1727 = std184;
    int* std185;
    __VERIFIER_nondet_memory(&std185, sizeof(std185));
    int t186 = *std185;
    int c187 = 50;
    _Bool c188 = ((t186 != c187)) ? 1 : 0;
    if (c188) {
    } else {
      char* cast189 = (char*)&(_str_12);
      char* c190 = _str_1;
      unsigned int c191 = 56;
      char* cast192 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast189, c190, c191, cast192);
    }
    int c193 = 0;
    __retval1 = c193;
    int t194 = __retval1;
    int ret_val195 = t194;
    {
      // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::~multiset()
      __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    }
    return ret_val195;
  int t196 = __retval1;
  return t196;
}

