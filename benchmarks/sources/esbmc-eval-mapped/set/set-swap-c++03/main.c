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
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_int__;
struct std__binary_function_int__int__bool_;
struct std__less_int_ { unsigned char __field0; };
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__set_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int __const_main_myints[6] = {12, 75, 10, 32, 20, 25};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "first.size() == 3";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-swap-c++03/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[10] = "*it == 10";
char _str_3[10] = "*it == 12";
char _str_4[10] = "*it == 75";
char _str_5[19] = "second.size() == 3";
char _str_6[10] = "*it == 20";
char _str_7[10] = "*it == 25";
char _str_8[10] = "*it == 32";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_9[16] = "first contains:";
char _str_10[2] = " ";
char _str_11[18] = "\nsecond contains:";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  int myints2[6];
  struct std__set_int__std__less_int___std__allocator_int__ first3;
  struct std__set_int__std__less_int___std__allocator_int__ second4;
  struct std___Rb_tree_const_iterator_int_ it5;
  struct std___Rb_tree_const_iterator_int_ ref_tmp06;
  struct std___Rb_tree_const_iterator_int_ agg_tmp07;
  struct std___Rb_tree_const_iterator_int_ agg_tmp18;
  struct std___Rb_tree_const_iterator_int_ agg_tmp29;
  struct std___Rb_tree_const_iterator_int_ ref_tmp110;
  struct std___Rb_tree_const_iterator_int_ agg_tmp311;
  struct std___Rb_tree_const_iterator_int_ agg_tmp412;
  struct std___Rb_tree_const_iterator_int_ agg_tmp513;
  struct std___Rb_tree_const_iterator_int_ ref_tmp214;
  struct std___Rb_tree_const_iterator_int_ agg_tmp615;
  struct std___Rb_tree_const_iterator_int_ agg_tmp716;
  struct std___Rb_tree_const_iterator_int_ agg_tmp817;
  struct std___Rb_tree_const_iterator_int_ ref_tmp318;
  struct std___Rb_tree_const_iterator_int_ agg_tmp919;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1020;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1121;
  int c22 = 0;
  __retval1 = c22;
  // array copy
  __builtin_memcpy(myints2, __const_main_myints, (unsigned long)6 * sizeof(__const_main_myints[0]));
  int* cast23 = (int*)&(myints2);
  int* cast24 = (int*)&(myints2);
  int c25 = 3;
  int* ptr26 = &(cast24)[c25];
  // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::set<int*>(int*, int*)
  __VERIFIER_nondet_memory(&first3, sizeof(first3));
  __VERIFIER_nondet_memory(cast23, sizeof(*cast23));
  __VERIFIER_nondet_memory(ptr26, sizeof(*ptr26));
    int* cast27 = (int*)&(myints2);
    int c28 = 3;
    int* ptr29 = &(cast27)[c28];
    int* cast30 = (int*)&(myints2);
    int c31 = 6;
    int* ptr32 = &(cast30)[c31];
    // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::set<int*>(int*, int*)
    __VERIFIER_nondet_memory(&second4, sizeof(second4));
    __VERIFIER_nondet_memory(ptr29, sizeof(*ptr29));
    __VERIFIER_nondet_memory(ptr32, sizeof(*ptr32));
      // externalized std:: op: std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator()
      __VERIFIER_nondet_memory(&it5, sizeof(it5));
      unsigned long std33 = __VERIFIER_nondet_unsigned_long();
      unsigned long c34 = 3;
      _Bool c35 = ((std33 == c34)) ? 1 : 0;
      if (c35) {
      } else {
        char* cast36 = (char*)&(_str);
        char* c37 = _str_1;
        unsigned int c38 = 20;
        char* cast39 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast36, c37, c38, cast39);
      }
      struct std___Rb_tree_const_iterator_int_ std40;
      __VERIFIER_nondet_memory(&std40, sizeof(std40));
      ref_tmp06 = std40;
      struct std___Rb_tree_const_iterator_int_* std41;
      __VERIFIER_nondet_memory(&std41, sizeof(std41));
      int* std42;
      __VERIFIER_nondet_memory(&std42, sizeof(std42));
      int t43 = *std42;
      int c44 = 10;
      _Bool c45 = ((t43 == c44)) ? 1 : 0;
      if (c45) {
      } else {
        char* cast46 = (char*)&(_str_2);
        char* c47 = _str_1;
        unsigned int c48 = 22;
        char* cast49 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast46, c47, c48, cast49);
      }
      int c50 = 0;
      struct std___Rb_tree_const_iterator_int_ std51;
      __VERIFIER_nondet_memory(&std51, sizeof(std51));
      agg_tmp07 = std51;
      int* std52;
      __VERIFIER_nondet_memory(&std52, sizeof(std52));
      int t53 = *std52;
      int c54 = 12;
      _Bool c55 = ((t53 == c54)) ? 1 : 0;
      if (c55) {
      } else {
        char* cast56 = (char*)&(_str_3);
        char* c57 = _str_1;
        unsigned int c58 = 24;
        char* cast59 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast56, c57, c58, cast59);
      }
      int c60 = 0;
      struct std___Rb_tree_const_iterator_int_ std61;
      __VERIFIER_nondet_memory(&std61, sizeof(std61));
      agg_tmp18 = std61;
      int* std62;
      __VERIFIER_nondet_memory(&std62, sizeof(std62));
      int t63 = *std62;
      int c64 = 75;
      _Bool c65 = ((t63 == c64)) ? 1 : 0;
      if (c65) {
      } else {
        char* cast66 = (char*)&(_str_4);
        char* c67 = _str_1;
        unsigned int c68 = 26;
        char* cast69 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast66, c67, c68, cast69);
      }
      int c70 = 0;
      struct std___Rb_tree_const_iterator_int_ std71;
      __VERIFIER_nondet_memory(&std71, sizeof(std71));
      agg_tmp29 = std71;
      unsigned long std72 = __VERIFIER_nondet_unsigned_long();
      unsigned long c73 = 3;
      _Bool c74 = ((std72 == c73)) ? 1 : 0;
      if (c74) {
      } else {
        char* cast75 = (char*)&(_str_5);
        char* c76 = _str_1;
        unsigned int c77 = 28;
        char* cast78 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast75, c76, c77, cast78);
      }
      struct std___Rb_tree_const_iterator_int_ std79;
      __VERIFIER_nondet_memory(&std79, sizeof(std79));
      ref_tmp110 = std79;
      struct std___Rb_tree_const_iterator_int_* std80;
      __VERIFIER_nondet_memory(&std80, sizeof(std80));
      int* std81;
      __VERIFIER_nondet_memory(&std81, sizeof(std81));
      int t82 = *std81;
      int c83 = 20;
      _Bool c84 = ((t82 == c83)) ? 1 : 0;
      if (c84) {
      } else {
        char* cast85 = (char*)&(_str_6);
        char* c86 = _str_1;
        unsigned int c87 = 30;
        char* cast88 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast85, c86, c87, cast88);
      }
      int c89 = 0;
      struct std___Rb_tree_const_iterator_int_ std90;
      __VERIFIER_nondet_memory(&std90, sizeof(std90));
      agg_tmp311 = std90;
      int* std91;
      __VERIFIER_nondet_memory(&std91, sizeof(std91));
      int t92 = *std91;
      int c93 = 25;
      _Bool c94 = ((t92 == c93)) ? 1 : 0;
      if (c94) {
      } else {
        char* cast95 = (char*)&(_str_7);
        char* c96 = _str_1;
        unsigned int c97 = 32;
        char* cast98 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast95, c96, c97, cast98);
      }
      int c99 = 0;
      struct std___Rb_tree_const_iterator_int_ std100;
      __VERIFIER_nondet_memory(&std100, sizeof(std100));
      agg_tmp412 = std100;
      int* std101;
      __VERIFIER_nondet_memory(&std101, sizeof(std101));
      int t102 = *std101;
      int c103 = 32;
      _Bool c104 = ((t102 == c103)) ? 1 : 0;
      if (c104) {
      } else {
        char* cast105 = (char*)&(_str_8);
        char* c106 = _str_1;
        unsigned int c107 = 34;
        char* cast108 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast105, c106, c107, cast108);
      }
      int c109 = 0;
      struct std___Rb_tree_const_iterator_int_ std110;
      __VERIFIER_nondet_memory(&std110, sizeof(std110));
      agg_tmp513 = std110;
      // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::swap(std::set<int, std::less<int>, std::allocator<int> >&)
      __VERIFIER_nondet_memory(&first3, sizeof(first3));
      __VERIFIER_nondet_memory(&second4, sizeof(second4));
      unsigned long std111 = __VERIFIER_nondet_unsigned_long();
      unsigned long c112 = 3;
      _Bool c113 = ((std111 == c112)) ? 1 : 0;
      if (c113) {
      } else {
        char* cast114 = (char*)&(_str);
        char* c115 = _str_1;
        unsigned int c116 = 39;
        char* cast117 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast114, c115, c116, cast117);
      }
      struct std___Rb_tree_const_iterator_int_ std118;
      __VERIFIER_nondet_memory(&std118, sizeof(std118));
      ref_tmp214 = std118;
      struct std___Rb_tree_const_iterator_int_* std119;
      __VERIFIER_nondet_memory(&std119, sizeof(std119));
      int* std120;
      __VERIFIER_nondet_memory(&std120, sizeof(std120));
      int t121 = *std120;
      int c122 = 20;
      _Bool c123 = ((t121 == c122)) ? 1 : 0;
      if (c123) {
      } else {
        char* cast124 = (char*)&(_str_6);
        char* c125 = _str_1;
        unsigned int c126 = 41;
        char* cast127 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast124, c125, c126, cast127);
      }
      int c128 = 0;
      struct std___Rb_tree_const_iterator_int_ std129;
      __VERIFIER_nondet_memory(&std129, sizeof(std129));
      agg_tmp615 = std129;
      int* std130;
      __VERIFIER_nondet_memory(&std130, sizeof(std130));
      int t131 = *std130;
      int c132 = 25;
      _Bool c133 = ((t131 == c132)) ? 1 : 0;
      if (c133) {
      } else {
        char* cast134 = (char*)&(_str_7);
        char* c135 = _str_1;
        unsigned int c136 = 43;
        char* cast137 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast134, c135, c136, cast137);
      }
      int c138 = 0;
      struct std___Rb_tree_const_iterator_int_ std139;
      __VERIFIER_nondet_memory(&std139, sizeof(std139));
      agg_tmp716 = std139;
      int* std140;
      __VERIFIER_nondet_memory(&std140, sizeof(std140));
      int t141 = *std140;
      int c142 = 32;
      _Bool c143 = ((t141 == c142)) ? 1 : 0;
      if (c143) {
      } else {
        char* cast144 = (char*)&(_str_8);
        char* c145 = _str_1;
        unsigned int c146 = 45;
        char* cast147 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast144, c145, c146, cast147);
      }
      int c148 = 0;
      struct std___Rb_tree_const_iterator_int_ std149;
      __VERIFIER_nondet_memory(&std149, sizeof(std149));
      agg_tmp817 = std149;
      unsigned long std150 = __VERIFIER_nondet_unsigned_long();
      unsigned long c151 = 3;
      _Bool c152 = ((std150 == c151)) ? 1 : 0;
      if (c152) {
      } else {
        char* cast153 = (char*)&(_str_5);
        char* c154 = _str_1;
        unsigned int c155 = 47;
        char* cast156 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast153, c154, c155, cast156);
      }
      struct std___Rb_tree_const_iterator_int_ std157;
      __VERIFIER_nondet_memory(&std157, sizeof(std157));
      ref_tmp318 = std157;
      struct std___Rb_tree_const_iterator_int_* std158;
      __VERIFIER_nondet_memory(&std158, sizeof(std158));
      int* std159;
      __VERIFIER_nondet_memory(&std159, sizeof(std159));
      int t160 = *std159;
      int c161 = 10;
      _Bool c162 = ((t160 == c161)) ? 1 : 0;
      if (c162) {
      } else {
        char* cast163 = (char*)&(_str_2);
        char* c164 = _str_1;
        unsigned int c165 = 49;
        char* cast166 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast163, c164, c165, cast166);
      }
      int c167 = 0;
      struct std___Rb_tree_const_iterator_int_ std168;
      __VERIFIER_nondet_memory(&std168, sizeof(std168));
      agg_tmp919 = std168;
      int* std169;
      __VERIFIER_nondet_memory(&std169, sizeof(std169));
      int t170 = *std169;
      int c171 = 12;
      _Bool c172 = ((t170 == c171)) ? 1 : 0;
      if (c172) {
      } else {
        char* cast173 = (char*)&(_str_3);
        char* c174 = _str_1;
        unsigned int c175 = 51;
        char* cast176 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast173, c174, c175, cast176);
      }
      int c177 = 0;
      struct std___Rb_tree_const_iterator_int_ std178;
      __VERIFIER_nondet_memory(&std178, sizeof(std178));
      agg_tmp1020 = std178;
      int* std179;
      __VERIFIER_nondet_memory(&std179, sizeof(std179));
      int t180 = *std179;
      int c181 = 75;
      _Bool c182 = ((t180 == c181)) ? 1 : 0;
      if (c182) {
      } else {
        char* cast183 = (char*)&(_str_4);
        char* c184 = _str_1;
        unsigned int c185 = 53;
        char* cast186 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast183, c184, c185, cast186);
      }
      int c187 = 0;
      struct std___Rb_tree_const_iterator_int_ std188;
      __VERIFIER_nondet_memory(&std188, sizeof(std188));
      agg_tmp1121 = std188;
      char* cast189 = (char*)&(_str_9);
      struct std__basic_ostream_char__std__char_traits_char__* std190;
      __VERIFIER_nondet_memory(&std190, sizeof(std190));
        struct std___Rb_tree_const_iterator_int_ ref_tmp4191;
        struct std___Rb_tree_const_iterator_int_ ref_tmp5192;
        struct std___Rb_tree_const_iterator_int_ agg_tmp12193;
        struct std___Rb_tree_const_iterator_int_ std194;
        __VERIFIER_nondet_memory(&std194, sizeof(std194));
        ref_tmp4191 = std194;
        struct std___Rb_tree_const_iterator_int_* std195;
        __VERIFIER_nondet_memory(&std195, sizeof(std195));
        while (1) {
          struct std___Rb_tree_const_iterator_int_ std197;
          __VERIFIER_nondet_memory(&std197, sizeof(std197));
          ref_tmp5192 = std197;
          _Bool std198;
          __VERIFIER_nondet_memory(&std198, sizeof(std198));
          _Bool u199 = !std198;
          if (!u199) break;
          char* cast200 = (char*)&(_str_10);
          struct std__basic_ostream_char__std__char_traits_char__* std201;
          __VERIFIER_nondet_memory(&std201, sizeof(std201));
          int* std202;
          __VERIFIER_nondet_memory(&std202, sizeof(std202));
          int t203 = *std202;
          struct std__basic_ostream_char__std__char_traits_char__* std204;
          __VERIFIER_nondet_memory(&std204, sizeof(std204));
        for_step196: ;
          int c205 = 0;
          struct std___Rb_tree_const_iterator_int_ std206;
          __VERIFIER_nondet_memory(&std206, sizeof(std206));
          agg_tmp12193 = std206;
        }
      char* cast207 = (char*)&(_str_11);
      struct std__basic_ostream_char__std__char_traits_char__* std208;
      __VERIFIER_nondet_memory(&std208, sizeof(std208));
        struct std___Rb_tree_const_iterator_int_ ref_tmp6209;
        struct std___Rb_tree_const_iterator_int_ ref_tmp7210;
        struct std___Rb_tree_const_iterator_int_ agg_tmp13211;
        struct std___Rb_tree_const_iterator_int_ std212;
        __VERIFIER_nondet_memory(&std212, sizeof(std212));
        ref_tmp6209 = std212;
        struct std___Rb_tree_const_iterator_int_* std213;
        __VERIFIER_nondet_memory(&std213, sizeof(std213));
        while (1) {
          struct std___Rb_tree_const_iterator_int_ std215;
          __VERIFIER_nondet_memory(&std215, sizeof(std215));
          ref_tmp7210 = std215;
          _Bool std216;
          __VERIFIER_nondet_memory(&std216, sizeof(std216));
          _Bool u217 = !std216;
          if (!u217) break;
          char* cast218 = (char*)&(_str_10);
          struct std__basic_ostream_char__std__char_traits_char__* std219;
          __VERIFIER_nondet_memory(&std219, sizeof(std219));
          int* std220;
          __VERIFIER_nondet_memory(&std220, sizeof(std220));
          int t221 = *std220;
          struct std__basic_ostream_char__std__char_traits_char__* std222;
          __VERIFIER_nondet_memory(&std222, sizeof(std222));
        for_step214: ;
          int c223 = 0;
          struct std___Rb_tree_const_iterator_int_ std224;
          __VERIFIER_nondet_memory(&std224, sizeof(std224));
          agg_tmp13211 = std224;
        }
      struct std__basic_ostream_char__std__char_traits_char__* std225;
      __VERIFIER_nondet_memory(&std225, sizeof(std225));
      int c226 = 0;
      __retval1 = c226;
      int t227 = __retval1;
      int ret_val228 = t227;
      {
        // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::~set()
        __VERIFIER_nondet_memory(&second4, sizeof(second4));
      }
      {
        // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::~set()
        __VERIFIER_nondet_memory(&first3, sizeof(first3));
      }
      return ret_val228;
  int t229 = __retval1;
  return t229;
}

