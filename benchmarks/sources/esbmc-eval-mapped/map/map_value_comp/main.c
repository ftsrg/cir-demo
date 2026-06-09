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
struct std____pair_base_char__int_;
struct std____pair_base_const_char__int_;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_std__pair_const_char__int___;
struct std__binary_function_std__pair_const_char__int___std__pair_const_char__int___bool_;
struct std__iterator_std__bidirectional_iterator_tag__std__pair_const_char__int___long__std__pair_const_char__int_____std__pair_const_char__int____;
struct std__less_char_ { unsigned char __field0; };
struct std__map_char__int__std__less_char___std__allocator_std__pair_const_char__int_____value_compare { unsigned char __field0; };
struct std__pair_char__int_ { char first; int second; };
struct std__pair_const_char__int_ { char first; int second; };
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std__piecewise_construct_t { unsigned char __field0; };
struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ { struct std___Rb_tree_iterator_std__pair_const_char__int__ current; };
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
char _str_2[35] = "mymap.value_comp()(*it++, highest)";
char _str_3[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/map/map_value_comp/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
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
  struct std__pair_char__int_ highest4;
  char ref_tmp05;
  char ref_tmp16;
  char ref_tmp27;
  struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ ref_tmp38;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp49;
  struct std__map_char__int__std__less_char___std__allocator_std__pair_const_char__int_____value_compare ref_tmp810;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp911;
  struct std__pair_const_char__int_ ref_tmp1012;
  int c13 = 0;
  __retval1 = c13;
  // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::map()
  __VERIFIER_nondet_memory(&mymap2, sizeof(mymap2));
    // externalized std:: op: std::_Rb_tree_iterator<std::pair<char const, int> >::_Rb_tree_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    // externalized std:: op: _ZNSt4pairIciEC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E
    __VERIFIER_nondet_memory(&highest4, sizeof(highest4));
    int c14 = 1001;
    char c15 = 120;
    ref_tmp05 = c15;
    int* std16;
    __VERIFIER_nondet_memory(&std16, sizeof(std16));
    *std16 = c14;
    int c17 = 2002;
    char c18 = 121;
    ref_tmp16 = c18;
    int* std19;
    __VERIFIER_nondet_memory(&std19, sizeof(std19));
    *std19 = c17;
    int c20 = 3003;
    char c21 = 122;
    ref_tmp27 = c21;
    int* std22;
    __VERIFIER_nondet_memory(&std22, sizeof(std22));
    *std22 = c20;
    char* cast23 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std24;
    __VERIFIER_nondet_memory(&std24, sizeof(std24));
    struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ std25;
    __VERIFIER_nondet_memory(&std25, sizeof(std25));
    ref_tmp38 = std25;
    struct std__pair_const_char__int_* std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    struct std__pair_char__int_* std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    ref_tmp49 = std28;
    struct std___Rb_tree_iterator_std__pair_const_char__int__* std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
      struct std__map_char__int__std__less_char___std__allocator_std__pair_const_char__int_____value_compare ref_tmp530;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp631;
      struct std__pair_const_char__int_ ref_tmp732;
      do {
          struct std__pair_const_char__int_* std33;
          __VERIFIER_nondet_memory(&std33, sizeof(std33));
          char t34 = std33->first;
          struct std__basic_ostream_char__std__char_traits_char__* std35;
          __VERIFIER_nondet_memory(&std35, sizeof(std35));
          char* cast36 = (char*)&(_str_1);
          struct std__basic_ostream_char__std__char_traits_char__* std37;
          __VERIFIER_nondet_memory(&std37, sizeof(std37));
          struct std__pair_const_char__int_* std38;
          __VERIFIER_nondet_memory(&std38, sizeof(std38));
          int t39 = std38->second;
          struct std__basic_ostream_char__std__char_traits_char__* std40;
          __VERIFIER_nondet_memory(&std40, sizeof(std40));
          struct std__basic_ostream_char__std__char_traits_char__* std41;
          __VERIFIER_nondet_memory(&std41, sizeof(std41));
        struct std__map_char__int__std__less_char___std__allocator_std__pair_const_char__int_____value_compare std42;
        __VERIFIER_nondet_memory(&std42, sizeof(std42));
        ref_tmp530 = std42;
        int c43 = 0;
        struct std___Rb_tree_iterator_std__pair_const_char__int__ std44;
        __VERIFIER_nondet_memory(&std44, sizeof(std44));
        ref_tmp631 = std44;
        struct std__pair_const_char__int_* std45;
        __VERIFIER_nondet_memory(&std45, sizeof(std45));
        // externalized std:: op: _ZNSt4pairIKciEC2IciQaacl16_S_constructibleIRTL0__RTL0_0_EEntcl10_S_danglesIS4_S6_EEEERS_IT_T0_E
        __VERIFIER_nondet_memory(&ref_tmp732, sizeof(ref_tmp732));
        __VERIFIER_nondet_memory(&highest4, sizeof(highest4));
        _Bool std46;
        __VERIFIER_nondet_memory(&std46, sizeof(std46));
        if (!std46) break;
      } while (1);
    struct std__map_char__int__std__less_char___std__allocator_std__pair_const_char__int_____value_compare std47;
    __VERIFIER_nondet_memory(&std47, sizeof(std47));
    ref_tmp810 = std47;
    int c48 = 0;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std49;
    __VERIFIER_nondet_memory(&std49, sizeof(std49));
    ref_tmp911 = std49;
    struct std__pair_const_char__int_* std50;
    __VERIFIER_nondet_memory(&std50, sizeof(std50));
    // externalized std:: op: _ZNSt4pairIKciEC2IciQaacl16_S_constructibleIRTL0__RTL0_0_EEntcl10_S_danglesIS4_S6_EEEERS_IT_T0_E
    __VERIFIER_nondet_memory(&ref_tmp1012, sizeof(ref_tmp1012));
    __VERIFIER_nondet_memory(&highest4, sizeof(highest4));
    _Bool std51;
    __VERIFIER_nondet_memory(&std51, sizeof(std51));
    if (std51) {
    } else {
      char* cast52 = (char*)&(_str_2);
      char* c53 = _str_3;
      unsigned int c54 = 32;
      char* cast55 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast52, c53, c54, cast55);
    }
    int c56 = 0;
    __retval1 = c56;
    int t57 = __retval1;
    int ret_val58 = t57;
    {
      // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~map()
      __VERIFIER_nondet_memory(&mymap2, sizeof(mymap2));
    }
    return ret_val58;
  int t59 = __retval1;
  return t59;
}

