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
struct std__less_const_char___ { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[156] = "The values in any left subtree\nare less than the value in the\nparent node and the values in\nany right subtree are greater\nthan the value in the parent node";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[18] = "Original string:\n";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
char _str_2[30] = "Original string after erase:\n";
char _str_3[28] = "\n\nAfter first replacement:\n";
char _str_4[2] = " ";
char _str_5[2] = ".";
char _str_6[29] = "\n\nAfter second replacement:\n";
char _str_7[11] = "xxxxx;;yyy";
char _str_8[50] = "basic_string: construction from null is not valid";
char _str_9[24] = "basic_string::_M_create";
char _str_10[20] = "basic_string::erase";
char _str_11[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_12[22] = "basic_string::replace";
char _str_13[25] = "basic_string::_M_replace";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string12;
  struct std__allocator_char_ ref_tmp03;
  int position4;
  int c5 = 0;
  __retval1 = c5;
  char* cast6 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&string12, sizeof(string12));
    __VERIFIER_nondet_memory(cast6, sizeof(*cast6));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    char* cast7 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std8;
    __VERIFIER_nondet_memory(&std8, sizeof(std8));
    struct std__basic_ostream_char__std__char_traits_char__* std9;
    __VERIFIER_nondet_memory(&std9, sizeof(std9));
    struct std__basic_ostream_char__std__char_traits_char__* std10;
    __VERIFIER_nondet_memory(&std10, sizeof(std10));
    struct std__basic_ostream_char__std__char_traits_char__* std11;
    __VERIFIER_nondet_memory(&std11, sizeof(std11));
    unsigned long c12 = 62;
    unsigned long t13 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std14;
    __VERIFIER_nondet_memory(&std14, sizeof(std14));
    char* cast15 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std16;
    __VERIFIER_nondet_memory(&std16, sizeof(std16));
    struct std__basic_ostream_char__std__char_traits_char__* std17;
    __VERIFIER_nondet_memory(&std17, sizeof(std17));
    char* cast18 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std19;
    __VERIFIER_nondet_memory(&std19, sizeof(std19));
    char* cast20 = (char*)&(_str_4);
    unsigned long c21 = 0;
    unsigned long std22 = __VERIFIER_nondet_unsigned_long();
    int cast23 = (int)std22;
    position4 = cast23;
      while (1) {
        int t24 = position4;
        unsigned long cast25 = (unsigned long)t24;
        unsigned long t26 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
        _Bool c27 = ((cast25 != t26)) ? 1 : 0;
        if (!c27) break;
          int t28 = position4;
          unsigned long cast29 = (unsigned long)t28;
          unsigned long c30 = 1;
          char* cast31 = (char*)&(_str_5);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std32;
          __VERIFIER_nondet_memory(&std32, sizeof(std32));
          char* cast33 = (char*)&(_str_4);
          int t34 = position4;
          int c35 = 1;
          int b36 = t34 + c35;
          unsigned long cast37 = (unsigned long)b36;
          unsigned long std38 = __VERIFIER_nondet_unsigned_long();
          int cast39 = (int)std38;
          position4 = cast39;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    char* cast41 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    char* cast43 = (char*)&(_str_5);
    unsigned long c44 = 0;
    unsigned long std45 = __VERIFIER_nondet_unsigned_long();
    int cast46 = (int)std45;
    position4 = cast46;
      while (1) {
        int t47 = position4;
        unsigned long cast48 = (unsigned long)t47;
        unsigned long t49 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
        _Bool c50 = ((cast48 != t49)) ? 1 : 0;
        if (!c50) break;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp151;
          struct std__allocator_char_ ref_tmp252;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup53;
          int t54 = position4;
          unsigned long cast55 = (unsigned long)t54;
          unsigned long c56 = 2;
          char* cast57 = (char*)&(_str_7);
          // externalized std:: op: std::allocator<char>::allocator()
          __VERIFIER_nondet_memory(&ref_tmp252, sizeof(ref_tmp252));
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
            __VERIFIER_nondet_memory(&ref_tmp151, sizeof(ref_tmp151));
            __VERIFIER_nondet_memory(cast57, sizeof(*cast57));
            __VERIFIER_nondet_memory(&ref_tmp252, sizeof(ref_tmp252));
              unsigned long c58 = 5;
              unsigned long c59 = 2;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std60;
              __VERIFIER_nondet_memory(&std60, sizeof(std60));
              tmp_exprcleanup53 = std60;
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&ref_tmp151, sizeof(ref_tmp151));
            }
          {
            // externalized std:: op: std::allocator<char>::~allocator()
            __VERIFIER_nondet_memory(&ref_tmp252, sizeof(ref_tmp252));
          }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t61 = tmp_exprcleanup53;
          char* cast62 = (char*)&(_str_5);
          int t63 = position4;
          int c64 = 1;
          int b65 = t63 + c64;
          unsigned long cast66 = (unsigned long)b65;
          unsigned long std67 = __VERIFIER_nondet_unsigned_long();
          int cast68 = (int)std67;
          position4 = cast68;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std69;
    __VERIFIER_nondet_memory(&std69, sizeof(std69));
    struct std__basic_ostream_char__std__char_traits_char__* std70;
    __VERIFIER_nondet_memory(&std70, sizeof(std70));
    int c71 = 0;
    __retval1 = c71;
    int t72 = __retval1;
    int ret_val73 = t72;
    {
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
      __VERIFIER_nondet_memory(&string12, sizeof(string12));
    }
    return ret_val73;
  int t74 = __retval1;
  return t74;
}

