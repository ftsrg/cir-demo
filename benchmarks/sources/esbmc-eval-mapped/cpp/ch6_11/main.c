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
struct Date { int month; int day; int year; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[9] = "date1 = ";
char _str_1[10] = "\ndate2 = ";
char _str_2[48] = "\n\nAfter default memberwise assignment, date2 = ";
void Date__Date_2(struct Date* p0, int p1, int p2, int p3);
void Date__Date(struct Date* p0, int p1, int p2, int p3) { Date__Date_2(p0, p1, p2, p3); }
void Date__print(struct Date* p0);
struct Date* Date__operator_(struct Date* p0, struct Date* p1);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _ZN4DateC2Eiii
void Date__Date_2(struct Date* v0, int v1, int v2, int v3) {
bb4:
  struct Date* this5;
  int m6;
  int d7;
  int y8;
  this5 = v0;
  m6 = v1;
  d7 = v2;
  y8 = v3;
  struct Date* t9 = this5;
  int t10 = m6;
  t9->month = t10;
  int t11 = d7;
  t9->day = t11;
  int t12 = y8;
  t9->year = t12;
  return;
}

// function: _ZN4Date5printEv
void Date__print(struct Date* v13) {
bb14:
  struct Date* this15;
  this15 = v13;
  struct Date* t16 = this15;
  int t17 = t16->month;
  struct std__basic_ostream_char__std__char_traits_char__* std18;
  __VERIFIER_nondet_memory(&std18, sizeof(std18));
  char c19 = 45;
  struct std__basic_ostream_char__std__char_traits_char__* std20;
  __VERIFIER_nondet_memory(&std20, sizeof(std20));
  int t21 = t16->day;
  struct std__basic_ostream_char__std__char_traits_char__* std22;
  __VERIFIER_nondet_memory(&std22, sizeof(std22));
  char c23 = 45;
  struct std__basic_ostream_char__std__char_traits_char__* std24;
  __VERIFIER_nondet_memory(&std24, sizeof(std24));
  int t25 = t16->year;
  struct std__basic_ostream_char__std__char_traits_char__* std26;
  __VERIFIER_nondet_memory(&std26, sizeof(std26));
  return;
}

// function: _ZN4DateaSERKS_
struct Date* Date__operator_(struct Date* v27, struct Date* v28) {
bb29:
  struct Date* this30;
  struct Date* unnamed31;
  struct Date* __retval32;
  this30 = v27;
  unnamed31 = v28;
  struct Date* t33 = this30;
  struct Date* t34 = unnamed31;
  int t35 = t34->month;
  t33->month = t35;
  struct Date* t36 = unnamed31;
  int t37 = t36->day;
  t33->day = t37;
  struct Date* t38 = unnamed31;
  int t39 = t38->year;
  t33->year = t39;
  __retval32 = t33;
  struct Date* t40 = __retval32;
  return t40;
}

// function: main
int main() {
bb41:
  int __retval42;
  struct Date date143;
  struct Date date244;
  int c45 = 0;
  __retval42 = c45;
  int c46 = 7;
  int c47 = 4;
  int c48 = 2002;
  Date__Date(&date143, c46, c47, c48);
  int c49 = 1;
  int c50 = 1;
  int c51 = 1990;
  Date__Date(&date244, c49, c50, c51);
  char* cast52 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std53;
  __VERIFIER_nondet_memory(&std53, sizeof(std53));
  Date__print(&date143);
  char* cast54 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std55;
  __VERIFIER_nondet_memory(&std55, sizeof(std55));
  Date__print(&date244);
  struct Date* r56 = Date__operator_(&date244, &date143);
  char* cast57 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std58;
  __VERIFIER_nondet_memory(&std58, sizeof(std58));
  Date__print(&date244);
  struct std__basic_ostream_char__std__char_traits_char__* std59;
  __VERIFIER_nondet_memory(&std59, sizeof(std59));
  int c60 = 0;
  __retval42 = c60;
  int t61 = __retval42;
  return t61;
}

