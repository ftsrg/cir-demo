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
struct std__basic_istream_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[25] = "Enter the letter grades.";
char _str_1[38] = "Enter the EOF character to end input.";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_2[32] = "Incorrect letter grade entered.";
char _str_3[20] = " Enter a new grade.";
char _str_4[36] = "\n\nTotals for each letter grade are:";
char _str_5[5] = "\nA: ";
char _str_6[5] = "\nB: ";
char _str_7[5] = "\nC: ";
char _str_8[5] = "\nD: ";
char _str_9[5] = "\nF: ";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern int __VERIFIER_nondet_int(void);
// function: main
int main() {
bb0:
  int __retval1;
  int grade2;
  int aCount3;
  int bCount4;
  int cCount5;
  int dCount6;
  int fCount7;
  int c8 = 0;
  __retval1 = c8;
  int c9 = 0;
  aCount3 = c9;
  int c10 = 0;
  bCount4 = c10;
  int c11 = 0;
  cCount5 = c11;
  int c12 = 0;
  dCount6 = c12;
  int c13 = 0;
  fCount7 = c13;
  char* cast14 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std15;
  __VERIFIER_nondet_memory(&std15, sizeof(std15));
  struct std__basic_ostream_char__std__char_traits_char__* std16;
  __VERIFIER_nondet_memory(&std16, sizeof(std16));
  char* cast17 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std18;
  __VERIFIER_nondet_memory(&std18, sizeof(std18));
  struct std__basic_ostream_char__std__char_traits_char__* std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
    while (1) {
      int std20 = __VERIFIER_nondet_int();
      grade2 = std20;
      int c21 = -1;
      _Bool c22 = ((std20 != c21)) ? 1 : 0;
      if (!c22) break;
          int t23 = grade2;
          switch (t23) {
          case 65:
          case 97:
            int t24 = aCount3;
            int u25 = t24 + 1;
            aCount3 = u25;
            break;
          case 66:
          case 98:
            int t26 = bCount4;
            int u27 = t26 + 1;
            bCount4 = u27;
            break;
          case 67:
          case 99:
            int t28 = cCount5;
            int u29 = t28 + 1;
            cCount5 = u29;
            break;
          case 68:
          case 100:
            int t30 = dCount6;
            int u31 = t30 + 1;
            dCount6 = u31;
            break;
          case 70:
          case 102:
            int t32 = fCount7;
            int u33 = t32 + 1;
            fCount7 = u33;
            break;
          case 10:
          case 9:
          case 32:
            break;
          default:
            char* cast34 = (char*)&(_str_2);
            struct std__basic_ostream_char__std__char_traits_char__* std35;
            __VERIFIER_nondet_memory(&std35, sizeof(std35));
            char* cast36 = (char*)&(_str_3);
            struct std__basic_ostream_char__std__char_traits_char__* std37;
            __VERIFIER_nondet_memory(&std37, sizeof(std37));
            struct std__basic_ostream_char__std__char_traits_char__* std38;
            __VERIFIER_nondet_memory(&std38, sizeof(std38));
            break;
          }
    }
  char* cast39 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std40;
  __VERIFIER_nondet_memory(&std40, sizeof(std40));
  char* cast41 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std42;
  __VERIFIER_nondet_memory(&std42, sizeof(std42));
  int t43 = aCount3;
  struct std__basic_ostream_char__std__char_traits_char__* std44;
  __VERIFIER_nondet_memory(&std44, sizeof(std44));
  char* cast45 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std46;
  __VERIFIER_nondet_memory(&std46, sizeof(std46));
  int t47 = bCount4;
  struct std__basic_ostream_char__std__char_traits_char__* std48;
  __VERIFIER_nondet_memory(&std48, sizeof(std48));
  char* cast49 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std50;
  __VERIFIER_nondet_memory(&std50, sizeof(std50));
  int t51 = cCount5;
  struct std__basic_ostream_char__std__char_traits_char__* std52;
  __VERIFIER_nondet_memory(&std52, sizeof(std52));
  char* cast53 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* std54;
  __VERIFIER_nondet_memory(&std54, sizeof(std54));
  int t55 = dCount6;
  struct std__basic_ostream_char__std__char_traits_char__* std56;
  __VERIFIER_nondet_memory(&std56, sizeof(std56));
  char* cast57 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* std58;
  __VERIFIER_nondet_memory(&std58, sizeof(std58));
  int t59 = fCount7;
  struct std__basic_ostream_char__std__char_traits_char__* std60;
  __VERIFIER_nondet_memory(&std60, sizeof(std60));
  struct std__basic_ostream_char__std__char_traits_char__* std61;
  __VERIFIER_nondet_memory(&std61, sizeof(std61));
  int c62 = 0;
  __retval1 = c62;
  int t63 = __retval1;
  return t63;
}

