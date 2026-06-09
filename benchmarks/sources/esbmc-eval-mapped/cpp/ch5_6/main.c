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
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[33] = "The original value of number is ";
char _str_1[29] = "\nThe new value of number is ";
void cubeByReference(int* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z15cubeByReferencePi
void cubeByReference(int* v0) {
bb1:
  int* nPtr2;
  nPtr2 = v0;
  int* t3 = nPtr2;
  int t4 = *t3;
  int* t5 = nPtr2;
  int t6 = *t5;
  int b7 = t4 * t6;
  int* t8 = nPtr2;
  int t9 = *t8;
  int b10 = b7 * t9;
  int* t11 = nPtr2;
  *t11 = b10;
  return;
}

// function: main
int main() {
bb12:
  int __retval13;
  int number14;
  int c15 = 0;
  __retval13 = c15;
  int c16 = 5;
  number14 = c16;
  char* cast17 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std18;
  __VERIFIER_nondet_memory(&std18, sizeof(std18));
  int t19 = number14;
  struct std__basic_ostream_char__std__char_traits_char__* std20;
  __VERIFIER_nondet_memory(&std20, sizeof(std20));
  cubeByReference(&number14);
  char* cast21 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std22;
  __VERIFIER_nondet_memory(&std22, sizeof(std22));
  int t23 = number14;
  struct std__basic_ostream_char__std__char_traits_char__* std24;
  __VERIFIER_nondet_memory(&std24, sizeof(std24));
  struct std__basic_ostream_char__std__char_traits_char__* std25;
  __VERIFIER_nondet_memory(&std25, sizeof(std25));
  int c26 = 0;
  __retval13 = c26;
  int t27 = __retval13;
  return t27;
}

