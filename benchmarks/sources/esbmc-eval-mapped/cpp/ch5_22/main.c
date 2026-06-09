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
struct std___Setw { int _M_n; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[15] = "Happy New Year";
char _str_1[15] = "Happy Holidays";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[6] = "s1 = ";
char _str_3[7] = "\ns2 = ";
char _str_4[7] = "\ns3 = ";
char _str_5[20] = "\n\nstrcmp(s1, s2) = ";
char _str_6[19] = "\nstrcmp(s1, s3) = ";
char _str_7[19] = "\nstrcmp(s3, s1) = ";
char _str_8[24] = "\n\nstrncmp(s1, s3, 6) = ";
char _str_9[23] = "\nstrncmp(s1, s3, 7) = ";
char _str_10[23] = "\nstrncmp(s3, s1, 7) = ";
extern int strcmp(char* p0, char* p1);
extern int strncmp(char* p0, char* p1, unsigned long p2);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  char* s12;
  char* s23;
  char* s34;
  struct std___Setw agg_tmp05;
  struct std___Setw agg_tmp16;
  struct std___Setw agg_tmp27;
  struct std___Setw agg_tmp38;
  struct std___Setw agg_tmp49;
  struct std___Setw agg_tmp510;
  int c11 = 0;
  __retval1 = c11;
  char* cast12 = (char*)&(_str);
  s12 = cast12;
  char* cast13 = (char*)&(_str);
  s23 = cast13;
  char* cast14 = (char*)&(_str_1);
  s34 = cast14;
  char* cast15 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std16;
  __VERIFIER_nondet_memory(&std16, sizeof(std16));
  char* t17 = s12;
  struct std__basic_ostream_char__std__char_traits_char__* std18;
  __VERIFIER_nondet_memory(&std18, sizeof(std18));
  char* cast19 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std20;
  __VERIFIER_nondet_memory(&std20, sizeof(std20));
  char* t21 = s23;
  struct std__basic_ostream_char__std__char_traits_char__* std22;
  __VERIFIER_nondet_memory(&std22, sizeof(std22));
  char* cast23 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std24;
  __VERIFIER_nondet_memory(&std24, sizeof(std24));
  char* t25 = s34;
  struct std__basic_ostream_char__std__char_traits_char__* std26;
  __VERIFIER_nondet_memory(&std26, sizeof(std26));
  char* cast27 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std28;
  __VERIFIER_nondet_memory(&std28, sizeof(std28));
  int c29 = 2;
  struct std___Setw std30;
  __VERIFIER_nondet_memory(&std30, sizeof(std30));
  agg_tmp05 = std30;
  struct std___Setw t31 = agg_tmp05;
  struct std__basic_ostream_char__std__char_traits_char__* std32;
  __VERIFIER_nondet_memory(&std32, sizeof(std32));
  char* t33 = s12;
  char* t34 = s23;
  int r35 = strcmp(t33, t34);
  struct std__basic_ostream_char__std__char_traits_char__* std36;
  __VERIFIER_nondet_memory(&std36, sizeof(std36));
  char* cast37 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std38;
  __VERIFIER_nondet_memory(&std38, sizeof(std38));
  int c39 = 2;
  struct std___Setw std40;
  __VERIFIER_nondet_memory(&std40, sizeof(std40));
  agg_tmp16 = std40;
  struct std___Setw t41 = agg_tmp16;
  struct std__basic_ostream_char__std__char_traits_char__* std42;
  __VERIFIER_nondet_memory(&std42, sizeof(std42));
  char* t43 = s12;
  char* t44 = s34;
  int r45 = strcmp(t43, t44);
  struct std__basic_ostream_char__std__char_traits_char__* std46;
  __VERIFIER_nondet_memory(&std46, sizeof(std46));
  char* cast47 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std48;
  __VERIFIER_nondet_memory(&std48, sizeof(std48));
  int c49 = 2;
  struct std___Setw std50;
  __VERIFIER_nondet_memory(&std50, sizeof(std50));
  agg_tmp27 = std50;
  struct std___Setw t51 = agg_tmp27;
  struct std__basic_ostream_char__std__char_traits_char__* std52;
  __VERIFIER_nondet_memory(&std52, sizeof(std52));
  char* t53 = s34;
  char* t54 = s12;
  int r55 = strcmp(t53, t54);
  struct std__basic_ostream_char__std__char_traits_char__* std56;
  __VERIFIER_nondet_memory(&std56, sizeof(std56));
  char* cast57 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* std58;
  __VERIFIER_nondet_memory(&std58, sizeof(std58));
  int c59 = 2;
  struct std___Setw std60;
  __VERIFIER_nondet_memory(&std60, sizeof(std60));
  agg_tmp38 = std60;
  struct std___Setw t61 = agg_tmp38;
  struct std__basic_ostream_char__std__char_traits_char__* std62;
  __VERIFIER_nondet_memory(&std62, sizeof(std62));
  char* t63 = s12;
  char* t64 = s34;
  unsigned long c65 = 6;
  int r66 = strncmp(t63, t64, c65);
  struct std__basic_ostream_char__std__char_traits_char__* std67;
  __VERIFIER_nondet_memory(&std67, sizeof(std67));
  char* cast68 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* std69;
  __VERIFIER_nondet_memory(&std69, sizeof(std69));
  int c70 = 2;
  struct std___Setw std71;
  __VERIFIER_nondet_memory(&std71, sizeof(std71));
  agg_tmp49 = std71;
  struct std___Setw t72 = agg_tmp49;
  struct std__basic_ostream_char__std__char_traits_char__* std73;
  __VERIFIER_nondet_memory(&std73, sizeof(std73));
  char* t74 = s12;
  char* t75 = s34;
  unsigned long c76 = 7;
  int r77 = strncmp(t74, t75, c76);
  struct std__basic_ostream_char__std__char_traits_char__* std78;
  __VERIFIER_nondet_memory(&std78, sizeof(std78));
  char* cast79 = (char*)&(_str_10);
  struct std__basic_ostream_char__std__char_traits_char__* std80;
  __VERIFIER_nondet_memory(&std80, sizeof(std80));
  int c81 = 2;
  struct std___Setw std82;
  __VERIFIER_nondet_memory(&std82, sizeof(std82));
  agg_tmp510 = std82;
  struct std___Setw t83 = agg_tmp510;
  struct std__basic_ostream_char__std__char_traits_char__* std84;
  __VERIFIER_nondet_memory(&std84, sizeof(std84));
  char* t85 = s34;
  char* t86 = s12;
  unsigned long c87 = 7;
  int r88 = strncmp(t85, t86, c87);
  struct std__basic_ostream_char__std__char_traits_char__* std89;
  __VERIFIER_nondet_memory(&std89, sizeof(std89));
  struct std__basic_ostream_char__std__char_traits_char__* std90;
  __VERIFIER_nondet_memory(&std90, sizeof(std90));
  int c91 = 0;
  __retval1 = c91;
  int t92 = __retval1;
  return t92;
}

