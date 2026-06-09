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
struct Employee { char __field0[25]; char __field1[25]; struct Date __field2; struct Date __field3; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[4] = "Bob";
char _str_1[6] = "Jones";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[45] = "\nTest Date constructor with invalid values:\n";
extern void Date__Date(struct Date* p0, int p1, int p2, int p3);
extern void Employee__Employee(struct Employee* p0, char* p1, char* p2, struct Date* p3, struct Date* p4);
extern void Employee__print___const(struct Employee* p0);
void Date___Date(struct Date* p0) {}
void Employee___Employee(struct Employee* p0) {}
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct Date birth2;
  struct Date hire3;
  struct Employee manager4;
  struct Date lastDayOff5;
  int c6 = 0;
  __retval1 = c6;
  int c7 = 7;
  int c8 = 24;
  int c9 = 1949;
  Date__Date(&birth2, c7, c8, c9);
    int c10 = 3;
    int c11 = 12;
    int c12 = 1988;
    Date__Date(&hire3, c10, c11, c12);
      char* cast13 = (char*)&(_str);
      char* cast14 = (char*)&(_str_1);
      Employee__Employee(&manager4, cast13, cast14, &birth2, &hire3);
        char c15 = 10;
        struct std__basic_ostream_char__std__char_traits_char__* std16;
        __VERIFIER_nondet_memory(&std16, sizeof(std16));
        Employee__print___const(&manager4);
        char* cast17 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* std18;
        __VERIFIER_nondet_memory(&std18, sizeof(std18));
        int c19 = 14;
        int c20 = 35;
        int c21 = 1994;
        Date__Date(&lastDayOff5, c19, c20, c21);
          struct std__basic_ostream_char__std__char_traits_char__* std22;
          __VERIFIER_nondet_memory(&std22, sizeof(std22));
          int c23 = 0;
          __retval1 = c23;
          int t24 = __retval1;
          int ret_val25 = t24;
          {
            Date___Date(&lastDayOff5);
          }
          {
            Employee___Employee(&manager4);
          }
          {
            Date___Date(&hire3);
          }
          {
            Date___Date(&birth2);
          }
          return ret_val25;
  int t26 = __retval1;
  return t26;
}

