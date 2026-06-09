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
struct std__ctype_char_;
struct std__ios_base;
struct std____cxx11___List_base_int__std__allocator_int_____List_impl { struct std____detail___List_node_header _M_node; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std____cxx11___List_base_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int_____List_impl _M_impl; };
struct std____cxx11__list_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int__ __field0; };

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[20] = "mylist1.size() != 7";
char _str_1[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_splice_bug-3/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[17] = "!mylist2.empty()";
char _str_3[9] = "*it != 2";
char _str_4[10] = "*it != 30";
char _str_5[20] = "mylist1.size() != 6";
char _str_6[20] = "mylist2.size() != 1";
char _str_7[20] = "mylist1.size() == 6";
char _str_8[9] = "*it == 3";
char _str_9[9] = "*it == 4";
char _str_10[9] = "*it != 1";
char _str_11[10] = "*it == 10";
char _str_12[10] = "*it != 20";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_13[18] = "mylist1 contains:";
char _str_14[2] = " ";
char _str_15[19] = "\nmylist2 contains:";
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
      _Bool c51 = ((std49 != c50)) ? 1 : 0;
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
      _Bool u57 = !std56;
      if (u57) {
      } else {
        char* cast58 = (char*)&(_str_2);
        char* c59 = _str_1;
        unsigned int c60 = 33;
        char* cast61 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast58, c59, c60, cast61);
      }
      int* std62;
      __VERIFIER_nondet_memory(&std62, sizeof(std62));
      int t63 = *std62;
      int c64 = 2;
      _Bool c65 = ((t63 != c64)) ? 1 : 0;
      if (c65) {
      } else {
        char* cast66 = (char*)&(_str_3);
        char* c67 = _str_1;
        unsigned int c68 = 34;
        char* cast69 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast66, c67, c68, cast69);
      }
      int c70 = 0;
      struct std___List_iterator_int_ std71;
      __VERIFIER_nondet_memory(&std71, sizeof(std71));
      agg_tmp17 = std71;
      int* std72;
      __VERIFIER_nondet_memory(&std72, sizeof(std72));
      int t73 = *std72;
      int c74 = 30;
      _Bool c75 = ((t73 != c74)) ? 1 : 0;
      if (c75) {
      } else {
        char* cast76 = (char*)&(_str_4);
        char* c77 = _str_1;
        unsigned int c78 = 36;
        char* cast79 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast76, c77, c78, cast79);
      }
      int c80 = 0;
      struct std___List_iterator_int_ std81;
      __VERIFIER_nondet_memory(&std81, sizeof(std81));
      agg_tmp28 = std81;
      struct std___List_iterator_int_ std82;
      __VERIFIER_nondet_memory(&std82, sizeof(std82));
      ref_tmp210 = std82;
      // externalized std:: op: std::_List_const_iterator<int>::_List_const_iterator(std::_List_iterator<int> const&)
      __VERIFIER_nondet_memory(&agg_tmp39, sizeof(agg_tmp39));
      __VERIFIER_nondet_memory(&ref_tmp210, sizeof(ref_tmp210));
      // externalized std:: op: std::_List_const_iterator<int>::_List_const_iterator(std::_List_iterator<int> const&)
      __VERIFIER_nondet_memory(&agg_tmp411, sizeof(agg_tmp411));
      __VERIFIER_nondet_memory(&it4, sizeof(it4));
      struct std___List_const_iterator_int_ t83 = agg_tmp39;
      struct std___List_const_iterator_int_ t84 = agg_tmp411;
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::splice(std::_List_const_iterator<int>, std::__cxx11::list<int, std::allocator<int> >&, std::_List_const_iterator<int>)
      __VERIFIER_nondet_memory(&mylist23, sizeof(mylist23));
      __VERIFIER_nondet_memory(&mylist12, sizeof(mylist12));
      unsigned long std85 = __VERIFIER_nondet_unsigned_long();
      unsigned long c86 = 6;
      _Bool c87 = ((std85 != c86)) ? 1 : 0;
      if (c87) {
      } else {
        char* cast88 = (char*)&(_str_5);
        char* c89 = _str_1;
        unsigned int c90 = 43;
        char* cast91 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast88, c89, c90, cast91);
      }
      unsigned long std92 = __VERIFIER_nondet_unsigned_long();
      unsigned long c93 = 1;
      _Bool c94 = ((std92 != c93)) ? 1 : 0;
      if (c94) {
      } else {
        char* cast95 = (char*)&(_str_6);
        char* c96 = _str_1;
        unsigned int c97 = 44;
        char* cast98 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast95, c96, c97, cast98);
      }
      struct std___List_iterator_int_ std99;
      __VERIFIER_nondet_memory(&std99, sizeof(std99));
      ref_tmp312 = std99;
      struct std___List_iterator_int_* std100;
      __VERIFIER_nondet_memory(&std100, sizeof(std100));
      int c101 = 3;
      // externalized std:: op: void std::advance<std::_List_iterator<int>, int>(std::_List_iterator<int>&, int)
      __VERIFIER_nondet_memory(&it4, sizeof(it4));
      struct std___List_iterator_int_ std102;
      __VERIFIER_nondet_memory(&std102, sizeof(std102));
      ref_tmp414 = std102;
      // externalized std:: op: std::_List_const_iterator<int>::_List_const_iterator(std::_List_iterator<int> const&)
      __VERIFIER_nondet_memory(&agg_tmp513, sizeof(agg_tmp513));
      __VERIFIER_nondet_memory(&ref_tmp414, sizeof(ref_tmp414));
      // externalized std:: op: std::_List_const_iterator<int>::_List_const_iterator(std::_List_iterator<int> const&)
      __VERIFIER_nondet_memory(&agg_tmp615, sizeof(agg_tmp615));
      __VERIFIER_nondet_memory(&it4, sizeof(it4));
      struct std___List_iterator_int_ std103;
      __VERIFIER_nondet_memory(&std103, sizeof(std103));
      ref_tmp517 = std103;
      // externalized std:: op: std::_List_const_iterator<int>::_List_const_iterator(std::_List_iterator<int> const&)
      __VERIFIER_nondet_memory(&agg_tmp716, sizeof(agg_tmp716));
      __VERIFIER_nondet_memory(&ref_tmp517, sizeof(ref_tmp517));
      struct std___List_const_iterator_int_ t104 = agg_tmp513;
      struct std___List_const_iterator_int_ t105 = agg_tmp615;
      struct std___List_const_iterator_int_ t106 = agg_tmp716;
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::splice(std::_List_const_iterator<int>, std::__cxx11::list<int, std::allocator<int> >&, std::_List_const_iterator<int>, std::_List_const_iterator<int>)
      __VERIFIER_nondet_memory(&mylist12, sizeof(mylist12));
      __VERIFIER_nondet_memory(&mylist12, sizeof(mylist12));
      unsigned long std107 = __VERIFIER_nondet_unsigned_long();
      unsigned long c108 = 6;
      _Bool c109 = ((std107 == c108)) ? 1 : 0;
      if (c109) {
      } else {
        char* cast110 = (char*)&(_str_7);
        char* c111 = _str_1;
        unsigned int c112 = 51;
        char* cast113 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast110, c111, c112, cast113);
      }
      struct std___List_iterator_int_ std114;
      __VERIFIER_nondet_memory(&std114, sizeof(std114));
      ref_tmp618 = std114;
      struct std___List_iterator_int_* std115;
      __VERIFIER_nondet_memory(&std115, sizeof(std115));
      int* std116;
      __VERIFIER_nondet_memory(&std116, sizeof(std116));
      int t117 = *std116;
      int c118 = 30;
      _Bool c119 = ((t117 != c118)) ? 1 : 0;
      if (c119) {
      } else {
        char* cast120 = (char*)&(_str_4);
        char* c121 = _str_1;
        unsigned int c122 = 53;
        char* cast123 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast120, c121, c122, cast123);
      }
      int c124 = 0;
      struct std___List_iterator_int_ std125;
      __VERIFIER_nondet_memory(&std125, sizeof(std125));
      agg_tmp819 = std125;
      int* std126;
      __VERIFIER_nondet_memory(&std126, sizeof(std126));
      int t127 = *std126;
      int c128 = 3;
      _Bool c129 = ((t127 == c128)) ? 1 : 0;
      if (c129) {
      } else {
        char* cast130 = (char*)&(_str_8);
        char* c131 = _str_1;
        unsigned int c132 = 54;
        char* cast133 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast130, c131, c132, cast133);
      }
      int c134 = 0;
      struct std___List_iterator_int_ std135;
      __VERIFIER_nondet_memory(&std135, sizeof(std135));
      agg_tmp920 = std135;
      int* std136;
      __VERIFIER_nondet_memory(&std136, sizeof(std136));
      int t137 = *std136;
      int c138 = 4;
      _Bool c139 = ((t137 == c138)) ? 1 : 0;
      if (c139) {
      } else {
        char* cast140 = (char*)&(_str_9);
        char* c141 = _str_1;
        unsigned int c142 = 55;
        char* cast143 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast140, c141, c142, cast143);
      }
      int c144 = 0;
      struct std___List_iterator_int_ std145;
      __VERIFIER_nondet_memory(&std145, sizeof(std145));
      agg_tmp1021 = std145;
      int* std146;
      __VERIFIER_nondet_memory(&std146, sizeof(std146));
      int t147 = *std146;
      int c148 = 1;
      _Bool c149 = ((t147 != c148)) ? 1 : 0;
      if (c149) {
      } else {
        char* cast150 = (char*)&(_str_10);
        char* c151 = _str_1;
        unsigned int c152 = 56;
        char* cast153 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast150, c151, c152, cast153);
      }
      int c154 = 0;
      struct std___List_iterator_int_ std155;
      __VERIFIER_nondet_memory(&std155, sizeof(std155));
      agg_tmp1122 = std155;
      int* std156;
      __VERIFIER_nondet_memory(&std156, sizeof(std156));
      int t157 = *std156;
      int c158 = 10;
      _Bool c159 = ((t157 == c158)) ? 1 : 0;
      if (c159) {
      } else {
        char* cast160 = (char*)&(_str_11);
        char* c161 = _str_1;
        unsigned int c162 = 57;
        char* cast163 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast160, c161, c162, cast163);
      }
      int c164 = 0;
      struct std___List_iterator_int_ std165;
      __VERIFIER_nondet_memory(&std165, sizeof(std165));
      agg_tmp1223 = std165;
      int* std166;
      __VERIFIER_nondet_memory(&std166, sizeof(std166));
      int t167 = *std166;
      int c168 = 20;
      _Bool c169 = ((t167 != c168)) ? 1 : 0;
      if (c169) {
      } else {
        char* cast170 = (char*)&(_str_12);
        char* c171 = _str_1;
        unsigned int c172 = 58;
        char* cast173 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast170, c171, c172, cast173);
      }
      char* cast174 = (char*)&(_str_13);
      struct std__basic_ostream_char__std__char_traits_char__* std175;
      __VERIFIER_nondet_memory(&std175, sizeof(std175));
        struct std___List_iterator_int_ ref_tmp7176;
        struct std___List_iterator_int_ ref_tmp8177;
        struct std___List_iterator_int_ agg_tmp13178;
        struct std___List_iterator_int_ std179;
        __VERIFIER_nondet_memory(&std179, sizeof(std179));
        ref_tmp7176 = std179;
        struct std___List_iterator_int_* std180;
        __VERIFIER_nondet_memory(&std180, sizeof(std180));
        while (1) {
          struct std___List_iterator_int_ std182;
          __VERIFIER_nondet_memory(&std182, sizeof(std182));
          ref_tmp8177 = std182;
          _Bool std183;
          __VERIFIER_nondet_memory(&std183, sizeof(std183));
          _Bool u184 = !std183;
          if (!u184) break;
          char* cast185 = (char*)&(_str_14);
          struct std__basic_ostream_char__std__char_traits_char__* std186;
          __VERIFIER_nondet_memory(&std186, sizeof(std186));
          int* std187;
          __VERIFIER_nondet_memory(&std187, sizeof(std187));
          int t188 = *std187;
          struct std__basic_ostream_char__std__char_traits_char__* std189;
          __VERIFIER_nondet_memory(&std189, sizeof(std189));
        for_step181: ;
          int c190 = 0;
          struct std___List_iterator_int_ std191;
          __VERIFIER_nondet_memory(&std191, sizeof(std191));
          agg_tmp13178 = std191;
        }
      char* cast192 = (char*)&(_str_15);
      struct std__basic_ostream_char__std__char_traits_char__* std193;
      __VERIFIER_nondet_memory(&std193, sizeof(std193));
        struct std___List_iterator_int_ ref_tmp9194;
        struct std___List_iterator_int_ ref_tmp10195;
        struct std___List_iterator_int_ agg_tmp14196;
        struct std___List_iterator_int_ std197;
        __VERIFIER_nondet_memory(&std197, sizeof(std197));
        ref_tmp9194 = std197;
        struct std___List_iterator_int_* std198;
        __VERIFIER_nondet_memory(&std198, sizeof(std198));
        while (1) {
          struct std___List_iterator_int_ std200;
          __VERIFIER_nondet_memory(&std200, sizeof(std200));
          ref_tmp10195 = std200;
          _Bool std201;
          __VERIFIER_nondet_memory(&std201, sizeof(std201));
          _Bool u202 = !std201;
          if (!u202) break;
          char* cast203 = (char*)&(_str_14);
          struct std__basic_ostream_char__std__char_traits_char__* std204;
          __VERIFIER_nondet_memory(&std204, sizeof(std204));
          int* std205;
          __VERIFIER_nondet_memory(&std205, sizeof(std205));
          int t206 = *std205;
          struct std__basic_ostream_char__std__char_traits_char__* std207;
          __VERIFIER_nondet_memory(&std207, sizeof(std207));
        for_step199: ;
          int c208 = 0;
          struct std___List_iterator_int_ std209;
          __VERIFIER_nondet_memory(&std209, sizeof(std209));
          agg_tmp14196 = std209;
        }
      struct std__basic_ostream_char__std__char_traits_char__* std210;
      __VERIFIER_nondet_memory(&std210, sizeof(std210));
      int c211 = 0;
      __retval1 = c211;
      int t212 = __retval1;
      int ret_val213 = t212;
      {
        // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
        __VERIFIER_nondet_memory(&mylist23, sizeof(mylist23));
      }
      {
        // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
        __VERIFIER_nondet_memory(&mylist12, sizeof(mylist12));
      }
      return ret_val213;
  int t214 = __retval1;
  return t214;
}

