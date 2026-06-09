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
struct std____pair_base_std___Rb_tree_const_iterator_int___bool_;
struct std____pair_base_std___Rb_tree_iterator_int___bool_;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_int__;
struct std__less_int_;
struct std__pair_std___Rb_tree_const_iterator_int___bool_ { struct std___Rb_tree_const_iterator_int_ first; _Bool second; unsigned char __field2[7]; } __attribute__((packed));
struct std__pair_std___Rb_tree_iterator_int___bool_ { struct std___Rb_tree_iterator_int_ first; _Bool second; unsigned char __field2[7]; } __attribute__((packed));
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__set_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "myset.size() == 0";
char _str_1[100] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-find/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "myset.size() == 5";
char _str_3[9] = "*it == i";
char _str_4[10] = "*it == 20";
char _str_5[10] = "*it == 50";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_6[16] = "myset contains:";
char _str_7[2] = " ";
char _str_8[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_tree.h";
char __PRETTY_FUNCTION____ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiE[210] = "iterator std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>>::erase(const_iterator) [_Key = int, _Val = int, _KeyOfValue = std::_Identity<int>, _Compare = std::less<int>, _Alloc = std::allocator<int>]";
char _str_9[20] = "__position != end()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__set_int__std__less_int___std__allocator_int__ myset2;
  struct std___Rb_tree_const_iterator_int_ it3;
  int i4;
  struct std___Rb_tree_const_iterator_int_ ref_tmp35;
  int ref_tmp46;
  struct std___Rb_tree_const_iterator_int_ agg_tmp27;
  struct std___Rb_tree_const_iterator_int_ agg_tmp38;
  struct std___Rb_tree_const_iterator_int_ agg_tmp49;
  int ref_tmp510;
  struct std___Rb_tree_const_iterator_int_ agg_tmp511;
  struct std___Rb_tree_const_iterator_int_ ref_tmp612;
  struct std___Rb_tree_const_iterator_int_ agg_tmp613;
  struct std___Rb_tree_const_iterator_int_ agg_tmp714;
  int c15 = 0;
  __retval1 = c15;
  // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::set()
  __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    // externalized std:: op: std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    unsigned long std16 = __VERIFIER_nondet_unsigned_long();
    unsigned long c17 = 0;
    _Bool c18 = ((std16 == c17)) ? 1 : 0;
    if (c18) {
    } else {
      char* cast19 = (char*)&(_str);
      char* c20 = _str_1;
      unsigned int c21 = 18;
      char* cast22 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast19, c20, c21, cast22);
    }
      int ref_tmp023;
      struct std__pair_std___Rb_tree_const_iterator_int___bool_ agg_tmp024;
      int c25 = 1;
      i4 = c25;
      while (1) {
        int t27 = i4;
        int c28 = 5;
        _Bool c29 = ((t27 <= c28)) ? 1 : 0;
        if (!c29) break;
        int t30 = i4;
        int c31 = 10;
        int b32 = t30 * c31;
        ref_tmp023 = b32;
        struct std__pair_std___Rb_tree_const_iterator_int___bool_ std33;
        __VERIFIER_nondet_memory(&std33, sizeof(std33));
        agg_tmp024 = std33;
      for_step26: ;
        int t34 = i4;
        int u35 = t34 + 1;
        i4 = u35;
      }
    unsigned long std36 = __VERIFIER_nondet_unsigned_long();
    unsigned long c37 = 5;
    _Bool c38 = ((std36 == c37)) ? 1 : 0;
    if (c38) {
    } else {
      char* cast39 = (char*)&(_str_2);
      char* c40 = _str_1;
      unsigned int c41 = 21;
      char* cast42 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast39, c40, c41, cast42);
    }
    int c43 = 10;
    i4 = c43;
      struct std___Rb_tree_const_iterator_int_ ref_tmp144;
      struct std___Rb_tree_const_iterator_int_ ref_tmp245;
      struct std___Rb_tree_const_iterator_int_ agg_tmp146;
      struct std___Rb_tree_const_iterator_int_ std47;
      __VERIFIER_nondet_memory(&std47, sizeof(std47));
      ref_tmp144 = std47;
      struct std___Rb_tree_const_iterator_int_* std48;
      __VERIFIER_nondet_memory(&std48, sizeof(std48));
      while (1) {
        struct std___Rb_tree_const_iterator_int_ std50;
        __VERIFIER_nondet_memory(&std50, sizeof(std50));
        ref_tmp245 = std50;
        _Bool std51;
        __VERIFIER_nondet_memory(&std51, sizeof(std51));
        _Bool u52 = !std51;
        if (!u52) break;
          int* std53;
          __VERIFIER_nondet_memory(&std53, sizeof(std53));
          int t54 = *std53;
          int t55 = i4;
          _Bool c56 = ((t54 == t55)) ? 1 : 0;
          if (c56) {
          } else {
            char* cast57 = (char*)&(_str_3);
            char* c58 = _str_1;
            unsigned int c59 = 25;
            char* cast60 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast57, c58, c59, cast60);
          }
          int c61 = 10;
          int t62 = i4;
          int b63 = t62 + c61;
          i4 = b63;
      for_step49: ;
        int c64 = 0;
        struct std___Rb_tree_const_iterator_int_ std65;
        __VERIFIER_nondet_memory(&std65, sizeof(std65));
        agg_tmp146 = std65;
      }
    int c66 = 20;
    ref_tmp46 = c66;
    struct std___Rb_tree_const_iterator_int_ std67;
    __VERIFIER_nondet_memory(&std67, sizeof(std67));
    ref_tmp35 = std67;
    struct std___Rb_tree_const_iterator_int_* std68;
    __VERIFIER_nondet_memory(&std68, sizeof(std68));
    int* std69;
    __VERIFIER_nondet_memory(&std69, sizeof(std69));
    int t70 = *std69;
    int c71 = 20;
    _Bool c72 = ((t70 == c71)) ? 1 : 0;
    if (c72) {
    } else {
      char* cast73 = (char*)&(_str_4);
      char* c74 = _str_1;
      unsigned int c75 = 29;
      char* cast76 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast73, c74, c75, cast76);
    }
    agg_tmp27 = it3; // copy
    struct std___Rb_tree_const_iterator_int_ t77 = agg_tmp27;
    struct std___Rb_tree_const_iterator_int_ std78;
    __VERIFIER_nondet_memory(&std78, sizeof(std78));
    agg_tmp38 = std78;
    int c79 = 40;
    ref_tmp510 = c79;
    struct std___Rb_tree_const_iterator_int_ std80;
    __VERIFIER_nondet_memory(&std80, sizeof(std80));
    agg_tmp49 = std80;
    struct std___Rb_tree_const_iterator_int_ t81 = agg_tmp49;
    struct std___Rb_tree_const_iterator_int_ std82;
    __VERIFIER_nondet_memory(&std82, sizeof(std82));
    agg_tmp511 = std82;
    struct std___Rb_tree_const_iterator_int_ std83;
    __VERIFIER_nondet_memory(&std83, sizeof(std83));
    ref_tmp612 = std83;
    struct std___Rb_tree_const_iterator_int_* std84;
    __VERIFIER_nondet_memory(&std84, sizeof(std84));
    int c85 = 0;
    struct std___Rb_tree_const_iterator_int_ std86;
    __VERIFIER_nondet_memory(&std86, sizeof(std86));
    agg_tmp613 = std86;
    int c87 = 0;
    struct std___Rb_tree_const_iterator_int_ std88;
    __VERIFIER_nondet_memory(&std88, sizeof(std88));
    agg_tmp714 = std88;
    int* std89;
    __VERIFIER_nondet_memory(&std89, sizeof(std89));
    int t90 = *std89;
    int c91 = 50;
    _Bool c92 = ((t90 == c91)) ? 1 : 0;
    if (c92) {
    } else {
      char* cast93 = (char*)&(_str_5);
      char* c94 = _str_1;
      unsigned int c95 = 34;
      char* cast96 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast93, c94, c95, cast96);
    }
    char* cast97 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* std98;
    __VERIFIER_nondet_memory(&std98, sizeof(std98));
      struct std___Rb_tree_const_iterator_int_ ref_tmp799;
      struct std___Rb_tree_const_iterator_int_ ref_tmp8100;
      struct std___Rb_tree_const_iterator_int_ agg_tmp8101;
      struct std___Rb_tree_const_iterator_int_ std102;
      __VERIFIER_nondet_memory(&std102, sizeof(std102));
      ref_tmp799 = std102;
      struct std___Rb_tree_const_iterator_int_* std103;
      __VERIFIER_nondet_memory(&std103, sizeof(std103));
      while (1) {
        struct std___Rb_tree_const_iterator_int_ std105;
        __VERIFIER_nondet_memory(&std105, sizeof(std105));
        ref_tmp8100 = std105;
        _Bool std106;
        __VERIFIER_nondet_memory(&std106, sizeof(std106));
        _Bool u107 = !std106;
        if (!u107) break;
        char* cast108 = (char*)&(_str_7);
        struct std__basic_ostream_char__std__char_traits_char__* std109;
        __VERIFIER_nondet_memory(&std109, sizeof(std109));
        int* std110;
        __VERIFIER_nondet_memory(&std110, sizeof(std110));
        int t111 = *std110;
        struct std__basic_ostream_char__std__char_traits_char__* std112;
        __VERIFIER_nondet_memory(&std112, sizeof(std112));
      for_step104: ;
        int c113 = 0;
        struct std___Rb_tree_const_iterator_int_ std114;
        __VERIFIER_nondet_memory(&std114, sizeof(std114));
        agg_tmp8101 = std114;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std115;
    __VERIFIER_nondet_memory(&std115, sizeof(std115));
    int c116 = 0;
    __retval1 = c116;
    int t117 = __retval1;
    int ret_val118 = t117;
    {
      // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::~set()
      __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    }
    return ret_val118;
  int t119 = __retval1;
  return t119;
}

