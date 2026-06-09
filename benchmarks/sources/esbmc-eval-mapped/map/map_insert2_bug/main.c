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
struct std____pair_base_char__int_;
struct std____pair_base_const_char__int_;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_std__pair_const_char__int___;
struct std__less_char_ { unsigned char __field0; };
struct std__pair_char__int_ { char first; int second; };
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

int __const_main_intarray[4] = {100, 300, 400, 200};
char __const_main_chararray[4] = {97, 98, 99, 122};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[17] = "mymap contains:\n";
char _str_1[5] = " => ";
char _str_2[28] = "(*it).first == chararray[i]";
char _str_3[107] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/map/map_insert2_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[28] = "(*it).second != intarray[i]";
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
  char chararray4[4];
  int intarray5[4];
  char ref_tmp06;
  char ref_tmp17;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp28;
  struct std___Rb_tree_const_iterator_std__pair_const_char__int__ agg_tmp09;
  struct std__pair_char__int_ ref_tmp310;
  char ref_tmp411;
  int ref_tmp512;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp113;
  struct std___Rb_tree_const_iterator_std__pair_const_char__int__ agg_tmp214;
  struct std__pair_char__int_ ref_tmp615;
  char ref_tmp716;
  int ref_tmp817;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp318;
  int i19;
  int c20 = 0;
  __retval1 = c20;
  // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::map()
  __VERIFIER_nondet_memory(&mymap2, sizeof(mymap2));
    // externalized std:: op: std::_Rb_tree_iterator<std::pair<char const, int> >::_Rb_tree_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    // array copy
    __builtin_memcpy(chararray4, __const_main_chararray, (unsigned long)4 * sizeof(__const_main_chararray[0]));
    // array copy
    __builtin_memcpy(intarray5, __const_main_intarray, (unsigned long)4 * sizeof(__const_main_intarray[0]));
    int c21 = 100;
    char c22 = 97;
    ref_tmp06 = c22;
    int* std23;
    __VERIFIER_nondet_memory(&std23, sizeof(std23));
    *std23 = c21;
    int c24 = 200;
    char c25 = 122;
    ref_tmp17 = c25;
    int* std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    *std26 = c24;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    ref_tmp28 = std27;
    struct std___Rb_tree_iterator_std__pair_const_char__int__* std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    // externalized std:: op: std::_Rb_tree_const_iterator<std::pair<char const, int> >::_Rb_tree_const_iterator(std::_Rb_tree_iterator<std::pair<char const, int> > const&)
    __VERIFIER_nondet_memory(&agg_tmp09, sizeof(agg_tmp09));
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    char c29 = 98;
    ref_tmp411 = c29;
    int c30 = 300;
    ref_tmp512 = c30;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp310, sizeof(ref_tmp310));
    __VERIFIER_nondet_memory(&ref_tmp411, sizeof(ref_tmp411));
    __VERIFIER_nondet_memory(&ref_tmp512, sizeof(ref_tmp512));
    struct std___Rb_tree_const_iterator_std__pair_const_char__int__ t31 = agg_tmp09;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    agg_tmp113 = std32;
    // externalized std:: op: std::_Rb_tree_const_iterator<std::pair<char const, int> >::_Rb_tree_const_iterator(std::_Rb_tree_iterator<std::pair<char const, int> > const&)
    __VERIFIER_nondet_memory(&agg_tmp214, sizeof(agg_tmp214));
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    char c33 = 99;
    ref_tmp716 = c33;
    int c34 = 400;
    ref_tmp817 = c34;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp615, sizeof(ref_tmp615));
    __VERIFIER_nondet_memory(&ref_tmp716, sizeof(ref_tmp716));
    __VERIFIER_nondet_memory(&ref_tmp817, sizeof(ref_tmp817));
    struct std___Rb_tree_const_iterator_std__pair_const_char__int__ t35 = agg_tmp214;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std36;
    __VERIFIER_nondet_memory(&std36, sizeof(std36));
    agg_tmp318 = std36;
    int c37 = 0;
    i19 = c37;
    char* cast38 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std39;
    __VERIFIER_nondet_memory(&std39, sizeof(std39));
      struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp940;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp1041;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp442;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ std43;
      __VERIFIER_nondet_memory(&std43, sizeof(std43));
      ref_tmp940 = std43;
      struct std___Rb_tree_iterator_std__pair_const_char__int__* std44;
      __VERIFIER_nondet_memory(&std44, sizeof(std44));
      while (1) {
        struct std___Rb_tree_iterator_std__pair_const_char__int__ std46;
        __VERIFIER_nondet_memory(&std46, sizeof(std46));
        ref_tmp1041 = std46;
        _Bool std47;
        __VERIFIER_nondet_memory(&std47, sizeof(std47));
        _Bool u48 = !std47;
        if (!u48) break;
          struct std__pair_const_char__int_* std49;
          __VERIFIER_nondet_memory(&std49, sizeof(std49));
          char t50 = std49->first;
          struct std__basic_ostream_char__std__char_traits_char__* std51;
          __VERIFIER_nondet_memory(&std51, sizeof(std51));
          char* cast52 = (char*)&(_str_1);
          struct std__basic_ostream_char__std__char_traits_char__* std53;
          __VERIFIER_nondet_memory(&std53, sizeof(std53));
          struct std__pair_const_char__int_* std54;
          __VERIFIER_nondet_memory(&std54, sizeof(std54));
          int t55 = std54->second;
          struct std__basic_ostream_char__std__char_traits_char__* std56;
          __VERIFIER_nondet_memory(&std56, sizeof(std56));
          struct std__basic_ostream_char__std__char_traits_char__* std57;
          __VERIFIER_nondet_memory(&std57, sizeof(std57));
          struct std__pair_const_char__int_* std58;
          __VERIFIER_nondet_memory(&std58, sizeof(std58));
          char t59 = std58->first;
          int cast60 = (int)t59;
          int t61 = i19;
          long cast62 = (long)t61;
          char t63 = chararray4[cast62];
          int cast64 = (int)t63;
          _Bool c65 = ((cast60 == cast64)) ? 1 : 0;
          if (c65) {
          } else {
            char* cast66 = (char*)&(_str_2);
            char* c67 = _str_3;
            unsigned int c68 = 33;
            char* cast69 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast66, c67, c68, cast69);
          }
          struct std__pair_const_char__int_* std70;
          __VERIFIER_nondet_memory(&std70, sizeof(std70));
          int t71 = std70->second;
          int t72 = i19;
          long cast73 = (long)t72;
          int t74 = intarray5[cast73];
          _Bool c75 = ((t71 != t74)) ? 1 : 0;
          if (c75) {
          } else {
            char* cast76 = (char*)&(_str_4);
            char* c77 = _str_3;
            unsigned int c78 = 34;
            char* cast79 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast76, c77, c78, cast79);
          }
          int t80 = i19;
          int u81 = t80 + 1;
          i19 = u81;
      for_step45: ;
        int c82 = 0;
        struct std___Rb_tree_iterator_std__pair_const_char__int__ std83;
        __VERIFIER_nondet_memory(&std83, sizeof(std83));
        agg_tmp442 = std83;
      }
    int c84 = 0;
    __retval1 = c84;
    int t85 = __retval1;
    int ret_val86 = t85;
    {
      // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~map()
      __VERIFIER_nondet_memory(&mymap2, sizeof(mymap2));
    }
    return ret_val86;
  int t87 = __retval1;
  return t87;
}

