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

char _str[2] = "R";
char _str_1[12] = "str1 != \"R\"";
char _str_2[119] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_operator_eq_5_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[29] = "basic_string::_M_replace_aux";
char _str_4[24] = "basic_string::_M_create";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str12;
  int c3 = 0;
  __retval1 = c3;
  // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
  __VERIFIER_nondet_memory(&str12, sizeof(str12));
    char c4 = 82;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std5;
    __VERIFIER_nondet_memory(&std5, sizeof(std5));
    char* cast6 = (char*)&(_str);
    _Bool std7;
    __VERIFIER_nondet_memory(&std7, sizeof(std7));
    _Bool u8 = !std7;
    if (u8) {
    } else {
      char* cast9 = (char*)&(_str_1);
      char* c10 = _str_2;
      unsigned int c11 = 16;
      char* cast12 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast9, c10, c11, cast12);
    }
  {
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
    __VERIFIER_nondet_memory(&str12, sizeof(str12));
  }
  int t13 = __retval1;
  return t13;
}

