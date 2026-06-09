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
struct _Guard { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* _M_guarded; };
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ { char* _M_current; };
struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ { char* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__less_const_char___ { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__ctype_char_;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

char _str[23] = "this is a test string.";
char _str_1[10] = "n example";
char _str_2[14] = "sample phrase";
char _str_3[8] = "useful.";
char _str_4[27] = "this is an example string.";
char _str_5[36] = "str == \"this is an example string.\"";
char _str_6[112] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_replace_10/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_7[27] = "this is an example phrase.";
char _str_8[36] = "str == \"this is an example phrase.\"";
char _str_9[9] = "just all";
char _str_10[23] = "this is just a phrase.";
char _str_11[32] = "str == \"this is just a phrase.\"";
char _str_12[8] = "a short";
char _str_13[24] = "this is a short phrase.";
char _str_14[33] = "str == \"this is a short phrase.\"";
char _str_15[26] = "this is a short phrase!!!";
char _str_16[35] = "str == \"this is a short phrase!!!\"";
char _str_17[17] = "sample phrase!!!";
char _str_18[26] = "str == \"sample phrase!!!\"";
char _str_19[11] = "replace it";
char _str_20[18] = "replace phrase!!!";
char _str_21[27] = "str == \"replace phrase!!!\"";
char _str_22[8] = "is cool";
char _str_23[19] = "replace is cool!!!";
char _str_24[28] = "str == \"replace is cool!!!\"";
char _str_25[21] = "replace is cooool!!!";
char _str_26[30] = "str == \"replace is cooool!!!\"";
char _str_27[19] = "replace is useful.";
char _str_28[28] = "str == \"replace is useful.\"";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_29[50] = "basic_string: construction from null is not valid";
char _str_30[24] = "basic_string::_M_create";
char _str_31[22] = "basic_string::replace";
char _str_32[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_33[25] = "basic_string::_M_replace";
char _str_34[29] = "basic_string::_M_replace_aux";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ base2;
  struct std__allocator_char_ ref_tmp03;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str24;
  struct std__allocator_char_ ref_tmp15;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str36;
  struct std__allocator_char_ ref_tmp27;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str48;
  struct std__allocator_char_ ref_tmp39;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str10;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ it11;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp012;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp113;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp414;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp515;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp216;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp317;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp618;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp419;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp520;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp721;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp622;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp823;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp724;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp925;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp1026;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp827;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp928;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp1129;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp1030;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp1131;
  int c32 = 0;
  __retval1 = c32;
  char* cast33 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&base2, sizeof(base2));
    __VERIFIER_nondet_memory(cast33, sizeof(*cast33));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    char* cast34 = (char*)&(_str_1);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&str24, sizeof(str24));
      __VERIFIER_nondet_memory(cast34, sizeof(*cast34));
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    }
      char* cast35 = (char*)&(_str_2);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&str36, sizeof(str36));
        __VERIFIER_nondet_memory(cast35, sizeof(*cast35));
        __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      }
        char* cast36 = (char*)&(_str_3);
        // externalized std:: op: std::allocator<char>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
          __VERIFIER_nondet_memory(&str48, sizeof(str48));
          __VERIFIER_nondet_memory(cast36, sizeof(*cast36));
          __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
        {
          // externalized std:: op: std::allocator<char>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
        }
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
          __VERIFIER_nondet_memory(&str10, sizeof(str10));
          __VERIFIER_nondet_memory(&base2, sizeof(base2));
            unsigned long c37 = 9;
            unsigned long c38 = 5;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std39;
            __VERIFIER_nondet_memory(&std39, sizeof(std39));
            char* cast40 = (char*)&(_str_4);
            _Bool std41;
            __VERIFIER_nondet_memory(&std41, sizeof(std41));
            if (std41) {
            } else {
              char* cast42 = (char*)&(_str_5);
              char* c43 = _str_6;
              unsigned int c44 = 25;
              char* cast45 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast42, c43, c44, cast45);
            }
            unsigned long c46 = 19;
            unsigned long c47 = 6;
            unsigned long c48 = 7;
            unsigned long c49 = 6;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std50;
            __VERIFIER_nondet_memory(&std50, sizeof(std50));
            char* cast51 = (char*)&(_str_7);
            _Bool std52;
            __VERIFIER_nondet_memory(&std52, sizeof(std52));
            if (std52) {
            } else {
              char* cast53 = (char*)&(_str_8);
              char* c54 = _str_6;
              unsigned int c55 = 28;
              char* cast56 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast53, c54, c55, cast56);
            }
            unsigned long c57 = 8;
            unsigned long c58 = 10;
            char* cast59 = (char*)&(_str_9);
            unsigned long c60 = 6;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std61;
            __VERIFIER_nondet_memory(&std61, sizeof(std61));
            char* cast62 = (char*)&(_str_10);
            _Bool std63;
            __VERIFIER_nondet_memory(&std63, sizeof(std63));
            if (std63) {
            } else {
              char* cast64 = (char*)&(_str_11);
              char* c65 = _str_6;
              unsigned int c66 = 31;
              char* cast67 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast64, c65, c66, cast67);
            }
            unsigned long c68 = 8;
            unsigned long c69 = 6;
            char* cast70 = (char*)&(_str_12);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std71;
            __VERIFIER_nondet_memory(&std71, sizeof(std71));
            char* cast72 = (char*)&(_str_13);
            _Bool std73;
            __VERIFIER_nondet_memory(&std73, sizeof(std73));
            if (std73) {
            } else {
              char* cast74 = (char*)&(_str_14);
              char* c75 = _str_6;
              unsigned int c76 = 34;
              char* cast77 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast74, c75, c76, cast77);
            }
            unsigned long c78 = 22;
            unsigned long c79 = 1;
            unsigned long c80 = 3;
            char c81 = 33;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std82;
            __VERIFIER_nondet_memory(&std82, sizeof(std82));
            char* cast83 = (char*)&(_str_15);
            _Bool std84;
            __VERIFIER_nondet_memory(&std84, sizeof(std84));
            if (std84) {
            } else {
              char* cast85 = (char*)&(_str_16);
              char* c86 = _str_6;
              unsigned int c87 = 37;
              char* cast88 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast85, c86, c87, cast88);
            }
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std89;
            __VERIFIER_nondet_memory(&std89, sizeof(std89));
            it11 = std89;
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp012, sizeof(agg_tmp012));
            __VERIFIER_nondet_memory(&it11, sizeof(it11));
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std90;
            __VERIFIER_nondet_memory(&std90, sizeof(std90));
            ref_tmp515 = std90;
            long c91 = 3;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std92;
            __VERIFIER_nondet_memory(&std92, sizeof(std92));
            ref_tmp414 = std92;
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp113, sizeof(agg_tmp113));
            __VERIFIER_nondet_memory(&ref_tmp414, sizeof(ref_tmp414));
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t93 = agg_tmp012;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t94 = agg_tmp113;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std95;
            __VERIFIER_nondet_memory(&std95, sizeof(std95));
            char* cast96 = (char*)&(_str_17);
            _Bool std97;
            __VERIFIER_nondet_memory(&std97, sizeof(std97));
            if (std97) {
            } else {
              char* cast98 = (char*)&(_str_18);
              char* c99 = _str_6;
              unsigned int c100 = 43;
              char* cast101 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast98, c99, c100, cast101);
            }
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp216, sizeof(agg_tmp216));
            __VERIFIER_nondet_memory(&it11, sizeof(it11));
            long c102 = 6;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std103;
            __VERIFIER_nondet_memory(&std103, sizeof(std103));
            ref_tmp618 = std103;
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp317, sizeof(agg_tmp317));
            __VERIFIER_nondet_memory(&ref_tmp618, sizeof(ref_tmp618));
            char* cast104 = (char*)&(_str_19);
            unsigned long c105 = 7;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t106 = agg_tmp216;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t107 = agg_tmp317;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std108;
            __VERIFIER_nondet_memory(&std108, sizeof(std108));
            char* cast109 = (char*)&(_str_20);
            _Bool std110;
            __VERIFIER_nondet_memory(&std110, sizeof(std110));
            if (std110) {
            } else {
              char* cast111 = (char*)&(_str_21);
              char* c112 = _str_6;
              unsigned int c113 = 46;
              char* cast114 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast111, c112, c113, cast114);
            }
            long c115 = 8;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* std116;
            __VERIFIER_nondet_memory(&std116, sizeof(std116));
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp419, sizeof(agg_tmp419));
            __VERIFIER_nondet_memory(&it11, sizeof(it11));
            long c117 = 6;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std118;
            __VERIFIER_nondet_memory(&std118, sizeof(std118));
            ref_tmp721 = std118;
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp520, sizeof(agg_tmp520));
            __VERIFIER_nondet_memory(&ref_tmp721, sizeof(ref_tmp721));
            char* cast119 = (char*)&(_str_22);
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t120 = agg_tmp419;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t121 = agg_tmp520;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std122;
            __VERIFIER_nondet_memory(&std122, sizeof(std122));
            char* cast123 = (char*)&(_str_23);
            _Bool std124;
            __VERIFIER_nondet_memory(&std124, sizeof(std124));
            if (std124) {
            } else {
              char* cast125 = (char*)&(_str_24);
              char* c126 = _str_6;
              unsigned int c127 = 50;
              char* cast128 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast125, c126, c127, cast128);
            }
            long c129 = 4;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std130;
            __VERIFIER_nondet_memory(&std130, sizeof(std130));
            ref_tmp823 = std130;
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp622, sizeof(agg_tmp622));
            __VERIFIER_nondet_memory(&ref_tmp823, sizeof(ref_tmp823));
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std131;
            __VERIFIER_nondet_memory(&std131, sizeof(std131));
            ref_tmp1026 = std131;
            long c132 = 4;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std133;
            __VERIFIER_nondet_memory(&std133, sizeof(std133));
            ref_tmp925 = std133;
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp724, sizeof(agg_tmp724));
            __VERIFIER_nondet_memory(&ref_tmp925, sizeof(ref_tmp925));
            unsigned long c134 = 4;
            char c135 = 111;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t136 = agg_tmp622;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t137 = agg_tmp724;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std138;
            __VERIFIER_nondet_memory(&std138, sizeof(std138));
            char* cast139 = (char*)&(_str_25);
            _Bool std140;
            __VERIFIER_nondet_memory(&std140, sizeof(std140));
            if (std140) {
            } else {
              char* cast141 = (char*)&(_str_26);
              char* c142 = _str_6;
              unsigned int c143 = 53;
              char* cast144 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast141, c142, c143, cast144);
            }
            long c145 = 3;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* std146;
            __VERIFIER_nondet_memory(&std146, sizeof(std146));
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp827, sizeof(agg_tmp827));
            __VERIFIER_nondet_memory(&it11, sizeof(it11));
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std147;
            __VERIFIER_nondet_memory(&std147, sizeof(std147));
            ref_tmp1129 = std147;
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp928, sizeof(agg_tmp928));
            __VERIFIER_nondet_memory(&ref_tmp1129, sizeof(ref_tmp1129));
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std148;
            __VERIFIER_nondet_memory(&std148, sizeof(std148));
            agg_tmp1030 = std148;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std149;
            __VERIFIER_nondet_memory(&std149, sizeof(std149));
            agg_tmp1131 = std149;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t150 = agg_tmp827;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t151 = agg_tmp928;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t152 = agg_tmp1030;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t153 = agg_tmp1131;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std154;
            __VERIFIER_nondet_memory(&std154, sizeof(std154));
            char* cast155 = (char*)&(_str_27);
            _Bool std156;
            __VERIFIER_nondet_memory(&std156, sizeof(std156));
            if (std156) {
            } else {
              char* cast157 = (char*)&(_str_28);
              char* c158 = _str_6;
              unsigned int c159 = 57;
              char* cast160 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast157, c158, c159, cast160);
            }
            struct std__basic_ostream_char__std__char_traits_char__* std161;
            __VERIFIER_nondet_memory(&std161, sizeof(std161));
            struct std__basic_ostream_char__std__char_traits_char__* std162;
            __VERIFIER_nondet_memory(&std162, sizeof(std162));
            int c163 = 0;
            __retval1 = c163;
            int t164 = __retval1;
            int ret_val165 = t164;
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&str10, sizeof(str10));
            }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&str48, sizeof(str48));
            }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&str36, sizeof(str36));
            }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&str24, sizeof(str24));
            }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&base2, sizeof(base2));
            }
            return ret_val165;
  int t166 = __retval1;
  return t166;
}

