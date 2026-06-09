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
char _str[13] = "*itlow == 40";
char _str_1[117] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multiset/multiset-upper_bound/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[12] = "*itup == 70";
char _str_3[18] = "myset.size() == 6";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[16] = "myset contains:";
char _str_5[2] = " ";
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
  struct std___Rb_tree_const_iterator_int_ itlow4;
  struct std___Rb_tree_const_iterator_int_ itup5;
  struct std___Rb_tree_const_iterator_int_ ref_tmp16;
  int ref_tmp27;
  struct std___Rb_tree_const_iterator_int_ ref_tmp38;
  int ref_tmp49;
  struct std___Rb_tree_const_iterator_int_ agg_tmp110;
  struct std___Rb_tree_const_iterator_int_ agg_tmp211;
  struct std___Rb_tree_const_iterator_int_ agg_tmp312;
  int c13 = 0;
  __retval1 = c13;
  // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::multiset()
  __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    // externalized std:: op: std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    // externalized std:: op: std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator()
    __VERIFIER_nondet_memory(&itlow4, sizeof(itlow4));
    // externalized std:: op: std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator()
    __VERIFIER_nondet_memory(&itup5, sizeof(itup5));
      int i14;
      int ref_tmp015;
      struct std___Rb_tree_const_iterator_int_ agg_tmp016;
      int c17 = 1;
      i14 = c17;
      while (1) {
        int t19 = i14;
        int c20 = 10;
        _Bool c21 = ((t19 < c20)) ? 1 : 0;
        if (!c21) break;
        int t22 = i14;
        int c23 = 10;
        int b24 = t22 * c23;
        ref_tmp015 = b24;
        struct std___Rb_tree_const_iterator_int_ std25;
        __VERIFIER_nondet_memory(&std25, sizeof(std25));
        agg_tmp016 = std25;
      for_step18: ;
        int t26 = i14;
        int u27 = t26 + 1;
        i14 = u27;
      }
    int c28 = 30;
    ref_tmp27 = c28;
    struct std___Rb_tree_const_iterator_int_ std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    ref_tmp16 = std29;
    struct std___Rb_tree_const_iterator_int_* std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
    int* std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    int t32 = *std31;
    int c33 = 40;
    _Bool c34 = ((t32 == c33)) ? 1 : 0;
    if (c34) {
    } else {
      char* cast35 = (char*)&(_str);
      char* c36 = _str_1;
      unsigned int c37 = 21;
      char* cast38 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast35, c36, c37, cast38);
    }
    int c39 = 60;
    ref_tmp49 = c39;
    struct std___Rb_tree_const_iterator_int_ std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    ref_tmp38 = std40;
    struct std___Rb_tree_const_iterator_int_* std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
    int* std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    int t43 = *std42;
    int c44 = 70;
    _Bool c45 = ((t43 == c44)) ? 1 : 0;
    if (c45) {
    } else {
      char* cast46 = (char*)&(_str_2);
      char* c47 = _str_1;
      unsigned int c48 = 23;
      char* cast49 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast46, c47, c48, cast49);
    }
    agg_tmp110 = itlow4; // copy
    agg_tmp211 = itup5; // copy
    struct std___Rb_tree_const_iterator_int_ t50 = agg_tmp110;
    struct std___Rb_tree_const_iterator_int_ t51 = agg_tmp211;
    struct std___Rb_tree_const_iterator_int_ std52;
    __VERIFIER_nondet_memory(&std52, sizeof(std52));
    agg_tmp312 = std52;
    unsigned long std53 = __VERIFIER_nondet_unsigned_long();
    unsigned long c54 = 6;
    _Bool c55 = ((std53 == c54)) ? 1 : 0;
    if (c55) {
    } else {
      char* cast56 = (char*)&(_str_3);
      char* c57 = _str_1;
      unsigned int c58 = 26;
      char* cast59 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast56, c57, c58, cast59);
    }
    char* cast60 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std61;
    __VERIFIER_nondet_memory(&std61, sizeof(std61));
      struct std___Rb_tree_const_iterator_int_ ref_tmp562;
      struct std___Rb_tree_const_iterator_int_ ref_tmp663;
      struct std___Rb_tree_const_iterator_int_ agg_tmp464;
      struct std___Rb_tree_const_iterator_int_ std65;
      __VERIFIER_nondet_memory(&std65, sizeof(std65));
      ref_tmp562 = std65;
      struct std___Rb_tree_const_iterator_int_* std66;
      __VERIFIER_nondet_memory(&std66, sizeof(std66));
      while (1) {
        struct std___Rb_tree_const_iterator_int_ std68;
        __VERIFIER_nondet_memory(&std68, sizeof(std68));
        ref_tmp663 = std68;
        _Bool std69;
        __VERIFIER_nondet_memory(&std69, sizeof(std69));
        _Bool u70 = !std69;
        if (!u70) break;
        char* cast71 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* std72;
        __VERIFIER_nondet_memory(&std72, sizeof(std72));
        int* std73;
        __VERIFIER_nondet_memory(&std73, sizeof(std73));
        int t74 = *std73;
        struct std__basic_ostream_char__std__char_traits_char__* std75;
        __VERIFIER_nondet_memory(&std75, sizeof(std75));
      for_step67: ;
        int c76 = 0;
        struct std___Rb_tree_const_iterator_int_ std77;
        __VERIFIER_nondet_memory(&std77, sizeof(std77));
        agg_tmp464 = std77;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std78;
    __VERIFIER_nondet_memory(&std78, sizeof(std78));
    int c79 = 0;
    __retval1 = c79;
    int t80 = __retval1;
    int ret_val81 = t80;
    {
      // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::~multiset()
      __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    }
    return ret_val81;
  int t82 = __retval1;
  return t82;
}

