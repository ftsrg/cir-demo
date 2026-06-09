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
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };

char _str[2] = "T";
char _str_1[5] = "Test";
char _str_2[36] = "( i == 0 ) && ( j > 0 ) && ( k < 0)";
char _str_3[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_compare_3/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[29] = "basic_string::_M_replace_aux";
char _str_5[24] = "basic_string::_M_create";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
int _ZN9__gnu_cxx24__numeric_traits_integerIiE5__maxE __attribute__((aligned(4))) = 2147483647;
int _ZN9__gnu_cxx24__numeric_traits_integerIiE5__minE __attribute__((aligned(4))) = -2147483648;
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
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup8;
  int c9 = 0;
  __retval1 = c9;
  // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
  __VERIFIER_nondet_memory(&str12, sizeof(str12));
    // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
    __VERIFIER_nondet_memory(&str23, sizeof(str23));
      char c10 = 84;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std11;
      __VERIFIER_nondet_memory(&std11, sizeof(std11));
      // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
      __VERIFIER_nondet_memory(&ref_tmp07, sizeof(ref_tmp07));
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std12;
        __VERIFIER_nondet_memory(&std12, sizeof(std12));
        tmp_exprcleanup8 = std12;
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&ref_tmp07, sizeof(ref_tmp07));
      }
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t13 = tmp_exprcleanup8;
      char* cast14 = (char*)&(_str);
      int std15 = __VERIFIER_nondet_int();
      i4 = std15;
      int std16 = __VERIFIER_nondet_int();
      j5 = std16;
      char* cast17 = (char*)&(_str_1);
      int std18 = __VERIFIER_nondet_int();
      k6 = std18;
      int t19 = i4;
      int c20 = 0;
      _Bool c21 = ((t19 == c20)) ? 1 : 0;
      _Bool ternary22;
      if (c21) {
        int t23 = j5;
        int c24 = 0;
        _Bool c25 = ((t23 > c24)) ? 1 : 0;
        ternary22 = (_Bool)c25;
      } else {
        _Bool c26 = 0;
        ternary22 = (_Bool)c26;
      }
      _Bool ternary27;
      if (ternary22) {
        int t28 = k6;
        int c29 = 0;
        _Bool c30 = ((t28 < c29)) ? 1 : 0;
        ternary27 = (_Bool)c30;
      } else {
        _Bool c31 = 0;
        ternary27 = (_Bool)c31;
      }
      if (ternary27) {
      } else {
        char* cast32 = (char*)&(_str_2);
        char* c33 = _str_3;
        unsigned int c34 = 20;
        char* cast35 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast32, c33, c34, cast35);
      }
    {
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
      __VERIFIER_nondet_memory(&str23, sizeof(str23));
    }
  {
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
    __VERIFIER_nondet_memory(&str12, sizeof(str12));
  }
  int t36 = __retval1;
  return t36;
}

