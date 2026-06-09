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
struct __gnu_cxx____aligned_membuf_int_ { unsigned char _M_storage[4]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Identity_int_ { unsigned char __field0; };
struct std___Rb_tree_const_iterator_int_ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* _M_t; };
struct std___Rb_tree_iterator_int_ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_std__less_int__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_int_;
struct std____new_allocator_std___Rb_tree_node_int__;
struct std____pair_base_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__;
struct std____pair_base_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_int__;
struct std__less_int_;
struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ { struct std___Rb_tree_const_iterator_int_ first; struct std___Rb_tree_const_iterator_int_ second; };
struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ { struct std___Rb_tree_iterator_int_ first; struct std___Rb_tree_iterator_int_ second; };
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__multiset_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[17] = "*ret.first == 30";
char _str_1[117] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multiset/multiset-equal_range/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "*ret.second == 40";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[24] = "lower bound points to: ";
char _str_4[24] = "upper bound points to: ";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__multiset_int__std__less_int___std__allocator_int__ myset2;
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ ret3;
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ ref_tmp14;
  int ref_tmp25;
  int c6 = 0;
  __retval1 = c6;
  // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::multiset()
  __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    // externalized std:: op: _ZNSt4pairISt23_Rb_tree_const_iteratorIiES1_EC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E
    __VERIFIER_nondet_memory(&ret3, sizeof(ret3));
      int i7;
      int ref_tmp08;
      struct std___Rb_tree_const_iterator_int_ agg_tmp09;
      int c10 = 1;
      i7 = c10;
      while (1) {
        int t12 = i7;
        int c13 = 5;
        _Bool c14 = ((t12 <= c13)) ? 1 : 0;
        if (!c14) break;
        int t15 = i7;
        int c16 = 10;
        int b17 = t15 * c16;
        ref_tmp08 = b17;
        struct std___Rb_tree_const_iterator_int_ std18;
        __VERIFIER_nondet_memory(&std18, sizeof(std18));
        agg_tmp09 = std18;
      for_step11: ;
        int t19 = i7;
        int u20 = t19 + 1;
        i7 = u20;
      }
    int c21 = 30;
    ref_tmp25 = c21;
    struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ std22;
    __VERIFIER_nondet_memory(&std22, sizeof(std22));
    ref_tmp14 = std22;
    struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* std23;
    __VERIFIER_nondet_memory(&std23, sizeof(std23));
    int* std24;
    __VERIFIER_nondet_memory(&std24, sizeof(std24));
    int t25 = *std24;
    int c26 = 30;
    _Bool c27 = ((t25 == c26)) ? 1 : 0;
    if (c27) {
    } else {
      char* cast28 = (char*)&(_str);
      char* c29 = _str_1;
      unsigned int c30 = 20;
      char* cast31 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast28, c29, c30, cast31);
    }
    int* std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    int t33 = *std32;
    int c34 = 40;
    _Bool c35 = ((t33 == c34)) ? 1 : 0;
    if (c35) {
    } else {
      char* cast36 = (char*)&(_str_2);
      char* c37 = _str_1;
      unsigned int c38 = 21;
      char* cast39 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast36, c37, c38, cast39);
    }
    char* cast40 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
    int* std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    int t43 = *std42;
    struct std__basic_ostream_char__std__char_traits_char__* std44;
    __VERIFIER_nondet_memory(&std44, sizeof(std44));
    struct std__basic_ostream_char__std__char_traits_char__* std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
    char* cast46 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std47;
    __VERIFIER_nondet_memory(&std47, sizeof(std47));
    int* std48;
    __VERIFIER_nondet_memory(&std48, sizeof(std48));
    int t49 = *std48;
    struct std__basic_ostream_char__std__char_traits_char__* std50;
    __VERIFIER_nondet_memory(&std50, sizeof(std50));
    struct std__basic_ostream_char__std__char_traits_char__* std51;
    __VERIFIER_nondet_memory(&std51, sizeof(std51));
    int c52 = 0;
    __retval1 = c52;
    int t53 = __retval1;
    int ret_val54 = t53;
    {
      // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::~multiset()
      __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    }
    return ret_val54;
  int t55 = __retval1;
  return t55;
}

