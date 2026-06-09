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
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[17] = "mymap contains:\n";
char _str_1[5] = " => ";
char _str_2[18] = "mymap.size() == 3";
char _str_3[105] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/map/map_clear_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[18] = "mymap.size() != 0";
char _str_5[18] = "mymap.size() == 2";
struct std__piecewise_construct_t _ZSt19piecewise_construct;
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__map_char__int__std__less_char___std__allocator_std__pair_const_char__int___ mymap2;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ it3;
  char ref_tmp04;
  char ref_tmp15;
  char ref_tmp26;
  char ref_tmp57;
  char ref_tmp68;
  int c9 = 0;
  __retval1 = c9;
  // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::map()
  __VERIFIER_nondet_memory(&mymap2, sizeof(mymap2));
    // externalized std:: op: std::_Rb_tree_iterator<std::pair<char const, int> >::_Rb_tree_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    int c10 = 100;
    char c11 = 120;
    ref_tmp04 = c11;
    int* std12;
    __VERIFIER_nondet_memory(&std12, sizeof(std12));
    *std12 = c10;
    int c13 = 200;
    char c14 = 121;
    ref_tmp15 = c14;
    int* std15;
    __VERIFIER_nondet_memory(&std15, sizeof(std15));
    *std15 = c13;
    int c16 = 300;
    char c17 = 122;
    ref_tmp26 = c17;
    int* std18;
    __VERIFIER_nondet_memory(&std18, sizeof(std18));
    *std18 = c16;
    char* cast19 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std20;
    __VERIFIER_nondet_memory(&std20, sizeof(std20));
      struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp321;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp422;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp023;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ std24;
      __VERIFIER_nondet_memory(&std24, sizeof(std24));
      ref_tmp321 = std24;
      struct std___Rb_tree_iterator_std__pair_const_char__int__* std25;
      __VERIFIER_nondet_memory(&std25, sizeof(std25));
      while (1) {
        struct std___Rb_tree_iterator_std__pair_const_char__int__ std27;
        __VERIFIER_nondet_memory(&std27, sizeof(std27));
        ref_tmp422 = std27;
        _Bool std28;
        __VERIFIER_nondet_memory(&std28, sizeof(std28));
        _Bool u29 = !std28;
        if (!u29) break;
        struct std__pair_const_char__int_* std30;
        __VERIFIER_nondet_memory(&std30, sizeof(std30));
        char t31 = std30->first;
        struct std__basic_ostream_char__std__char_traits_char__* std32;
        __VERIFIER_nondet_memory(&std32, sizeof(std32));
        char* cast33 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std34;
        __VERIFIER_nondet_memory(&std34, sizeof(std34));
        struct std__pair_const_char__int_* std35;
        __VERIFIER_nondet_memory(&std35, sizeof(std35));
        int t36 = std35->second;
        struct std__basic_ostream_char__std__char_traits_char__* std37;
        __VERIFIER_nondet_memory(&std37, sizeof(std37));
        struct std__basic_ostream_char__std__char_traits_char__* std38;
        __VERIFIER_nondet_memory(&std38, sizeof(std38));
      for_step26: ;
        int c39 = 0;
        struct std___Rb_tree_iterator_std__pair_const_char__int__ std40;
        __VERIFIER_nondet_memory(&std40, sizeof(std40));
        agg_tmp023 = std40;
      }
    unsigned long std41 = __VERIFIER_nondet_unsigned_long();
    unsigned long c42 = 3;
    _Bool c43 = ((std41 == c42)) ? 1 : 0;
    if (c43) {
    } else {
      char* cast44 = (char*)&(_str_2);
      char* c45 = _str_3;
      unsigned int c46 = 26;
      char* cast47 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast44, c45, c46, cast47);
    }
    // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::clear()
    __VERIFIER_nondet_memory(&mymap2, sizeof(mymap2));
    unsigned long std48 = __VERIFIER_nondet_unsigned_long();
    unsigned long c49 = 0;
    _Bool c50 = ((std48 != c49)) ? 1 : 0;
    if (c50) {
    } else {
      char* cast51 = (char*)&(_str_4);
      char* c52 = _str_3;
      unsigned int c53 = 28;
      char* cast54 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast51, c52, c53, cast54);
    }
    int c55 = 1101;
    char c56 = 97;
    ref_tmp57 = c56;
    int* std57;
    __VERIFIER_nondet_memory(&std57, sizeof(std57));
    *std57 = c55;
    int c58 = 2202;
    char c59 = 98;
    ref_tmp68 = c59;
    int* std60;
    __VERIFIER_nondet_memory(&std60, sizeof(std60));
    *std60 = c58;
    unsigned long std61 = __VERIFIER_nondet_unsigned_long();
    unsigned long c62 = 2;
    _Bool c63 = ((std61 == c62)) ? 1 : 0;
    if (c63) {
    } else {
      char* cast64 = (char*)&(_str_5);
      char* c65 = _str_3;
      unsigned int c66 = 31;
      char* cast67 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast64, c65, c66, cast67);
    }
    char* cast68 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std69;
    __VERIFIER_nondet_memory(&std69, sizeof(std69));
      struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp770;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp871;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp172;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ std73;
      __VERIFIER_nondet_memory(&std73, sizeof(std73));
      ref_tmp770 = std73;
      struct std___Rb_tree_iterator_std__pair_const_char__int__* std74;
      __VERIFIER_nondet_memory(&std74, sizeof(std74));
      while (1) {
        struct std___Rb_tree_iterator_std__pair_const_char__int__ std76;
        __VERIFIER_nondet_memory(&std76, sizeof(std76));
        ref_tmp871 = std76;
        _Bool std77;
        __VERIFIER_nondet_memory(&std77, sizeof(std77));
        _Bool u78 = !std77;
        if (!u78) break;
        struct std__pair_const_char__int_* std79;
        __VERIFIER_nondet_memory(&std79, sizeof(std79));
        char t80 = std79->first;
        struct std__basic_ostream_char__std__char_traits_char__* std81;
        __VERIFIER_nondet_memory(&std81, sizeof(std81));
        char* cast82 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std83;
        __VERIFIER_nondet_memory(&std83, sizeof(std83));
        struct std__pair_const_char__int_* std84;
        __VERIFIER_nondet_memory(&std84, sizeof(std84));
        int t85 = std84->second;
        struct std__basic_ostream_char__std__char_traits_char__* std86;
        __VERIFIER_nondet_memory(&std86, sizeof(std86));
        struct std__basic_ostream_char__std__char_traits_char__* std87;
        __VERIFIER_nondet_memory(&std87, sizeof(std87));
      for_step75: ;
        int c88 = 0;
        struct std___Rb_tree_iterator_std__pair_const_char__int__ std89;
        __VERIFIER_nondet_memory(&std89, sizeof(std89));
        agg_tmp172 = std89;
      }
    int c90 = 0;
    __retval1 = c90;
    int t91 = __retval1;
    int ret_val92 = t91;
    {
      // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~map()
      __VERIFIER_nondet_memory(&mymap2, sizeof(mymap2));
    }
    return ret_val92;
  int t93 = __retval1;
  return t93;
}

