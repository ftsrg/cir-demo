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
struct Date { int __field0; int __field1; int __field2; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[7] = "d1 is ";
char _str_1[8] = "\nd2 is ";
char _str_2[8] = "\nd3 is ";
char _str_3[14] = "\n\nd2 += 7 is ";
char _str_4[11] = "\n\n  d3 is ";
char _str_5[10] = "\n++d3 is ";
char _str_6[38] = "\n\nTesting the preincrement operator:\n";
char _str_7[9] = "  d4 is ";
char _str_8[9] = "++d4 is ";
char _str_9[39] = "\n\nTesting the postincrement operator:\n";
char _str_10[9] = "d4++ is ";
extern void Date__Date(struct Date* p0, int p1, int p2, int p3);
extern struct std__basic_ostream_char__std__char_traits_char__* operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, struct Date* p1);
extern struct Date* Date__operator__(struct Date* p0, int p1);
extern void Date__setDate(struct Date* p0, int p1, int p2, int p3);
extern struct Date* Date__operator___3(struct Date* p0);
extern struct Date Date__operator___2(struct Date* p0, int p1);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct Date d12;
  struct Date d23;
  struct Date d34;
  struct Date d45;
  struct Date ref_tmp06;
  int c7 = 0;
  __retval1 = c7;
  int c8 = 1;
  int c9 = 1;
  int c10 = 1900;
  Date__Date(&d12, c8, c9, c10);
  int c11 = 12;
  int c12 = 27;
  int c13 = 1992;
  Date__Date(&d23, c11, c12, c13);
  int c14 = 0;
  int c15 = 99;
  int c16 = 8045;
  Date__Date(&d34, c14, c15, c16);
  char* cast17 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std18;
  __VERIFIER_nondet_memory(&std18, sizeof(std18));
  struct std__basic_ostream_char__std__char_traits_char__* r19 = operator__(std18, &d12);
  char* cast20 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  struct std__basic_ostream_char__std__char_traits_char__* r22 = operator__(std21, &d23);
  char* cast23 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std24;
  __VERIFIER_nondet_memory(&std24, sizeof(std24));
  struct std__basic_ostream_char__std__char_traits_char__* r25 = operator__(std24, &d34);
  char* cast26 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std27;
  __VERIFIER_nondet_memory(&std27, sizeof(std27));
  int c28 = 7;
  struct Date* r29 = Date__operator__(&d23, c28);
  struct std__basic_ostream_char__std__char_traits_char__* r30 = operator__(std27, r29);
  int c31 = 2;
  int c32 = 28;
  int c33 = 1992;
  Date__setDate(&d34, c31, c32, c33);
  char* cast34 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std35;
  __VERIFIER_nondet_memory(&std35, sizeof(std35));
  struct std__basic_ostream_char__std__char_traits_char__* r36 = operator__(std35, &d34);
  char* cast37 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std38;
  __VERIFIER_nondet_memory(&std38, sizeof(std38));
  struct Date* r39 = Date__operator___3(&d34);
  struct std__basic_ostream_char__std__char_traits_char__* r40 = operator__(std38, r39);
  int c41 = 7;
  int c42 = 13;
  int c43 = 2002;
  Date__Date(&d45, c41, c42, c43);
  char* cast44 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std45;
  __VERIFIER_nondet_memory(&std45, sizeof(std45));
  char* cast46 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std47;
  __VERIFIER_nondet_memory(&std47, sizeof(std47));
  struct std__basic_ostream_char__std__char_traits_char__* r48 = operator__(std47, &d45);
  char c49 = 10;
  struct std__basic_ostream_char__std__char_traits_char__* std50;
  __VERIFIER_nondet_memory(&std50, sizeof(std50));
  char* cast51 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* std52;
  __VERIFIER_nondet_memory(&std52, sizeof(std52));
  struct Date* r53 = Date__operator___3(&d45);
  struct std__basic_ostream_char__std__char_traits_char__* r54 = operator__(std52, r53);
  char c55 = 10;
  struct std__basic_ostream_char__std__char_traits_char__* std56;
  __VERIFIER_nondet_memory(&std56, sizeof(std56));
  char* cast57 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std58;
  __VERIFIER_nondet_memory(&std58, sizeof(std58));
  struct std__basic_ostream_char__std__char_traits_char__* r59 = operator__(std58, &d45);
  char* cast60 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* std61;
  __VERIFIER_nondet_memory(&std61, sizeof(std61));
  char* cast62 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std63;
  __VERIFIER_nondet_memory(&std63, sizeof(std63));
  struct std__basic_ostream_char__std__char_traits_char__* r64 = operator__(std63, &d45);
  char c65 = 10;
  struct std__basic_ostream_char__std__char_traits_char__* std66;
  __VERIFIER_nondet_memory(&std66, sizeof(std66));
  char* cast67 = (char*)&(_str_10);
  struct std__basic_ostream_char__std__char_traits_char__* std68;
  __VERIFIER_nondet_memory(&std68, sizeof(std68));
  int c69 = 0;
  struct Date r70 = Date__operator___2(&d45, c69);
  ref_tmp06 = r70;
  struct std__basic_ostream_char__std__char_traits_char__* r71 = operator__(std68, &ref_tmp06);
  char c72 = 10;
  struct std__basic_ostream_char__std__char_traits_char__* std73;
  __VERIFIER_nondet_memory(&std73, sizeof(std73));
  char* cast74 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std75;
  __VERIFIER_nondet_memory(&std75, sizeof(std75));
  struct std__basic_ostream_char__std__char_traits_char__* r76 = operator__(std75, &d45);
  struct std__basic_ostream_char__std__char_traits_char__* std77;
  __VERIFIER_nondet_memory(&std77, sizeof(std77));
  int c78 = 0;
  __retval1 = c78;
  int t79 = __retval1;
  return t79;
}

