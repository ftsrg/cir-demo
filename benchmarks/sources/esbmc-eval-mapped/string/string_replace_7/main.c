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
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[17] = "sample phraseng.";
char _str_5[26] = "str == \"sample phraseng.\"";
char _str_6[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_replace_7/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_7[11] = "replace it";
char _str_8[18] = "replace phraseng.";
char _str_9[27] = "str == \"replace phraseng.\"";
char _str_10[50] = "basic_string: construction from null is not valid";
char _str_11[24] = "basic_string::_M_create";
char _str_12[22] = "basic_string::replace";
char _str_13[25] = "basic_string::_M_replace";
char _str_14[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
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
  int c19 = 0;
  __retval1 = c19;
  char* cast20 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&base2, sizeof(base2));
    __VERIFIER_nondet_memory(cast20, sizeof(*cast20));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    char* cast21 = (char*)&(_str_1);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&str24, sizeof(str24));
      __VERIFIER_nondet_memory(cast21, sizeof(*cast21));
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    }
      char* cast22 = (char*)&(_str_2);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&str36, sizeof(str36));
        __VERIFIER_nondet_memory(cast22, sizeof(*cast22));
        __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      }
        char* cast23 = (char*)&(_str_3);
        // externalized std:: op: std::allocator<char>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
          __VERIFIER_nondet_memory(&str48, sizeof(str48));
          __VERIFIER_nondet_memory(cast23, sizeof(*cast23));
          __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
        {
          // externalized std:: op: std::allocator<char>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
        }
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
          __VERIFIER_nondet_memory(&str10, sizeof(str10));
          __VERIFIER_nondet_memory(&base2, sizeof(base2));
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std24;
            __VERIFIER_nondet_memory(&std24, sizeof(std24));
            it11 = std24;
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp012, sizeof(agg_tmp012));
            __VERIFIER_nondet_memory(&it11, sizeof(it11));
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std25;
            __VERIFIER_nondet_memory(&std25, sizeof(std25));
            ref_tmp515 = std25;
            long c26 = 3;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std27;
            __VERIFIER_nondet_memory(&std27, sizeof(std27));
            ref_tmp414 = std27;
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp113, sizeof(agg_tmp113));
            __VERIFIER_nondet_memory(&ref_tmp414, sizeof(ref_tmp414));
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t28 = agg_tmp012;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t29 = agg_tmp113;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std30;
            __VERIFIER_nondet_memory(&std30, sizeof(std30));
            struct std__basic_ostream_char__std__char_traits_char__* std31;
            __VERIFIER_nondet_memory(&std31, sizeof(std31));
            struct std__basic_ostream_char__std__char_traits_char__* std32;
            __VERIFIER_nondet_memory(&std32, sizeof(std32));
            char* cast33 = (char*)&(_str_4);
            _Bool std34;
            __VERIFIER_nondet_memory(&std34, sizeof(std34));
            if (std34) {
            } else {
              char* cast35 = (char*)&(_str_5);
              char* c36 = _str_6;
              unsigned int c37 = 44;
              char* cast38 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast35, c36, c37, cast38);
            }
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp216, sizeof(agg_tmp216));
            __VERIFIER_nondet_memory(&it11, sizeof(it11));
            long c39 = 6;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std40;
            __VERIFIER_nondet_memory(&std40, sizeof(std40));
            ref_tmp618 = std40;
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp317, sizeof(agg_tmp317));
            __VERIFIER_nondet_memory(&ref_tmp618, sizeof(ref_tmp618));
            char* cast41 = (char*)&(_str_7);
            unsigned long c42 = 7;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t43 = agg_tmp216;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t44 = agg_tmp317;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std45;
            __VERIFIER_nondet_memory(&std45, sizeof(std45));
            struct std__basic_ostream_char__std__char_traits_char__* std46;
            __VERIFIER_nondet_memory(&std46, sizeof(std46));
            struct std__basic_ostream_char__std__char_traits_char__* std47;
            __VERIFIER_nondet_memory(&std47, sizeof(std47));
            char* cast48 = (char*)&(_str_8);
            _Bool std49;
            __VERIFIER_nondet_memory(&std49, sizeof(std49));
            if (std49) {
            } else {
              char* cast50 = (char*)&(_str_9);
              char* c51 = _str_6;
              unsigned int c52 = 48;
              char* cast53 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast50, c51, c52, cast53);
            }
            struct std__basic_ostream_char__std__char_traits_char__* std54;
            __VERIFIER_nondet_memory(&std54, sizeof(std54));
            struct std__basic_ostream_char__std__char_traits_char__* std55;
            __VERIFIER_nondet_memory(&std55, sizeof(std55));
            int c56 = 0;
            __retval1 = c56;
            int t57 = __retval1;
            int ret_val58 = t57;
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
            return ret_val58;
  int t59 = __retval1;
  return t59;
}

