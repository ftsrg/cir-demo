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

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[19] = "(*it).first == 'c'";
char _str_1[99] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/map/map_end/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[20] = "(*it).second == 300";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[5] = " => ";
struct std__piecewise_construct_t _ZSt19piecewise_construct;
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__map_char__int__std__less_char___std__allocator_std__pair_const_char__int___ mymap2;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ it3;
  char ref_tmp04;
  char ref_tmp15;
  char ref_tmp26;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp37;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp08;
  int c9 = 0;
  __retval1 = c9;
  // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::map()
  __VERIFIER_nondet_memory(&mymap2, sizeof(mymap2));
    // externalized std:: op: std::_Rb_tree_iterator<std::pair<char const, int> >::_Rb_tree_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    int c10 = 100;
    char c11 = 98;
    ref_tmp04 = c11;
    int* std12;
    __VERIFIER_nondet_memory(&std12, sizeof(std12));
    *std12 = c10;
    int c13 = 200;
    char c14 = 97;
    ref_tmp15 = c14;
    int* std15;
    __VERIFIER_nondet_memory(&std15, sizeof(std15));
    *std15 = c13;
    int c16 = 300;
    char c17 = 99;
    ref_tmp26 = c17;
    int* std18;
    __VERIFIER_nondet_memory(&std18, sizeof(std18));
    *std18 = c16;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std19;
    __VERIFIER_nondet_memory(&std19, sizeof(std19));
    ref_tmp37 = std19;
    struct std___Rb_tree_iterator_std__pair_const_char__int__* std20;
    __VERIFIER_nondet_memory(&std20, sizeof(std20));
    int c21 = 0;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std22;
    __VERIFIER_nondet_memory(&std22, sizeof(std22));
    agg_tmp08 = std22;
    struct std__pair_const_char__int_* std23;
    __VERIFIER_nondet_memory(&std23, sizeof(std23));
    char t24 = std23->first;
    int cast25 = (int)t24;
    int c26 = 99;
    _Bool c27 = ((cast25 == c26)) ? 1 : 0;
    if (c27) {
    } else {
      char* cast28 = (char*)&(_str);
      char* c29 = _str_1;
      unsigned int c30 = 24;
      char* cast31 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast28, c29, c30, cast31);
    }
    struct std__pair_const_char__int_* std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    int t33 = std32->second;
    int c34 = 300;
    _Bool c35 = ((t33 == c34)) ? 1 : 0;
    if (c35) {
    } else {
      char* cast36 = (char*)&(_str_2);
      char* c37 = _str_1;
      unsigned int c38 = 25;
      char* cast39 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast36, c37, c38, cast39);
    }
      struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp440;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp541;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp142;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ std43;
      __VERIFIER_nondet_memory(&std43, sizeof(std43));
      ref_tmp440 = std43;
      struct std___Rb_tree_iterator_std__pair_const_char__int__* std44;
      __VERIFIER_nondet_memory(&std44, sizeof(std44));
      while (1) {
        struct std___Rb_tree_iterator_std__pair_const_char__int__ std46;
        __VERIFIER_nondet_memory(&std46, sizeof(std46));
        ref_tmp541 = std46;
        _Bool std47;
        __VERIFIER_nondet_memory(&std47, sizeof(std47));
        _Bool u48 = !std47;
        if (!u48) break;
        struct std__pair_const_char__int_* std49;
        __VERIFIER_nondet_memory(&std49, sizeof(std49));
        char t50 = std49->first;
        struct std__basic_ostream_char__std__char_traits_char__* std51;
        __VERIFIER_nondet_memory(&std51, sizeof(std51));
        char* cast52 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std53;
        __VERIFIER_nondet_memory(&std53, sizeof(std53));
        struct std__pair_const_char__int_* std54;
        __VERIFIER_nondet_memory(&std54, sizeof(std54));
        int t55 = std54->second;
        struct std__basic_ostream_char__std__char_traits_char__* std56;
        __VERIFIER_nondet_memory(&std56, sizeof(std56));
        struct std__basic_ostream_char__std__char_traits_char__* std57;
        __VERIFIER_nondet_memory(&std57, sizeof(std57));
      for_step45: ;
        int c58 = 0;
        struct std___Rb_tree_iterator_std__pair_const_char__int__ std59;
        __VERIFIER_nondet_memory(&std59, sizeof(std59));
        agg_tmp142 = std59;
      }
    int c60 = 0;
    __retval1 = c60;
    int t61 = __retval1;
    int ret_val62 = t61;
    {
      // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~map()
      __VERIFIER_nondet_memory(&mymap2, sizeof(mymap2));
    }
    return ret_val62;
  int t63 = __retval1;
  return t63;
}

