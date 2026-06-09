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

char _str[14] = "Test string: ";
char _str_1[6] = ", y, ";
char _str_2[2] = "z";
char _str_3[21] = "Test string: x, y, z";
char _str_4[31] = "str3 != \"Test string: x, y, z\"";
char _str_5[123] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_operator_assign_5_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_6[25] = "basic_string::_M_replace";
char _str_7[24] = "basic_string::_M_create";
char _str_8[29] = "basic_string::_M_replace_aux";
char _str_9[21] = "basic_string::append";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
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
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp05;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup6;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp17;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp28;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup9;
  int c10 = 0;
  __retval1 = c10;
  // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
  __VERIFIER_nondet_memory(&str12, sizeof(str12));
    // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
    __VERIFIER_nondet_memory(&str23, sizeof(str23));
      // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
      __VERIFIER_nondet_memory(&str34, sizeof(str34));
        char* cast11 = (char*)&(_str);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std12;
        __VERIFIER_nondet_memory(&std12, sizeof(std12));
        char c13 = 120;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std14;
        __VERIFIER_nondet_memory(&std14, sizeof(std14));
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std15;
        __VERIFIER_nondet_memory(&std15, sizeof(std15));
        ref_tmp05 = std15;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std16;
          __VERIFIER_nondet_memory(&std16, sizeof(std16));
          tmp_exprcleanup6 = std16;
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t17 = tmp_exprcleanup6;
        char* cast18 = (char*)&(_str_1);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std19;
        __VERIFIER_nondet_memory(&std19, sizeof(std19));
        ref_tmp28 = std19;
          char* cast20 = (char*)&(_str_2);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std21;
          __VERIFIER_nondet_memory(&std21, sizeof(std21));
          ref_tmp17 = std21;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std22;
            __VERIFIER_nondet_memory(&std22, sizeof(std22));
            tmp_exprcleanup9 = std22;
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&ref_tmp17, sizeof(ref_tmp17));
          }
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&ref_tmp28, sizeof(ref_tmp28));
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t23 = tmp_exprcleanup9;
        char* cast24 = (char*)&(_str_3);
        _Bool std25;
        __VERIFIER_nondet_memory(&std25, sizeof(std25));
        _Bool u26 = !std25;
        if (u26) {
        } else {
          char* cast27 = (char*)&(_str_4);
          char* c28 = _str_5;
          unsigned int c29 = 25;
          char* cast30 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast27, c28, c29, cast30);
        }
        struct std__basic_ostream_char__std__char_traits_char__* std31;
        __VERIFIER_nondet_memory(&std31, sizeof(std31));
        struct std__basic_ostream_char__std__char_traits_char__* std32;
        __VERIFIER_nondet_memory(&std32, sizeof(std32));
        int c33 = 0;
        __retval1 = c33;
        int t34 = __retval1;
        int ret_val35 = t34;
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
        return ret_val35;
  int t36 = __retval1;
  return t36;
}

