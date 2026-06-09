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

// Struct definitions (auto-parsed)
struct __gnu_cxx____aligned_membuf_std__pair_const_char__int__ { unsigned char _M_storage[8]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Auto_node { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___* _M_t; struct std___Rb_tree_node_std__pair_const_char__int__* _M_node; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Reuse_or_alloc_node { struct std___Rb_tree_node_base* _M_root; struct std___Rb_tree_node_base* _M_nodes; struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___* _M_t; };
struct std___Rb_tree_const_iterator_std__pair_const_char__int__ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_iterator_std__pair_const_char__int__ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_std__less_char__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_std__pair_const_char__int__;
struct std___Select1st_std__pair_const_char__int__ { unsigned char __field0; };
struct std____new_allocator_std___Rb_tree_node_std__pair_const_char__int___;
struct std____pair_base_char__int_;
struct std____pair_base_const_char__int_;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_std__pair_const_char__int___;
struct std__binary_function_char__char__bool_;
struct std__less_char_;
struct std__pair_char__int_ { char first; int second; };
struct std__pair_const_char__int_;
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std__ios_base;
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ { struct std___Rb_tree_key_compare_std__less_char__ __field0; struct std___Rb_tree_header __field1; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ _M_impl; };
struct std__multimap_char__int__std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ _M_t; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[11] = "foo != bar";
char _str_1[125] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multimap/multimap_operator_assign_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[14] = "Size of foo: ";
char _str_3[14] = "Size of bar: ";
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
  struct std__multimap_char__int__std__less_char___std__allocator_std__pair_const_char__int___ foo2;
  struct std__multimap_char__int__std__less_char___std__allocator_std__pair_const_char__int___ bar3;
  struct std__pair_char__int_ ref_tmp04;
  char ref_tmp15;
  int ref_tmp26;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp07;
  struct std__pair_char__int_ ref_tmp38;
  char ref_tmp49;
  int ref_tmp510;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp111;
  struct std__pair_char__int_ ref_tmp612;
  char ref_tmp713;
  int ref_tmp814;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp215;
  struct std__pair_char__int_ ref_tmp916;
  char ref_tmp1017;
  int ref_tmp1118;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp319;
  int c20 = 0;
  __retval1 = c20;
  // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::multimap()
  __VERIFIER_nondet_memory(&foo2, sizeof(foo2));
    // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::multimap()
    __VERIFIER_nondet_memory(&bar3, sizeof(bar3));
      char c21 = 120;
      ref_tmp15 = c21;
      int c22 = 32;
      ref_tmp26 = c22;
      struct std__pair_char__int_ std23;
      __VERIFIER_nondet_memory(&std23, sizeof(std23));
      ref_tmp04 = std23;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ std24;
      __VERIFIER_nondet_memory(&std24, sizeof(std24));
      agg_tmp07 = std24;
      char c25 = 121;
      ref_tmp49 = c25;
      int c26 = 64;
      ref_tmp510 = c26;
      struct std__pair_char__int_ std27;
      __VERIFIER_nondet_memory(&std27, sizeof(std27));
      ref_tmp38 = std27;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ std28;
      __VERIFIER_nondet_memory(&std28, sizeof(std28));
      agg_tmp111 = std28;
      char c29 = 121;
      ref_tmp713 = c29;
      int c30 = 96;
      ref_tmp814 = c30;
      struct std__pair_char__int_ std31;
      __VERIFIER_nondet_memory(&std31, sizeof(std31));
      ref_tmp612 = std31;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ std32;
      __VERIFIER_nondet_memory(&std32, sizeof(std32));
      agg_tmp215 = std32;
      char c33 = 122;
      ref_tmp1017 = c33;
      int c34 = 128;
      ref_tmp1118 = c34;
      struct std__pair_char__int_ std35;
      __VERIFIER_nondet_memory(&std35, sizeof(std35));
      ref_tmp916 = std35;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ std36;
      __VERIFIER_nondet_memory(&std36, sizeof(std36));
      agg_tmp319 = std36;
      struct std__multimap_char__int__std__less_char___std__allocator_std__pair_const_char__int___* std37;
      __VERIFIER_nondet_memory(&std37, sizeof(std37));
      _Bool std38;
      __VERIFIER_nondet_memory(&std38, sizeof(std38));
      _Bool u39 = !std38;
      if (u39) {
      } else {
        char* cast40 = (char*)&(_str);
        char* c41 = _str_1;
        unsigned int c42 = 24;
        char* cast43 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast40, c41, c42, cast43);
      }
      // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::clear()
      __VERIFIER_nondet_memory(&foo2, sizeof(foo2));
      char* cast44 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* std45;
      __VERIFIER_nondet_memory(&std45, sizeof(std45));
      unsigned long std46 = __VERIFIER_nondet_unsigned_long();
      struct std__basic_ostream_char__std__char_traits_char__* std47;
      __VERIFIER_nondet_memory(&std47, sizeof(std47));
      char c48 = 10;
      struct std__basic_ostream_char__std__char_traits_char__* std49;
      __VERIFIER_nondet_memory(&std49, sizeof(std49));
      char* cast50 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* std51;
      __VERIFIER_nondet_memory(&std51, sizeof(std51));
      unsigned long std52 = __VERIFIER_nondet_unsigned_long();
      struct std__basic_ostream_char__std__char_traits_char__* std53;
      __VERIFIER_nondet_memory(&std53, sizeof(std53));
      char c54 = 10;
      struct std__basic_ostream_char__std__char_traits_char__* std55;
      __VERIFIER_nondet_memory(&std55, sizeof(std55));
      int c56 = 0;
      __retval1 = c56;
      int t57 = __retval1;
      int ret_val58 = t57;
      {
        // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~multimap()
        __VERIFIER_nondet_memory(&bar3, sizeof(bar3));
      }
      {
        // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~multimap()
        __VERIFIER_nondet_memory(&foo2, sizeof(foo2));
      }
      return ret_val58;
  int t59 = __retval1;
  return t59;
}

