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
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Alloc_node { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___* _M_t; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Auto_node { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___* _M_t; struct std___Rb_tree_node_std__pair_const_char__int__* _M_node; };
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
struct std__less_char_;
struct std__pair_char__int_ { char first; int second; };
struct std__pair_const_char__int_;
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ { struct std___Rb_tree_key_compare_std__less_char__ __field0; struct std___Rb_tree_header __field1; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ _M_impl; };
struct std__multimap_char__int__std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ _M_t; };

char _str[28] = "anothermultimap.size() == 2";
char _str_1[113] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multimap/multimap_insert3/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[17] = "it->first == 'a'";
char _str_3[18] = "it->second == 100";
char _str_4[17] = "it->first == 'b'";
char _str_5[17] = "it->second == 75";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__multimap_char__int__std__less_char___std__allocator_std__pair_const_char__int___ mymultimap2;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ it3;
  struct std__pair_char__int_ ref_tmp04;
  char ref_tmp15;
  int ref_tmp26;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp07;
  struct std__pair_char__int_ ref_tmp38;
  char ref_tmp49;
  int ref_tmp510;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp111;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp612;
  struct std__pair_char__int_ ref_tmp713;
  char ref_tmp814;
  int ref_tmp915;
  struct std___Rb_tree_const_iterator_std__pair_const_char__int__ agg_tmp216;
  struct std__pair_char__int_ ref_tmp1017;
  char ref_tmp1118;
  int ref_tmp1219;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp320;
  struct std__multimap_char__int__std__less_char___std__allocator_std__pair_const_char__int___ anothermultimap21;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp422;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp523;
  char ref_tmp1324;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp1425;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp626;
  int c27 = 0;
  __retval1 = c27;
  // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::multimap()
  __VERIFIER_nondet_memory(&mymultimap2, sizeof(mymultimap2));
    // externalized std:: op: std::_Rb_tree_iterator<std::pair<char const, int> >::_Rb_tree_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    char c28 = 97;
    ref_tmp15 = c28;
    int c29 = 100;
    ref_tmp26 = c29;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    __VERIFIER_nondet_memory(&ref_tmp26, sizeof(ref_tmp26));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
    agg_tmp07 = std30;
    char c31 = 122;
    ref_tmp49 = c31;
    int c32 = 150;
    ref_tmp510 = c32;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp38, sizeof(ref_tmp38));
    __VERIFIER_nondet_memory(&ref_tmp49, sizeof(ref_tmp49));
    __VERIFIER_nondet_memory(&ref_tmp510, sizeof(ref_tmp510));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    agg_tmp111 = std33;
    char c34 = 98;
    ref_tmp814 = c34;
    int c35 = 75;
    ref_tmp915 = c35;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp713, sizeof(ref_tmp713));
    __VERIFIER_nondet_memory(&ref_tmp814, sizeof(ref_tmp814));
    __VERIFIER_nondet_memory(&ref_tmp915, sizeof(ref_tmp915));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std36;
    __VERIFIER_nondet_memory(&std36, sizeof(std36));
    ref_tmp612 = std36;
    struct std___Rb_tree_iterator_std__pair_const_char__int__* std37;
    __VERIFIER_nondet_memory(&std37, sizeof(std37));
    // externalized std:: op: std::_Rb_tree_const_iterator<std::pair<char const, int> >::_Rb_tree_const_iterator(std::_Rb_tree_iterator<std::pair<char const, int> > const&)
    __VERIFIER_nondet_memory(&agg_tmp216, sizeof(agg_tmp216));
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    char c38 = 99;
    ref_tmp1118 = c38;
    int c39 = 300;
    ref_tmp1219 = c39;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp1017, sizeof(ref_tmp1017));
    __VERIFIER_nondet_memory(&ref_tmp1118, sizeof(ref_tmp1118));
    __VERIFIER_nondet_memory(&ref_tmp1219, sizeof(ref_tmp1219));
    struct std___Rb_tree_const_iterator_std__pair_const_char__int__ t40 = agg_tmp216;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
    agg_tmp320 = std41;
    // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::multimap()
    __VERIFIER_nondet_memory(&anothermultimap21, sizeof(anothermultimap21));
      struct std___Rb_tree_iterator_std__pair_const_char__int__ std42;
      __VERIFIER_nondet_memory(&std42, sizeof(std42));
      agg_tmp422 = std42;
      char c43 = 99;
      ref_tmp1324 = c43;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ std44;
      __VERIFIER_nondet_memory(&std44, sizeof(std44));
      agg_tmp523 = std44;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ t45 = agg_tmp422;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ t46 = agg_tmp523;
      // externalized std:: op: void std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::insert<std::_Rb_tree_iterator<std::pair<char const, int> > >(std::_Rb_tree_iterator<std::pair<char const, int> >, std::_Rb_tree_iterator<std::pair<char const, int> >)
      __VERIFIER_nondet_memory(&anothermultimap21, sizeof(anothermultimap21));
      struct std___Rb_tree_iterator_std__pair_const_char__int__ std47;
      __VERIFIER_nondet_memory(&std47, sizeof(std47));
      ref_tmp1425 = std47;
      struct std___Rb_tree_iterator_std__pair_const_char__int__* std48;
      __VERIFIER_nondet_memory(&std48, sizeof(std48));
      unsigned long std49 = __VERIFIER_nondet_unsigned_long();
      unsigned long c50 = 2;
      _Bool c51 = ((std49 == c50)) ? 1 : 0;
      if (c51) {
      } else {
        char* cast52 = (char*)&(_str);
        char* c53 = _str_1;
        unsigned int c54 = 31;
        char* cast55 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast52, c53, c54, cast55);
      }
      struct std__pair_const_char__int_* std56;
      __VERIFIER_nondet_memory(&std56, sizeof(std56));
      char t57 = std56->first;
      int cast58 = (int)t57;
      int c59 = 97;
      _Bool c60 = ((cast58 == c59)) ? 1 : 0;
      if (c60) {
      } else {
        char* cast61 = (char*)&(_str_2);
        char* c62 = _str_1;
        unsigned int c63 = 32;
        char* cast64 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast61, c62, c63, cast64);
      }
      struct std__pair_const_char__int_* std65;
      __VERIFIER_nondet_memory(&std65, sizeof(std65));
      int t66 = std65->second;
      int c67 = 100;
      _Bool c68 = ((t66 == c67)) ? 1 : 0;
      if (c68) {
      } else {
        char* cast69 = (char*)&(_str_3);
        char* c70 = _str_1;
        unsigned int c71 = 33;
        char* cast72 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast69, c70, c71, cast72);
      }
      int c73 = 0;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ std74;
      __VERIFIER_nondet_memory(&std74, sizeof(std74));
      agg_tmp626 = std74;
      struct std__pair_const_char__int_* std75;
      __VERIFIER_nondet_memory(&std75, sizeof(std75));
      char t76 = std75->first;
      int cast77 = (int)t76;
      int c78 = 98;
      _Bool c79 = ((cast77 == c78)) ? 1 : 0;
      if (c79) {
      } else {
        char* cast80 = (char*)&(_str_4);
        char* c81 = _str_1;
        unsigned int c82 = 35;
        char* cast83 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast80, c81, c82, cast83);
      }
      struct std__pair_const_char__int_* std84;
      __VERIFIER_nondet_memory(&std84, sizeof(std84));
      int t85 = std84->second;
      int c86 = 75;
      _Bool c87 = ((t85 == c86)) ? 1 : 0;
      if (c87) {
      } else {
        char* cast88 = (char*)&(_str_5);
        char* c89 = _str_1;
        unsigned int c90 = 36;
        char* cast91 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast88, c89, c90, cast91);
      }
      int c92 = 0;
      __retval1 = c92;
      int t93 = __retval1;
      int ret_val94 = t93;
      {
        // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~multimap()
        __VERIFIER_nondet_memory(&anothermultimap21, sizeof(anothermultimap21));
      }
      {
        // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~multimap()
        __VERIFIER_nondet_memory(&mymultimap2, sizeof(mymultimap2));
      }
      return ret_val94;
  int t95 = __retval1;
  return t95;
}

