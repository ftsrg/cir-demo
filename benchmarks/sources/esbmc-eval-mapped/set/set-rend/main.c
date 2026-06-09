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
struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___;
struct std__less_int_;
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ { struct std___Rb_tree_const_iterator_int_ current; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__set_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int __const_main_myints[5] = {78, 21, 64, 49, 17};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[11] = "*rit == 78";
char _str_1[100] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-rend/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[16] = "myset contains:";
char _str_3[2] = " ";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int myints2[5];
  struct std__set_int__std__less_int___std__allocator_int__ myset3;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ rit4;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ ref_tmp05;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ agg_tmp06;
  int c7 = 0;
  __retval1 = c7;
  // array copy
  __builtin_memcpy(myints2, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
  int* cast8 = (int*)&(myints2);
  int* cast9 = (int*)&(myints2);
  int c10 = 5;
  int* ptr11 = &(cast9)[c10];
  // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::set<int*>(int*, int*)
  __VERIFIER_nondet_memory(&myset3, sizeof(myset3));
  __VERIFIER_nondet_memory(cast8, sizeof(*cast8));
  __VERIFIER_nondet_memory(ptr11, sizeof(*ptr11));
    // externalized std:: op: std::reverse_iterator<std::_Rb_tree_const_iterator<int> >::reverse_iterator()
    __VERIFIER_nondet_memory(&rit4, sizeof(rit4));
    struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ std12;
    __VERIFIER_nondet_memory(&std12, sizeof(std12));
    ref_tmp05 = std12;
    struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* std13;
    __VERIFIER_nondet_memory(&std13, sizeof(std13));
    int c14 = 0;
    struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ std15;
    __VERIFIER_nondet_memory(&std15, sizeof(std15));
    agg_tmp06 = std15;
    int* std16;
    __VERIFIER_nondet_memory(&std16, sizeof(std16));
    int t17 = *std16;
    int c18 = 78;
    _Bool c19 = ((t17 == c18)) ? 1 : 0;
    if (c19) {
    } else {
      char* cast20 = (char*)&(_str);
      char* c21 = _str_1;
      unsigned int c22 = 21;
      char* cast23 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast20, c21, c22, cast23);
    }
    char* cast24 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std25;
    __VERIFIER_nondet_memory(&std25, sizeof(std25));
    char* cast26 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    int* std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    int t29 = *std28;
    struct std__basic_ostream_char__std__char_traits_char__* std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
    struct std__basic_ostream_char__std__char_traits_char__* std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    int c32 = 0;
    __retval1 = c32;
    int t33 = __retval1;
    int ret_val34 = t33;
    {
      // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::~set()
      __VERIFIER_nondet_memory(&myset3, sizeof(myset3));
    }
    return ret_val34;
  int t35 = __retval1;
  return t35;
}

