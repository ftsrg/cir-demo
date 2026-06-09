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

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[24] = "ret.first->first == 'b'";
char _str_1[107] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/map/map_equal_range/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[24] = "ret.first->second == 20";
char _str_3[25] = "ret.second->first == 'c'";
char _str_4[25] = "ret.second->second == 30";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[24] = "lower bound points to: ";
char _str_6[5] = " => ";
char _str_7[24] = "upper bound points to: ";
struct std__piecewise_construct_t _ZSt19piecewise_construct;
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__map_char__int__std__less_char___std__allocator_std__pair_const_char__int___ mymap2;
  struct std__pair_std___Rb_tree_iterator_std__pair_const_char__int____std___Rb_tree_iterator_std__pair_const_char__int___ ret3;
  char ref_tmp04;
  char ref_tmp15;
  char ref_tmp26;
  struct std__pair_std___Rb_tree_iterator_std__pair_const_char__int____std___Rb_tree_iterator_std__pair_const_char__int___ ref_tmp37;
  char ref_tmp48;
  int c9 = 0;
  __retval1 = c9;
  // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::map()
  __VERIFIER_nondet_memory(&mymap2, sizeof(mymap2));
    // externalized std:: op: _ZNSt4pairISt17_Rb_tree_iteratorIS_IKciEES3_EC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E
    __VERIFIER_nondet_memory(&ret3, sizeof(ret3));
    int c10 = 10;
    char c11 = 97;
    ref_tmp04 = c11;
    int* std12;
    __VERIFIER_nondet_memory(&std12, sizeof(std12));
    *std12 = c10;
    int c13 = 20;
    char c14 = 98;
    ref_tmp15 = c14;
    int* std15;
    __VERIFIER_nondet_memory(&std15, sizeof(std15));
    *std15 = c13;
    int c16 = 30;
    char c17 = 99;
    ref_tmp26 = c17;
    int* std18;
    __VERIFIER_nondet_memory(&std18, sizeof(std18));
    *std18 = c16;
    char c19 = 98;
    ref_tmp48 = c19;
    struct std__pair_std___Rb_tree_iterator_std__pair_const_char__int____std___Rb_tree_iterator_std__pair_const_char__int___ std20;
    __VERIFIER_nondet_memory(&std20, sizeof(std20));
    ref_tmp37 = std20;
    struct std__pair_std___Rb_tree_iterator_std__pair_const_char__int____std___Rb_tree_iterator_std__pair_const_char__int___* std21;
    __VERIFIER_nondet_memory(&std21, sizeof(std21));
    struct std__pair_const_char__int_* std22;
    __VERIFIER_nondet_memory(&std22, sizeof(std22));
    char t23 = std22->first;
    int cast24 = (int)t23;
    int c25 = 98;
    _Bool c26 = ((cast24 == c25)) ? 1 : 0;
    if (c26) {
    } else {
      char* cast27 = (char*)&(_str);
      char* c28 = _str_1;
      unsigned int c29 = 25;
      char* cast30 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast27, c28, c29, cast30);
    }
    struct std__pair_const_char__int_* std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    int t32 = std31->second;
    int c33 = 20;
    _Bool c34 = ((t32 == c33)) ? 1 : 0;
    if (c34) {
    } else {
      char* cast35 = (char*)&(_str_2);
      char* c36 = _str_1;
      unsigned int c37 = 26;
      char* cast38 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast35, c36, c37, cast38);
    }
    struct std__pair_const_char__int_* std39;
    __VERIFIER_nondet_memory(&std39, sizeof(std39));
    char t40 = std39->first;
    int cast41 = (int)t40;
    int c42 = 99;
    _Bool c43 = ((cast41 == c42)) ? 1 : 0;
    if (c43) {
    } else {
      char* cast44 = (char*)&(_str_3);
      char* c45 = _str_1;
      unsigned int c46 = 28;
      char* cast47 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast44, c45, c46, cast47);
    }
    struct std__pair_const_char__int_* std48;
    __VERIFIER_nondet_memory(&std48, sizeof(std48));
    int t49 = std48->second;
    int c50 = 30;
    _Bool c51 = ((t49 == c50)) ? 1 : 0;
    if (c51) {
    } else {
      char* cast52 = (char*)&(_str_4);
      char* c53 = _str_1;
      unsigned int c54 = 29;
      char* cast55 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast52, c53, c54, cast55);
    }
    char* cast56 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* std57;
    __VERIFIER_nondet_memory(&std57, sizeof(std57));
    struct std__pair_const_char__int_* std58;
    __VERIFIER_nondet_memory(&std58, sizeof(std58));
    char t59 = std58->first;
    struct std__basic_ostream_char__std__char_traits_char__* std60;
    __VERIFIER_nondet_memory(&std60, sizeof(std60));
    char* cast61 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* std62;
    __VERIFIER_nondet_memory(&std62, sizeof(std62));
    struct std__pair_const_char__int_* std63;
    __VERIFIER_nondet_memory(&std63, sizeof(std63));
    int t64 = std63->second;
    struct std__basic_ostream_char__std__char_traits_char__* std65;
    __VERIFIER_nondet_memory(&std65, sizeof(std65));
    struct std__basic_ostream_char__std__char_traits_char__* std66;
    __VERIFIER_nondet_memory(&std66, sizeof(std66));
    char* cast67 = (char*)&(_str_7);
    struct std__basic_ostream_char__std__char_traits_char__* std68;
    __VERIFIER_nondet_memory(&std68, sizeof(std68));
    struct std__pair_const_char__int_* std69;
    __VERIFIER_nondet_memory(&std69, sizeof(std69));
    char t70 = std69->first;
    struct std__basic_ostream_char__std__char_traits_char__* std71;
    __VERIFIER_nondet_memory(&std71, sizeof(std71));
    char* cast72 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* std73;
    __VERIFIER_nondet_memory(&std73, sizeof(std73));
    struct std__pair_const_char__int_* std74;
    __VERIFIER_nondet_memory(&std74, sizeof(std74));
    int t75 = std74->second;
    struct std__basic_ostream_char__std__char_traits_char__* std76;
    __VERIFIER_nondet_memory(&std76, sizeof(std76));
    struct std__basic_ostream_char__std__char_traits_char__* std77;
    __VERIFIER_nondet_memory(&std77, sizeof(std77));
    int c78 = 0;
    __retval1 = c78;
    int t79 = __retval1;
    int ret_val80 = t79;
    {
      // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~map()
      __VERIFIER_nondet_memory(&mymap2, sizeof(mymap2));
    }
    return ret_val80;
  int t81 = __retval1;
  return t81;
}

