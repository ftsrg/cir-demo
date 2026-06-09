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
char _str_4[17] = "sample phraseng.";
char _str_5[26] = "str == \"sample phraseng.\"";
char _str_6[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_replace_8/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_7[11] = "replace it";
char _str_8[18] = "replace phraseng.";
char _str_9[27] = "str == \"replace phraseng.\"";
char _str_10[8] = "is cool";
char _str_11[19] = "replace is coolng.";
char _str_12[28] = "str == \"replace is coolng.\"";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_13[50] = "basic_string: construction from null is not valid";
char _str_14[24] = "basic_string::_M_create";
char _str_15[22] = "basic_string::replace";
char _str_16[25] = "basic_string::_M_replace";
char _str_17[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
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
  int c22 = 0;
  __retval1 = c22;
  char* cast23 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&base2, sizeof(base2));
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
        char* cast26 = (char*)&(_str_3);
        // externalized std:: op: std::allocator<char>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
          __VERIFIER_nondet_memory(&str48, sizeof(str48));
          __VERIFIER_nondet_memory(cast26, sizeof(*cast26));
          __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
        {
          // externalized std:: op: std::allocator<char>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
        }
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
          __VERIFIER_nondet_memory(&str10, sizeof(str10));
          __VERIFIER_nondet_memory(&base2, sizeof(base2));
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std27;
            __VERIFIER_nondet_memory(&std27, sizeof(std27));
            it11 = std27;
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp012, sizeof(agg_tmp012));
            __VERIFIER_nondet_memory(&it11, sizeof(it11));
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std28;
            __VERIFIER_nondet_memory(&std28, sizeof(std28));
            ref_tmp515 = std28;
            long c29 = 3;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std30;
            __VERIFIER_nondet_memory(&std30, sizeof(std30));
            ref_tmp414 = std30;
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp113, sizeof(agg_tmp113));
            __VERIFIER_nondet_memory(&ref_tmp414, sizeof(ref_tmp414));
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t31 = agg_tmp012;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t32 = agg_tmp113;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std33;
            __VERIFIER_nondet_memory(&std33, sizeof(std33));
            char* cast34 = (char*)&(_str_4);
            _Bool std35;
            __VERIFIER_nondet_memory(&std35, sizeof(std35));
            if (std35) {
            } else {
              char* cast36 = (char*)&(_str_5);
              char* c37 = _str_6;
              unsigned int c38 = 43;
              char* cast39 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast36, c37, c38, cast39);
            }
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp216, sizeof(agg_tmp216));
            __VERIFIER_nondet_memory(&it11, sizeof(it11));
            long c40 = 6;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std41;
            __VERIFIER_nondet_memory(&std41, sizeof(std41));
            ref_tmp618 = std41;
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp317, sizeof(agg_tmp317));
            __VERIFIER_nondet_memory(&ref_tmp618, sizeof(ref_tmp618));
            char* cast42 = (char*)&(_str_7);
            unsigned long c43 = 7;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t44 = agg_tmp216;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t45 = agg_tmp317;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std46;
            __VERIFIER_nondet_memory(&std46, sizeof(std46));
            char* cast47 = (char*)&(_str_8);
            _Bool std48;
            __VERIFIER_nondet_memory(&std48, sizeof(std48));
            if (std48) {
            } else {
              char* cast49 = (char*)&(_str_9);
              char* c50 = _str_6;
              unsigned int c51 = 46;
              char* cast52 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast49, c50, c51, cast52);
            }
            long c53 = 8;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* std54;
            __VERIFIER_nondet_memory(&std54, sizeof(std54));
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp419, sizeof(agg_tmp419));
            __VERIFIER_nondet_memory(&it11, sizeof(it11));
            long c55 = 6;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std56;
            __VERIFIER_nondet_memory(&std56, sizeof(std56));
            ref_tmp721 = std56;
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp520, sizeof(agg_tmp520));
            __VERIFIER_nondet_memory(&ref_tmp721, sizeof(ref_tmp721));
            char* cast57 = (char*)&(_str_10);
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t58 = agg_tmp419;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t59 = agg_tmp520;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std60;
            __VERIFIER_nondet_memory(&std60, sizeof(std60));
            char* cast61 = (char*)&(_str_11);
            _Bool std62;
            __VERIFIER_nondet_memory(&std62, sizeof(std62));
            if (std62) {
            } else {
              char* cast63 = (char*)&(_str_12);
              char* c64 = _str_6;
              unsigned int c65 = 50;
              char* cast66 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast63, c64, c65, cast66);
            }
            struct std__basic_ostream_char__std__char_traits_char__* std67;
            __VERIFIER_nondet_memory(&std67, sizeof(std67));
            struct std__basic_ostream_char__std__char_traits_char__* std68;
            __VERIFIER_nondet_memory(&std68, sizeof(std68));
            int c69 = 0;
            __retval1 = c69;
            int t70 = __retval1;
            int ret_val71 = t70;
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
            return ret_val71;
  int t72 = __retval1;
  return t72;
}

