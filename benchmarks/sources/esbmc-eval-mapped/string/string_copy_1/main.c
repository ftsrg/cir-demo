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
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[15] = "Test string...";
char _str_1[7] = "string";
char _str_2[16] = "aux == \"string\"";
char _str_3[108] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_copy_1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[18] = "buffer contains: ";
char _str_5[2] = "\n";
char _str_6[50] = "basic_string: construction from null is not valid";
char _str_7[24] = "basic_string::_M_create";
char _str_8[19] = "basic_string::copy";
char _str_9[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  unsigned long length2;
  char buffer3[20];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str4;
  struct std__allocator_char_ ref_tmp05;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ aux6;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp17;
  struct std__allocator_char_ ref_tmp28;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup9;
  int c10 = 0;
  __retval1 = c10;
  char* cast11 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&str4, sizeof(str4));
    __VERIFIER_nondet_memory(cast11, sizeof(*cast11));
    __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
  }
    char* cast12 = (char*)&(buffer3);
    unsigned long c13 = 6;
    unsigned long c14 = 5;
    unsigned long std15 = __VERIFIER_nondet_unsigned_long();
    length2 = std15;
    char c16 = 0;
    unsigned long t17 = length2;
    buffer3[t17] = c16;
    // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
    __VERIFIER_nondet_memory(&aux6, sizeof(aux6));
      char* cast18 = (char*)&(buffer3);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp28, sizeof(ref_tmp28));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&ref_tmp17, sizeof(ref_tmp17));
        __VERIFIER_nondet_memory(cast18, sizeof(*cast18));
        __VERIFIER_nondet_memory(&ref_tmp28, sizeof(ref_tmp28));
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std19;
          __VERIFIER_nondet_memory(&std19, sizeof(std19));
          tmp_exprcleanup9 = std19;
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&ref_tmp17, sizeof(ref_tmp17));
        }
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp28, sizeof(ref_tmp28));
      }
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t20 = tmp_exprcleanup9;
      char* cast21 = (char*)&(_str_1);
      _Bool std22;
      __VERIFIER_nondet_memory(&std22, sizeof(std22));
      if (std22) {
      } else {
        char* cast23 = (char*)&(_str_2);
        char* c24 = _str_3;
        unsigned int c25 = 24;
        char* cast26 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast23, c24, c25, cast26);
      }
      char* cast27 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* std28;
      __VERIFIER_nondet_memory(&std28, sizeof(std28));
      char* cast29 = (char*)&(buffer3);
      struct std__basic_ostream_char__std__char_traits_char__* std30;
      __VERIFIER_nondet_memory(&std30, sizeof(std30));
      char* cast31 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* std32;
      __VERIFIER_nondet_memory(&std32, sizeof(std32));
      int c33 = 0;
      __retval1 = c33;
      int t34 = __retval1;
      int ret_val35 = t34;
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&aux6, sizeof(aux6));
      }
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&str4, sizeof(str4));
      }
      return ret_val35;
  int t36 = __retval1;
  return t36;
}

