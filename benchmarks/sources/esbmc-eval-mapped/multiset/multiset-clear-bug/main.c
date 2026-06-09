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

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "myset.size() != 0";
char _str_1[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multiset/multiset-clear-bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[17] = "\nmyset contains:";
char _str_3[2] = " ";
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
  int ref_tmp04;
  struct std___Rb_tree_const_iterator_int_ agg_tmp05;
  int c6 = 0;
  __retval1 = c6;
  // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::multiset()
  __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    // externalized std:: op: std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    int c7 = 100;
    ref_tmp04 = c7;
    struct std___Rb_tree_const_iterator_int_ std8;
    __VERIFIER_nondet_memory(&std8, sizeof(std8));
    agg_tmp05 = std8;
    // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::clear()
    __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    unsigned long std9 = __VERIFIER_nondet_unsigned_long();
    unsigned long c10 = 0;
    _Bool c11 = ((std9 != c10)) ? 1 : 0;
    if (c11) {
    } else {
      char* cast12 = (char*)&(_str);
      char* c13 = _str_1;
      unsigned int c14 = 25;
      char* cast15 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast12, c13, c14, cast15);
    }
    char* cast16 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std17;
    __VERIFIER_nondet_memory(&std17, sizeof(std17));
      struct std___Rb_tree_const_iterator_int_ ref_tmp118;
      struct std___Rb_tree_const_iterator_int_ ref_tmp219;
      struct std___Rb_tree_const_iterator_int_ std20;
      __VERIFIER_nondet_memory(&std20, sizeof(std20));
      ref_tmp118 = std20;
      struct std___Rb_tree_const_iterator_int_* std21;
      __VERIFIER_nondet_memory(&std21, sizeof(std21));
      while (1) {
        struct std___Rb_tree_const_iterator_int_ std23;
        __VERIFIER_nondet_memory(&std23, sizeof(std23));
        ref_tmp219 = std23;
        _Bool std24;
        __VERIFIER_nondet_memory(&std24, sizeof(std24));
        _Bool u25 = !std24;
        if (!u25) break;
        char* cast26 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std27;
        __VERIFIER_nondet_memory(&std27, sizeof(std27));
        int* std28;
        __VERIFIER_nondet_memory(&std28, sizeof(std28));
        int t29 = *std28;
        struct std__basic_ostream_char__std__char_traits_char__* std30;
        __VERIFIER_nondet_memory(&std30, sizeof(std30));
      for_step22: ;
        struct std___Rb_tree_const_iterator_int_* std31;
        __VERIFIER_nondet_memory(&std31, sizeof(std31));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    int c33 = 0;
    __retval1 = c33;
    int t34 = __retval1;
    int ret_val35 = t34;
    {
      // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::~multiset()
      __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    }
    return ret_val35;
  int t36 = __retval1;
  return t36;
}

