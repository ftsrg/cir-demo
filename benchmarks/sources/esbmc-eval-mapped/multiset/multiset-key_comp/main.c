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
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_int__;
struct std__binary_function_int__int__bool_;
struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___;
struct std__less_int_ { unsigned char __field0; };
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ { struct std___Rb_tree_const_iterator_int_ current; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__multiset_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[16] = "myset contains:";
char _str_1[9] = "*it == i";
char _str_2[114] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multiset/multiset-key_comp/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[2] = " ";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__multiset_int__std__less_int___std__allocator_int__ myset2;
  struct std__less_int_ mycomp3;
  struct std___Rb_tree_const_iterator_int_ it4;
  int i5;
  int highest6;
  struct std__less_int_ ref_tmp07;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ ref_tmp18;
  struct std___Rb_tree_const_iterator_int_ ref_tmp29;
  int c10 = 0;
  __retval1 = c10;
  // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::multiset()
  __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    // externalized std:: op: std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator()
    __VERIFIER_nondet_memory(&it4, sizeof(it4));
    struct std__less_int_ std11;
    __VERIFIER_nondet_memory(&std11, sizeof(std11));
    ref_tmp07 = std11;
    struct std__less_int_* std12;
    __VERIFIER_nondet_memory(&std12, sizeof(std12));
      struct std___Rb_tree_const_iterator_int_ agg_tmp013;
      int c14 = 0;
      i5 = c14;
      while (1) {
        int t16 = i5;
        int c17 = 5;
        _Bool c18 = ((t16 <= c17)) ? 1 : 0;
        if (!c18) break;
        struct std___Rb_tree_const_iterator_int_ std19;
        __VERIFIER_nondet_memory(&std19, sizeof(std19));
        agg_tmp013 = std19;
      for_step15: ;
        int t20 = i5;
        int u21 = t20 + 1;
        i5 = u21;
      }
    char* cast22 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std23;
    __VERIFIER_nondet_memory(&std23, sizeof(std23));
    struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ std24;
    __VERIFIER_nondet_memory(&std24, sizeof(std24));
    ref_tmp18 = std24;
    int* std25;
    __VERIFIER_nondet_memory(&std25, sizeof(std25));
    int t26 = *std25;
    highest6 = t26;
    struct std___Rb_tree_const_iterator_int_ std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    ref_tmp29 = std27;
    struct std___Rb_tree_const_iterator_int_* std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    int c29 = 0;
    i5 = c29;
      struct std___Rb_tree_const_iterator_int_ ref_tmp330;
      do {
          int* std31;
          __VERIFIER_nondet_memory(&std31, sizeof(std31));
          int t32 = *std31;
          int t33 = i5;
          _Bool c34 = ((t32 == t33)) ? 1 : 0;
          if (c34) {
          } else {
            char* cast35 = (char*)&(_str_1);
            char* c36 = _str_2;
            unsigned int c37 = 30;
            char* cast38 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast35, c36, c37, cast38);
          }
          int t39 = i5;
          int u40 = t39 + 1;
          i5 = u40;
          char* cast41 = (char*)&(_str_3);
          struct std__basic_ostream_char__std__char_traits_char__* std42;
          __VERIFIER_nondet_memory(&std42, sizeof(std42));
          int* std43;
          __VERIFIER_nondet_memory(&std43, sizeof(std43));
          int t44 = *std43;
          struct std__basic_ostream_char__std__char_traits_char__* std45;
          __VERIFIER_nondet_memory(&std45, sizeof(std45));
        int c46 = 0;
        struct std___Rb_tree_const_iterator_int_ std47;
        __VERIFIER_nondet_memory(&std47, sizeof(std47));
        ref_tmp330 = std47;
        int* std48;
        __VERIFIER_nondet_memory(&std48, sizeof(std48));
        _Bool std49;
        __VERIFIER_nondet_memory(&std49, sizeof(std49));
        if (!std49) break;
      } while (1);
    struct std__basic_ostream_char__std__char_traits_char__* std50;
    __VERIFIER_nondet_memory(&std50, sizeof(std50));
    int c51 = 0;
    __retval1 = c51;
    int t52 = __retval1;
    int ret_val53 = t52;
    {
      // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::~multiset()
      __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    }
    return ret_val53;
  int t54 = __retval1;
  return t54;
}

