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
int _ZNSt8ios_base9boolalphaE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[13] = "   a and b: ";
char _str_1[14] = "\n    a or b: ";
char _str_2[14] = "\n     not a: ";
char _str_3[14] = "\na not_eq b: ";
char _str_4[14] = "\na bitand b: ";
char _str_5[14] = "\na bit_or b: ";
char _str_6[14] = "\n   a xor b: ";
char _str_7[14] = "\n   compl a: ";
char _str_8[14] = "\na and_eq b: ";
char _str_9[14] = "\n a or_eq b: ";
char _str_10[14] = "\na xor_eq b: ";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int a2;
  int b3;
  int c4 = 0;
  __retval1 = c4;
  int c5 = 2;
  a2 = c5;
  int c6 = 3;
  b3 = c6;
  struct std__basic_ostream_char__std__char_traits_char__* std7;
  __VERIFIER_nondet_memory(&std7, sizeof(std7));
  char* cast8 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std9;
  __VERIFIER_nondet_memory(&std9, sizeof(std9));
  int t10 = a2;
  _Bool cast11 = (_Bool)t10;
  _Bool ternary12;
  if (cast11) {
    int t13 = b3;
    _Bool cast14 = (_Bool)t13;
    ternary12 = (_Bool)cast14;
  } else {
    _Bool c15 = 0;
    ternary12 = (_Bool)c15;
  }
  struct std__basic_ostream_char__std__char_traits_char__* std16;
  __VERIFIER_nondet_memory(&std16, sizeof(std16));
  char* cast17 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std18;
  __VERIFIER_nondet_memory(&std18, sizeof(std18));
  int t19 = a2;
  _Bool cast20 = (_Bool)t19;
  _Bool ternary21;
  if (cast20) {
    _Bool c22 = 1;
    ternary21 = (_Bool)c22;
  } else {
    int t23 = b3;
    _Bool cast24 = (_Bool)t23;
    ternary21 = (_Bool)cast24;
  }
  struct std__basic_ostream_char__std__char_traits_char__* std25;
  __VERIFIER_nondet_memory(&std25, sizeof(std25));
  char* cast26 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std27;
  __VERIFIER_nondet_memory(&std27, sizeof(std27));
  int t28 = a2;
  _Bool cast29 = (_Bool)t28;
  _Bool u30 = !cast29;
  struct std__basic_ostream_char__std__char_traits_char__* std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
  char* cast32 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std33;
  __VERIFIER_nondet_memory(&std33, sizeof(std33));
  int t34 = a2;
  int t35 = b3;
  _Bool c36 = ((t34 != t35)) ? 1 : 0;
  struct std__basic_ostream_char__std__char_traits_char__* std37;
  __VERIFIER_nondet_memory(&std37, sizeof(std37));
  char* cast38 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std39;
  __VERIFIER_nondet_memory(&std39, sizeof(std39));
  int t40 = a2;
  int t41 = b3;
  int b42 = t40 & t41;
  struct std__basic_ostream_char__std__char_traits_char__* std43;
  __VERIFIER_nondet_memory(&std43, sizeof(std43));
  char* cast44 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std45;
  __VERIFIER_nondet_memory(&std45, sizeof(std45));
  int t46 = a2;
  int t47 = b3;
  int b48 = t46 | t47;
  struct std__basic_ostream_char__std__char_traits_char__* std49;
  __VERIFIER_nondet_memory(&std49, sizeof(std49));
  char* cast50 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std51;
  __VERIFIER_nondet_memory(&std51, sizeof(std51));
  int t52 = a2;
  int t53 = b3;
  int b54 = t52 ^ t53;
  struct std__basic_ostream_char__std__char_traits_char__* std55;
  __VERIFIER_nondet_memory(&std55, sizeof(std55));
  char* cast56 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std57;
  __VERIFIER_nondet_memory(&std57, sizeof(std57));
  int t58 = a2;
  int u59 = ~t58;
  struct std__basic_ostream_char__std__char_traits_char__* std60;
  __VERIFIER_nondet_memory(&std60, sizeof(std60));
  char* cast61 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* std62;
  __VERIFIER_nondet_memory(&std62, sizeof(std62));
  int t63 = b3;
  int t64 = a2;
  int b65 = t64 & t63;
  a2 = b65;
  struct std__basic_ostream_char__std__char_traits_char__* std66;
  __VERIFIER_nondet_memory(&std66, sizeof(std66));
  char* cast67 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* std68;
  __VERIFIER_nondet_memory(&std68, sizeof(std68));
  int t69 = b3;
  int t70 = a2;
  int b71 = t70 | t69;
  a2 = b71;
  struct std__basic_ostream_char__std__char_traits_char__* std72;
  __VERIFIER_nondet_memory(&std72, sizeof(std72));
  char* cast73 = (char*)&(_str_10);
  struct std__basic_ostream_char__std__char_traits_char__* std74;
  __VERIFIER_nondet_memory(&std74, sizeof(std74));
  int t75 = b3;
  int t76 = a2;
  int b77 = t76 ^ t75;
  a2 = b77;
  struct std__basic_ostream_char__std__char_traits_char__* std78;
  __VERIFIER_nondet_memory(&std78, sizeof(std78));
  struct std__basic_ostream_char__std__char_traits_char__* std79;
  __VERIFIER_nondet_memory(&std79, sizeof(std79));
  int c80 = 0;
  __retval1 = c80;
  int t81 = __retval1;
  return t81;
}

