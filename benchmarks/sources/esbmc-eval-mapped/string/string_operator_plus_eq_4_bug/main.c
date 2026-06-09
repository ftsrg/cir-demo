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
char _str_1[10] = " string: ";
char _str_2[2] = "x";
char _str_3[15] = "Test string: x";
char _str_4[25] = "str1 != \"Test string: x\"";
char _str_5[124] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_operator_plus_eq_4_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_6[50] = "basic_string: construction from null is not valid";
char _str_7[24] = "basic_string::_M_create";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
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
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp05;
  struct std__allocator_char_ ref_tmp16;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup7;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp28;
  struct std__allocator_char_ ref_tmp39;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup10;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp411;
  struct std__allocator_char_ ref_tmp512;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup13;
  int c14 = 0;
  __retval1 = c14;
  // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
  __VERIFIER_nondet_memory(&str12, sizeof(str12));
    // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
    __VERIFIER_nondet_memory(&str23, sizeof(str23));
      // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
      __VERIFIER_nondet_memory(&str34, sizeof(str34));
        char* cast15 = (char*)&(_str);
        // externalized std:: op: std::allocator<char>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
          __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
          __VERIFIER_nondet_memory(cast15, sizeof(*cast15));
          __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std16;
            __VERIFIER_nondet_memory(&std16, sizeof(std16));
            tmp_exprcleanup7 = std16;
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
          }
        {
          // externalized std:: op: std::allocator<char>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t17 = tmp_exprcleanup7;
        char* cast18 = (char*)&(_str_1);
        // externalized std:: op: std::allocator<char>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
          __VERIFIER_nondet_memory(&ref_tmp28, sizeof(ref_tmp28));
          __VERIFIER_nondet_memory(cast18, sizeof(*cast18));
          __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std19;
            __VERIFIER_nondet_memory(&std19, sizeof(std19));
            tmp_exprcleanup10 = std19;
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&ref_tmp28, sizeof(ref_tmp28));
          }
        {
          // externalized std:: op: std::allocator<char>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t20 = tmp_exprcleanup10;
        char* cast21 = (char*)&(_str_2);
        // externalized std:: op: std::allocator<char>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp512, sizeof(ref_tmp512));
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
          __VERIFIER_nondet_memory(&ref_tmp411, sizeof(ref_tmp411));
          __VERIFIER_nondet_memory(cast21, sizeof(*cast21));
          __VERIFIER_nondet_memory(&ref_tmp512, sizeof(ref_tmp512));
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std22;
            __VERIFIER_nondet_memory(&std22, sizeof(std22));
            tmp_exprcleanup13 = std22;
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&ref_tmp411, sizeof(ref_tmp411));
          }
        {
          // externalized std:: op: std::allocator<char>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp512, sizeof(ref_tmp512));
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t23 = tmp_exprcleanup13;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std24;
        __VERIFIER_nondet_memory(&std24, sizeof(std24));
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std25;
        __VERIFIER_nondet_memory(&std25, sizeof(std25));
        char* cast26 = (char*)&(_str_3);
        _Bool std27;
        __VERIFIER_nondet_memory(&std27, sizeof(std27));
        _Bool u28 = !std27;
        if (u28) {
        } else {
          char* cast29 = (char*)&(_str_4);
          char* c30 = _str_5;
          unsigned int c31 = 22;
          char* cast32 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast29, c30, c31, cast32);
        }
        struct std__basic_ostream_char__std__char_traits_char__* std33;
        __VERIFIER_nondet_memory(&std33, sizeof(std33));
        struct std__basic_ostream_char__std__char_traits_char__* std34;
        __VERIFIER_nondet_memory(&std34, sizeof(std34));
        int c35 = 0;
        __retval1 = c35;
        int t36 = __retval1;
        int ret_val37 = t36;
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
        return ret_val37;
  int t38 = __retval1;
  return t38;
}

