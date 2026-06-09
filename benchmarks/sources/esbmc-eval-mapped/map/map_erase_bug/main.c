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
struct std____pair_base_std___Rb_tree_iterator_std__pair_const_char__int____std___Rb_tree_iterator_std__pair_const_char__int___;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_std__pair_const_char__int___;
struct std__less_char_ { unsigned char __field0; };
struct std__pair_const_char__int_;
struct std__pair_std___Rb_tree_iterator_std__pair_const_char__int____std___Rb_tree_iterator_std__pair_const_char__int___ { struct std___Rb_tree_iterator_std__pair_const_char__int__ first; struct std___Rb_tree_iterator_std__pair_const_char__int__ second; };
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

int __const_main_intarray[4] = {10, 40, 0, 0};
char __const_main_chararray[4] = {97, 100, 0, 0};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[5] = " => ";
char _str_1[28] = "(*it).first == chararray[i]";
char _str_2[105] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/map/map_erase_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[28] = "(*it).second != intarray[i]";
struct std__piecewise_construct_t _ZSt19piecewise_construct;
char _str_4[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_tree.h";
char __PRETTY_FUNCTION____ZNSt8_Rb_treeIcSt4pairIKciESt10_Select1stIS2_ESt4lessIcESaIS2_EE5eraseB5cxx11ESt17_Rb_tree_iteratorIS2_E[325] = "iterator std::_Rb_tree<char, std::pair<const char, int>, std::_Select1st<std::pair<const char, int>>, std::less<char>>::erase(iterator) [_Key = char, _Val = std::pair<const char, int>, _KeyOfValue = std::_Select1st<std::pair<const char, int>>, _Compare = std::less<char>, _Alloc = std::allocator<std::pair<const char, int>>]";
char _str_5[20] = "__position != end()";
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
  char chararray4[4];
  int intarray5[4];
  char ref_tmp06;
  char ref_tmp17;
  char ref_tmp28;
  char ref_tmp39;
  char ref_tmp410;
  char ref_tmp511;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp612;
  char ref_tmp713;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp014;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp115;
  char ref_tmp816;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp917;
  char ref_tmp1018;
  struct std___Rb_tree_const_iterator_std__pair_const_char__int__ agg_tmp219;
  struct std___Rb_tree_const_iterator_std__pair_const_char__int__ agg_tmp320;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp1121;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp422;
  int i23;
  int c24 = 0;
  __retval1 = c24;
  // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::map()
  __VERIFIER_nondet_memory(&mymap2, sizeof(mymap2));
    // externalized std:: op: std::_Rb_tree_iterator<std::pair<char const, int> >::_Rb_tree_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    // array copy
    __builtin_memcpy(chararray4, __const_main_chararray, (unsigned long)4 * sizeof(__const_main_chararray[0]));
    // array copy
    __builtin_memcpy(intarray5, __const_main_intarray, (unsigned long)4 * sizeof(__const_main_intarray[0]));
    int c25 = 10;
    char c26 = 97;
    ref_tmp06 = c26;
    int* std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    *std27 = c25;
    int c28 = 20;
    char c29 = 98;
    ref_tmp17 = c29;
    int* std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
    *std30 = c28;
    int c31 = 30;
    char c32 = 99;
    ref_tmp28 = c32;
    int* std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    *std33 = c31;
    int c34 = 40;
    char c35 = 100;
    ref_tmp39 = c35;
    int* std36;
    __VERIFIER_nondet_memory(&std36, sizeof(std36));
    *std36 = c34;
    int c37 = 50;
    char c38 = 101;
    ref_tmp410 = c38;
    int* std39;
    __VERIFIER_nondet_memory(&std39, sizeof(std39));
    *std39 = c37;
    int c40 = 60;
    char c41 = 102;
    ref_tmp511 = c41;
    int* std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    *std42 = c40;
    char c43 = 98;
    ref_tmp713 = c43;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std44;
    __VERIFIER_nondet_memory(&std44, sizeof(std44));
    ref_tmp612 = std44;
    struct std___Rb_tree_iterator_std__pair_const_char__int__* std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
    agg_tmp014 = it3; // copy
    struct std___Rb_tree_iterator_std__pair_const_char__int__ t46 = agg_tmp014;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std47;
    __VERIFIER_nondet_memory(&std47, sizeof(std47));
    agg_tmp115 = std47;
    char c48 = 99;
    ref_tmp816 = c48;
    unsigned long std49 = __VERIFIER_nondet_unsigned_long();
    char c50 = 101;
    ref_tmp1018 = c50;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std51;
    __VERIFIER_nondet_memory(&std51, sizeof(std51));
    ref_tmp917 = std51;
    struct std___Rb_tree_iterator_std__pair_const_char__int__* std52;
    __VERIFIER_nondet_memory(&std52, sizeof(std52));
    // externalized std:: op: std::_Rb_tree_const_iterator<std::pair<char const, int> >::_Rb_tree_const_iterator(std::_Rb_tree_iterator<std::pair<char const, int> > const&)
    __VERIFIER_nondet_memory(&agg_tmp219, sizeof(agg_tmp219));
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std53;
    __VERIFIER_nondet_memory(&std53, sizeof(std53));
    ref_tmp1121 = std53;
    // externalized std:: op: std::_Rb_tree_const_iterator<std::pair<char const, int> >::_Rb_tree_const_iterator(std::_Rb_tree_iterator<std::pair<char const, int> > const&)
    __VERIFIER_nondet_memory(&agg_tmp320, sizeof(agg_tmp320));
    __VERIFIER_nondet_memory(&ref_tmp1121, sizeof(ref_tmp1121));
    struct std___Rb_tree_const_iterator_std__pair_const_char__int__ t54 = agg_tmp219;
    struct std___Rb_tree_const_iterator_std__pair_const_char__int__ t55 = agg_tmp320;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std56;
    __VERIFIER_nondet_memory(&std56, sizeof(std56));
    agg_tmp422 = std56;
    int c57 = 0;
    i23 = c57;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp1258;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp1359;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp560;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ std61;
      __VERIFIER_nondet_memory(&std61, sizeof(std61));
      ref_tmp1258 = std61;
      struct std___Rb_tree_iterator_std__pair_const_char__int__* std62;
      __VERIFIER_nondet_memory(&std62, sizeof(std62));
      while (1) {
        struct std___Rb_tree_iterator_std__pair_const_char__int__ std64;
        __VERIFIER_nondet_memory(&std64, sizeof(std64));
        ref_tmp1359 = std64;
        _Bool std65;
        __VERIFIER_nondet_memory(&std65, sizeof(std65));
        _Bool u66 = !std65;
        if (!u66) break;
          struct std__pair_const_char__int_* std67;
          __VERIFIER_nondet_memory(&std67, sizeof(std67));
          char t68 = std67->first;
          struct std__basic_ostream_char__std__char_traits_char__* std69;
          __VERIFIER_nondet_memory(&std69, sizeof(std69));
          char* cast70 = (char*)&(_str);
          struct std__basic_ostream_char__std__char_traits_char__* std71;
          __VERIFIER_nondet_memory(&std71, sizeof(std71));
          struct std__pair_const_char__int_* std72;
          __VERIFIER_nondet_memory(&std72, sizeof(std72));
          int t73 = std72->second;
          struct std__basic_ostream_char__std__char_traits_char__* std74;
          __VERIFIER_nondet_memory(&std74, sizeof(std74));
          struct std__basic_ostream_char__std__char_traits_char__* std75;
          __VERIFIER_nondet_memory(&std75, sizeof(std75));
          struct std__pair_const_char__int_* std76;
          __VERIFIER_nondet_memory(&std76, sizeof(std76));
          char t77 = std76->first;
          int cast78 = (int)t77;
          int t79 = i23;
          long cast80 = (long)t79;
          char t81 = chararray4[cast80];
          int cast82 = (int)t81;
          _Bool c83 = ((cast78 == cast82)) ? 1 : 0;
          if (c83) {
          } else {
            char* cast84 = (char*)&(_str_1);
            char* c85 = _str_2;
            unsigned int c86 = 41;
            char* cast87 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast84, c85, c86, cast87);
          }
          struct std__pair_const_char__int_* std88;
          __VERIFIER_nondet_memory(&std88, sizeof(std88));
          int t89 = std88->second;
          int t90 = i23;
          long cast91 = (long)t90;
          int t92 = intarray5[cast91];
          _Bool c93 = ((t89 != t92)) ? 1 : 0;
          if (c93) {
          } else {
            char* cast94 = (char*)&(_str_3);
            char* c95 = _str_2;
            unsigned int c96 = 42;
            char* cast97 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast94, c95, c96, cast97);
          }
          int t98 = i23;
          int u99 = t98 + 1;
          i23 = u99;
      for_step63: ;
        int c100 = 0;
        struct std___Rb_tree_iterator_std__pair_const_char__int__ std101;
        __VERIFIER_nondet_memory(&std101, sizeof(std101));
        agg_tmp560 = std101;
      }
    int c102 = 0;
    __retval1 = c102;
    int t103 = __retval1;
    int ret_val104 = t103;
    {
      // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~map()
      __VERIFIER_nondet_memory(&mymap2, sizeof(mymap2));
    }
    return ret_val104;
  int t105 = __retval1;
  return t105;
}

