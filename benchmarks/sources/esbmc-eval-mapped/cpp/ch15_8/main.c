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
char _str[14] = "beginning end";
char _str_1[8] = "middle ";
char _str_2[9] = "12345678";
char _str_3[3] = "xx";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[27] = "Initial strings:\nstring1: ";
char _str_5[11] = "\nstring2: ";
char _str_6[11] = "\nstring3: ";
char _str_7[11] = "\nstring4: ";
char _str_8[3] = "\n\n";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
char _str_9[32] = "Strings after insert:\nstring1: ";
char _str_10[50] = "basic_string: construction from null is not valid";
char _str_11[24] = "basic_string::_M_create";
char _str_12[22] = "basic_string::replace";
char _str_13[25] = "basic_string::_M_replace";
char _str_14[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_15[21] = "basic_string::insert";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string12;
  struct std__allocator_char_ ref_tmp03;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string24;
  struct std__allocator_char_ ref_tmp15;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string36;
  struct std__allocator_char_ ref_tmp27;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string48;
  struct std__allocator_char_ ref_tmp39;
  int c10 = 0;
  __retval1 = c10;
  char* cast11 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&string12, sizeof(string12));
    __VERIFIER_nondet_memory(cast11, sizeof(*cast11));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    char* cast12 = (char*)&(_str_1);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&string24, sizeof(string24));
      __VERIFIER_nondet_memory(cast12, sizeof(*cast12));
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    }
      char* cast13 = (char*)&(_str_2);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&string36, sizeof(string36));
        __VERIFIER_nondet_memory(cast13, sizeof(*cast13));
        __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      }
        char* cast14 = (char*)&(_str_3);
        // externalized std:: op: std::allocator<char>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
          __VERIFIER_nondet_memory(&string48, sizeof(string48));
          __VERIFIER_nondet_memory(cast14, sizeof(*cast14));
          __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
        {
          // externalized std:: op: std::allocator<char>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
        }
          char* cast15 = (char*)&(_str_4);
          struct std__basic_ostream_char__std__char_traits_char__* std16;
          __VERIFIER_nondet_memory(&std16, sizeof(std16));
          struct std__basic_ostream_char__std__char_traits_char__* std17;
          __VERIFIER_nondet_memory(&std17, sizeof(std17));
          char* cast18 = (char*)&(_str_5);
          struct std__basic_ostream_char__std__char_traits_char__* std19;
          __VERIFIER_nondet_memory(&std19, sizeof(std19));
          struct std__basic_ostream_char__std__char_traits_char__* std20;
          __VERIFIER_nondet_memory(&std20, sizeof(std20));
          char* cast21 = (char*)&(_str_6);
          struct std__basic_ostream_char__std__char_traits_char__* std22;
          __VERIFIER_nondet_memory(&std22, sizeof(std22));
          struct std__basic_ostream_char__std__char_traits_char__* std23;
          __VERIFIER_nondet_memory(&std23, sizeof(std23));
          char* cast24 = (char*)&(_str_7);
          struct std__basic_ostream_char__std__char_traits_char__* std25;
          __VERIFIER_nondet_memory(&std25, sizeof(std25));
          struct std__basic_ostream_char__std__char_traits_char__* std26;
          __VERIFIER_nondet_memory(&std26, sizeof(std26));
          char* cast27 = (char*)&(_str_8);
          struct std__basic_ostream_char__std__char_traits_char__* std28;
          __VERIFIER_nondet_memory(&std28, sizeof(std28));
          unsigned long c29 = 10;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std30;
          __VERIFIER_nondet_memory(&std30, sizeof(std30));
          unsigned long c31 = 3;
          unsigned long c32 = 0;
          unsigned long t33 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std34;
          __VERIFIER_nondet_memory(&std34, sizeof(std34));
          char* cast35 = (char*)&(_str_9);
          struct std__basic_ostream_char__std__char_traits_char__* std36;
          __VERIFIER_nondet_memory(&std36, sizeof(std36));
          struct std__basic_ostream_char__std__char_traits_char__* std37;
          __VERIFIER_nondet_memory(&std37, sizeof(std37));
          char* cast38 = (char*)&(_str_5);
          struct std__basic_ostream_char__std__char_traits_char__* std39;
          __VERIFIER_nondet_memory(&std39, sizeof(std39));
          struct std__basic_ostream_char__std__char_traits_char__* std40;
          __VERIFIER_nondet_memory(&std40, sizeof(std40));
          char* cast41 = (char*)&(_str_6);
          struct std__basic_ostream_char__std__char_traits_char__* std42;
          __VERIFIER_nondet_memory(&std42, sizeof(std42));
          struct std__basic_ostream_char__std__char_traits_char__* std43;
          __VERIFIER_nondet_memory(&std43, sizeof(std43));
          char* cast44 = (char*)&(_str_7);
          struct std__basic_ostream_char__std__char_traits_char__* std45;
          __VERIFIER_nondet_memory(&std45, sizeof(std45));
          struct std__basic_ostream_char__std__char_traits_char__* std46;
          __VERIFIER_nondet_memory(&std46, sizeof(std46));
          struct std__basic_ostream_char__std__char_traits_char__* std47;
          __VERIFIER_nondet_memory(&std47, sizeof(std47));
          int c48 = 0;
          __retval1 = c48;
          int t49 = __retval1;
          int ret_val50 = t49;
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&string48, sizeof(string48));
          }
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&string36, sizeof(string36));
          }
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&string24, sizeof(string24));
          }
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&string12, sizeof(string12));
          }
          return ret_val50;
  int t51 = __retval1;
  return t51;
}

