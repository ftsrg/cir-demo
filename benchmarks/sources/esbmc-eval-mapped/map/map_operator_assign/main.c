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
struct __gnu_cxx____aligned_membuf_std__pair_const_char__int__ { unsigned char _M_storage[8]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Head_base_0UL__char_____false_ { char* _M_head_impl; };
struct std___Index_tuple_0UL_ { unsigned char __field0; };
struct std___Index_tuple__ { unsigned char __field0; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Auto_node { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___* _M_t; struct std___Rb_tree_node_std__pair_const_char__int__* _M_node; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Reuse_or_alloc_node { struct std___Rb_tree_node_base* _M_root; struct std___Rb_tree_node_base* _M_nodes; struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___* _M_t; };
struct std___Rb_tree_const_iterator_std__pair_const_char__int__ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_iterator_std__pair_const_char__int__ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_std__less_char__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_std__pair_const_char__int__;
struct std___Select1st_std__pair_const_char__int__ { unsigned char __field0; };
struct std___Tuple_impl_0UL__char____ { struct std___Head_base_0UL__char_____false_ __field0; };
struct std____new_allocator_std___Rb_tree_node_std__pair_const_char__int___;
struct std____pair_base_const_char__int_;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_std__pair_const_char__int___;
struct std__binary_function_char__char__bool_;
struct std__integral_constant_bool__true_ { unsigned char __field0; };
struct std__less_char_ { unsigned char __field0; };
struct std__pair_const_char__int_;
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std__piecewise_construct_t { unsigned char __field0; };
struct std__tuple__ { unsigned char __field0; };
struct std__tuple_char____ { struct std___Tuple_impl_0UL__char____ __field0; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ { struct std___Rb_tree_key_compare_std__less_char__ __field0; struct std___Rb_tree_header __field1; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ _M_impl; };
struct std__map_char__int__std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ _M_t; };

struct std__map_char__int__std__less_char___std__allocator_std__pair_const_char__int___ __const_main_ref_tmp6;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[17] = "second['x'] == 8";
char _str_1[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/map/map_operator_assign/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "second['y'] == 16";
char _str_3[18] = "second['z'] == 32";
char _str_4[18] = "first.size() == 0";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[16] = "Size of first: ";
char _str_6[17] = "Size of second: ";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
struct std__piecewise_construct_t _ZSt19piecewise_construct;
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__map_char__int__std__less_char___std__allocator_std__pair_const_char__int___ first2;
  struct std__map_char__int__std__less_char___std__allocator_std__pair_const_char__int___ second3;
  char ref_tmp04;
  char ref_tmp15;
  char ref_tmp26;
  char ref_tmp37;
  char ref_tmp48;
  char ref_tmp59;
  struct std__map_char__int__std__less_char___std__allocator_std__pair_const_char__int___ ref_tmp610;
  struct std__map_char__int__std__less_char___std__allocator_std__pair_const_char__int___* tmp_exprcleanup11;
  int c12 = 0;
  __retval1 = c12;
  // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::map()
  __VERIFIER_nondet_memory(&first2, sizeof(first2));
    // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::map()
    __VERIFIER_nondet_memory(&second3, sizeof(second3));
      int c13 = 8;
      char c14 = 120;
      ref_tmp04 = c14;
      int* std15;
      __VERIFIER_nondet_memory(&std15, sizeof(std15));
      *std15 = c13;
      int c16 = 16;
      char c17 = 121;
      ref_tmp15 = c17;
      int* std18;
      __VERIFIER_nondet_memory(&std18, sizeof(std18));
      *std18 = c16;
      int c19 = 32;
      char c20 = 122;
      ref_tmp26 = c20;
      int* std21;
      __VERIFIER_nondet_memory(&std21, sizeof(std21));
      *std21 = c19;
      struct std__map_char__int__std__less_char___std__allocator_std__pair_const_char__int___* std22;
      __VERIFIER_nondet_memory(&std22, sizeof(std22));
      char c23 = 120;
      ref_tmp37 = c23;
      int* std24;
      __VERIFIER_nondet_memory(&std24, sizeof(std24));
      int t25 = *std24;
      int c26 = 8;
      _Bool c27 = ((t25 == c26)) ? 1 : 0;
      if (c27) {
      } else {
        char* cast28 = (char*)&(_str);
        char* c29 = _str_1;
        unsigned int c30 = 24;
        char* cast31 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast28, c29, c30, cast31);
      }
      char c32 = 121;
      ref_tmp48 = c32;
      int* std33;
      __VERIFIER_nondet_memory(&std33, sizeof(std33));
      int t34 = *std33;
      int c35 = 16;
      _Bool c36 = ((t34 == c35)) ? 1 : 0;
      if (c36) {
      } else {
        char* cast37 = (char*)&(_str_2);
        char* c38 = _str_1;
        unsigned int c39 = 25;
        char* cast40 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast37, c38, c39, cast40);
      }
      char c41 = 122;
      ref_tmp59 = c41;
      int* std42;
      __VERIFIER_nondet_memory(&std42, sizeof(std42));
      int t43 = *std42;
      int c44 = 32;
      _Bool c45 = ((t43 == c44)) ? 1 : 0;
      if (c45) {
      } else {
        char* cast46 = (char*)&(_str_3);
        char* c47 = _str_1;
        unsigned int c48 = 26;
        char* cast49 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast46, c47, c48, cast49);
      }
      ref_tmp610 = *&__const_main_ref_tmp6; // copy
      // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::map()
      __VERIFIER_nondet_memory(&ref_tmp610, sizeof(ref_tmp610));
        struct std__map_char__int__std__less_char___std__allocator_std__pair_const_char__int___* std50;
        __VERIFIER_nondet_memory(&std50, sizeof(std50));
        tmp_exprcleanup11 = std50;
      {
        // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~map()
        __VERIFIER_nondet_memory(&ref_tmp610, sizeof(ref_tmp610));
      }
      struct std__map_char__int__std__less_char___std__allocator_std__pair_const_char__int___* t51 = tmp_exprcleanup11;
      unsigned long std52 = __VERIFIER_nondet_unsigned_long();
      unsigned long c53 = 0;
      _Bool c54 = ((std52 == c53)) ? 1 : 0;
      if (c54) {
      } else {
        char* cast55 = (char*)&(_str_4);
        char* c56 = _str_1;
        unsigned int c57 = 29;
        char* cast58 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast55, c56, c57, cast58);
      }
      char* cast59 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* std60;
      __VERIFIER_nondet_memory(&std60, sizeof(std60));
      unsigned long std61 = __VERIFIER_nondet_unsigned_long();
      int cast62 = (int)std61;
      struct std__basic_ostream_char__std__char_traits_char__* std63;
      __VERIFIER_nondet_memory(&std63, sizeof(std63));
      struct std__basic_ostream_char__std__char_traits_char__* std64;
      __VERIFIER_nondet_memory(&std64, sizeof(std64));
      char* cast65 = (char*)&(_str_6);
      struct std__basic_ostream_char__std__char_traits_char__* std66;
      __VERIFIER_nondet_memory(&std66, sizeof(std66));
      unsigned long std67 = __VERIFIER_nondet_unsigned_long();
      int cast68 = (int)std67;
      struct std__basic_ostream_char__std__char_traits_char__* std69;
      __VERIFIER_nondet_memory(&std69, sizeof(std69));
      struct std__basic_ostream_char__std__char_traits_char__* std70;
      __VERIFIER_nondet_memory(&std70, sizeof(std70));
      int c71 = 0;
      __retval1 = c71;
      int t72 = __retval1;
      int ret_val73 = t72;
      {
        // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~map()
        __VERIFIER_nondet_memory(&second3, sizeof(second3));
      }
      {
        // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~map()
        __VERIFIER_nondet_memory(&first2, sizeof(first2));
      }
      return ret_val73;
  int t74 = __retval1;
  return t74;
}

