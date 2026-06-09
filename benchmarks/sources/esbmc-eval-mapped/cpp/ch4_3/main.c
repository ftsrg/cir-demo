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
char _str[8] = "Element";
char _str_1[6] = "Value";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int n2[10];
  struct std___Setw agg_tmp03;
  int c4 = 0;
  __retval1 = c4;
    int i5;
    int c6 = 0;
    i5 = c6;
    while (1) {
      int t8 = i5;
      int c9 = 10;
      _Bool c10 = ((t8 < c9)) ? 1 : 0;
      if (!c10) break;
      int c11 = 0;
      int t12 = i5;
      long cast13 = (long)t12;
      n2[cast13] = c11;
    for_step7: ;
      int t14 = i5;
      int u15 = t14 + 1;
      i5 = u15;
    }
  char* cast16 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std17;
  __VERIFIER_nondet_memory(&std17, sizeof(std17));
  int c18 = 13;
  struct std___Setw std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
  agg_tmp03 = std19;
  struct std___Setw t20 = agg_tmp03;
  struct std__basic_ostream_char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  char* cast22 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  struct std__basic_ostream_char__std__char_traits_char__* std24;
  __VERIFIER_nondet_memory(&std24, sizeof(std24));
    int j25;
    struct std___Setw agg_tmp126;
    struct std___Setw agg_tmp227;
    int c28 = 0;
    j25 = c28;
    while (1) {
      int t30 = j25;
      int c31 = 10;
      _Bool c32 = ((t30 < c31)) ? 1 : 0;
      if (!c32) break;
      int c33 = 7;
      struct std___Setw std34;
      __VERIFIER_nondet_memory(&std34, sizeof(std34));
      agg_tmp126 = std34;
      struct std___Setw t35 = agg_tmp126;
      struct std__basic_ostream_char__std__char_traits_char__* std36;
      __VERIFIER_nondet_memory(&std36, sizeof(std36));
      int t37 = j25;
      struct std__basic_ostream_char__std__char_traits_char__* std38;
      __VERIFIER_nondet_memory(&std38, sizeof(std38));
      int c39 = 13;
      struct std___Setw std40;
      __VERIFIER_nondet_memory(&std40, sizeof(std40));
      agg_tmp227 = std40;
      struct std___Setw t41 = agg_tmp227;
      struct std__basic_ostream_char__std__char_traits_char__* std42;
      __VERIFIER_nondet_memory(&std42, sizeof(std42));
      int t43 = j25;
      long cast44 = (long)t43;
      int t45 = n2[cast44];
      struct std__basic_ostream_char__std__char_traits_char__* std46;
      __VERIFIER_nondet_memory(&std46, sizeof(std46));
      struct std__basic_ostream_char__std__char_traits_char__* std47;
      __VERIFIER_nondet_memory(&std47, sizeof(std47));
    for_step29: ;
      int t48 = j25;
      int u49 = t48 + 1;
      j25 = u49;
    }
  int c50 = 0;
  __retval1 = c50;
  int t51 = __retval1;
  return t51;
}

