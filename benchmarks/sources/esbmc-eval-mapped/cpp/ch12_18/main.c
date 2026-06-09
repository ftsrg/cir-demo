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
int _ZNSt8ios_base10floatfieldE_const __attribute__((aligned(4))) = 260;
int _ZNSt8ios_base10scientificE_const __attribute__((aligned(4))) = 256;
int _ZNSt8ios_base9basefieldE_const __attribute__((aligned(4))) = 74;
int _ZNSt8ios_base3octE_const __attribute__((aligned(4))) = 64;
int _ZNSt8ios_base8showbaseE_const __attribute__((aligned(4))) = 512;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[37] = "The value of the flags variable is: ";
char _str_1[43] = "\nPrint int and double in original format:\n";
char _str_2[40] = "\nPrint int and double in a new format:\n";
char _str_3[46] = "The restored value of the flags variable is: ";
char _str_4[41] = "\nPrint values in original format again:\n";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern int __VERIFIER_nondet_int(void);
// function: main
int main() {
bb0:
  int __retval1;
  int integerValue2;
  double doubleValue3;
  int originalFormat4;
  int c5 = 0;
  __retval1 = c5;
  int c6 = 1000;
  integerValue2 = c6;
  double c7 = 0x1.8425ff6e09c8dp-4;
  doubleValue3 = c7;
  char* cast8 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std9;
  __VERIFIER_nondet_memory(&std9, sizeof(std9));
  void** v10 = (void**)&_ZSt4cout;
  void* v11 = *((void**)v10);
  unsigned char* cast12 = (unsigned char*)v11;
  long c13 = -24;
  unsigned char* ptr14 = &(cast12)[c13];
  long* cast15 = (long*)ptr14;
  long t16 = *cast15;
  unsigned char* cast17 = (unsigned char*)&_ZSt4cout;
  unsigned char* ptr18 = &(cast17)[t16];
  struct std__basic_ostream_char__std__char_traits_char__* cast19 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr18;
  struct std__ios_base* cast20 = (struct std__ios_base*)cast19;
  int std21 = __VERIFIER_nondet_int();
  struct std__basic_ostream_char__std__char_traits_char__* std22;
  __VERIFIER_nondet_memory(&std22, sizeof(std22));
  char* cast23 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std24;
  __VERIFIER_nondet_memory(&std24, sizeof(std24));
  int t25 = integerValue2;
  struct std__basic_ostream_char__std__char_traits_char__* std26;
  __VERIFIER_nondet_memory(&std26, sizeof(std26));
  char c27 = 9;
  struct std__basic_ostream_char__std__char_traits_char__* std28;
  __VERIFIER_nondet_memory(&std28, sizeof(std28));
  double t29 = doubleValue3;
  struct std__basic_ostream_char__std__char_traits_char__* std30;
  __VERIFIER_nondet_memory(&std30, sizeof(std30));
  struct std__basic_ostream_char__std__char_traits_char__* std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
  struct std__basic_ostream_char__std__char_traits_char__* std32;
  __VERIFIER_nondet_memory(&std32, sizeof(std32));
  void** v33 = (void**)&_ZSt4cout;
  void* v34 = *((void**)v33);
  unsigned char* cast35 = (unsigned char*)v34;
  long c36 = -24;
  unsigned char* ptr37 = &(cast35)[c36];
  long* cast38 = (long*)ptr37;
  long t39 = *cast38;
  unsigned char* cast40 = (unsigned char*)&_ZSt4cout;
  unsigned char* ptr41 = &(cast40)[t39];
  struct std__basic_ostream_char__std__char_traits_char__* cast42 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr41;
  struct std__ios_base* cast43 = (struct std__ios_base*)cast42;
  int std44 = __VERIFIER_nondet_int();
  originalFormat4 = std44;
  struct std__basic_ostream_char__std__char_traits_char__* std45;
  __VERIFIER_nondet_memory(&std45, sizeof(std45));
  struct std__basic_ostream_char__std__char_traits_char__* std46;
  __VERIFIER_nondet_memory(&std46, sizeof(std46));
  struct std__basic_ostream_char__std__char_traits_char__* std47;
  __VERIFIER_nondet_memory(&std47, sizeof(std47));
  char* cast48 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std49;
  __VERIFIER_nondet_memory(&std49, sizeof(std49));
  void** v50 = (void**)&_ZSt4cout;
  void* v51 = *((void**)v50);
  unsigned char* cast52 = (unsigned char*)v51;
  long c53 = -24;
  unsigned char* ptr54 = &(cast52)[c53];
  long* cast55 = (long*)ptr54;
  long t56 = *cast55;
  unsigned char* cast57 = (unsigned char*)&_ZSt4cout;
  unsigned char* ptr58 = &(cast57)[t56];
  struct std__basic_ostream_char__std__char_traits_char__* cast59 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr58;
  struct std__ios_base* cast60 = (struct std__ios_base*)cast59;
  int std61 = __VERIFIER_nondet_int();
  struct std__basic_ostream_char__std__char_traits_char__* std62;
  __VERIFIER_nondet_memory(&std62, sizeof(std62));
  char* cast63 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std64;
  __VERIFIER_nondet_memory(&std64, sizeof(std64));
  int t65 = integerValue2;
  struct std__basic_ostream_char__std__char_traits_char__* std66;
  __VERIFIER_nondet_memory(&std66, sizeof(std66));
  char c67 = 9;
  struct std__basic_ostream_char__std__char_traits_char__* std68;
  __VERIFIER_nondet_memory(&std68, sizeof(std68));
  double t69 = doubleValue3;
  struct std__basic_ostream_char__std__char_traits_char__* std70;
  __VERIFIER_nondet_memory(&std70, sizeof(std70));
  struct std__basic_ostream_char__std__char_traits_char__* std71;
  __VERIFIER_nondet_memory(&std71, sizeof(std71));
  struct std__basic_ostream_char__std__char_traits_char__* std72;
  __VERIFIER_nondet_memory(&std72, sizeof(std72));
  void** v73 = (void**)&_ZSt4cout;
  void* v74 = *((void**)v73);
  unsigned char* cast75 = (unsigned char*)v74;
  long c76 = -24;
  unsigned char* ptr77 = &(cast75)[c76];
  long* cast78 = (long*)ptr77;
  long t79 = *cast78;
  unsigned char* cast80 = (unsigned char*)&_ZSt4cout;
  unsigned char* ptr81 = &(cast80)[t79];
  struct std__basic_ostream_char__std__char_traits_char__* cast82 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr81;
  struct std__ios_base* cast83 = (struct std__ios_base*)cast82;
  int t84 = originalFormat4;
  int std85 = __VERIFIER_nondet_int();
  char* cast86 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std87;
  __VERIFIER_nondet_memory(&std87, sizeof(std87));
  void** v88 = (void**)&_ZSt4cout;
  void* v89 = *((void**)v88);
  unsigned char* cast90 = (unsigned char*)v89;
  long c91 = -24;
  unsigned char* ptr92 = &(cast90)[c91];
  long* cast93 = (long*)ptr92;
  long t94 = *cast93;
  unsigned char* cast95 = (unsigned char*)&_ZSt4cout;
  unsigned char* ptr96 = &(cast95)[t94];
  struct std__basic_ostream_char__std__char_traits_char__* cast97 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr96;
  struct std__ios_base* cast98 = (struct std__ios_base*)cast97;
  int std99 = __VERIFIER_nondet_int();
  struct std__basic_ostream_char__std__char_traits_char__* std100;
  __VERIFIER_nondet_memory(&std100, sizeof(std100));
  char* cast101 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std102;
  __VERIFIER_nondet_memory(&std102, sizeof(std102));
  int t103 = integerValue2;
  struct std__basic_ostream_char__std__char_traits_char__* std104;
  __VERIFIER_nondet_memory(&std104, sizeof(std104));
  char c105 = 9;
  struct std__basic_ostream_char__std__char_traits_char__* std106;
  __VERIFIER_nondet_memory(&std106, sizeof(std106));
  double t107 = doubleValue3;
  struct std__basic_ostream_char__std__char_traits_char__* std108;
  __VERIFIER_nondet_memory(&std108, sizeof(std108));
  struct std__basic_ostream_char__std__char_traits_char__* std109;
  __VERIFIER_nondet_memory(&std109, sizeof(std109));
  int c110 = 0;
  __retval1 = c110;
  int t111 = __retval1;
  return t111;
}

