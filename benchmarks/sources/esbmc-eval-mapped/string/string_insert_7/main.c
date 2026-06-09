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
char _str_5[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_insert_7/main.cpp";
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
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_20[50] = "basic_string: construction from null is not valid";
char _str_21[24] = "basic_string::_M_create";
char _str_22[22] = "basic_string::replace";
char _str_23[25] = "basic_string::_M_replace";
char _str_24[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_25[21] = "basic_string::insert";
char _str_26[29] = "basic_string::_M_replace_aux";
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
  int c16 = 0;
  __retval1 = c16;
  char* cast17 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&str2, sizeof(str2));
    __VERIFIER_nondet_memory(cast17, sizeof(*cast17));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    char* cast18 = (char*)&(_str_1);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&str24, sizeof(str24));
      __VERIFIER_nondet_memory(cast18, sizeof(*cast18));
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    }
      char* cast19 = (char*)&(_str_2);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&str36, sizeof(str36));
        __VERIFIER_nondet_memory(cast19, sizeof(*cast19));
        __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      }
        // externalized std:: op: __gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >::__normal_iterator()
        __VERIFIER_nondet_memory(&it8, sizeof(it8));
        unsigned long c20 = 6;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std21;
        __VERIFIER_nondet_memory(&std21, sizeof(std21));
        char* cast22 = (char*)&(_str_3);
        _Bool std23;
        __VERIFIER_nondet_memory(&std23, sizeof(std23));
        if (std23) {
        } else {
          char* cast24 = (char*)&(_str_4);
          char* c25 = _str_5;
          unsigned int c26 = 23;
          char* cast27 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast24, c25, c26, cast27);
        }
        unsigned long c28 = 6;
        unsigned long c29 = 3;
        unsigned long c30 = 4;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std31;
        __VERIFIER_nondet_memory(&std31, sizeof(std31));
        char* cast32 = (char*)&(_str_6);
        _Bool std33;
        __VERIFIER_nondet_memory(&std33, sizeof(std33));
        if (std33) {
        } else {
          char* cast34 = (char*)&(_str_7);
          char* c35 = _str_5;
          unsigned int c36 = 26;
          char* cast37 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast34, c35, c36, cast37);
        }
        unsigned long c38 = 10;
        char* cast39 = (char*)&(_str_8);
        unsigned long c40 = 8;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std41;
        __VERIFIER_nondet_memory(&std41, sizeof(std41));
        char* cast42 = (char*)&(_str_9);
        _Bool std43;
        __VERIFIER_nondet_memory(&std43, sizeof(std43));
        if (std43) {
        } else {
          char* cast44 = (char*)&(_str_10);
          char* c45 = _str_5;
          unsigned int c46 = 29;
          char* cast47 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast44, c45, c46, cast47);
        }
        unsigned long c48 = 10;
        char* cast49 = (char*)&(_str_11);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std50;
        __VERIFIER_nondet_memory(&std50, sizeof(std50));
        char* cast51 = (char*)&(_str_12);
        _Bool std52;
        __VERIFIER_nondet_memory(&std52, sizeof(std52));
        if (std52) {
        } else {
          char* cast53 = (char*)&(_str_13);
          char* c54 = _str_5;
          unsigned int c55 = 32;
          char* cast56 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast53, c54, c55, cast56);
        }
        unsigned long c57 = 15;
        unsigned long c58 = 1;
        char c59 = 58;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std60;
        __VERIFIER_nondet_memory(&std60, sizeof(std60));
        char* cast61 = (char*)&(_str_14);
        _Bool std62;
        __VERIFIER_nondet_memory(&std62, sizeof(std62));
        if (std62) {
        } else {
          char* cast63 = (char*)&(_str_15);
          char* c64 = _str_5;
          unsigned int c65 = 35;
          char* cast66 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast63, c64, c65, cast66);
        }
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std67;
        __VERIFIER_nondet_memory(&std67, sizeof(std67));
        ref_tmp512 = std67;
        long c68 = 5;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std69;
        __VERIFIER_nondet_memory(&std69, sizeof(std69));
        ref_tmp411 = std69;
        // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
        __VERIFIER_nondet_memory(&agg_tmp010, sizeof(agg_tmp010));
        __VERIFIER_nondet_memory(&ref_tmp411, sizeof(ref_tmp411));
        char c70 = 44;
        struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t71 = agg_tmp010;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std72;
        __VERIFIER_nondet_memory(&std72, sizeof(std72));
        ref_tmp39 = std72;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* std73;
        __VERIFIER_nondet_memory(&std73, sizeof(std73));
        char* cast74 = (char*)&(_str_16);
        _Bool std75;
        __VERIFIER_nondet_memory(&std75, sizeof(std75));
        if (std75) {
        } else {
          char* cast76 = (char*)&(_str_17);
          char* c77 = _str_5;
          unsigned int c78 = 38;
          char* cast79 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast76, c77, c78, cast79);
        }
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std80;
        __VERIFIER_nondet_memory(&std80, sizeof(std80));
        ref_tmp614 = std80;
        // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
        __VERIFIER_nondet_memory(&agg_tmp113, sizeof(agg_tmp113));
        __VERIFIER_nondet_memory(&ref_tmp614, sizeof(ref_tmp614));
        unsigned long c81 = 3;
        char c82 = 46;
        struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t83 = agg_tmp113;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std84;
        __VERIFIER_nondet_memory(&std84, sizeof(std84));
        agg_tmp215 = std84;
        char* cast85 = (char*)&(_str_18);
        _Bool std86;
        __VERIFIER_nondet_memory(&std86, sizeof(std86));
        if (std86) {
        } else {
          char* cast87 = (char*)&(_str_19);
          char* c88 = _str_5;
          unsigned int c89 = 41;
          char* cast90 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast87, c88, c89, cast90);
        }
        struct std__basic_ostream_char__std__char_traits_char__* std91;
        __VERIFIER_nondet_memory(&std91, sizeof(std91));
        struct std__basic_ostream_char__std__char_traits_char__* std92;
        __VERIFIER_nondet_memory(&std92, sizeof(std92));
        int c93 = 0;
        __retval1 = c93;
        int t94 = __retval1;
        int ret_val95 = t94;
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
        return ret_val95;
  int t96 = __retval1;
  return t96;
}

