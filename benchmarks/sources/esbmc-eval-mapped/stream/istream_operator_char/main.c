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
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_istream_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base9basefieldE_const __attribute__((aligned(4))) = 74;
int _ZNSt8ios_base3hexE_const __attribute__((aligned(4))) = 8;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[18] = "Enter character: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[23] = "(int)cin.gcount() >= 0";
char _str_2[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stream/istream_operator_char/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[17] = "Enter a string: ";
char _str_4[40] = "cin.flags() & ios::hex == iostream::hex";
char _str_5[23] = "Enter another string: ";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern long __VERIFIER_nondet_long(void);
extern int __VERIFIER_nondet_int(void);
// function: main
int main() {
bb0:
  int __retval1;
  char n2;
  char n13[256];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ n24;
  int c5 = 0;
  __retval1 = c5;
  // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
  __VERIFIER_nondet_memory(&n24, sizeof(n24));
    char* cast6 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std7;
    __VERIFIER_nondet_memory(&std7, sizeof(std7));
    struct std__basic_istream_char__std__char_traits_char__* std8;
    __VERIFIER_nondet_memory(&std8, sizeof(std8));
    long std9 = __VERIFIER_nondet_long();
    int cast10 = (int)std9;
    int c11 = 0;
    _Bool c12 = ((cast10 >= c11)) ? 1 : 0;
    if (c12) {
    } else {
      char* cast13 = (char*)&(_str_1);
      char* c14 = _str_2;
      unsigned int c15 = 21;
      char* cast16 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast13, c14, c15, cast16);
    }
    char* cast17 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std18;
    __VERIFIER_nondet_memory(&std18, sizeof(std18));
    struct std__basic_istream_char__std__char_traits_char__* std19;
    __VERIFIER_nondet_memory(&std19, sizeof(std19));
    struct std__basic_istream_char__std__char_traits_char__* std20;
    __VERIFIER_nondet_memory(&std20, sizeof(std20));
    void** v21 = (void**)&_ZSt3cin;
    void* v22 = *((void**)v21);
    unsigned char* cast23 = (unsigned char*)v22;
    long c24 = -24;
    unsigned char* ptr25 = &(cast23)[c24];
    long* cast26 = (long*)ptr25;
    long t27 = *cast26;
    unsigned char* cast28 = (unsigned char*)&_ZSt3cin;
    unsigned char* ptr29 = &(cast28)[t27];
    struct std__basic_istream_char__std__char_traits_char__* cast30 = (struct std__basic_istream_char__std__char_traits_char__*)ptr29;
    struct std__ios_base* cast31 = (struct std__ios_base*)cast30;
    int std32 = __VERIFIER_nondet_int();
    int t33 = _ZNSt8ios_base3hexE_const;
    int t34 = _ZNSt8ios_base3hexE_const;
    _Bool c35 = ((t33 == t34)) ? 1 : 0;
    int cast36 = (int)c35;
    int b37 = std32 & cast36;
    _Bool cast38 = (_Bool)b37;
    if (cast38) {
    } else {
      char* cast39 = (char*)&(_str_4);
      char* c40 = _str_2;
      unsigned int c41 = 24;
      char* cast42 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast39, c40, c41, cast42);
    }
    char* cast43 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* std44;
    __VERIFIER_nondet_memory(&std44, sizeof(std44));
    struct std__basic_istream_char__std__char_traits_char__* std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
    long std46 = __VERIFIER_nondet_long();
    int cast47 = (int)std46;
    int c48 = 0;
    _Bool c49 = ((cast47 >= c48)) ? 1 : 0;
    if (c49) {
    } else {
      char* cast50 = (char*)&(_str_1);
      char* c51 = _str_2;
      unsigned int c52 = 28;
      char* cast53 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast50, c51, c52, cast53);
    }
    int c54 = 0;
    __retval1 = c54;
    int t55 = __retval1;
    int ret_val56 = t55;
    {
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
      __VERIFIER_nondet_memory(&n24, sizeof(n24));
    }
    return ret_val56;
  int t57 = __retval1;
  return t57;
}

