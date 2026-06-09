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
char _str[18] = "myset.size() == 3";
char _str_1[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multiset/multiset-empty/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[10] = "*it == 10";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[16] = "myset contains:";
char _str_4[2] = " ";
char _str_5[29] = "myset.begin() == myset.end()";
char _str_6[18] = "myset.size() == 0";
char _str_7[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_tree.h";
char __PRETTY_FUNCTION____ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiE[210] = "iterator std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>>::erase(const_iterator) [_Key = int, _Val = int, _KeyOfValue = std::_Identity<int>, _Compare = std::less<int>, _Alloc = std::allocator<int>]";
char _str_8[20] = "__position != end()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__multiset_int__std__less_int___std__allocator_int__ myset2;
  int ref_tmp03;
  struct std___Rb_tree_const_iterator_int_ agg_tmp04;
  int ref_tmp15;
  struct std___Rb_tree_const_iterator_int_ agg_tmp16;
  int ref_tmp27;
  struct std___Rb_tree_const_iterator_int_ agg_tmp28;
  struct std___Rb_tree_const_iterator_int_ it9;
  struct std___Rb_tree_const_iterator_int_ ref_tmp410;
  struct std___Rb_tree_const_iterator_int_ ref_tmp511;
  int c12 = 0;
  __retval1 = c12;
  // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::multiset()
  __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    int c13 = 20;
    ref_tmp03 = c13;
    struct std___Rb_tree_const_iterator_int_ std14;
    __VERIFIER_nondet_memory(&std14, sizeof(std14));
    agg_tmp04 = std14;
    int c15 = 30;
    ref_tmp15 = c15;
    struct std___Rb_tree_const_iterator_int_ std16;
    __VERIFIER_nondet_memory(&std16, sizeof(std16));
    agg_tmp16 = std16;
    int c17 = 10;
    ref_tmp27 = c17;
    struct std___Rb_tree_const_iterator_int_ std18;
    __VERIFIER_nondet_memory(&std18, sizeof(std18));
    agg_tmp28 = std18;
    unsigned long std19 = __VERIFIER_nondet_unsigned_long();
    unsigned long c20 = 3;
    _Bool c21 = ((std19 == c20)) ? 1 : 0;
    if (c21) {
    } else {
      char* cast22 = (char*)&(_str);
      char* c23 = _str_1;
      unsigned int c24 = 20;
      char* cast25 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast22, c23, c24, cast25);
    }
    struct std___Rb_tree_const_iterator_int_ std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    it9 = std26;
    int* std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    int t28 = *std27;
    int c29 = 10;
    _Bool c30 = ((t28 == c29)) ? 1 : 0;
    if (c30) {
    } else {
      char* cast31 = (char*)&(_str_2);
      char* c32 = _str_1;
      unsigned int c33 = 22;
      char* cast34 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast31, c32, c33, cast34);
    }
    char* cast35 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std36;
    __VERIFIER_nondet_memory(&std36, sizeof(std36));
      while (1) {
        _Bool std37;
        __VERIFIER_nondet_memory(&std37, sizeof(std37));
        _Bool u38 = !std37;
        if (!u38) break;
          struct std___Rb_tree_const_iterator_int_ ref_tmp339;
          struct std___Rb_tree_const_iterator_int_ agg_tmp340;
          struct std___Rb_tree_const_iterator_int_ agg_tmp441;
          char* cast42 = (char*)&(_str_4);
          struct std__basic_ostream_char__std__char_traits_char__* std43;
          __VERIFIER_nondet_memory(&std43, sizeof(std43));
          struct std___Rb_tree_const_iterator_int_ std44;
          __VERIFIER_nondet_memory(&std44, sizeof(std44));
          ref_tmp339 = std44;
          int* std45;
          __VERIFIER_nondet_memory(&std45, sizeof(std45));
          int t46 = *std45;
          struct std__basic_ostream_char__std__char_traits_char__* std47;
          __VERIFIER_nondet_memory(&std47, sizeof(std47));
          struct std___Rb_tree_const_iterator_int_ std48;
          __VERIFIER_nondet_memory(&std48, sizeof(std48));
          agg_tmp340 = std48;
          struct std___Rb_tree_const_iterator_int_ t49 = agg_tmp340;
          struct std___Rb_tree_const_iterator_int_ std50;
          __VERIFIER_nondet_memory(&std50, sizeof(std50));
          agg_tmp441 = std50;
      }
    struct std___Rb_tree_const_iterator_int_ std51;
    __VERIFIER_nondet_memory(&std51, sizeof(std51));
    ref_tmp410 = std51;
    struct std___Rb_tree_const_iterator_int_ std52;
    __VERIFIER_nondet_memory(&std52, sizeof(std52));
    ref_tmp511 = std52;
    _Bool std53;
    __VERIFIER_nondet_memory(&std53, sizeof(std53));
    if (std53) {
    } else {
      char* cast54 = (char*)&(_str_5);
      char* c55 = _str_1;
      unsigned int c56 = 29;
      char* cast57 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast54, c55, c56, cast57);
    }
    unsigned long std58 = __VERIFIER_nondet_unsigned_long();
    unsigned long c59 = 0;
    _Bool c60 = ((std58 == c59)) ? 1 : 0;
    if (c60) {
    } else {
      char* cast61 = (char*)&(_str_6);
      char* c62 = _str_1;
      unsigned int c63 = 30;
      char* cast64 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast61, c62, c63, cast64);
    }
    struct std__basic_ostream_char__std__char_traits_char__* std65;
    __VERIFIER_nondet_memory(&std65, sizeof(std65));
    int c66 = 0;
    __retval1 = c66;
    int t67 = __retval1;
    int ret_val68 = t67;
    {
      // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::~multiset()
      __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    }
    return ret_val68;
  int t69 = __retval1;
  return t69;
}

