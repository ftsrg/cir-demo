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
struct classcomp { unsigned char __field0; };
struct std___Head_base_0UL__char_____false_ { char* _M_head_impl; };
struct std___Index_tuple_0UL_ { unsigned char __field0; };
struct std___Index_tuple__ { unsigned char __field0; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____classcomp__std__allocator_std__pair_const_char__int______Auto_node { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____classcomp__std__allocator_std__pair_const_char__int___* _M_t; struct std___Rb_tree_node_std__pair_const_char__int__* _M_node; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Alloc_node { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___* _M_t; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Auto_node { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___* _M_t; struct std___Rb_tree_node_std__pair_const_char__int__* _M_node; };
struct std___Rb_tree_const_iterator_std__pair_const_char__int__ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_iterator_std__pair_const_char__int__ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_bool_____char__char__ { void* _M_key_compare; };
struct std___Rb_tree_key_compare_classcomp_ { unsigned char __field0; };
struct std___Rb_tree_key_compare_std__less_char__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_std__pair_const_char__int__;
struct std___Select1st_std__pair_const_char__int__ { unsigned char __field0; };
struct std___Tuple_impl_0UL__char____ { struct std___Head_base_0UL__char_____false_ __field0; };
struct std____new_allocator_std___Rb_tree_node_std__pair_const_char__int___;
struct std____new_allocator_std__pair_const_char__int__;
struct std____pair_base_const_char__int_;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_std__pair_const_char__int___ { unsigned char __field0; };
struct std__allocator_std__pair_const_char__int__ { unsigned char __field0; };
struct std__less_char_ { unsigned char __field0; };
struct std__pair_const_char__int_;
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std__piecewise_construct_t { unsigned char __field0; };
struct std__tuple__ { unsigned char __field0; };
struct std__tuple_char____ { struct std___Tuple_impl_0UL__char____ __field0; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____bool_____char__char___std__allocator_std__pair_const_char__int______Rb_tree_impl_bool_____char__char___true_ { struct std___Rb_tree_key_compare_bool_____char__char__ __field0; struct std___Rb_tree_header __field1; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____classcomp__std__allocator_std__pair_const_char__int______Rb_tree_impl_classcomp__true_ { struct std___Rb_tree_key_compare_classcomp_ __field0; struct std___Rb_tree_header __field1; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ { struct std___Rb_tree_key_compare_std__less_char__ __field0; struct std___Rb_tree_header __field1; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____bool_____char__char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____bool_____char__char___std__allocator_std__pair_const_char__int______Rb_tree_impl_bool_____char__char___true_ _M_impl; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____classcomp__std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____classcomp__std__allocator_std__pair_const_char__int______Rb_tree_impl_classcomp__true_ _M_impl; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ _M_impl; };
struct std__map_char__int__bool_____char__char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____bool_____char__char___std__allocator_std__pair_const_char__int___ _M_t; };
struct std__map_char__int__classcomp__std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____classcomp__std__allocator_std__pair_const_char__int___ _M_t; };
struct std__map_char__int__std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ _M_t; };

char _str[16] = "second['a']==10";
char _str_1[107] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/map/map_constructor/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[16] = "second['b']==30";
char _str_3[16] = "second['c']==50";
char _str_4[16] = "second['d']==70";
char _str_5[15] = "third['a']==10";
char _str_6[15] = "third['b']==30";
char _str_7[15] = "third['c']==50";
char _str_8[15] = "third['d']==70";
char _str_9[15] = "fourth['a']==0";
char _str_10[15] = "fourth['b']==0";
char _str_11[15] = "fourth['c']==0";
char _str_12[15] = "fourth['d']==0";
struct std__piecewise_construct_t _ZSt19piecewise_construct;
_Bool fncomp(char p0, char p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z6fncompcc
_Bool fncomp(char v0, char v1) {
bb2:
  char lhs3;
  char rhs4;
  _Bool __retval5;
  lhs3 = v0;
  rhs4 = v1;
  char t6 = lhs3;
  int cast7 = (int)t6;
  char t8 = rhs4;
  int cast9 = (int)t8;
  _Bool c10 = ((cast7 < cast9)) ? 1 : 0;
  __retval5 = c10;
  _Bool t11 = __retval5;
  return t11;
}

// function: main
int main() {
bb12:
  int __retval13;
  struct std__map_char__int__std__less_char___std__allocator_std__pair_const_char__int___ first14;
  char ref_tmp015;
  char ref_tmp116;
  char ref_tmp217;
  char ref_tmp318;
  struct std__map_char__int__std__less_char___std__allocator_std__pair_const_char__int___ second19;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp020;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp121;
  char ref_tmp422;
  char ref_tmp523;
  char ref_tmp624;
  char ref_tmp725;
  struct std__map_char__int__std__less_char___std__allocator_std__pair_const_char__int___ third26;
  char ref_tmp827;
  char ref_tmp928;
  char ref_tmp1029;
  char ref_tmp1130;
  struct std__map_char__int__classcomp__std__allocator_std__pair_const_char__int___ fourth31;
  char ref_tmp1232;
  char ref_tmp1333;
  char ref_tmp1434;
  char ref_tmp1535;
  void* fn_pt36;
  struct std__map_char__int__bool_____char__char___std__allocator_std__pair_const_char__int___ fifth37;
  struct std__allocator_std__pair_const_char__int__ ref_tmp1638;
  int c39 = 0;
  __retval13 = c39;
  // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::map()
  __VERIFIER_nondet_memory(&first14, sizeof(first14));
    int c40 = 10;
    char c41 = 97;
    ref_tmp015 = c41;
    int* std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    *std42 = c40;
    int c43 = 30;
    char c44 = 98;
    ref_tmp116 = c44;
    int* std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
    *std45 = c43;
    int c46 = 50;
    char c47 = 99;
    ref_tmp217 = c47;
    int* std48;
    __VERIFIER_nondet_memory(&std48, sizeof(std48));
    *std48 = c46;
    int c49 = 70;
    char c50 = 100;
    ref_tmp318 = c50;
    int* std51;
    __VERIFIER_nondet_memory(&std51, sizeof(std51));
    *std51 = c49;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std52;
    __VERIFIER_nondet_memory(&std52, sizeof(std52));
    agg_tmp020 = std52;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std53;
    __VERIFIER_nondet_memory(&std53, sizeof(std53));
    agg_tmp121 = std53;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ t54 = agg_tmp020;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ t55 = agg_tmp121;
    // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::map<std::_Rb_tree_iterator<std::pair<char const, int> > >(std::_Rb_tree_iterator<std::pair<char const, int> >, std::_Rb_tree_iterator<std::pair<char const, int> >)
    __VERIFIER_nondet_memory(&second19, sizeof(second19));
      char c56 = 97;
      ref_tmp422 = c56;
      int* std57;
      __VERIFIER_nondet_memory(&std57, sizeof(std57));
      int t58 = *std57;
      int c59 = 10;
      _Bool c60 = ((t58 == c59)) ? 1 : 0;
      if (c60) {
      } else {
        char* cast61 = (char*)&(_str);
        char* c62 = _str_1;
        unsigned int c63 = 31;
        char* cast64 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast61, c62, c63, cast64);
      }
      char c65 = 98;
      ref_tmp523 = c65;
      int* std66;
      __VERIFIER_nondet_memory(&std66, sizeof(std66));
      int t67 = *std66;
      int c68 = 30;
      _Bool c69 = ((t67 == c68)) ? 1 : 0;
      if (c69) {
      } else {
        char* cast70 = (char*)&(_str_2);
        char* c71 = _str_1;
        unsigned int c72 = 32;
        char* cast73 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast70, c71, c72, cast73);
      }
      char c74 = 99;
      ref_tmp624 = c74;
      int* std75;
      __VERIFIER_nondet_memory(&std75, sizeof(std75));
      int t76 = *std75;
      int c77 = 50;
      _Bool c78 = ((t76 == c77)) ? 1 : 0;
      if (c78) {
      } else {
        char* cast79 = (char*)&(_str_3);
        char* c80 = _str_1;
        unsigned int c81 = 33;
        char* cast82 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast79, c80, c81, cast82);
      }
      char c83 = 100;
      ref_tmp725 = c83;
      int* std84;
      __VERIFIER_nondet_memory(&std84, sizeof(std84));
      int t85 = *std84;
      int c86 = 70;
      _Bool c87 = ((t85 == c86)) ? 1 : 0;
      if (c87) {
      } else {
        char* cast88 = (char*)&(_str_4);
        char* c89 = _str_1;
        unsigned int c90 = 34;
        char* cast91 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast88, c89, c90, cast91);
      }
      // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::map(std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > > const&)
      __VERIFIER_nondet_memory(&third26, sizeof(third26));
      __VERIFIER_nondet_memory(&second19, sizeof(second19));
        char c92 = 97;
        ref_tmp827 = c92;
        int* std93;
        __VERIFIER_nondet_memory(&std93, sizeof(std93));
        int t94 = *std93;
        int c95 = 10;
        _Bool c96 = ((t94 == c95)) ? 1 : 0;
        if (c96) {
        } else {
          char* cast97 = (char*)&(_str_5);
          char* c98 = _str_1;
          unsigned int c99 = 38;
          char* cast100 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast97, c98, c99, cast100);
        }
        char c101 = 98;
        ref_tmp928 = c101;
        int* std102;
        __VERIFIER_nondet_memory(&std102, sizeof(std102));
        int t103 = *std102;
        int c104 = 30;
        _Bool c105 = ((t103 == c104)) ? 1 : 0;
        if (c105) {
        } else {
          char* cast106 = (char*)&(_str_6);
          char* c107 = _str_1;
          unsigned int c108 = 39;
          char* cast109 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast106, c107, c108, cast109);
        }
        char c110 = 99;
        ref_tmp1029 = c110;
        int* std111;
        __VERIFIER_nondet_memory(&std111, sizeof(std111));
        int t112 = *std111;
        int c113 = 50;
        _Bool c114 = ((t112 == c113)) ? 1 : 0;
        if (c114) {
        } else {
          char* cast115 = (char*)&(_str_7);
          char* c116 = _str_1;
          unsigned int c117 = 40;
          char* cast118 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast115, c116, c117, cast118);
        }
        char c119 = 100;
        ref_tmp1130 = c119;
        int* std120;
        __VERIFIER_nondet_memory(&std120, sizeof(std120));
        int t121 = *std120;
        int c122 = 70;
        _Bool c123 = ((t121 == c122)) ? 1 : 0;
        if (c123) {
        } else {
          char* cast124 = (char*)&(_str_8);
          char* c125 = _str_1;
          unsigned int c126 = 41;
          char* cast127 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast124, c125, c126, cast127);
        }
        // externalized std:: op: std::map<char, int, classcomp, std::allocator<std::pair<char const, int> > >::map()
        __VERIFIER_nondet_memory(&fourth31, sizeof(fourth31));
          char c128 = 97;
          ref_tmp1232 = c128;
          int* std129;
          __VERIFIER_nondet_memory(&std129, sizeof(std129));
          int t130 = *std129;
          int c131 = 0;
          _Bool c132 = ((t130 == c131)) ? 1 : 0;
          if (c132) {
          } else {
            char* cast133 = (char*)&(_str_9);
            char* c134 = _str_1;
            unsigned int c135 = 44;
            char* cast136 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast133, c134, c135, cast136);
          }
          char c137 = 98;
          ref_tmp1333 = c137;
          int* std138;
          __VERIFIER_nondet_memory(&std138, sizeof(std138));
          int t139 = *std138;
          int c140 = 0;
          _Bool c141 = ((t139 == c140)) ? 1 : 0;
          if (c141) {
          } else {
            char* cast142 = (char*)&(_str_10);
            char* c143 = _str_1;
            unsigned int c144 = 45;
            char* cast145 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast142, c143, c144, cast145);
          }
          char c146 = 99;
          ref_tmp1434 = c146;
          int* std147;
          __VERIFIER_nondet_memory(&std147, sizeof(std147));
          int t148 = *std147;
          int c149 = 0;
          _Bool c150 = ((t148 == c149)) ? 1 : 0;
          if (c150) {
          } else {
            char* cast151 = (char*)&(_str_11);
            char* c152 = _str_1;
            unsigned int c153 = 46;
            char* cast154 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast151, c152, c153, cast154);
          }
          char c155 = 100;
          ref_tmp1535 = c155;
          int* std156;
          __VERIFIER_nondet_memory(&std156, sizeof(std156));
          int t157 = *std156;
          int c158 = 0;
          _Bool c159 = ((t157 == c158)) ? 1 : 0;
          if (c159) {
          } else {
            char* cast160 = (char*)&(_str_12);
            char* c161 = _str_1;
            unsigned int c162 = 47;
            char* cast163 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast160, c161, c162, cast163);
          }
          fn_pt36 = &fncomp;
          // externalized std:: op: std::allocator<std::pair<char const, int> >::allocator()
          __VERIFIER_nondet_memory(&ref_tmp1638, sizeof(ref_tmp1638));
            // externalized std:: op: std::map<char, int, bool (*)(char, char), std::allocator<std::pair<char const, int> > >::map(bool (* const&)(char, char), std::allocator<std::pair<char const, int> > const&)
            __VERIFIER_nondet_memory(&fifth37, sizeof(fifth37));
            __VERIFIER_nondet_memory(&fn_pt36, sizeof(fn_pt36));
            __VERIFIER_nondet_memory(&ref_tmp1638, sizeof(ref_tmp1638));
          {
            // externalized std:: op: std::allocator<std::pair<char const, int> >::~allocator()
            __VERIFIER_nondet_memory(&ref_tmp1638, sizeof(ref_tmp1638));
          }
            int c164 = 0;
            __retval13 = c164;
            int t165 = __retval13;
            int ret_val166 = t165;
            {
              // externalized std:: op: std::map<char, int, bool (*)(char, char), std::allocator<std::pair<char const, int> > >::~map()
              __VERIFIER_nondet_memory(&fifth37, sizeof(fifth37));
            }
            {
              // externalized std:: op: std::map<char, int, classcomp, std::allocator<std::pair<char const, int> > >::~map()
              __VERIFIER_nondet_memory(&fourth31, sizeof(fourth31));
            }
            {
              // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~map()
              __VERIFIER_nondet_memory(&third26, sizeof(third26));
            }
            {
              // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~map()
              __VERIFIER_nondet_memory(&second19, sizeof(second19));
            }
            {
              // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~map()
              __VERIFIER_nondet_memory(&first14, sizeof(first14));
            }
            return ret_val166;
  int t167 = __retval13;
  return t167;
}

