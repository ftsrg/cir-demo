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
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std__less_const_char___ { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__ctype_char_;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

char _str[3] = "f(";
char _str_1[3] = ") ";
char _str_2[3] = "= ";
char _str_3[9] = "f(x) = x";
char _str_4[19] = "str2 == \"f(x) = x\"";
char _str_5[120] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_operator_plus_eq_3/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_6[29] = "basic_string::_M_replace_aux";
char _str_7[24] = "basic_string::_M_create";
char _str_8[21] = "basic_string::append";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
char _str_9[25] = "basic_string::_M_replace";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str12;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str23;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str34;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str45;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp06;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp17;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup8;
  int c9 = 0;
  __retval1 = c9;
  // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
  __VERIFIER_nondet_memory(&str12, sizeof(str12));
    // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
    __VERIFIER_nondet_memory(&str23, sizeof(str23));
      // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
      __VERIFIER_nondet_memory(&str34, sizeof(str34));
        // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
        __VERIFIER_nondet_memory(&str45, sizeof(str45));
          char c10 = 120;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std11;
          __VERIFIER_nondet_memory(&std11, sizeof(std11));
          char* cast12 = (char*)&(_str);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std13;
          __VERIFIER_nondet_memory(&std13, sizeof(std13));
          ref_tmp17 = std13;
            char* cast14 = (char*)&(_str_1);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std15;
            __VERIFIER_nondet_memory(&std15, sizeof(std15));
            ref_tmp06 = std15;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std16;
              __VERIFIER_nondet_memory(&std16, sizeof(std16));
              tmp_exprcleanup8 = std16;
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&ref_tmp06, sizeof(ref_tmp06));
            }
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&ref_tmp17, sizeof(ref_tmp17));
          }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t17 = tmp_exprcleanup8;
          char* cast18 = (char*)&(_str_2);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std19;
          __VERIFIER_nondet_memory(&std19, sizeof(std19));
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std20;
          __VERIFIER_nondet_memory(&std20, sizeof(std20));
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std21;
          __VERIFIER_nondet_memory(&std21, sizeof(std21));
          char* cast22 = (char*)&(_str_3);
          _Bool std23;
          __VERIFIER_nondet_memory(&std23, sizeof(std23));
          if (std23) {
          } else {
            char* cast24 = (char*)&(_str_4);
            char* c25 = _str_5;
            unsigned int c26 = 22;
            char* cast27 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast24, c25, c26, cast27);
          }
          struct std__basic_ostream_char__std__char_traits_char__* std28;
          __VERIFIER_nondet_memory(&std28, sizeof(std28));
          struct std__basic_ostream_char__std__char_traits_char__* std29;
          __VERIFIER_nondet_memory(&std29, sizeof(std29));
          int c30 = 0;
          __retval1 = c30;
          int t31 = __retval1;
          int ret_val32 = t31;
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&str45, sizeof(str45));
          }
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&str34, sizeof(str34));
          }
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&str23, sizeof(str23));
          }
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&str12, sizeof(str12));
          }
          return ret_val32;
  int t33 = __retval1;
  return t33;
}

