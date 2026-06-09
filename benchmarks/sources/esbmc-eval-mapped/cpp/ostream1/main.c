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
struct anon_struct_0 { char __field0; char __field1; char __field2; char __field3; char __field4; char __field5; char __field6[19]; } __attribute__((packed));
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[18] = "Character value: ";
char _str_1[11] = "C-string: ";
char _str_2[16] = "Integer value: ";
char _str_3[23] = "Floating-point value: ";
char _str_4[15] = "Double value: ";
char _str_5[16] = "Boolean value: ";
char _str_6[5] = "true";
char _str_7[6] = "false";
char _str_8[18] = "Integer value: %d";
char _str_9[22] = "String from sprintf: ";
extern int sprintf(char* p0, char* p1, ...);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  char val2;
  char cstr3[25];
  int i4;
  float f5;
  double d6;
  _Bool b7;
  char buffer8[100];
  int c9 = 0;
  __retval1 = c9;
  char c10 = 65;
  val2 = c10;
  char* cast11 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std12;
  __VERIFIER_nondet_memory(&std12, sizeof(std12));
  char t13 = val2;
  struct std__basic_ostream_char__std__char_traits_char__* std14;
  __VERIFIER_nondet_memory(&std14, sizeof(std14));
  struct std__basic_ostream_char__std__char_traits_char__* std15;
  __VERIFIER_nondet_memory(&std15, sizeof(std15));
  struct anon_struct_0* cast16 = (struct anon_struct_0*)&(cstr3);
  struct anon_struct_0 c17 = {83, 84, 82, 73, 78, 71, {0}};
  *cast16 = c17;
  char* cast18 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
  char* cast20 = (char*)&(cstr3);
  struct std__basic_ostream_char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  struct std__basic_ostream_char__std__char_traits_char__* std22;
  __VERIFIER_nondet_memory(&std22, sizeof(std22));
  int c23 = 10;
  i4 = c23;
  char* cast24 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std25;
  __VERIFIER_nondet_memory(&std25, sizeof(std25));
  int t26 = i4;
  struct std__basic_ostream_char__std__char_traits_char__* std27;
  __VERIFIER_nondet_memory(&std27, sizeof(std27));
  struct std__basic_ostream_char__std__char_traits_char__* std28;
  __VERIFIER_nondet_memory(&std28, sizeof(std28));
  float c29 = 0x1.91eb86p1f;
  f5 = c29;
  char* cast30 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
  float t32 = f5;
  struct std__basic_ostream_char__std__char_traits_char__* std33;
  __VERIFIER_nondet_memory(&std33, sizeof(std33));
  struct std__basic_ostream_char__std__char_traits_char__* std34;
  __VERIFIER_nondet_memory(&std34, sizeof(std34));
  double c35 = 0x1.5bf0995aaf79p1;
  d6 = c35;
  char* cast36 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std37;
  __VERIFIER_nondet_memory(&std37, sizeof(std37));
  double t38 = d6;
  struct std__basic_ostream_char__std__char_traits_char__* std39;
  __VERIFIER_nondet_memory(&std39, sizeof(std39));
  struct std__basic_ostream_char__std__char_traits_char__* std40;
  __VERIFIER_nondet_memory(&std40, sizeof(std40));
  _Bool c41 = 1;
  b7 = c41;
  char* cast42 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std43;
  __VERIFIER_nondet_memory(&std43, sizeof(std43));
  _Bool t44 = b7;
  char* cast45 = (char*)&(_str_6);
  char* cast46 = (char*)&(_str_7);
  char* sel47 = t44 ? cast45 : cast46;
  struct std__basic_ostream_char__std__char_traits_char__* std48;
  __VERIFIER_nondet_memory(&std48, sizeof(std48));
  struct std__basic_ostream_char__std__char_traits_char__* std49;
  __VERIFIER_nondet_memory(&std49, sizeof(std49));
  char* cast50 = (char*)&(buffer8);
  char* cast51 = (char*)&(_str_8);
  int t52 = i4;
  int r53 = sprintf(cast50, cast51, t52);
  char* cast54 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* std55;
  __VERIFIER_nondet_memory(&std55, sizeof(std55));
  char* cast56 = (char*)&(buffer8);
  struct std__basic_ostream_char__std__char_traits_char__* std57;
  __VERIFIER_nondet_memory(&std57, sizeof(std57));
  struct std__basic_ostream_char__std__char_traits_char__* std58;
  __VERIFIER_nondet_memory(&std58, sizeof(std58));
  int c59 = 0;
  __retval1 = c59;
  int t60 = __retval1;
  return t60;
}

