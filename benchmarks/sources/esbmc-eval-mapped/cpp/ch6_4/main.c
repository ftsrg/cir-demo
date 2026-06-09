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
struct Time { int __field0; int __field1; int __field2; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[31] = "The initial universal time is ";
char _str_1[31] = "\nThe initial standard time is ";
char _str_2[35] = "\n\nUniversal time after setTime is ";
char _str_3[33] = "\nStandard time after setTime is ";
char _str_4[37] = "\n\nAfter attempting invalid settings:";
char _str_5[18] = "\nUniversal time: ";
char _str_6[17] = "\nStandard time: ";
extern void Time__Time(struct Time* p0);
extern void Time__printUniversal(struct Time* p0);
extern void Time__printStandard(struct Time* p0);
extern void Time__setTime(struct Time* p0, int p1, int p2, int p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct Time t2;
  int c3 = 0;
  __retval1 = c3;
  Time__Time(&t2);
  char* cast4 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std5;
  __VERIFIER_nondet_memory(&std5, sizeof(std5));
  Time__printUniversal(&t2);
  char* cast6 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std7;
  __VERIFIER_nondet_memory(&std7, sizeof(std7));
  Time__printStandard(&t2);
  int c8 = 13;
  int c9 = 27;
  int c10 = 6;
  Time__setTime(&t2, c8, c9, c10);
  char* cast11 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std12;
  __VERIFIER_nondet_memory(&std12, sizeof(std12));
  Time__printUniversal(&t2);
  char* cast13 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std14;
  __VERIFIER_nondet_memory(&std14, sizeof(std14));
  Time__printStandard(&t2);
  int c15 = 99;
  int c16 = 99;
  int c17 = 99;
  Time__setTime(&t2, c15, c16, c17);
  char* cast18 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
  char* cast20 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  Time__printUniversal(&t2);
  char* cast22 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  Time__printStandard(&t2);
  struct std__basic_ostream_char__std__char_traits_char__* std24;
  __VERIFIER_nondet_memory(&std24, sizeof(std24));
  int c25 = 0;
  __retval1 = c25;
  int t26 = __retval1;
  return t26;
}

