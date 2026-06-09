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
struct Employee { char* __field0; char* __field1; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[45] = "Number of employees before instantiation is ";
char _str_1[6] = "Susan";
char _str_2[6] = "Baker";
char _str_3[7] = "Robert";
char _str_4[6] = "Jones";
char _str_5[44] = "Number of employees after instantiation is ";
char _str_6[15] = "\n\nEmployee 1: ";
char _str_7[2] = " ";
char _str_8[14] = "\nEmployee 2: ";
char _str_9[3] = "\n\n";
char _str_10[39] = "Number of employees after deletion is ";
extern int Employee__getCount();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
extern void Employee__Employee(struct Employee* p0, char* p1, char* p2);
void operator_delete(void* p0, unsigned long p1) { free(p0); }
extern char* Employee__getFirstName___const(struct Employee* p0);
extern char* Employee__getLastName___const(struct Employee* p0);
void Employee___Employee(struct Employee* p0) {}
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct Employee* e1Ptr2;
  struct Employee* __new_result3;
  struct Employee* e2Ptr4;
  struct Employee* __new_result5;
  int c6 = 0;
  __retval1 = c6;
  char* cast7 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std8;
  __VERIFIER_nondet_memory(&std8, sizeof(std8));
  int r9 = Employee__getCount();
  struct std__basic_ostream_char__std__char_traits_char__* std10;
  __VERIFIER_nondet_memory(&std10, sizeof(std10));
  struct std__basic_ostream_char__std__char_traits_char__* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  unsigned long c12 = 16;
  void* r13 = operator_new(c12);
    struct Employee* cast14 = (struct Employee*)r13;
    __new_result3 = cast14;
    char* cast15 = (char*)&(_str_1);
    char* cast16 = (char*)&(_str_2);
    Employee__Employee(cast14, cast15, cast16);
  struct Employee* t17 = __new_result3;
  e1Ptr2 = t17;
  unsigned long c18 = 16;
  void* r19 = operator_new(c18);
    struct Employee* cast20 = (struct Employee*)r19;
    __new_result5 = cast20;
    char* cast21 = (char*)&(_str_3);
    char* cast22 = (char*)&(_str_4);
    Employee__Employee(cast20, cast21, cast22);
  struct Employee* t23 = __new_result5;
  e2Ptr4 = t23;
  char* cast24 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std25;
  __VERIFIER_nondet_memory(&std25, sizeof(std25));
  struct Employee* t26 = e1Ptr2;
  int r27 = Employee__getCount();
  struct std__basic_ostream_char__std__char_traits_char__* std28;
  __VERIFIER_nondet_memory(&std28, sizeof(std28));
  char* cast29 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std30;
  __VERIFIER_nondet_memory(&std30, sizeof(std30));
  struct Employee* t31 = e1Ptr2;
  char* r32 = Employee__getFirstName___const(t31);
  struct std__basic_ostream_char__std__char_traits_char__* std33;
  __VERIFIER_nondet_memory(&std33, sizeof(std33));
  char* cast34 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std35;
  __VERIFIER_nondet_memory(&std35, sizeof(std35));
  struct Employee* t36 = e1Ptr2;
  char* r37 = Employee__getLastName___const(t36);
  struct std__basic_ostream_char__std__char_traits_char__* std38;
  __VERIFIER_nondet_memory(&std38, sizeof(std38));
  char* cast39 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* std40;
  __VERIFIER_nondet_memory(&std40, sizeof(std40));
  struct Employee* t41 = e2Ptr4;
  char* r42 = Employee__getFirstName___const(t41);
  struct std__basic_ostream_char__std__char_traits_char__* std43;
  __VERIFIER_nondet_memory(&std43, sizeof(std43));
  char* cast44 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std45;
  __VERIFIER_nondet_memory(&std45, sizeof(std45));
  struct Employee* t46 = e2Ptr4;
  char* r47 = Employee__getLastName___const(t46);
  struct std__basic_ostream_char__std__char_traits_char__* std48;
  __VERIFIER_nondet_memory(&std48, sizeof(std48));
  char* cast49 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* std50;
  __VERIFIER_nondet_memory(&std50, sizeof(std50));
  struct Employee* t51 = e1Ptr2;
  struct Employee* c52 = ((void*)0);
  _Bool c53 = ((t51 != c52)) ? 1 : 0;
  if (c53) {
      Employee___Employee(t51);
    {
      void* cast54 = (void*)t51;
      unsigned long c55 = 16;
      operator_delete(cast54, c55);
    }
  }
  struct Employee* c56 = ((void*)0);
  e1Ptr2 = c56;
  struct Employee* t57 = e2Ptr4;
  struct Employee* c58 = ((void*)0);
  _Bool c59 = ((t57 != c58)) ? 1 : 0;
  if (c59) {
      Employee___Employee(t57);
    {
      void* cast60 = (void*)t57;
      unsigned long c61 = 16;
      operator_delete(cast60, c61);
    }
  }
  struct Employee* c62 = ((void*)0);
  e2Ptr4 = c62;
  char* cast63 = (char*)&(_str_10);
  struct std__basic_ostream_char__std__char_traits_char__* std64;
  __VERIFIER_nondet_memory(&std64, sizeof(std64));
  int r65 = Employee__getCount();
  struct std__basic_ostream_char__std__char_traits_char__* std66;
  __VERIFIER_nondet_memory(&std66, sizeof(std66));
  struct std__basic_ostream_char__std__char_traits_char__* std67;
  __VERIFIER_nondet_memory(&std67, sizeof(std67));
  int c68 = 0;
  __retval1 = c68;
  int t69 = __retval1;
  return t69;
}

