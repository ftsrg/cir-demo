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
char _str[23] = "According to isdigit:\n";
char _str_1[7] = "8 is a";
char _str_2[11] = "8 is not a";
char _str_3[8] = " digit\n";
char _str_4[7] = "# is a";
char _str_5[11] = "# is not a";
char _str_6[24] = "\nAccording to isalpha:\n";
char _str_7[7] = "A is a";
char _str_8[11] = "A is not a";
char _str_9[9] = " letter\n";
char _str_10[7] = "b is a";
char _str_11[11] = "b is not a";
char _str_12[7] = "& is a";
char _str_13[11] = "& is not a";
char _str_14[7] = "4 is a";
char _str_15[11] = "4 is not a";
char _str_16[24] = "\nAccording to isalnum:\n";
char _str_17[20] = " digit or a letter\n";
char _str_18[25] = "\nAccording to isxdigit:\n";
char _str_19[7] = "F is a";
char _str_20[11] = "F is not a";
char _str_21[20] = " hexadecimal digit\n";
char _str_22[7] = "J is a";
char _str_23[11] = "J is not a";
char _str_24[7] = "7 is a";
char _str_25[11] = "7 is not a";
char _str_26[7] = "$ is a";
char _str_27[11] = "$ is not a";
char _str_28[7] = "f is a";
char _str_29[11] = "f is not a";
char _str_30[19] = " hexadecimal digit";
extern int isdigit(int p0);
extern int isalpha(int p0);
extern int isalnum(int p0);
extern int isxdigit(int p0);
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
  int c5 = 56;
  int r6 = isdigit(c5);
  _Bool cast7 = (_Bool)r6;
  char* cast8 = (char*)&(_str_1);
  char* cast9 = (char*)&(_str_2);
  char* sel10 = cast7 ? cast8 : cast9;
  struct std__basic_ostream_char__std__char_traits_char__* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  char* cast12 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std13;
  __VERIFIER_nondet_memory(&std13, sizeof(std13));
  int c14 = 35;
  int r15 = isdigit(c14);
  _Bool cast16 = (_Bool)r15;
  char* cast17 = (char*)&(_str_4);
  char* cast18 = (char*)&(_str_5);
  char* sel19 = cast16 ? cast17 : cast18;
  struct std__basic_ostream_char__std__char_traits_char__* std20;
  __VERIFIER_nondet_memory(&std20, sizeof(std20));
  char* cast21 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std22;
  __VERIFIER_nondet_memory(&std22, sizeof(std22));
  char* cast23 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std24;
  __VERIFIER_nondet_memory(&std24, sizeof(std24));
  int c25 = 65;
  int r26 = isalpha(c25);
  _Bool cast27 = (_Bool)r26;
  char* cast28 = (char*)&(_str_7);
  char* cast29 = (char*)&(_str_8);
  char* sel30 = cast27 ? cast28 : cast29;
  struct std__basic_ostream_char__std__char_traits_char__* std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
  char* cast32 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* std33;
  __VERIFIER_nondet_memory(&std33, sizeof(std33));
  int c34 = 98;
  int r35 = isalpha(c34);
  _Bool cast36 = (_Bool)r35;
  char* cast37 = (char*)&(_str_10);
  char* cast38 = (char*)&(_str_11);
  char* sel39 = cast36 ? cast37 : cast38;
  struct std__basic_ostream_char__std__char_traits_char__* std40;
  __VERIFIER_nondet_memory(&std40, sizeof(std40));
  char* cast41 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* std42;
  __VERIFIER_nondet_memory(&std42, sizeof(std42));
  int c43 = 38;
  int r44 = isalpha(c43);
  _Bool cast45 = (_Bool)r44;
  char* cast46 = (char*)&(_str_12);
  char* cast47 = (char*)&(_str_13);
  char* sel48 = cast45 ? cast46 : cast47;
  struct std__basic_ostream_char__std__char_traits_char__* std49;
  __VERIFIER_nondet_memory(&std49, sizeof(std49));
  char* cast50 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* std51;
  __VERIFIER_nondet_memory(&std51, sizeof(std51));
  int c52 = 52;
  int r53 = isalpha(c52);
  _Bool cast54 = (_Bool)r53;
  char* cast55 = (char*)&(_str_14);
  char* cast56 = (char*)&(_str_15);
  char* sel57 = cast54 ? cast55 : cast56;
  struct std__basic_ostream_char__std__char_traits_char__* std58;
  __VERIFIER_nondet_memory(&std58, sizeof(std58));
  char* cast59 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* std60;
  __VERIFIER_nondet_memory(&std60, sizeof(std60));
  char* cast61 = (char*)&(_str_16);
  struct std__basic_ostream_char__std__char_traits_char__* std62;
  __VERIFIER_nondet_memory(&std62, sizeof(std62));
  int c63 = 65;
  int r64 = isalnum(c63);
  _Bool cast65 = (_Bool)r64;
  char* cast66 = (char*)&(_str_7);
  char* cast67 = (char*)&(_str_8);
  char* sel68 = cast65 ? cast66 : cast67;
  struct std__basic_ostream_char__std__char_traits_char__* std69;
  __VERIFIER_nondet_memory(&std69, sizeof(std69));
  char* cast70 = (char*)&(_str_17);
  struct std__basic_ostream_char__std__char_traits_char__* std71;
  __VERIFIER_nondet_memory(&std71, sizeof(std71));
  int c72 = 56;
  int r73 = isalnum(c72);
  _Bool cast74 = (_Bool)r73;
  char* cast75 = (char*)&(_str_1);
  char* cast76 = (char*)&(_str_2);
  char* sel77 = cast74 ? cast75 : cast76;
  struct std__basic_ostream_char__std__char_traits_char__* std78;
  __VERIFIER_nondet_memory(&std78, sizeof(std78));
  char* cast79 = (char*)&(_str_17);
  struct std__basic_ostream_char__std__char_traits_char__* std80;
  __VERIFIER_nondet_memory(&std80, sizeof(std80));
  int c81 = 35;
  int r82 = isalnum(c81);
  _Bool cast83 = (_Bool)r82;
  char* cast84 = (char*)&(_str_4);
  char* cast85 = (char*)&(_str_5);
  char* sel86 = cast83 ? cast84 : cast85;
  struct std__basic_ostream_char__std__char_traits_char__* std87;
  __VERIFIER_nondet_memory(&std87, sizeof(std87));
  char* cast88 = (char*)&(_str_17);
  struct std__basic_ostream_char__std__char_traits_char__* std89;
  __VERIFIER_nondet_memory(&std89, sizeof(std89));
  char* cast90 = (char*)&(_str_18);
  struct std__basic_ostream_char__std__char_traits_char__* std91;
  __VERIFIER_nondet_memory(&std91, sizeof(std91));
  int c92 = 70;
  int r93 = isxdigit(c92);
  _Bool cast94 = (_Bool)r93;
  char* cast95 = (char*)&(_str_19);
  char* cast96 = (char*)&(_str_20);
  char* sel97 = cast94 ? cast95 : cast96;
  struct std__basic_ostream_char__std__char_traits_char__* std98;
  __VERIFIER_nondet_memory(&std98, sizeof(std98));
  char* cast99 = (char*)&(_str_21);
  struct std__basic_ostream_char__std__char_traits_char__* std100;
  __VERIFIER_nondet_memory(&std100, sizeof(std100));
  int c101 = 74;
  int r102 = isxdigit(c101);
  _Bool cast103 = (_Bool)r102;
  char* cast104 = (char*)&(_str_22);
  char* cast105 = (char*)&(_str_23);
  char* sel106 = cast103 ? cast104 : cast105;
  struct std__basic_ostream_char__std__char_traits_char__* std107;
  __VERIFIER_nondet_memory(&std107, sizeof(std107));
  char* cast108 = (char*)&(_str_21);
  struct std__basic_ostream_char__std__char_traits_char__* std109;
  __VERIFIER_nondet_memory(&std109, sizeof(std109));
  int c110 = 55;
  int r111 = isxdigit(c110);
  _Bool cast112 = (_Bool)r111;
  char* cast113 = (char*)&(_str_24);
  char* cast114 = (char*)&(_str_25);
  char* sel115 = cast112 ? cast113 : cast114;
  struct std__basic_ostream_char__std__char_traits_char__* std116;
  __VERIFIER_nondet_memory(&std116, sizeof(std116));
  char* cast117 = (char*)&(_str_21);
  struct std__basic_ostream_char__std__char_traits_char__* std118;
  __VERIFIER_nondet_memory(&std118, sizeof(std118));
  int c119 = 36;
  int r120 = isxdigit(c119);
  _Bool cast121 = (_Bool)r120;
  char* cast122 = (char*)&(_str_26);
  char* cast123 = (char*)&(_str_27);
  char* sel124 = cast121 ? cast122 : cast123;
  struct std__basic_ostream_char__std__char_traits_char__* std125;
  __VERIFIER_nondet_memory(&std125, sizeof(std125));
  char* cast126 = (char*)&(_str_21);
  struct std__basic_ostream_char__std__char_traits_char__* std127;
  __VERIFIER_nondet_memory(&std127, sizeof(std127));
  int c128 = 102;
  int r129 = isxdigit(c128);
  _Bool cast130 = (_Bool)r129;
  char* cast131 = (char*)&(_str_28);
  char* cast132 = (char*)&(_str_29);
  char* sel133 = cast130 ? cast131 : cast132;
  struct std__basic_ostream_char__std__char_traits_char__* std134;
  __VERIFIER_nondet_memory(&std134, sizeof(std134));
  char* cast135 = (char*)&(_str_30);
  struct std__basic_ostream_char__std__char_traits_char__* std136;
  __VERIFIER_nondet_memory(&std136, sizeof(std136));
  struct std__basic_ostream_char__std__char_traits_char__* std137;
  __VERIFIER_nondet_memory(&std137, sizeof(std137));
  int c138 = 0;
  __retval1 = c138;
  int t139 = __retval1;
  return t139;
}

