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
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[16] = "myset contains:";
char _str_1[18] = "myset.size() == 0";
char _str_2[101] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-clear/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[12] = "*it == 1101";
char _str_4[18] = "myset.size() == 1";
char _str_5[18] = "myset.size() == 2";
char _str_6[12] = "*it == 2202";
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
  int ref_tmp04;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ agg_tmp05;
  int ref_tmp16;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ agg_tmp17;
  int ref_tmp28;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ agg_tmp29;
  int ref_tmp510;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ agg_tmp311;
  struct std___Rb_tree_const_iterator_int_ ref_tmp612;
  int ref_tmp713;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ agg_tmp414;
  struct std___Rb_tree_const_iterator_int_ agg_tmp515;
  int c16 = 0;
  __retval1 = c16;
  // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::set()
  __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    // externalized std:: op: std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    int c17 = 100;
    ref_tmp04 = c17;
    struct std__pair_std___Rb_tree_const_iterator_int___bool_ std18;
    __VERIFIER_nondet_memory(&std18, sizeof(std18));
    agg_tmp05 = std18;
    int c19 = 200;
    ref_tmp16 = c19;
    struct std__pair_std___Rb_tree_const_iterator_int___bool_ std20;
    __VERIFIER_nondet_memory(&std20, sizeof(std20));
    agg_tmp17 = std20;
    int c21 = 300;
    ref_tmp28 = c21;
    struct std__pair_std___Rb_tree_const_iterator_int___bool_ std22;
    __VERIFIER_nondet_memory(&std22, sizeof(std22));
    agg_tmp29 = std22;
    char* cast23 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std24;
    __VERIFIER_nondet_memory(&std24, sizeof(std24));
      struct std___Rb_tree_const_iterator_int_ ref_tmp325;
      struct std___Rb_tree_const_iterator_int_ ref_tmp426;
      struct std___Rb_tree_const_iterator_int_ std27;
      __VERIFIER_nondet_memory(&std27, sizeof(std27));
      ref_tmp325 = std27;
      struct std___Rb_tree_const_iterator_int_* std28;
      __VERIFIER_nondet_memory(&std28, sizeof(std28));
      while (1) {
        struct std___Rb_tree_const_iterator_int_ std30;
        __VERIFIER_nondet_memory(&std30, sizeof(std30));
        ref_tmp426 = std30;
        _Bool std31;
        __VERIFIER_nondet_memory(&std31, sizeof(std31));
        _Bool u32 = !std31;
        if (!u32) break;
        // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::clear()
        __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
      for_step29: ;
        struct std___Rb_tree_const_iterator_int_* std33;
        __VERIFIER_nondet_memory(&std33, sizeof(std33));
      }
    unsigned long std34 = __VERIFIER_nondet_unsigned_long();
    unsigned long c35 = 0;
    _Bool c36 = ((std34 == c35)) ? 1 : 0;
    if (c36) {
    } else {
      char* cast37 = (char*)&(_str_1);
      char* c38 = _str_2;
      unsigned int c39 = 27;
      char* cast40 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast37, c38, c39, cast40);
    }
    int c41 = 1101;
    ref_tmp510 = c41;
    struct std__pair_std___Rb_tree_const_iterator_int___bool_ std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    agg_tmp311 = std42;
    struct std___Rb_tree_const_iterator_int_ std43;
    __VERIFIER_nondet_memory(&std43, sizeof(std43));
    ref_tmp612 = std43;
    struct std___Rb_tree_const_iterator_int_* std44;
    __VERIFIER_nondet_memory(&std44, sizeof(std44));
    int* std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
    int t46 = *std45;
    int c47 = 1101;
    _Bool c48 = ((t46 == c47)) ? 1 : 0;
    if (c48) {
    } else {
      char* cast49 = (char*)&(_str_3);
      char* c50 = _str_2;
      unsigned int c51 = 30;
      char* cast52 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast49, c50, c51, cast52);
    }
    unsigned long std53 = __VERIFIER_nondet_unsigned_long();
    unsigned long c54 = 1;
    _Bool c55 = ((std53 == c54)) ? 1 : 0;
    if (c55) {
    } else {
      char* cast56 = (char*)&(_str_4);
      char* c57 = _str_2;
      unsigned int c58 = 31;
      char* cast59 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast56, c57, c58, cast59);
    }
    int c60 = 2202;
    ref_tmp713 = c60;
    struct std__pair_std___Rb_tree_const_iterator_int___bool_ std61;
    __VERIFIER_nondet_memory(&std61, sizeof(std61));
    agg_tmp414 = std61;
    unsigned long std62 = __VERIFIER_nondet_unsigned_long();
    unsigned long c63 = 2;
    _Bool c64 = ((std62 == c63)) ? 1 : 0;
    if (c64) {
    } else {
      char* cast65 = (char*)&(_str_5);
      char* c66 = _str_2;
      unsigned int c67 = 33;
      char* cast68 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast65, c66, c67, cast68);
    }
    int* std69;
    __VERIFIER_nondet_memory(&std69, sizeof(std69));
    int t70 = *std69;
    int c71 = 1101;
    _Bool c72 = ((t70 == c71)) ? 1 : 0;
    if (c72) {
    } else {
      char* cast73 = (char*)&(_str_3);
      char* c74 = _str_2;
      unsigned int c75 = 34;
      char* cast76 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast73, c74, c75, cast76);
    }
    int c77 = 0;
    struct std___Rb_tree_const_iterator_int_ std78;
    __VERIFIER_nondet_memory(&std78, sizeof(std78));
    agg_tmp515 = std78;
    int* std79;
    __VERIFIER_nondet_memory(&std79, sizeof(std79));
    int t80 = *std79;
    int c81 = 2202;
    _Bool c82 = ((t80 == c81)) ? 1 : 0;
    if (c82) {
    } else {
      char* cast83 = (char*)&(_str_6);
      char* c84 = _str_2;
      unsigned int c85 = 36;
      char* cast86 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast83, c84, c85, cast86);
    }
      struct std___Rb_tree_const_iterator_int_ ref_tmp887;
      struct std___Rb_tree_const_iterator_int_ ref_tmp988;
      struct std___Rb_tree_const_iterator_int_ std89;
      __VERIFIER_nondet_memory(&std89, sizeof(std89));
      ref_tmp887 = std89;
      struct std___Rb_tree_const_iterator_int_* std90;
      __VERIFIER_nondet_memory(&std90, sizeof(std90));
      while (1) {
        struct std___Rb_tree_const_iterator_int_ std92;
        __VERIFIER_nondet_memory(&std92, sizeof(std92));
        ref_tmp988 = std92;
        _Bool std93;
        __VERIFIER_nondet_memory(&std93, sizeof(std93));
        _Bool u94 = !std93;
        if (!u94) break;
        struct std__basic_ostream_char__std__char_traits_char__* std95;
        __VERIFIER_nondet_memory(&std95, sizeof(std95));
      for_step91: ;
        struct std___Rb_tree_const_iterator_int_* std96;
        __VERIFIER_nondet_memory(&std96, sizeof(std96));
      }
    int c97 = 0;
    __retval1 = c97;
    int t98 = __retval1;
    int ret_val99 = t98;
    {
      // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::~set()
      __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    }
    return ret_val99;
  int t100 = __retval1;
  return t100;
}

