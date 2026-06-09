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
struct std__istream_iterator_int__char__std__char_traits_char___long_ { struct std__basic_istream_char__std__char_traits_char__* _M_stream; int _M_value; _Bool _M_ok; unsigned char __field3[3]; } __attribute__((packed));
struct std__iterator_std__input_iterator_tag__int__long_int___int___;
struct std__iterator_std__output_iterator_tag__void__void__void__void_;
struct std__ostream_iterator_int__char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__* _M_stream; char* _M_string; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_istream_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[21] = "Enter two integers: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[13] = "The sum is: ";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__istream_iterator_int__char__std__char_traits_char___long_ inputInt2;
  int number13;
  int number24;
  struct std__ostream_iterator_int__char__std__char_traits_char__ outputInt5;
  int ref_tmp06;
  int c7 = 0;
  __retval1 = c7;
  char* cast8 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std9;
  __VERIFIER_nondet_memory(&std9, sizeof(std9));
  // externalized std:: op: std::istream_iterator<int, char, std::char_traits<char>, long>::istream_iterator(std::istream&)
  __VERIFIER_nondet_memory(&inputInt2, sizeof(inputInt2));
  __VERIFIER_nondet_memory(&_ZSt3cin, sizeof(*&_ZSt3cin));
  int* std10;
  __VERIFIER_nondet_memory(&std10, sizeof(std10));
  int t11 = *std10;
  number13 = t11;
  struct std__istream_iterator_int__char__std__char_traits_char___long_* std12;
  __VERIFIER_nondet_memory(&std12, sizeof(std12));
  int* std13;
  __VERIFIER_nondet_memory(&std13, sizeof(std13));
  int t14 = *std13;
  number24 = t14;
  // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream&)
  __VERIFIER_nondet_memory(&outputInt5, sizeof(outputInt5));
  __VERIFIER_nondet_memory(&_ZSt4cout, sizeof(*&_ZSt4cout));
  char* cast15 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std16;
  __VERIFIER_nondet_memory(&std16, sizeof(std16));
  int t17 = number13;
  int t18 = number24;
  int b19 = t17 + t18;
  ref_tmp06 = b19;
  struct std__ostream_iterator_int__char__std__char_traits_char__* std20;
  __VERIFIER_nondet_memory(&std20, sizeof(std20));
  struct std__ostream_iterator_int__char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  struct std__basic_ostream_char__std__char_traits_char__* std22;
  __VERIFIER_nondet_memory(&std22, sizeof(std22));
  int c23 = 0;
  __retval1 = c23;
  int t24 = __retval1;
  return t24;
}

