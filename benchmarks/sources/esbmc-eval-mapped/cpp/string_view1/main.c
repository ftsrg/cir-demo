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
struct std__basic_string_view_char__std__char_traits_char__ { unsigned long _M_len; char* _M_str; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[14] = "Hello, World!";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[18] = "First character: ";
char _str_2[18] = "Third character: ";
char _str_3[20] = "Length of message: ";
char _str_4[21] = "Is emptyView empty? ";
char _str_5[4] = "Yes";
char _str_6[3] = "No";
char _str_7[85] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/string_view";
char __PRETTY_FUNCTION____ZNKSt17basic_string_viewIcSt11char_traitsIcEEixEm[124] = "const_reference std::basic_string_view<char>::operator[](size_type) const [_CharT = char, _Traits = std::char_traits<char>]";
char _str_8[21] = "__pos < this->_M_len";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__basic_string_view_char__std__char_traits_char__ message2;
  struct std__basic_string_view_char__std__char_traits_char__ emptyView3;
  struct std__basic_string_view_char__std__char_traits_char__ otherMessage4;
  int c5 = 0;
  __retval1 = c5;
  char* cast6 = (char*)&(_str);
  // externalized std:: op: std::basic_string_view<char, std::char_traits<char> >::basic_string_view(char const*)
  __VERIFIER_nondet_memory(&message2, sizeof(message2));
  __VERIFIER_nondet_memory(cast6, sizeof(*cast6));
  char* cast7 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std8;
  __VERIFIER_nondet_memory(&std8, sizeof(std8));
  unsigned long c9 = 0;
  char* std10;
  __VERIFIER_nondet_memory(&std10, sizeof(std10));
  char t11 = *std10;
  struct std__basic_ostream_char__std__char_traits_char__* std12;
  __VERIFIER_nondet_memory(&std12, sizeof(std12));
  struct std__basic_ostream_char__std__char_traits_char__* std13;
  __VERIFIER_nondet_memory(&std13, sizeof(std13));
  char* cast14 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std15;
  __VERIFIER_nondet_memory(&std15, sizeof(std15));
  unsigned long c16 = 2;
  char* std17;
  __VERIFIER_nondet_memory(&std17, sizeof(std17));
  char t18 = *std17;
  struct std__basic_ostream_char__std__char_traits_char__* std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
  struct std__basic_ostream_char__std__char_traits_char__* std20;
  __VERIFIER_nondet_memory(&std20, sizeof(std20));
  char* cast21 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std22;
  __VERIFIER_nondet_memory(&std22, sizeof(std22));
  unsigned long std23 = __VERIFIER_nondet_unsigned_long();
  struct std__basic_ostream_char__std__char_traits_char__* std24;
  __VERIFIER_nondet_memory(&std24, sizeof(std24));
  struct std__basic_ostream_char__std__char_traits_char__* std25;
  __VERIFIER_nondet_memory(&std25, sizeof(std25));
  // externalized std:: op: std::basic_string_view<char, std::char_traits<char> >::basic_string_view()
  __VERIFIER_nondet_memory(&emptyView3, sizeof(emptyView3));
  char* cast26 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std27;
  __VERIFIER_nondet_memory(&std27, sizeof(std27));
  _Bool std28;
  __VERIFIER_nondet_memory(&std28, sizeof(std28));
  char* cast29 = (char*)&(_str_5);
  char* cast30 = (char*)&(_str_6);
  char* sel31 = std28 ? cast29 : cast30;
  struct std__basic_ostream_char__std__char_traits_char__* std32;
  __VERIFIER_nondet_memory(&std32, sizeof(std32));
  struct std__basic_ostream_char__std__char_traits_char__* std33;
  __VERIFIER_nondet_memory(&std33, sizeof(std33));
  char* cast34 = (char*)&(_str);
  // externalized std:: op: std::basic_string_view<char, std::char_traits<char> >::basic_string_view(char const*)
  __VERIFIER_nondet_memory(&otherMessage4, sizeof(otherMessage4));
  __VERIFIER_nondet_memory(cast34, sizeof(*cast34));
  int c35 = 0;
  __retval1 = c35;
  int t36 = __retval1;
  return t36;
}

