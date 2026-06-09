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
struct std__less_int_;
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__multiset_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int __const_main_myints[5] = {75, 23, 65, 42, 13};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[10] = "*it != 75";
char _str_1[119] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multiset/multiset-end-bug-c++03/main.cpp";
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
  struct std__multiset_int__std__less_int___std__allocator_int__ myset3;
  struct std___Rb_tree_const_iterator_int_ it4;
  struct std___Rb_tree_const_iterator_int_ agg_tmp05;
  int c6 = 0;
  __retval1 = c6;
  // array copy
  __builtin_memcpy(myints2, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
  int* cast7 = (int*)&(myints2);
  int* cast8 = (int*)&(myints2);
  int c9 = 5;
  int* ptr10 = &(cast8)[c9];
  // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::multiset<int*>(int*, int*)
  __VERIFIER_nondet_memory(&myset3, sizeof(myset3));
  __VERIFIER_nondet_memory(cast7, sizeof(*cast7));
  __VERIFIER_nondet_memory(ptr10, sizeof(*ptr10));
    struct std___Rb_tree_const_iterator_int_ std11;
    __VERIFIER_nondet_memory(&std11, sizeof(std11));
    it4 = std11;
    int c12 = 0;
    struct std___Rb_tree_const_iterator_int_ std13;
    __VERIFIER_nondet_memory(&std13, sizeof(std13));
    agg_tmp05 = std13;
    int* std14;
    __VERIFIER_nondet_memory(&std14, sizeof(std14));
    int t15 = *std14;
    int c16 = 75;
    _Bool c17 = ((t15 != c16)) ? 1 : 0;
    if (c17) {
    } else {
      char* cast18 = (char*)&(_str);
      char* c19 = _str_1;
      unsigned int c20 = 20;
      char* cast21 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast18, c19, c20, cast21);
    }
    char* cast22 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std23;
    __VERIFIER_nondet_memory(&std23, sizeof(std23));
      struct std___Rb_tree_const_iterator_int_ ref_tmp024;
      struct std___Rb_tree_const_iterator_int_ ref_tmp125;
      struct std___Rb_tree_const_iterator_int_ agg_tmp126;
      struct std___Rb_tree_const_iterator_int_ std27;
      __VERIFIER_nondet_memory(&std27, sizeof(std27));
      ref_tmp024 = std27;
      struct std___Rb_tree_const_iterator_int_* std28;
      __VERIFIER_nondet_memory(&std28, sizeof(std28));
      while (1) {
        struct std___Rb_tree_const_iterator_int_ std30;
        __VERIFIER_nondet_memory(&std30, sizeof(std30));
        ref_tmp125 = std30;
        _Bool std31;
        __VERIFIER_nondet_memory(&std31, sizeof(std31));
        _Bool u32 = !std31;
        if (!u32) break;
        char* cast33 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std34;
        __VERIFIER_nondet_memory(&std34, sizeof(std34));
        int* std35;
        __VERIFIER_nondet_memory(&std35, sizeof(std35));
        int t36 = *std35;
        struct std__basic_ostream_char__std__char_traits_char__* std37;
        __VERIFIER_nondet_memory(&std37, sizeof(std37));
      for_step29: ;
        int c38 = 0;
        struct std___Rb_tree_const_iterator_int_ std39;
        __VERIFIER_nondet_memory(&std39, sizeof(std39));
        agg_tmp126 = std39;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    int c41 = 0;
    __retval1 = c41;
    int t42 = __retval1;
    int ret_val43 = t42;
    {
      // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::~multiset()
      __VERIFIER_nondet_memory(&myset3, sizeof(myset3));
    }
    return ret_val43;
  int t44 = __retval1;
  return t44;
}

