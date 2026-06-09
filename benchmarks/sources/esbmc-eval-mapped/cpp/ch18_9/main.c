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
char _str[23] = "According to islower:\n";
char _str_1[7] = "p is a";
char _str_2[11] = "p is not a";
char _str_3[19] = " lowercase letter\n";
char _str_4[7] = "P is a";
char _str_5[11] = "P is not a";
char _str_6[7] = "5 is a";
char _str_7[11] = "5 is not a";
char _str_8[7] = "! is a";
char _str_9[11] = "! is not a";
char _str_10[24] = "\nAccording to isupper:\n";
char _str_11[8] = "D is an";
char _str_12[12] = "D is not an";
char _str_13[19] = " uppercase letter\n";
char _str_14[8] = "d is an";
char _str_15[12] = "d is not an";
char _str_16[8] = "8 is an";
char _str_17[12] = "8 is not an";
char _str_18[8] = "$ is an";
char _str_19[12] = "$ is not an";
char _str_20[30] = "\nu converted to uppercase is ";
char _str_21[30] = "\n7 converted to uppercase is ";
char _str_22[30] = "\n$ converted to uppercase is ";
char _str_23[30] = "\nL converted to lowercase is ";
extern int islower(int p0);
extern int isupper(int p0);
extern int toupper(int p0);
extern int tolower(int p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int c2 = 0;
  __retval1 = c2;
  char* cast3 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std4;
  __VERIFIER_nondet_memory(&std4, sizeof(std4));
  int c5 = 112;
  int r6 = islower(c5);
  _Bool cast7 = (_Bool)r6;
  char* cast8 = (char*)&(_str_1);
  char* cast9 = (char*)&(_str_2);
  char* sel10 = cast7 ? cast8 : cast9;
  struct std__basic_ostream_char__std__char_traits_char__* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  char* cast12 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std13;
  __VERIFIER_nondet_memory(&std13, sizeof(std13));
  int c14 = 80;
  int r15 = islower(c14);
  _Bool cast16 = (_Bool)r15;
  char* cast17 = (char*)&(_str_4);
  char* cast18 = (char*)&(_str_5);
  char* sel19 = cast16 ? cast17 : cast18;
  struct std__basic_ostream_char__std__char_traits_char__* std20;
  __VERIFIER_nondet_memory(&std20, sizeof(std20));
  char* cast21 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std22;
  __VERIFIER_nondet_memory(&std22, sizeof(std22));
  int c23 = 53;
  int r24 = islower(c23);
  _Bool cast25 = (_Bool)r24;
  char* cast26 = (char*)&(_str_6);
  char* cast27 = (char*)&(_str_7);
  char* sel28 = cast25 ? cast26 : cast27;
  struct std__basic_ostream_char__std__char_traits_char__* std29;
  __VERIFIER_nondet_memory(&std29, sizeof(std29));
  char* cast30 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
  int c32 = 33;
  int r33 = islower(c32);
  _Bool cast34 = (_Bool)r33;
  char* cast35 = (char*)&(_str_8);
  char* cast36 = (char*)&(_str_9);
  char* sel37 = cast34 ? cast35 : cast36;
  struct std__basic_ostream_char__std__char_traits_char__* std38;
  __VERIFIER_nondet_memory(&std38, sizeof(std38));
  char* cast39 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std40;
  __VERIFIER_nondet_memory(&std40, sizeof(std40));
  char* cast41 = (char*)&(_str_10);
  struct std__basic_ostream_char__std__char_traits_char__* std42;
  __VERIFIER_nondet_memory(&std42, sizeof(std42));
  int c43 = 68;
  int r44 = isupper(c43);
  _Bool cast45 = (_Bool)r44;
  char* cast46 = (char*)&(_str_11);
  char* cast47 = (char*)&(_str_12);
  char* sel48 = cast45 ? cast46 : cast47;
  struct std__basic_ostream_char__std__char_traits_char__* std49;
  __VERIFIER_nondet_memory(&std49, sizeof(std49));
  char* cast50 = (char*)&(_str_13);
  struct std__basic_ostream_char__std__char_traits_char__* std51;
  __VERIFIER_nondet_memory(&std51, sizeof(std51));
  int c52 = 100;
  int r53 = isupper(c52);
  _Bool cast54 = (_Bool)r53;
  char* cast55 = (char*)&(_str_14);
  char* cast56 = (char*)&(_str_15);
  char* sel57 = cast54 ? cast55 : cast56;
  struct std__basic_ostream_char__std__char_traits_char__* std58;
  __VERIFIER_nondet_memory(&std58, sizeof(std58));
  char* cast59 = (char*)&(_str_13);
  struct std__basic_ostream_char__std__char_traits_char__* std60;
  __VERIFIER_nondet_memory(&std60, sizeof(std60));
  int c61 = 56;
  int r62 = isupper(c61);
  _Bool cast63 = (_Bool)r62;
  char* cast64 = (char*)&(_str_16);
  char* cast65 = (char*)&(_str_17);
  char* sel66 = cast63 ? cast64 : cast65;
  struct std__basic_ostream_char__std__char_traits_char__* std67;
  __VERIFIER_nondet_memory(&std67, sizeof(std67));
  char* cast68 = (char*)&(_str_13);
  struct std__basic_ostream_char__std__char_traits_char__* std69;
  __VERIFIER_nondet_memory(&std69, sizeof(std69));
  int c70 = 36;
  int r71 = isupper(c70);
  _Bool cast72 = (_Bool)r71;
  char* cast73 = (char*)&(_str_18);
  char* cast74 = (char*)&(_str_19);
  char* sel75 = cast72 ? cast73 : cast74;
  struct std__basic_ostream_char__std__char_traits_char__* std76;
  __VERIFIER_nondet_memory(&std76, sizeof(std76));
  char* cast77 = (char*)&(_str_13);
  struct std__basic_ostream_char__std__char_traits_char__* std78;
  __VERIFIER_nondet_memory(&std78, sizeof(std78));
  char* cast79 = (char*)&(_str_20);
  struct std__basic_ostream_char__std__char_traits_char__* std80;
  __VERIFIER_nondet_memory(&std80, sizeof(std80));
  int c81 = 117;
  int r82 = toupper(c81);
  char cast83 = (char)r82;
  struct std__basic_ostream_char__std__char_traits_char__* std84;
  __VERIFIER_nondet_memory(&std84, sizeof(std84));
  char* cast85 = (char*)&(_str_21);
  struct std__basic_ostream_char__std__char_traits_char__* std86;
  __VERIFIER_nondet_memory(&std86, sizeof(std86));
  int c87 = 55;
  int r88 = toupper(c87);
  char cast89 = (char)r88;
  struct std__basic_ostream_char__std__char_traits_char__* std90;
  __VERIFIER_nondet_memory(&std90, sizeof(std90));
  char* cast91 = (char*)&(_str_22);
  struct std__basic_ostream_char__std__char_traits_char__* std92;
  __VERIFIER_nondet_memory(&std92, sizeof(std92));
  int c93 = 36;
  int r94 = toupper(c93);
  char cast95 = (char)r94;
  struct std__basic_ostream_char__std__char_traits_char__* std96;
  __VERIFIER_nondet_memory(&std96, sizeof(std96));
  char* cast97 = (char*)&(_str_23);
  struct std__basic_ostream_char__std__char_traits_char__* std98;
  __VERIFIER_nondet_memory(&std98, sizeof(std98));
  int c99 = 76;
  int r100 = tolower(c99);
  char cast101 = (char)r100;
  struct std__basic_ostream_char__std__char_traits_char__* std102;
  __VERIFIER_nondet_memory(&std102, sizeof(std102));
  struct std__basic_ostream_char__std__char_traits_char__* std103;
  __VERIFIER_nondet_memory(&std103, sizeof(std103));
  int c104 = 0;
  __retval1 = c104;
  int t105 = __retval1;
  return t105;
}

