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
char _str[34] = "Called square with int argument: ";
char _str_1[37] = "Called square with double argument: ";
char _str_2[29] = "\nThe square of integer 7 is ";
char _str_3[30] = "\nThe square of double 7.5 is ";
int square_2(int p0);
double square(double p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z6squarei
int square_2(int v0) {
bb1:
  int x2;
  int __retval3;
  x2 = v0;
  char* cast4 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std5;
  __VERIFIER_nondet_memory(&std5, sizeof(std5));
  int t6 = x2;
  struct std__basic_ostream_char__std__char_traits_char__* std7;
  __VERIFIER_nondet_memory(&std7, sizeof(std7));
  struct std__basic_ostream_char__std__char_traits_char__* std8;
  __VERIFIER_nondet_memory(&std8, sizeof(std8));
  int t9 = x2;
  int t10 = x2;
  int b11 = t9 * t10;
  __retval3 = b11;
  int t12 = __retval3;
  return t12;
}

// function: _Z6squared
double square(double v13) {
bb14:
  double y15;
  double __retval16;
  y15 = v13;
  char* cast17 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std18;
  __VERIFIER_nondet_memory(&std18, sizeof(std18));
  double t19 = y15;
  struct std__basic_ostream_char__std__char_traits_char__* std20;
  __VERIFIER_nondet_memory(&std20, sizeof(std20));
  struct std__basic_ostream_char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  double t22 = y15;
  double t23 = y15;
  double b24 = t22 * t23;
  __retval16 = b24;
  double t25 = __retval16;
  return t25;
}

// function: main
int main() {
bb26:
  int __retval27;
  int intResult28;
  double doubleResult29;
  int c30 = 0;
  __retval27 = c30;
  int c31 = 7;
  int r32 = square_2(c31);
  intResult28 = r32;
  double c33 = 0x1.ep2;
  double r34 = square(c33);
  doubleResult29 = r34;
  char* cast35 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std36;
  __VERIFIER_nondet_memory(&std36, sizeof(std36));
  int t37 = intResult28;
  struct std__basic_ostream_char__std__char_traits_char__* std38;
  __VERIFIER_nondet_memory(&std38, sizeof(std38));
  char* cast39 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std40;
  __VERIFIER_nondet_memory(&std40, sizeof(std40));
  double t41 = doubleResult29;
  struct std__basic_ostream_char__std__char_traits_char__* std42;
  __VERIFIER_nondet_memory(&std42, sizeof(std42));
  struct std__basic_ostream_char__std__char_traits_char__* std43;
  __VERIFIER_nondet_memory(&std43, sizeof(std43));
  int c44 = 0;
  __retval27 = c44;
  int t45 = __retval27;
  return t45;
}

