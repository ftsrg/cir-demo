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
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[4] = "cat";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[10] = "string1: ";
char _str_2[11] = "\nstring2: ";
char _str_3[11] = "\nstring3: ";
char _str_4[3] = "\n\n";
char _str_5[44] = "After modification of string2 and string3:\n";
char _str_6[6] = "apult";
char _str_7[4] = "pet";
char _str_8[6] = "acomb";
char _str_9[33] = "\n\nAfter concatenation:\nstring1: ";
char _str_10[11] = "\nstring4: ";
char _str_11[11] = "\nstring5: ";
char _str_12[50] = "basic_string: construction from null is not valid";
char _str_13[24] = "basic_string::_M_create";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
char _str_14[93] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/basic_string.h";
char __PRETTY_FUNCTION____ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm[138] = "reference std::basic_string<char>::operator[](size_type) [_CharT = char, _Traits = std::char_traits<char>, _Alloc = std::allocator<char>]";
char _str_15[16] = "__pos <= size()";
char _str_16[68] = "basic_string::at: __n (which is %zu) >= this->size() (which is %zu)";
char _str_17[21] = "basic_string::append";
char _str_18[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string12;
  struct std__allocator_char_ ref_tmp03;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string24;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string35;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string46;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string57;
  int c8 = 0;
  __retval1 = c8;
  char* cast9 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&string12, sizeof(string12));
    __VERIFIER_nondet_memory(cast9, sizeof(*cast9));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
    __VERIFIER_nondet_memory(&string24, sizeof(string24));
      // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
      __VERIFIER_nondet_memory(&string35, sizeof(string35));
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std10;
        __VERIFIER_nondet_memory(&std10, sizeof(std10));
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std11;
        __VERIFIER_nondet_memory(&std11, sizeof(std11));
        char* cast12 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std13;
        __VERIFIER_nondet_memory(&std13, sizeof(std13));
        struct std__basic_ostream_char__std__char_traits_char__* std14;
        __VERIFIER_nondet_memory(&std14, sizeof(std14));
        char* cast15 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* std16;
        __VERIFIER_nondet_memory(&std16, sizeof(std16));
        struct std__basic_ostream_char__std__char_traits_char__* std17;
        __VERIFIER_nondet_memory(&std17, sizeof(std17));
        char* cast18 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std19;
        __VERIFIER_nondet_memory(&std19, sizeof(std19));
        struct std__basic_ostream_char__std__char_traits_char__* std20;
        __VERIFIER_nondet_memory(&std20, sizeof(std20));
        char* cast21 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* std22;
        __VERIFIER_nondet_memory(&std22, sizeof(std22));
        char c23 = 114;
        unsigned long c24 = 2;
        char* std25;
        __VERIFIER_nondet_memory(&std25, sizeof(std25));
        *std25 = c23;
        unsigned long c26 = 0;
        char* std27;
        __VERIFIER_nondet_memory(&std27, sizeof(std27));
        *std27 = c23;
        char* cast28 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* std29;
        __VERIFIER_nondet_memory(&std29, sizeof(std29));
        char* cast30 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std31;
        __VERIFIER_nondet_memory(&std31, sizeof(std31));
        struct std__basic_ostream_char__std__char_traits_char__* std32;
        __VERIFIER_nondet_memory(&std32, sizeof(std32));
        char* cast33 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* std34;
        __VERIFIER_nondet_memory(&std34, sizeof(std34));
        struct std__basic_ostream_char__std__char_traits_char__* std35;
        __VERIFIER_nondet_memory(&std35, sizeof(std35));
        char* cast36 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std37;
        __VERIFIER_nondet_memory(&std37, sizeof(std37));
          int i38;
          int c39 = 0;
          i38 = c39;
          while (1) {
            int t41 = i38;
            unsigned long cast42 = (unsigned long)t41;
            unsigned long std43 = __VERIFIER_nondet_unsigned_long();
            _Bool c44 = ((cast42 < std43)) ? 1 : 0;
            if (!c44) break;
            int t45 = i38;
            unsigned long cast46 = (unsigned long)t45;
            char* std47;
            __VERIFIER_nondet_memory(&std47, sizeof(std47));
            char t48 = *std47;
            struct std__basic_ostream_char__std__char_traits_char__* std49;
            __VERIFIER_nondet_memory(&std49, sizeof(std49));
          for_step40: ;
            int t50 = i38;
            int u51 = t50 + 1;
            i38 = u51;
          }
        char* cast52 = (char*)&(_str_6);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std53;
        __VERIFIER_nondet_memory(&std53, sizeof(std53));
        string46 = std53;
          // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
          __VERIFIER_nondet_memory(&string57, sizeof(string57));
            char* cast54 = (char*)&(_str_7);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std55;
            __VERIFIER_nondet_memory(&std55, sizeof(std55));
            char* cast56 = (char*)&(_str_8);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std57;
            __VERIFIER_nondet_memory(&std57, sizeof(std57));
            unsigned long c58 = 4;
            unsigned long std59 = __VERIFIER_nondet_unsigned_long();
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std60;
            __VERIFIER_nondet_memory(&std60, sizeof(std60));
            char* cast61 = (char*)&(_str_9);
            struct std__basic_ostream_char__std__char_traits_char__* std62;
            __VERIFIER_nondet_memory(&std62, sizeof(std62));
            struct std__basic_ostream_char__std__char_traits_char__* std63;
            __VERIFIER_nondet_memory(&std63, sizeof(std63));
            char* cast64 = (char*)&(_str_2);
            struct std__basic_ostream_char__std__char_traits_char__* std65;
            __VERIFIER_nondet_memory(&std65, sizeof(std65));
            struct std__basic_ostream_char__std__char_traits_char__* std66;
            __VERIFIER_nondet_memory(&std66, sizeof(std66));
            char* cast67 = (char*)&(_str_3);
            struct std__basic_ostream_char__std__char_traits_char__* std68;
            __VERIFIER_nondet_memory(&std68, sizeof(std68));
            struct std__basic_ostream_char__std__char_traits_char__* std69;
            __VERIFIER_nondet_memory(&std69, sizeof(std69));
            char* cast70 = (char*)&(_str_10);
            struct std__basic_ostream_char__std__char_traits_char__* std71;
            __VERIFIER_nondet_memory(&std71, sizeof(std71));
            struct std__basic_ostream_char__std__char_traits_char__* std72;
            __VERIFIER_nondet_memory(&std72, sizeof(std72));
            char* cast73 = (char*)&(_str_11);
            struct std__basic_ostream_char__std__char_traits_char__* std74;
            __VERIFIER_nondet_memory(&std74, sizeof(std74));
            struct std__basic_ostream_char__std__char_traits_char__* std75;
            __VERIFIER_nondet_memory(&std75, sizeof(std75));
            struct std__basic_ostream_char__std__char_traits_char__* std76;
            __VERIFIER_nondet_memory(&std76, sizeof(std76));
            int c77 = 0;
            __retval1 = c77;
            int t78 = __retval1;
            int ret_val79 = t78;
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&string57, sizeof(string57));
            }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&string46, sizeof(string46));
            }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&string35, sizeof(string35));
            }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&string24, sizeof(string24));
            }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&string12, sizeof(string12));
            }
            return ret_val79;
  int t80 = __retval1;
  return t80;
}

