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
char _str[28] = "The default box volume is: ";
char _str_1[39] = "\n\nThe volume of a box with length 10,\n";
char _str_2[26] = "width 1 and height 1 is: ";
char _str_3[26] = "width 5 and height 1 is: ";
char _str_4[26] = "width 5 and height 2 is: ";
int boxVolume(int p0, int p1, int p2);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z9boxVolumeiii
int boxVolume(int v0, int v1, int v2) {
bb3:
  int length4;
  int width5;
  int height6;
  int __retval7;
  length4 = v0;
  width5 = v1;
  height6 = v2;
  int t8 = length4;
  int t9 = width5;
  int b10 = t8 * t9;
  int t11 = height6;
  int b12 = b10 * t11;
  __retval7 = b12;
  int t13 = __retval7;
  return t13;
}

// function: main
int main() {
bb14:
  int __retval15;
  int c16 = 0;
  __retval15 = c16;
  char* cast17 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std18;
  __VERIFIER_nondet_memory(&std18, sizeof(std18));
  int c19 = 1;
  int c20 = 1;
  int c21 = 1;
  int r22 = boxVolume(c19, c20, c21);
  struct std__basic_ostream_char__std__char_traits_char__* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  char* cast24 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std25;
  __VERIFIER_nondet_memory(&std25, sizeof(std25));
  char* cast26 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std27;
  __VERIFIER_nondet_memory(&std27, sizeof(std27));
  int c28 = 10;
  int c29 = 1;
  int c30 = 1;
  int r31 = boxVolume(c28, c29, c30);
  struct std__basic_ostream_char__std__char_traits_char__* std32;
  __VERIFIER_nondet_memory(&std32, sizeof(std32));
  char* cast33 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std34;
  __VERIFIER_nondet_memory(&std34, sizeof(std34));
  char* cast35 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std36;
  __VERIFIER_nondet_memory(&std36, sizeof(std36));
  int c37 = 10;
  int c38 = 5;
  int c39 = 1;
  int r40 = boxVolume(c37, c38, c39);
  struct std__basic_ostream_char__std__char_traits_char__* std41;
  __VERIFIER_nondet_memory(&std41, sizeof(std41));
  char* cast42 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std43;
  __VERIFIER_nondet_memory(&std43, sizeof(std43));
  char* cast44 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std45;
  __VERIFIER_nondet_memory(&std45, sizeof(std45));
  int c46 = 10;
  int c47 = 5;
  int c48 = 2;
  int r49 = boxVolume(c46, c47, c48);
  struct std__basic_ostream_char__std__char_traits_char__* std50;
  __VERIFIER_nondet_memory(&std50, sizeof(std50));
  struct std__basic_ostream_char__std__char_traits_char__* std51;
  __VERIFIER_nondet_memory(&std51, sizeof(std51));
  int c52 = 0;
  __retval15 = c52;
  int t53 = __retval15;
  return t53;
}

