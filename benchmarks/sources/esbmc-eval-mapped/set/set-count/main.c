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
struct std__ios_base;
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__set_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[20] = "myset.count(3) == 1";
char _str_1[101] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-count/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[20] = "myset.count(6) == 1";
char _str_3[20] = "myset.count(9) == 1";
char _str_4[21] = "myset.count(12) == 1";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[26] = " is an element of myset.\n";
char _str_6[30] = " is not an element of myset.\n";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__set_int__std__less_int___std__allocator_int__ myset2;
  int i3;
  int ref_tmp14;
  int ref_tmp25;
  int ref_tmp36;
  int ref_tmp47;
  int ref_tmp58;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ agg_tmp19;
  int ref_tmp610;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ agg_tmp211;
  int ref_tmp712;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ agg_tmp313;
  int ref_tmp814;
  int c15 = 0;
  __retval1 = c15;
  // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::set()
  __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
      int ref_tmp016;
      struct std__pair_std___Rb_tree_const_iterator_int___bool_ agg_tmp017;
      int c18 = 1;
      i3 = c18;
      while (1) {
        int t20 = i3;
        int c21 = 5;
        _Bool c22 = ((t20 < c21)) ? 1 : 0;
        if (!c22) break;
        int t23 = i3;
        int c24 = 3;
        int b25 = t23 * c24;
        ref_tmp016 = b25;
        struct std__pair_std___Rb_tree_const_iterator_int___bool_ std26;
        __VERIFIER_nondet_memory(&std26, sizeof(std26));
        agg_tmp017 = std26;
      for_step19: ;
        int t27 = i3;
        int u28 = t27 + 1;
        i3 = u28;
      }
    int c29 = 3;
    ref_tmp14 = c29;
    unsigned long std30 = __VERIFIER_nondet_unsigned_long();
    unsigned long c31 = 1;
    _Bool c32 = ((std30 == c31)) ? 1 : 0;
    if (c32) {
    } else {
      char* cast33 = (char*)&(_str);
      char* c34 = _str_1;
      unsigned int c35 = 20;
      char* cast36 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast33, c34, c35, cast36);
    }
    int c37 = 6;
    ref_tmp25 = c37;
    unsigned long std38 = __VERIFIER_nondet_unsigned_long();
    unsigned long c39 = 1;
    _Bool c40 = ((std38 == c39)) ? 1 : 0;
    if (c40) {
    } else {
      char* cast41 = (char*)&(_str_2);
      char* c42 = _str_1;
      unsigned int c43 = 21;
      char* cast44 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast41, c42, c43, cast44);
    }
    int c45 = 9;
    ref_tmp36 = c45;
    unsigned long std46 = __VERIFIER_nondet_unsigned_long();
    unsigned long c47 = 1;
    _Bool c48 = ((std46 == c47)) ? 1 : 0;
    if (c48) {
    } else {
      char* cast49 = (char*)&(_str_3);
      char* c50 = _str_1;
      unsigned int c51 = 22;
      char* cast52 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast49, c50, c51, cast52);
    }
    int c53 = 12;
    ref_tmp47 = c53;
    unsigned long std54 = __VERIFIER_nondet_unsigned_long();
    unsigned long c55 = 1;
    _Bool c56 = ((std54 == c55)) ? 1 : 0;
    if (c56) {
    } else {
      char* cast57 = (char*)&(_str_4);
      char* c58 = _str_1;
      unsigned int c59 = 23;
      char* cast60 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast57, c58, c59, cast60);
    }
    int c61 = 3;
    ref_tmp58 = c61;
    struct std__pair_std___Rb_tree_const_iterator_int___bool_ std62;
    __VERIFIER_nondet_memory(&std62, sizeof(std62));
    agg_tmp19 = std62;
    int c63 = 3;
    ref_tmp610 = c63;
    struct std__pair_std___Rb_tree_const_iterator_int___bool_ std64;
    __VERIFIER_nondet_memory(&std64, sizeof(std64));
    agg_tmp211 = std64;
    int c65 = 3;
    ref_tmp712 = c65;
    struct std__pair_std___Rb_tree_const_iterator_int___bool_ std66;
    __VERIFIER_nondet_memory(&std66, sizeof(std66));
    agg_tmp313 = std66;
    int c67 = 3;
    ref_tmp814 = c67;
    unsigned long std68 = __VERIFIER_nondet_unsigned_long();
    unsigned long c69 = 1;
    _Bool c70 = ((std68 == c69)) ? 1 : 0;
    if (c70) {
    } else {
      char* cast71 = (char*)&(_str);
      char* c72 = _str_1;
      unsigned int c73 = 27;
      char* cast74 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast71, c72, c73, cast74);
    }
      int c75 = 0;
      i3 = c75;
      while (1) {
        int t77 = i3;
        int c78 = 10;
        _Bool c79 = ((t77 < c78)) ? 1 : 0;
        if (!c79) break;
          int t80 = i3;
          struct std__basic_ostream_char__std__char_traits_char__* std81;
          __VERIFIER_nondet_memory(&std81, sizeof(std81));
            unsigned long std82 = __VERIFIER_nondet_unsigned_long();
            unsigned long c83 = 0;
            _Bool c84 = ((std82 > c83)) ? 1 : 0;
            if (c84) {
              char* cast85 = (char*)&(_str_5);
              struct std__basic_ostream_char__std__char_traits_char__* std86;
              __VERIFIER_nondet_memory(&std86, sizeof(std86));
            } else {
              char* cast87 = (char*)&(_str_6);
              struct std__basic_ostream_char__std__char_traits_char__* std88;
              __VERIFIER_nondet_memory(&std88, sizeof(std88));
            }
      for_step76: ;
        int t89 = i3;
        int u90 = t89 + 1;
        i3 = u90;
      }
    int c91 = 0;
    __retval1 = c91;
    int t92 = __retval1;
    int ret_val93 = t92;
    {
      // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::~set()
      __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    }
    return ret_val93;
  int t94 = __retval1;
  return t94;
}

