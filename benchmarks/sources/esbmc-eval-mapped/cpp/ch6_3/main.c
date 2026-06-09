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
struct Count { int x; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[50] = "Assign 1 to x and print using the object's name: ";
char _str_1[44] = "Assign 2 to x and print using a reference: ";
char _str_2[42] = "Assign 3 to x and print using a pointer: ";
void Count__print(struct Count* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _ZN5Count5printEv
void Count__print(struct Count* v0) {
bb1:
  struct Count* this2;
  this2 = v0;
  struct Count* t3 = this2;
  int t4 = t3->x;
  struct std__basic_ostream_char__std__char_traits_char__* std5;
  __VERIFIER_nondet_memory(&std5, sizeof(std5));
  struct std__basic_ostream_char__std__char_traits_char__* std6;
  __VERIFIER_nondet_memory(&std6, sizeof(std6));
  return;
}

// function: main
int main() {
bb7:
  int __retval8;
  struct Count counter9;
  struct Count* counterPtr10;
  struct Count* counterRef11;
  int c12 = 0;
  __retval8 = c12;
  counterPtr10 = &counter9;
  counterRef11 = &counter9;
  char* cast13 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std14;
  __VERIFIER_nondet_memory(&std14, sizeof(std14));
  int c15 = 1;
  counter9.x = c15;
  Count__print(&counter9);
  char* cast16 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std17;
  __VERIFIER_nondet_memory(&std17, sizeof(std17));
  int c18 = 2;
  struct Count* t19 = counterRef11;
  t19->x = c18;
  struct Count* t20 = counterRef11;
  Count__print(t20);
  char* cast21 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std22;
  __VERIFIER_nondet_memory(&std22, sizeof(std22));
  int c23 = 3;
  struct Count* t24 = counterPtr10;
  t24->x = c23;
  struct Count* t25 = counterPtr10;
  Count__print(t25);
  int c26 = 0;
  __retval8 = c26;
  int t27 = __retval8;
  return t27;
}

