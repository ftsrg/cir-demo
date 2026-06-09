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
// Struct definitions (auto-parsed)
struct __gnu_cxx____aligned_membuf_int_ { unsigned char _M_storage[4]; };
struct std___List_const_iterator_int_ { struct std____detail___List_node_base* _M_node; };
struct std___List_iterator_int_ { struct std____detail___List_node_base* _M_node; };
struct std____allocated_ptr_std__allocator_std___List_node_int___ { struct std__allocator_std___List_node_int__* _M_alloc; struct std___List_node_int_* _M_ptr; };
struct std____detail___List_node_base { struct std____detail___List_node_base* _M_next; struct std____detail___List_node_base* _M_prev; };
struct std____detail___List_size { unsigned long _M_size; };
struct std____new_allocator_std___List_node_int__;
struct std__allocator_std___List_node_int__;
struct std__bidirectional_iterator_tag { unsigned char __field0; };
struct std__input_iterator_tag { unsigned char __field0; };
struct std___List_node_int_;
struct std____allocated_obj_std__allocator_std___List_node_int___ { struct std____allocated_ptr_std__allocator_std___List_node_int___ __field0; };
struct std____detail___List_node_header { struct std____detail___List_node_base __field0; struct std____detail___List_size __field1; };
struct std____cxx11___List_base_int__std__allocator_int_____List_impl { struct std____detail___List_node_header _M_node; };
struct std____cxx11___List_base_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int_____List_impl _M_impl; };
struct std____cxx11__list_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int__ __field0; };

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
char _str[20] = "mylist1.size() == 7";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_splice-3/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[16] = "mylist2.empty()";
char _str_3[9] = "*it == 2";
char _str_4[10] = "*it == 30";
char _str_5[20] = "mylist1.size() == 6";
char _str_6[20] = "mylist2.size() == 1";
char _str_7[9] = "*it == 3";
char _str_8[9] = "*it == 4";
char _str_9[9] = "*it == 1";
char _str_10[10] = "*it == 10";
char _str_11[10] = "*it == 20";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__list_int__std__allocator_int__ mylist12;
  struct std____cxx11__list_int__std__allocator_int__ mylist23;
  struct std___List_iterator_int_ it4;
  struct std___List_iterator_int_ ref_tmp15;
  struct std___List_const_iterator_int_ agg_tmp06;
  struct std___List_iterator_int_ agg_tmp17;
  struct std___List_iterator_int_ agg_tmp28;
  struct std___List_const_iterator_int_ agg_tmp39;
  struct std___List_iterator_int_ ref_tmp210;
  struct std___List_const_iterator_int_ agg_tmp411;
  struct std___List_iterator_int_ ref_tmp312;
  struct std___List_const_iterator_int_ agg_tmp513;
  struct std___List_iterator_int_ ref_tmp414;
  struct std___List_const_iterator_int_ agg_tmp615;
  struct std___List_const_iterator_int_ agg_tmp716;
  struct std___List_iterator_int_ ref_tmp517;
  struct std___List_iterator_int_ ref_tmp618;
  struct std___List_iterator_int_ agg_tmp819;
  struct std___List_iterator_int_ agg_tmp920;
  struct std___List_iterator_int_ agg_tmp1021;
  struct std___List_iterator_int_ agg_tmp1122;
  struct std___List_iterator_int_ agg_tmp1223;
  int c24 = 0;
  __retval1 = c24;
  // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list()
  __VERIFIER_nondet_memory(&mylist12, sizeof(mylist12));
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list()
    __VERIFIER_nondet_memory(&mylist23, sizeof(mylist23));
      // externalized std:: op: std::_List_iterator<int>::_List_iterator()
      __VERIFIER_nondet_memory(&it4, sizeof(it4));
        int i25;
        int c26 = 1;
        i25 = c26;
        while (1) {
          int t28 = i25;
          int c29 = 4;
          _Bool c30 = ((t28 <= c29)) ? 1 : 0;
          if (!c30) break;
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_back(int const&)
          __VERIFIER_nondet_memory(&mylist12, sizeof(mylist12));
          __VERIFIER_nondet_memory(&i25, sizeof(i25));
        for_step27: ;
          int t31 = i25;
          int u32 = t31 + 1;
          i25 = u32;
        }
        int i33;
        int ref_tmp034;
        int c35 = 1;
        i33 = c35;
        while (1) {
          int t37 = i33;
          int c38 = 3;
          _Bool c39 = ((t37 <= c38)) ? 1 : 0;
          if (!c39) break;
          int t40 = i33;
          int c41 = 10;
          int b42 = t40 * c41;
          ref_tmp034 = b42;
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_back(int&&)
          __VERIFIER_nondet_memory(&mylist23, sizeof(mylist23));
          __VERIFIER_nondet_memory(&ref_tmp034, sizeof(ref_tmp034));
        for_step36: ;
          int t43 = i33;
          int u44 = t43 + 1;
          i33 = u44;
        }
      struct std___List_iterator_int_ std45;
      __VERIFIER_nondet_memory(&std45, sizeof(std45));
      ref_tmp15 = std45;
      struct std___List_iterator_int_* std46;
      __VERIFIER_nondet_memory(&std46, sizeof(std46));
      struct std___List_iterator_int_* std47;
      __VERIFIER_nondet_memory(&std47, sizeof(std47));
      // externalized std:: op: std::_List_const_iterator<int>::_List_const_iterator(std::_List_iterator<int> const&)
      __VERIFIER_nondet_memory(&agg_tmp06, sizeof(agg_tmp06));
      __VERIFIER_nondet_memory(&it4, sizeof(it4));
      struct std___List_const_iterator_int_ t48 = agg_tmp06;
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::splice(std::_List_const_iterator<int>, std::__cxx11::list<int, std::allocator<int> >&)
      __VERIFIER_nondet_memory(&mylist12, sizeof(mylist12));
      __VERIFIER_nondet_memory(&mylist23, sizeof(mylist23));
      unsigned long std49 = __VERIFIER_nondet_unsigned_long();
      unsigned long c50 = 7;
      _Bool c51 = ((std49 == c50)) ? 1 : 0;
      if (c51) {
      } else {
        char* cast52 = (char*)&(_str);
        char* c53 = _str_1;
        unsigned int c54 = 32;
        char* cast55 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast52, c53, c54, cast55);
      }
      _Bool std56;
      __VERIFIER_nondet_memory(&std56, sizeof(std56));
      if (std56) {
      } else {
        char* cast57 = (char*)&(_str_2);
        char* c58 = _str_1;
        unsigned int c59 = 33;
        char* cast60 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast57, c58, c59, cast60);
      }
      int* std61;
      __VERIFIER_nondet_memory(&std61, sizeof(std61));
      int t62 = *std61;
      int c63 = 2;
      _Bool c64 = ((t62 == c63)) ? 1 : 0;
      if (c64) {
      } else {
        char* cast65 = (char*)&(_str_3);
        char* c66 = _str_1;
        unsigned int c67 = 34;
        char* cast68 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast65, c66, c67, cast68);
      }
      int c69 = 0;
      struct std___List_iterator_int_ std70;
      __VERIFIER_nondet_memory(&std70, sizeof(std70));
      agg_tmp17 = std70;
      int* std71;
      __VERIFIER_nondet_memory(&std71, sizeof(std71));
      int t72 = *std71;
      int c73 = 30;
      _Bool c74 = ((t72 == c73)) ? 1 : 0;
      if (c74) {
      } else {
        char* cast75 = (char*)&(_str_4);
        char* c76 = _str_1;
        unsigned int c77 = 36;
        char* cast78 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast75, c76, c77, cast78);
      }
      int c79 = 0;
      struct std___List_iterator_int_ std80;
      __VERIFIER_nondet_memory(&std80, sizeof(std80));
      agg_tmp28 = std80;
      struct std___List_iterator_int_ std81;
      __VERIFIER_nondet_memory(&std81, sizeof(std81));
      ref_tmp210 = std81;
      // externalized std:: op: std::_List_const_iterator<int>::_List_const_iterator(std::_List_iterator<int> const&)
      __VERIFIER_nondet_memory(&agg_tmp39, sizeof(agg_tmp39));
      __VERIFIER_nondet_memory(&ref_tmp210, sizeof(ref_tmp210));
      // externalized std:: op: std::_List_const_iterator<int>::_List_const_iterator(std::_List_iterator<int> const&)
      __VERIFIER_nondet_memory(&agg_tmp411, sizeof(agg_tmp411));
      __VERIFIER_nondet_memory(&it4, sizeof(it4));
      struct std___List_const_iterator_int_ t82 = agg_tmp39;
      struct std___List_const_iterator_int_ t83 = agg_tmp411;
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::splice(std::_List_const_iterator<int>, std::__cxx11::list<int, std::allocator<int> >&, std::_List_const_iterator<int>)
      __VERIFIER_nondet_memory(&mylist23, sizeof(mylist23));
      __VERIFIER_nondet_memory(&mylist12, sizeof(mylist12));
      unsigned long std84 = __VERIFIER_nondet_unsigned_long();
      unsigned long c85 = 6;
      _Bool c86 = ((std84 == c85)) ? 1 : 0;
      if (c86) {
      } else {
        char* cast87 = (char*)&(_str_5);
        char* c88 = _str_1;
        unsigned int c89 = 43;
        char* cast90 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast87, c88, c89, cast90);
      }
      unsigned long std91 = __VERIFIER_nondet_unsigned_long();
      unsigned long c92 = 1;
      _Bool c93 = ((std91 == c92)) ? 1 : 0;
      if (c93) {
      } else {
        char* cast94 = (char*)&(_str_6);
        char* c95 = _str_1;
        unsigned int c96 = 44;
        char* cast97 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast94, c95, c96, cast97);
      }
      struct std___List_iterator_int_ std98;
      __VERIFIER_nondet_memory(&std98, sizeof(std98));
      ref_tmp312 = std98;
      struct std___List_iterator_int_* std99;
      __VERIFIER_nondet_memory(&std99, sizeof(std99));
      int c100 = 3;
      // externalized std:: op: void std::advance<std::_List_iterator<int>, int>(std::_List_iterator<int>&, int)
      __VERIFIER_nondet_memory(&it4, sizeof(it4));
      struct std___List_iterator_int_ std101;
      __VERIFIER_nondet_memory(&std101, sizeof(std101));
      ref_tmp414 = std101;
      // externalized std:: op: std::_List_const_iterator<int>::_List_const_iterator(std::_List_iterator<int> const&)
      __VERIFIER_nondet_memory(&agg_tmp513, sizeof(agg_tmp513));
      __VERIFIER_nondet_memory(&ref_tmp414, sizeof(ref_tmp414));
      // externalized std:: op: std::_List_const_iterator<int>::_List_const_iterator(std::_List_iterator<int> const&)
      __VERIFIER_nondet_memory(&agg_tmp615, sizeof(agg_tmp615));
      __VERIFIER_nondet_memory(&it4, sizeof(it4));
      struct std___List_iterator_int_ std102;
      __VERIFIER_nondet_memory(&std102, sizeof(std102));
      ref_tmp517 = std102;
      // externalized std:: op: std::_List_const_iterator<int>::_List_const_iterator(std::_List_iterator<int> const&)
      __VERIFIER_nondet_memory(&agg_tmp716, sizeof(agg_tmp716));
      __VERIFIER_nondet_memory(&ref_tmp517, sizeof(ref_tmp517));
      struct std___List_const_iterator_int_ t103 = agg_tmp513;
      struct std___List_const_iterator_int_ t104 = agg_tmp615;
      struct std___List_const_iterator_int_ t105 = agg_tmp716;
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::splice(std::_List_const_iterator<int>, std::__cxx11::list<int, std::allocator<int> >&, std::_List_const_iterator<int>, std::_List_const_iterator<int>)
      __VERIFIER_nondet_memory(&mylist12, sizeof(mylist12));
      __VERIFIER_nondet_memory(&mylist12, sizeof(mylist12));
      unsigned long std106 = __VERIFIER_nondet_unsigned_long();
      unsigned long c107 = 6;
      _Bool c108 = ((std106 == c107)) ? 1 : 0;
      if (c108) {
      } else {
        char* cast109 = (char*)&(_str_5);
        char* c110 = _str_1;
        unsigned int c111 = 51;
        char* cast112 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast109, c110, c111, cast112);
      }
      struct std___List_iterator_int_ std113;
      __VERIFIER_nondet_memory(&std113, sizeof(std113));
      ref_tmp618 = std113;
      struct std___List_iterator_int_* std114;
      __VERIFIER_nondet_memory(&std114, sizeof(std114));
      int* std115;
      __VERIFIER_nondet_memory(&std115, sizeof(std115));
      int t116 = *std115;
      int c117 = 30;
      _Bool c118 = ((t116 == c117)) ? 1 : 0;
      if (c118) {
      } else {
        char* cast119 = (char*)&(_str_4);
        char* c120 = _str_1;
        unsigned int c121 = 53;
        char* cast122 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast119, c120, c121, cast122);
      }
      int c123 = 0;
      struct std___List_iterator_int_ std124;
      __VERIFIER_nondet_memory(&std124, sizeof(std124));
      agg_tmp819 = std124;
      int* std125;
      __VERIFIER_nondet_memory(&std125, sizeof(std125));
      int t126 = *std125;
      int c127 = 3;
      _Bool c128 = ((t126 == c127)) ? 1 : 0;
      if (c128) {
      } else {
        char* cast129 = (char*)&(_str_7);
        char* c130 = _str_1;
        unsigned int c131 = 54;
        char* cast132 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast129, c130, c131, cast132);
      }
      int c133 = 0;
      struct std___List_iterator_int_ std134;
      __VERIFIER_nondet_memory(&std134, sizeof(std134));
      agg_tmp920 = std134;
      int* std135;
      __VERIFIER_nondet_memory(&std135, sizeof(std135));
      int t136 = *std135;
      int c137 = 4;
      _Bool c138 = ((t136 == c137)) ? 1 : 0;
      if (c138) {
      } else {
        char* cast139 = (char*)&(_str_8);
        char* c140 = _str_1;
        unsigned int c141 = 55;
        char* cast142 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast139, c140, c141, cast142);
      }
      int c143 = 0;
      struct std___List_iterator_int_ std144;
      __VERIFIER_nondet_memory(&std144, sizeof(std144));
      agg_tmp1021 = std144;
      int* std145;
      __VERIFIER_nondet_memory(&std145, sizeof(std145));
      int t146 = *std145;
      int c147 = 1;
      _Bool c148 = ((t146 == c147)) ? 1 : 0;
      if (c148) {
      } else {
        char* cast149 = (char*)&(_str_9);
        char* c150 = _str_1;
        unsigned int c151 = 56;
        char* cast152 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast149, c150, c151, cast152);
      }
      int c153 = 0;
      struct std___List_iterator_int_ std154;
      __VERIFIER_nondet_memory(&std154, sizeof(std154));
      agg_tmp1122 = std154;
      int* std155;
      __VERIFIER_nondet_memory(&std155, sizeof(std155));
      int t156 = *std155;
      int c157 = 10;
      _Bool c158 = ((t156 == c157)) ? 1 : 0;
      if (c158) {
      } else {
        char* cast159 = (char*)&(_str_10);
        char* c160 = _str_1;
        unsigned int c161 = 57;
        char* cast162 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast159, c160, c161, cast162);
      }
      int c163 = 0;
      struct std___List_iterator_int_ std164;
      __VERIFIER_nondet_memory(&std164, sizeof(std164));
      agg_tmp1223 = std164;
      int* std165;
      __VERIFIER_nondet_memory(&std165, sizeof(std165));
      int t166 = *std165;
      int c167 = 20;
      _Bool c168 = ((t166 == c167)) ? 1 : 0;
      if (c168) {
      } else {
        char* cast169 = (char*)&(_str_11);
        char* c170 = _str_1;
        unsigned int c171 = 58;
        char* cast172 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast169, c170, c171, cast172);
      }
      int c173 = 0;
      __retval1 = c173;
      int t174 = __retval1;
      int ret_val175 = t174;
      {
        // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
        __VERIFIER_nondet_memory(&mylist23, sizeof(mylist23));
      }
      {
        // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
        __VERIFIER_nondet_memory(&mylist12, sizeof(mylist12));
      }
      return ret_val175;
  int t176 = __retval1;
  return t176;
}

