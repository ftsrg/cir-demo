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
struct std__less_const_char___ { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };

char _str[8] = "Testing";
char _str_1[5] = "Test";
char _str_2[13] = "Testing this";
char _str_3[37] = "( i == 0 ) && ( j > 0 ) && ( k < 0 )";
char _str_4[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_compare_1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_5[25] = "basic_string::_M_replace";
char _str_6[24] = "basic_string::_M_create";
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
  int i3;
  int j4;
  int k5;
  int c6 = 0;
  __retval1 = c6;
  // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
  __VERIFIER_nondet_memory(&str12, sizeof(str12));
    char* cast7 = (char*)&(_str);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std8;
    __VERIFIER_nondet_memory(&std8, sizeof(std8));
    char* cast9 = (char*)&(_str);
    int std10 = __VERIFIER_nondet_int();
    i3 = std10;
    char* cast11 = (char*)&(_str_1);
    int std12 = __VERIFIER_nondet_int();
    j4 = std12;
    char* cast13 = (char*)&(_str_2);
    int std14 = __VERIFIER_nondet_int();
    k5 = std14;
    int t15 = i3;
    int c16 = 0;
    _Bool c17 = ((t15 == c16)) ? 1 : 0;
    _Bool ternary18;
    if (c17) {
      int t19 = j4;
      int c20 = 0;
      _Bool c21 = ((t19 > c20)) ? 1 : 0;
      ternary18 = (_Bool)c21;
    } else {
      _Bool c22 = 0;
      ternary18 = (_Bool)c22;
    }
    _Bool ternary23;
    if (ternary18) {
      int t24 = k5;
      int c25 = 0;
      _Bool c26 = ((t24 < c25)) ? 1 : 0;
      ternary23 = (_Bool)c26;
    } else {
      _Bool c27 = 0;
      ternary23 = (_Bool)c27;
    }
    if (ternary23) {
    } else {
      char* cast28 = (char*)&(_str_3);
      char* c29 = _str_4;
      unsigned int c30 = 20;
      char* cast31 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast28, c29, c30, cast31);
    }
  {
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
    __VERIFIER_nondet_memory(&str12, sizeof(str12));
  }
  int t32 = __retval1;
  return t32;
}

