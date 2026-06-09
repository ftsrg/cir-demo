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
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__ctype_char_;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

char _str[5] = "Test";
char _str_1[8] = " String";
char _str_2[44] = "(str3 == str1 + 't') && (str4 == \" String\")";
char _str_3[125] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_operator_brackets_6_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[50] = "basic_string: construction from null is not valid";
char _str_5[24] = "basic_string::_M_create";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
char _str_6[93] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/basic_string.h";
char __PRETTY_FUNCTION____ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm[138] = "reference std::basic_string<char>::operator[](size_type) [_CharT = char, _Traits = std::char_traits<char>, _Alloc = std::allocator<char>]";
char _str_7[16] = "__pos <= size()";
char _str_8[21] = "basic_string::append";
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
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str56;
  int i7;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp08;
  struct std__allocator_char_ ref_tmp19;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup10;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp211;
  struct std__allocator_char_ ref_tmp312;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup13;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp414;
  int c15 = 0;
  __retval1 = c15;
  // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
  __VERIFIER_nondet_memory(&str12, sizeof(str12));
    // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
    __VERIFIER_nondet_memory(&str23, sizeof(str23));
      // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
      __VERIFIER_nondet_memory(&str34, sizeof(str34));
        // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
        __VERIFIER_nondet_memory(&str45, sizeof(str45));
          // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
          __VERIFIER_nondet_memory(&str56, sizeof(str56));
            char* cast16 = (char*)&(_str);
            // externalized std:: op: std::allocator<char>::allocator()
            __VERIFIER_nondet_memory(&ref_tmp19, sizeof(ref_tmp19));
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
              __VERIFIER_nondet_memory(&ref_tmp08, sizeof(ref_tmp08));
              __VERIFIER_nondet_memory(cast16, sizeof(*cast16));
              __VERIFIER_nondet_memory(&ref_tmp19, sizeof(ref_tmp19));
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std17;
                __VERIFIER_nondet_memory(&std17, sizeof(std17));
                tmp_exprcleanup10 = std17;
              {
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                __VERIFIER_nondet_memory(&ref_tmp08, sizeof(ref_tmp08));
              }
            {
              // externalized std:: op: std::allocator<char>::~allocator()
              __VERIFIER_nondet_memory(&ref_tmp19, sizeof(ref_tmp19));
            }
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t18 = tmp_exprcleanup10;
            char* cast19 = (char*)&(_str_1);
            // externalized std:: op: std::allocator<char>::allocator()
            __VERIFIER_nondet_memory(&ref_tmp312, sizeof(ref_tmp312));
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
              __VERIFIER_nondet_memory(&ref_tmp211, sizeof(ref_tmp211));
              __VERIFIER_nondet_memory(cast19, sizeof(*cast19));
              __VERIFIER_nondet_memory(&ref_tmp312, sizeof(ref_tmp312));
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std20;
                __VERIFIER_nondet_memory(&std20, sizeof(std20));
                tmp_exprcleanup13 = std20;
              {
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                __VERIFIER_nondet_memory(&ref_tmp211, sizeof(ref_tmp211));
              }
            {
              // externalized std:: op: std::allocator<char>::~allocator()
              __VERIFIER_nondet_memory(&ref_tmp312, sizeof(ref_tmp312));
            }
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t21 = tmp_exprcleanup13;
              int c22 = 0;
              i7 = c22;
              while (1) {
                int t24 = i7;
                int c25 = 4;
                _Bool c26 = ((t24 < c25)) ? 1 : 0;
                if (!c26) break;
                  int t27 = i7;
                  unsigned long cast28 = (unsigned long)t27;
                  char* std29;
                  __VERIFIER_nondet_memory(&std29, sizeof(std29));
                  char t30 = *std29;
                  int t31 = i7;
                  unsigned long cast32 = (unsigned long)t31;
                  char* std33;
                  __VERIFIER_nondet_memory(&std33, sizeof(std33));
                  *std33 = t30;
                  int t34 = i7;
                  unsigned long cast35 = (unsigned long)t34;
                  char* std36;
                  __VERIFIER_nondet_memory(&std36, sizeof(std36));
                  char t37 = *std36;
                  int t38 = i7;
                  unsigned long cast39 = (unsigned long)t38;
                  char* std40;
                  __VERIFIER_nondet_memory(&std40, sizeof(std40));
                  *std40 = t37;
              for_step23: ;
                int t41 = i7;
                int u42 = t41 + 1;
                i7 = u42;
              }
            char c43 = 116;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std44;
            __VERIFIER_nondet_memory(&std44, sizeof(std44));
            ref_tmp414 = std44;
              _Bool std45;
              __VERIFIER_nondet_memory(&std45, sizeof(std45));
              _Bool ternary46;
              if (std45) {
                char* cast47 = (char*)&(_str_1);
                _Bool std48;
                __VERIFIER_nondet_memory(&std48, sizeof(std48));
                ternary46 = (_Bool)std48;
              } else {
                _Bool c49 = 0;
                ternary46 = (_Bool)c49;
              }
              if (ternary46) {
              } else {
                char* cast50 = (char*)&(_str_2);
                char* c51 = _str_3;
                unsigned int c52 = 26;
                char* cast53 = (char*)&(__PRETTY_FUNCTION___main);
                __assert_fail(cast50, c51, c52, cast53);
              }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&ref_tmp414, sizeof(ref_tmp414));
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
              __VERIFIER_nondet_memory(&str56, sizeof(str56));
            }
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
            return ret_val58;
  int t59 = __retval1;
  return t59;
}

