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
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[31] = "Program should never get here!";
char _str_1[5] = "Face";
char _str_2[10] = "Frequency";
char _str_3[6] = "\n   1";
char _str_4[6] = "\n   2";
char _str_5[6] = "\n   3";
char _str_6[6] = "\n   4";
char _str_7[6] = "\n   5";
char _str_8[6] = "\n   6";
extern int rand();
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int frequency12;
  int frequency23;
  int frequency34;
  int frequency45;
  int frequency56;
  int frequency67;
  int face8;
  struct std___Setw agg_tmp09;
  struct std___Setw agg_tmp110;
  struct std___Setw agg_tmp211;
  struct std___Setw agg_tmp312;
  struct std___Setw agg_tmp413;
  struct std___Setw agg_tmp514;
  struct std___Setw agg_tmp615;
  int c16 = 0;
  __retval1 = c16;
  int c17 = 0;
  frequency12 = c17;
  int c18 = 0;
  frequency23 = c18;
  int c19 = 0;
  frequency34 = c19;
  int c20 = 0;
  frequency45 = c20;
  int c21 = 0;
  frequency56 = c21;
  int c22 = 0;
  frequency67 = c22;
    int roll23;
    int c24 = 1;
    roll23 = c24;
    while (1) {
      int t26 = roll23;
      int c27 = 60;
      _Bool c28 = ((t26 <= c27)) ? 1 : 0;
      if (!c28) break;
        int c29 = 1;
        int r30 = rand();
        int c31 = 6;
        int b32 = r30 % c31;
        int b33 = c29 + b32;
        face8 = b33;
          int t34 = face8;
          switch (t34) {
          case 1:
            int t35 = frequency12;
            int u36 = t35 + 1;
            frequency12 = u36;
            break;
          case 2:
            int t37 = frequency23;
            int u38 = t37 + 1;
            frequency23 = u38;
            break;
          case 3:
            int t39 = frequency34;
            int u40 = t39 + 1;
            frequency34 = u40;
            break;
          case 4:
            int t41 = frequency45;
            int u42 = t41 + 1;
            frequency45 = u42;
            break;
          case 5:
            int t43 = frequency56;
            int u44 = t43 + 1;
            frequency56 = u44;
            break;
          case 6:
            int t45 = frequency67;
            int u46 = t45 + 1;
            frequency67 = u46;
            break;
          default:
            char* cast47 = (char*)&(_str);
            struct std__basic_ostream_char__std__char_traits_char__* std48;
            __VERIFIER_nondet_memory(&std48, sizeof(std48));
          }
    for_step25: ;
      int t49 = roll23;
      int u50 = t49 + 1;
      roll23 = u50;
    }
  char* cast51 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std52;
  __VERIFIER_nondet_memory(&std52, sizeof(std52));
  int c53 = 13;
  struct std___Setw std54;
  __VERIFIER_nondet_memory(&std54, sizeof(std54));
  agg_tmp09 = std54;
  struct std___Setw t55 = agg_tmp09;
  struct std__basic_ostream_char__std__char_traits_char__* std56;
  __VERIFIER_nondet_memory(&std56, sizeof(std56));
  char* cast57 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std58;
  __VERIFIER_nondet_memory(&std58, sizeof(std58));
  char* cast59 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std60;
  __VERIFIER_nondet_memory(&std60, sizeof(std60));
  int c61 = 13;
  struct std___Setw std62;
  __VERIFIER_nondet_memory(&std62, sizeof(std62));
  agg_tmp110 = std62;
  struct std___Setw t63 = agg_tmp110;
  struct std__basic_ostream_char__std__char_traits_char__* std64;
  __VERIFIER_nondet_memory(&std64, sizeof(std64));
  int t65 = frequency12;
  struct std__basic_ostream_char__std__char_traits_char__* std66;
  __VERIFIER_nondet_memory(&std66, sizeof(std66));
  char* cast67 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std68;
  __VERIFIER_nondet_memory(&std68, sizeof(std68));
  int c69 = 13;
  struct std___Setw std70;
  __VERIFIER_nondet_memory(&std70, sizeof(std70));
  agg_tmp211 = std70;
  struct std___Setw t71 = agg_tmp211;
  struct std__basic_ostream_char__std__char_traits_char__* std72;
  __VERIFIER_nondet_memory(&std72, sizeof(std72));
  int t73 = frequency23;
  struct std__basic_ostream_char__std__char_traits_char__* std74;
  __VERIFIER_nondet_memory(&std74, sizeof(std74));
  char* cast75 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std76;
  __VERIFIER_nondet_memory(&std76, sizeof(std76));
  int c77 = 13;
  struct std___Setw std78;
  __VERIFIER_nondet_memory(&std78, sizeof(std78));
  agg_tmp312 = std78;
  struct std___Setw t79 = agg_tmp312;
  struct std__basic_ostream_char__std__char_traits_char__* std80;
  __VERIFIER_nondet_memory(&std80, sizeof(std80));
  int t81 = frequency34;
  struct std__basic_ostream_char__std__char_traits_char__* std82;
  __VERIFIER_nondet_memory(&std82, sizeof(std82));
  char* cast83 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std84;
  __VERIFIER_nondet_memory(&std84, sizeof(std84));
  int c85 = 13;
  struct std___Setw std86;
  __VERIFIER_nondet_memory(&std86, sizeof(std86));
  agg_tmp413 = std86;
  struct std___Setw t87 = agg_tmp413;
  struct std__basic_ostream_char__std__char_traits_char__* std88;
  __VERIFIER_nondet_memory(&std88, sizeof(std88));
  int t89 = frequency45;
  struct std__basic_ostream_char__std__char_traits_char__* std90;
  __VERIFIER_nondet_memory(&std90, sizeof(std90));
  char* cast91 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std92;
  __VERIFIER_nondet_memory(&std92, sizeof(std92));
  int c93 = 13;
  struct std___Setw std94;
  __VERIFIER_nondet_memory(&std94, sizeof(std94));
  agg_tmp514 = std94;
  struct std___Setw t95 = agg_tmp514;
  struct std__basic_ostream_char__std__char_traits_char__* std96;
  __VERIFIER_nondet_memory(&std96, sizeof(std96));
  int t97 = frequency56;
  struct std__basic_ostream_char__std__char_traits_char__* std98;
  __VERIFIER_nondet_memory(&std98, sizeof(std98));
  char* cast99 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* std100;
  __VERIFIER_nondet_memory(&std100, sizeof(std100));
  int c101 = 13;
  struct std___Setw std102;
  __VERIFIER_nondet_memory(&std102, sizeof(std102));
  agg_tmp615 = std102;
  struct std___Setw t103 = agg_tmp615;
  struct std__basic_ostream_char__std__char_traits_char__* std104;
  __VERIFIER_nondet_memory(&std104, sizeof(std104));
  int t105 = frequency67;
  struct std__basic_ostream_char__std__char_traits_char__* std106;
  __VERIFIER_nondet_memory(&std106, sizeof(std106));
  struct std__basic_ostream_char__std__char_traits_char__* std107;
  __VERIFIER_nondet_memory(&std107, sizeof(std107));
  int c108 = 0;
  __retval1 = c108;
  int t109 = __retval1;
  return t109;
}

