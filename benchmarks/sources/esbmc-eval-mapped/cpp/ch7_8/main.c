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
char _str[17] = "Universal time: ";
char _str_1[17] = "\nStandard time: ";
char _str_2[22] = "\n\nNew standard time: ";
extern void Time__Time(struct Time* p0, int p1, int p2, int p3);
extern struct Time* Time__setHour(struct Time* p0, int p1);
extern struct Time* Time__setMinute(struct Time* p0, int p1);
extern struct Time* Time__setSecond(struct Time* p0, int p1);
extern void Time__printUniversal___const(struct Time* p0);
extern void Time__printStandard___const(struct Time* p0);
extern struct Time* Time__setTime(struct Time* p0, int p1, int p2, int p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct Time t2;
  int c3 = 0;
  __retval1 = c3;
  int c4 = 0;
  int c5 = 0;
  int c6 = 0;
  Time__Time(&t2, c4, c5, c6);
  int c7 = 18;
  struct Time* r8 = Time__setHour(&t2, c7);
  int c9 = 30;
  struct Time* r10 = Time__setMinute(r8, c9);
  int c11 = 22;
  struct Time* r12 = Time__setSecond(r10, c11);
  char* cast13 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std14;
  __VERIFIER_nondet_memory(&std14, sizeof(std14));
  Time__printUniversal___const(&t2);
  char* cast15 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std16;
  __VERIFIER_nondet_memory(&std16, sizeof(std16));
  Time__printStandard___const(&t2);
  char* cast17 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std18;
  __VERIFIER_nondet_memory(&std18, sizeof(std18));
  int c19 = 20;
  int c20 = 20;
  int c21 = 20;
  struct Time* r22 = Time__setTime(&t2, c19, c20, c21);
  Time__printStandard___const(r22);
  struct std__basic_ostream_char__std__char_traits_char__* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  int c24 = 0;
  __retval1 = c24;
  int t25 = __retval1;
  return t25;
}

