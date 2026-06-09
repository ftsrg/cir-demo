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
struct _Guard { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* _M_guarded; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__less_const_char___ { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };

char _str[5] = "Test";
char _str_1[8] = "Testing";
char _str_2[37] = "( i == 0 ) && ( j > 0 ) && ( k < 0 )";
char _str_3[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_compare_2/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[50] = "basic_string: construction from null is not valid";
char _str_5[24] = "basic_string::_M_create";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
int _ZN9__gnu_cxx24__numeric_traits_integerIiE5__maxE __attribute__((aligned(4))) = 2147483647;
int _ZN9__gnu_cxx24__numeric_traits_integerIiE5__minE __attribute__((aligned(4))) = -2147483648;
char _str_6[29] = "basic_string::_M_replace_aux";
char _str_7[25] = "basic_string::_M_replace";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern int __VERIFIER_nondet_int(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str12;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str23;
  int i4;
  int j5;
  int k6;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp07;
  struct std__allocator_char_ ref_tmp18;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup9;
  int c10 = 0;
  __retval1 = c10;
  // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
  __VERIFIER_nondet_memory(&str12, sizeof(str12));
    // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
    __VERIFIER_nondet_memory(&str23, sizeof(str23));
      char* cast11 = (char*)&(_str);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp18, sizeof(ref_tmp18));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&ref_tmp07, sizeof(ref_tmp07));
        __VERIFIER_nondet_memory(cast11, sizeof(*cast11));
        __VERIFIER_nondet_memory(&ref_tmp18, sizeof(ref_tmp18));
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std12;
          __VERIFIER_nondet_memory(&std12, sizeof(std12));
          tmp_exprcleanup9 = std12;
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&ref_tmp07, sizeof(ref_tmp07));
        }
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp18, sizeof(ref_tmp18));
      }
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t13 = tmp_exprcleanup9;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std14;
      __VERIFIER_nondet_memory(&std14, sizeof(std14));
      int std15 = __VERIFIER_nondet_int();
      i4 = std15;
      char c16 = 84;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std17;
      __VERIFIER_nondet_memory(&std17, sizeof(std17));
      int std18 = __VERIFIER_nondet_int();
      j5 = std18;
      char* cast19 = (char*)&(_str_1);
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std20;
      __VERIFIER_nondet_memory(&std20, sizeof(std20));
      int std21 = __VERIFIER_nondet_int();
      k6 = std21;
      int t22 = i4;
      int c23 = 0;
      _Bool c24 = ((t22 == c23)) ? 1 : 0;
      _Bool ternary25;
      if (c24) {
        int t26 = j5;
        int c27 = 0;
        _Bool c28 = ((t26 > c27)) ? 1 : 0;
        ternary25 = (_Bool)c28;
      } else {
        _Bool c29 = 0;
        ternary25 = (_Bool)c29;
      }
      _Bool ternary30;
      if (ternary25) {
        int t31 = k6;
        int c32 = 0;
        _Bool c33 = ((t31 < c32)) ? 1 : 0;
        ternary30 = (_Bool)c33;
      } else {
        _Bool c34 = 0;
        ternary30 = (_Bool)c34;
      }
      if (ternary30) {
      } else {
        char* cast35 = (char*)&(_str_2);
        char* c36 = _str_3;
        unsigned int c37 = 23;
        char* cast38 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast35, c36, c37, cast38);
      }
    {
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
      __VERIFIER_nondet_memory(&str23, sizeof(str23));
    }
  {
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
    __VERIFIER_nondet_memory(&str12, sizeof(str12));
  }
  int t39 = __retval1;
  return t39;
}

