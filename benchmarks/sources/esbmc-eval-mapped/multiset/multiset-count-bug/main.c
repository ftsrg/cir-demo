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
struct std____pair_base_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_int__;
struct std__bidirectional_iterator_tag { unsigned char __field0; };
struct std__input_iterator_tag { unsigned char __field0; };
struct std__less_int_;
struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ { struct std___Rb_tree_const_iterator_int_ first; struct std___Rb_tree_const_iterator_int_ second; };
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std__ios_base;
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__multiset_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int __const_main_b[4] = {3, 6, 9, 12};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[20] = "myset.count(3) == 1";
char _str_1[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multiset/multiset-count-bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[20] = "myset.count(6) == 1";
char _str_3[20] = "myset.count(9) != 1";
char _str_4[21] = "myset.count(12) == 1";
char _str_5[20] = "myset.count(3) != 1";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_6[26] = " is an element of myset.\n";
char _str_7[30] = " is not an element of myset.\n";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  int b2[4];
  struct std__multiset_int__std__less_int___std__allocator_int__ myset3;
  int i4;
  int ref_tmp05;
  int ref_tmp16;
  int ref_tmp27;
  int ref_tmp38;
  int ref_tmp49;
  struct std___Rb_tree_const_iterator_int_ agg_tmp010;
  int ref_tmp511;
  struct std___Rb_tree_const_iterator_int_ agg_tmp112;
  int ref_tmp613;
  struct std___Rb_tree_const_iterator_int_ agg_tmp214;
  int ref_tmp715;
  int c16 = 0;
  __retval1 = c16;
  // array copy
  __builtin_memcpy(b2, __const_main_b, (unsigned long)4 * sizeof(__const_main_b[0]));
  int* cast17 = (int*)&(b2);
  int* cast18 = (int*)&(b2);
  int c19 = 4;
  int* ptr20 = &(cast18)[c19];
  // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::multiset<int*>(int*, int*)
  __VERIFIER_nondet_memory(&myset3, sizeof(myset3));
  __VERIFIER_nondet_memory(cast17, sizeof(*cast17));
  __VERIFIER_nondet_memory(ptr20, sizeof(*ptr20));
    int c21 = 3;
    ref_tmp05 = c21;
    unsigned long std22 = __VERIFIER_nondet_unsigned_long();
    unsigned long c23 = 1;
    _Bool c24 = ((std22 == c23)) ? 1 : 0;
    if (c24) {
    } else {
      char* cast25 = (char*)&(_str);
      char* c26 = _str_1;
      unsigned int c27 = 21;
      char* cast28 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast25, c26, c27, cast28);
    }
    int c29 = 6;
    ref_tmp16 = c29;
    unsigned long std30 = __VERIFIER_nondet_unsigned_long();
    unsigned long c31 = 1;
    _Bool c32 = ((std30 == c31)) ? 1 : 0;
    if (c32) {
    } else {
      char* cast33 = (char*)&(_str_2);
      char* c34 = _str_1;
      unsigned int c35 = 22;
      char* cast36 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast33, c34, c35, cast36);
    }
    int c37 = 9;
    ref_tmp27 = c37;
    unsigned long std38 = __VERIFIER_nondet_unsigned_long();
    unsigned long c39 = 1;
    _Bool c40 = ((std38 != c39)) ? 1 : 0;
    if (c40) {
    } else {
      char* cast41 = (char*)&(_str_3);
      char* c42 = _str_1;
      unsigned int c43 = 23;
      char* cast44 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast41, c42, c43, cast44);
    }
    int c45 = 12;
    ref_tmp38 = c45;
    unsigned long std46 = __VERIFIER_nondet_unsigned_long();
    unsigned long c47 = 1;
    _Bool c48 = ((std46 == c47)) ? 1 : 0;
    if (c48) {
    } else {
      char* cast49 = (char*)&(_str_4);
      char* c50 = _str_1;
      unsigned int c51 = 24;
      char* cast52 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast49, c50, c51, cast52);
    }
    int c53 = 3;
    ref_tmp49 = c53;
    struct std___Rb_tree_const_iterator_int_ std54;
    __VERIFIER_nondet_memory(&std54, sizeof(std54));
    agg_tmp010 = std54;
    int c55 = 3;
    ref_tmp511 = c55;
    struct std___Rb_tree_const_iterator_int_ std56;
    __VERIFIER_nondet_memory(&std56, sizeof(std56));
    agg_tmp112 = std56;
    int c57 = 3;
    ref_tmp613 = c57;
    struct std___Rb_tree_const_iterator_int_ std58;
    __VERIFIER_nondet_memory(&std58, sizeof(std58));
    agg_tmp214 = std58;
    int c59 = 3;
    ref_tmp715 = c59;
    unsigned long std60 = __VERIFIER_nondet_unsigned_long();
    unsigned long c61 = 1;
    _Bool c62 = ((std60 != c61)) ? 1 : 0;
    if (c62) {
    } else {
      char* cast63 = (char*)&(_str_5);
      char* c64 = _str_1;
      unsigned int c65 = 28;
      char* cast66 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast63, c64, c65, cast66);
    }
      int c67 = 0;
      i4 = c67;
      while (1) {
        int t69 = i4;
        int c70 = 10;
        _Bool c71 = ((t69 < c70)) ? 1 : 0;
        if (!c71) break;
          int t72 = i4;
          struct std__basic_ostream_char__std__char_traits_char__* std73;
          __VERIFIER_nondet_memory(&std73, sizeof(std73));
            unsigned long std74 = __VERIFIER_nondet_unsigned_long();
            unsigned long c75 = 0;
            _Bool c76 = ((std74 > c75)) ? 1 : 0;
            if (c76) {
              char* cast77 = (char*)&(_str_6);
              struct std__basic_ostream_char__std__char_traits_char__* std78;
              __VERIFIER_nondet_memory(&std78, sizeof(std78));
            } else {
              char* cast79 = (char*)&(_str_7);
              struct std__basic_ostream_char__std__char_traits_char__* std80;
              __VERIFIER_nondet_memory(&std80, sizeof(std80));
            }
      for_step68: ;
        int t81 = i4;
        int u82 = t81 + 1;
        i4 = u82;
      }
    int c83 = 0;
    __retval1 = c83;
    int t84 = __retval1;
    int ret_val85 = t84;
    {
      // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::~multiset()
      __VERIFIER_nondet_memory(&myset3, sizeof(myset3));
    }
    return ret_val85;
  int t86 = __retval1;
  return t86;
}

