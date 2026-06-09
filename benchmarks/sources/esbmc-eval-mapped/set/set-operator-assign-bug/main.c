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
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Reuse_or_alloc_node { struct std___Rb_tree_node_base* _M_root; struct std___Rb_tree_node_base* _M_nodes; struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* _M_t; };
struct std___Rb_tree_iterator_int_ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_std__less_int__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_int_;
struct std____new_allocator_std___Rb_tree_node_int__;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_int__;
struct std__binary_function_int__int__bool_;
struct std__integral_constant_bool__true_ { unsigned char __field0; };
struct std__less_int_;
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__set_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

struct std__set_int__std__less_int___std__allocator_int__ __const_main_ref_tmp0;
int __const_main_myints[5] = {12, 82, 37, 64, 15};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[19] = "second.size() == 0";
char _str_1[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-operator-assign-bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[19] = "second.size() == 5";
char _str_3[10] = "*it == 12";
char _str_4[10] = "*it == 15";
char _str_5[10] = "*it != 37";
char _str_6[10] = "*it == 64";
char _str_7[10] = "*it != 82";
char _str_8[18] = "first.size() == 0";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_9[16] = "Size of first: ";
char _str_10[17] = "Size of second: ";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  int myints2[5];
  struct std__set_int__std__less_int___std__allocator_int__ first3;
  struct std__set_int__std__less_int___std__allocator_int__ second4;
  struct std___Rb_tree_const_iterator_int_ it5;
  struct std__set_int__std__less_int___std__allocator_int__ ref_tmp06;
  struct std__set_int__std__less_int___std__allocator_int__* tmp_exprcleanup7;
  int c8 = 0;
  __retval1 = c8;
  // array copy
  __builtin_memcpy(myints2, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
  int* cast9 = (int*)&(myints2);
  int* cast10 = (int*)&(myints2);
  int c11 = 5;
  int* ptr12 = &(cast10)[c11];
  // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::set<int*>(int*, int*)
  __VERIFIER_nondet_memory(&first3, sizeof(first3));
  __VERIFIER_nondet_memory(cast9, sizeof(*cast9));
  __VERIFIER_nondet_memory(ptr12, sizeof(*ptr12));
    // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::set()
    __VERIFIER_nondet_memory(&second4, sizeof(second4));
      unsigned long std13 = __VERIFIER_nondet_unsigned_long();
      unsigned long c14 = 0;
      _Bool c15 = ((std13 == c14)) ? 1 : 0;
      if (c15) {
      } else {
        char* cast16 = (char*)&(_str);
        char* c17 = _str_1;
        unsigned int c18 = 18;
        char* cast19 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast16, c17, c18, cast19);
      }
      struct std__set_int__std__less_int___std__allocator_int__* std20;
      __VERIFIER_nondet_memory(&std20, sizeof(std20));
      unsigned long std21 = __VERIFIER_nondet_unsigned_long();
      unsigned long c22 = 5;
      _Bool c23 = ((std21 == c22)) ? 1 : 0;
      if (c23) {
      } else {
        char* cast24 = (char*)&(_str_2);
        char* c25 = _str_1;
        unsigned int c26 = 20;
        char* cast27 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast24, c25, c26, cast27);
      }
      struct std___Rb_tree_const_iterator_int_ std28;
      __VERIFIER_nondet_memory(&std28, sizeof(std28));
      it5 = std28;
      int* std29;
      __VERIFIER_nondet_memory(&std29, sizeof(std29));
      int t30 = *std29;
      int c31 = 12;
      _Bool c32 = ((t30 == c31)) ? 1 : 0;
      if (c32) {
      } else {
        char* cast33 = (char*)&(_str_3);
        char* c34 = _str_1;
        unsigned int c35 = 22;
        char* cast36 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast33, c34, c35, cast36);
      }
      struct std___Rb_tree_const_iterator_int_* std37;
      __VERIFIER_nondet_memory(&std37, sizeof(std37));
      int* std38;
      __VERIFIER_nondet_memory(&std38, sizeof(std38));
      int t39 = *std38;
      int c40 = 15;
      _Bool c41 = ((t39 == c40)) ? 1 : 0;
      if (c41) {
      } else {
        char* cast42 = (char*)&(_str_4);
        char* c43 = _str_1;
        unsigned int c44 = 24;
        char* cast45 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast42, c43, c44, cast45);
      }
      struct std___Rb_tree_const_iterator_int_* std46;
      __VERIFIER_nondet_memory(&std46, sizeof(std46));
      int* std47;
      __VERIFIER_nondet_memory(&std47, sizeof(std47));
      int t48 = *std47;
      int c49 = 37;
      _Bool c50 = ((t48 != c49)) ? 1 : 0;
      if (c50) {
      } else {
        char* cast51 = (char*)&(_str_5);
        char* c52 = _str_1;
        unsigned int c53 = 26;
        char* cast54 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast51, c52, c53, cast54);
      }
      struct std___Rb_tree_const_iterator_int_* std55;
      __VERIFIER_nondet_memory(&std55, sizeof(std55));
      int* std56;
      __VERIFIER_nondet_memory(&std56, sizeof(std56));
      int t57 = *std56;
      int c58 = 64;
      _Bool c59 = ((t57 == c58)) ? 1 : 0;
      if (c59) {
      } else {
        char* cast60 = (char*)&(_str_6);
        char* c61 = _str_1;
        unsigned int c62 = 28;
        char* cast63 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast60, c61, c62, cast63);
      }
      struct std___Rb_tree_const_iterator_int_* std64;
      __VERIFIER_nondet_memory(&std64, sizeof(std64));
      int* std65;
      __VERIFIER_nondet_memory(&std65, sizeof(std65));
      int t66 = *std65;
      int c67 = 82;
      _Bool c68 = ((t66 != c67)) ? 1 : 0;
      if (c68) {
      } else {
        char* cast69 = (char*)&(_str_7);
        char* c70 = _str_1;
        unsigned int c71 = 30;
        char* cast72 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast69, c70, c71, cast72);
      }
      ref_tmp06 = *&__const_main_ref_tmp0; // copy
      // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::set()
      __VERIFIER_nondet_memory(&ref_tmp06, sizeof(ref_tmp06));
        struct std__set_int__std__less_int___std__allocator_int__* std73;
        __VERIFIER_nondet_memory(&std73, sizeof(std73));
        tmp_exprcleanup7 = std73;
      {
        // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::~set()
        __VERIFIER_nondet_memory(&ref_tmp06, sizeof(ref_tmp06));
      }
      struct std__set_int__std__less_int___std__allocator_int__* t74 = tmp_exprcleanup7;
      unsigned long std75 = __VERIFIER_nondet_unsigned_long();
      unsigned long c76 = 0;
      _Bool c77 = ((std75 == c76)) ? 1 : 0;
      if (c77) {
      } else {
        char* cast78 = (char*)&(_str_8);
        char* c79 = _str_1;
        unsigned int c80 = 32;
        char* cast81 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast78, c79, c80, cast81);
      }
      char* cast82 = (char*)&(_str_9);
      struct std__basic_ostream_char__std__char_traits_char__* std83;
      __VERIFIER_nondet_memory(&std83, sizeof(std83));
      unsigned long std84 = __VERIFIER_nondet_unsigned_long();
      int cast85 = (int)std84;
      struct std__basic_ostream_char__std__char_traits_char__* std86;
      __VERIFIER_nondet_memory(&std86, sizeof(std86));
      struct std__basic_ostream_char__std__char_traits_char__* std87;
      __VERIFIER_nondet_memory(&std87, sizeof(std87));
      char* cast88 = (char*)&(_str_10);
      struct std__basic_ostream_char__std__char_traits_char__* std89;
      __VERIFIER_nondet_memory(&std89, sizeof(std89));
      unsigned long std90 = __VERIFIER_nondet_unsigned_long();
      int cast91 = (int)std90;
      struct std__basic_ostream_char__std__char_traits_char__* std92;
      __VERIFIER_nondet_memory(&std92, sizeof(std92));
      struct std__basic_ostream_char__std__char_traits_char__* std93;
      __VERIFIER_nondet_memory(&std93, sizeof(std93));
      int c94 = 0;
      __retval1 = c94;
      int t95 = __retval1;
      int ret_val96 = t95;
      {
        // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::~set()
        __VERIFIER_nondet_memory(&second4, sizeof(second4));
      }
      {
        // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::~set()
        __VERIFIER_nondet_memory(&first3, sizeof(first3));
      }
      return ret_val96;
  int t97 = __retval1;
  return t97;
}

