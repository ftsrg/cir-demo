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

char _str[15] = "to be question";
char _str_1[5] = "the ";
char _str_2[13] = "or not to be";
char _str_3[19] = "to be the question";
char _str_4[28] = "str == \"to be the question\"";
char _str_5[114] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_insert_final/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_6[23] = "to be not the question";
char _str_7[32] = "str == \"to be not the question\"";
char _str_8[13] = "that is cool";
char _str_9[31] = "to be not that is the question";
char _str_10[40] = "str == \"to be not that is the question\"";
char _str_11[7] = "to be ";
char _str_12[37] = "to be not to be that is the question";
char _str_13[46] = "str == \"to be not to be that is the question\"";
char _str_14[38] = "to be not to be: that is the question";
char _str_15[47] = "str == \"to be not to be: that is the question\"";
char _str_16[39] = "to be, not to be: that is the question";
char _str_17[48] = "str == \"to be, not to be: that is the question\"";
char _str_18[42] = "to be, not to be: that is the question...";
char _str_19[51] = "str == \"to be, not to be: that is the question...\"";
char _str_20[45] = "to be, or not to be: that is the question...";
char _str_21[54] = "str == \"to be, or not to be: that is the question...\"";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_22[50] = "basic_string: construction from null is not valid";
char _str_23[24] = "basic_string::_M_create";
char _str_24[22] = "basic_string::replace";
char _str_25[25] = "basic_string::_M_replace";
char _str_26[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_27[21] = "basic_string::insert";
char _str_28[29] = "basic_string::_M_replace_aux";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2;
  struct std__allocator_char_ ref_tmp03;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str24;
  struct std__allocator_char_ ref_tmp15;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str36;
  struct std__allocator_char_ ref_tmp27;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ it8;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp39;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp010;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp411;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp512;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp113;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp614;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp215;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp316;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp717;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp418;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp519;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp820;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp621;
  int c22 = 0;
  __retval1 = c22;
  char* cast23 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&str2, sizeof(str2));
    __VERIFIER_nondet_memory(cast23, sizeof(*cast23));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    char* cast24 = (char*)&(_str_1);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&str24, sizeof(str24));
      __VERIFIER_nondet_memory(cast24, sizeof(*cast24));
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    }
      char* cast25 = (char*)&(_str_2);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&str36, sizeof(str36));
        __VERIFIER_nondet_memory(cast25, sizeof(*cast25));
        __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      }
        // externalized std:: op: __gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >::__normal_iterator()
        __VERIFIER_nondet_memory(&it8, sizeof(it8));
        unsigned long c26 = 6;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std27;
        __VERIFIER_nondet_memory(&std27, sizeof(std27));
        char* cast28 = (char*)&(_str_3);
        _Bool std29;
        __VERIFIER_nondet_memory(&std29, sizeof(std29));
        if (std29) {
        } else {
          char* cast30 = (char*)&(_str_4);
          char* c31 = _str_5;
          unsigned int c32 = 23;
          char* cast33 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast30, c31, c32, cast33);
        }
        unsigned long c34 = 6;
        unsigned long c35 = 3;
        unsigned long c36 = 4;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std37;
        __VERIFIER_nondet_memory(&std37, sizeof(std37));
        char* cast38 = (char*)&(_str_6);
        _Bool std39;
        __VERIFIER_nondet_memory(&std39, sizeof(std39));
        if (std39) {
        } else {
          char* cast40 = (char*)&(_str_7);
          char* c41 = _str_5;
          unsigned int c42 = 26;
          char* cast43 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast40, c41, c42, cast43);
        }
        unsigned long c44 = 10;
        char* cast45 = (char*)&(_str_8);
        unsigned long c46 = 8;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std47;
        __VERIFIER_nondet_memory(&std47, sizeof(std47));
        char* cast48 = (char*)&(_str_9);
        _Bool std49;
        __VERIFIER_nondet_memory(&std49, sizeof(std49));
        if (std49) {
        } else {
          char* cast50 = (char*)&(_str_10);
          char* c51 = _str_5;
          unsigned int c52 = 29;
          char* cast53 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast50, c51, c52, cast53);
        }
        unsigned long c54 = 10;
        char* cast55 = (char*)&(_str_11);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std56;
        __VERIFIER_nondet_memory(&std56, sizeof(std56));
        char* cast57 = (char*)&(_str_12);
        _Bool std58;
        __VERIFIER_nondet_memory(&std58, sizeof(std58));
        if (std58) {
        } else {
          char* cast59 = (char*)&(_str_13);
          char* c60 = _str_5;
          unsigned int c61 = 32;
          char* cast62 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast59, c60, c61, cast62);
        }
        unsigned long c63 = 15;
        unsigned long c64 = 1;
        char c65 = 58;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std66;
        __VERIFIER_nondet_memory(&std66, sizeof(std66));
        char* cast67 = (char*)&(_str_14);
        _Bool std68;
        __VERIFIER_nondet_memory(&std68, sizeof(std68));
        if (std68) {
        } else {
          char* cast69 = (char*)&(_str_15);
          char* c70 = _str_5;
          unsigned int c71 = 35;
          char* cast72 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast69, c70, c71, cast72);
        }
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std73;
        __VERIFIER_nondet_memory(&std73, sizeof(std73));
        ref_tmp512 = std73;
        long c74 = 5;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std75;
        __VERIFIER_nondet_memory(&std75, sizeof(std75));
        ref_tmp411 = std75;
        // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
        __VERIFIER_nondet_memory(&agg_tmp010, sizeof(agg_tmp010));
        __VERIFIER_nondet_memory(&ref_tmp411, sizeof(ref_tmp411));
        char c76 = 44;
        struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t77 = agg_tmp010;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std78;
        __VERIFIER_nondet_memory(&std78, sizeof(std78));
        ref_tmp39 = std78;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* std79;
        __VERIFIER_nondet_memory(&std79, sizeof(std79));
        char* cast80 = (char*)&(_str_16);
        _Bool std81;
        __VERIFIER_nondet_memory(&std81, sizeof(std81));
        if (std81) {
        } else {
          char* cast82 = (char*)&(_str_17);
          char* c83 = _str_5;
          unsigned int c84 = 38;
          char* cast85 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast82, c83, c84, cast85);
        }
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std86;
        __VERIFIER_nondet_memory(&std86, sizeof(std86));
        ref_tmp614 = std86;
        // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
        __VERIFIER_nondet_memory(&agg_tmp113, sizeof(agg_tmp113));
        __VERIFIER_nondet_memory(&ref_tmp614, sizeof(ref_tmp614));
        unsigned long c87 = 3;
        char c88 = 46;
        struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t89 = agg_tmp113;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std90;
        __VERIFIER_nondet_memory(&std90, sizeof(std90));
        agg_tmp215 = std90;
        char* cast91 = (char*)&(_str_18);
        _Bool std92;
        __VERIFIER_nondet_memory(&std92, sizeof(std92));
        if (std92) {
        } else {
          char* cast93 = (char*)&(_str_19);
          char* c94 = _str_5;
          unsigned int c95 = 41;
          char* cast96 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast93, c94, c95, cast96);
        }
        long c97 = 2;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std98;
        __VERIFIER_nondet_memory(&std98, sizeof(std98));
        ref_tmp717 = std98;
        // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
        __VERIFIER_nondet_memory(&agg_tmp316, sizeof(agg_tmp316));
        __VERIFIER_nondet_memory(&ref_tmp717, sizeof(ref_tmp717));
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std99;
        __VERIFIER_nondet_memory(&std99, sizeof(std99));
        agg_tmp418 = std99;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std100;
        __VERIFIER_nondet_memory(&std100, sizeof(std100));
        ref_tmp820 = std100;
        long c101 = 3;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std102;
        __VERIFIER_nondet_memory(&std102, sizeof(std102));
        agg_tmp519 = std102;
        struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t103 = agg_tmp316;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t104 = agg_tmp418;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t105 = agg_tmp519;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std106;
        __VERIFIER_nondet_memory(&std106, sizeof(std106));
        agg_tmp621 = std106;
        char* cast107 = (char*)&(_str_20);
        _Bool std108;
        __VERIFIER_nondet_memory(&std108, sizeof(std108));
        if (std108) {
        } else {
          char* cast109 = (char*)&(_str_21);
          char* c110 = _str_5;
          unsigned int c111 = 44;
          char* cast112 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast109, c110, c111, cast112);
        }
        struct std__basic_ostream_char__std__char_traits_char__* std113;
        __VERIFIER_nondet_memory(&std113, sizeof(std113));
        struct std__basic_ostream_char__std__char_traits_char__* std114;
        __VERIFIER_nondet_memory(&std114, sizeof(std114));
        int c115 = 0;
        __retval1 = c115;
        int t116 = __retval1;
        int ret_val117 = t116;
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
          __VERIFIER_nondet_memory(&str2, sizeof(str2));
        }
        return ret_val117;
  int t118 = __retval1;
  return t118;
}

