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

int __const_main_a[10] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[30] = "Data items in original order\n";
char _str_1[32] = "\nData items in ascending order\n";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int arraySize2;
  int a3[10];
  int hold4;
  int c5 = 0;
  __retval1 = c5;
  int c6 = 10;
  arraySize2 = c6;
  // array copy
  __builtin_memcpy(a3, __const_main_a, (unsigned long)10 * sizeof(__const_main_a[0]));
  char* cast7 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std8;
  __VERIFIER_nondet_memory(&std8, sizeof(std8));
    int i9;
    struct std___Setw agg_tmp010;
    int c11 = 0;
    i9 = c11;
    while (1) {
      int t13 = i9;
      int t14 = arraySize2;
      _Bool c15 = ((t13 < t14)) ? 1 : 0;
      if (!c15) break;
      int c16 = 4;
      struct std___Setw std17;
      __VERIFIER_nondet_memory(&std17, sizeof(std17));
      agg_tmp010 = std17;
      struct std___Setw t18 = agg_tmp010;
      struct std__basic_ostream_char__std__char_traits_char__* std19;
      __VERIFIER_nondet_memory(&std19, sizeof(std19));
      int t20 = i9;
      long cast21 = (long)t20;
      int t22 = a3[cast21];
      struct std__basic_ostream_char__std__char_traits_char__* std23;
      __VERIFIER_nondet_memory(&std23, sizeof(std23));
    for_step12: ;
      int t24 = i9;
      int u25 = t24 + 1;
      i9 = u25;
    }
    int pass26;
    int c27 = 0;
    pass26 = c27;
    while (1) {
      int t29 = pass26;
      int t30 = arraySize2;
      int c31 = 1;
      int b32 = t30 - c31;
      _Bool c33 = ((t29 < b32)) ? 1 : 0;
      if (!c33) break;
        int j34;
        int c35 = 0;
        j34 = c35;
        while (1) {
          int t37 = j34;
          int t38 = arraySize2;
          int c39 = 1;
          int b40 = t38 - c39;
          _Bool c41 = ((t37 < b40)) ? 1 : 0;
          if (!c41) break;
            int t42 = j34;
            long cast43 = (long)t42;
            int t44 = a3[cast43];
            int t45 = j34;
            int c46 = 1;
            int b47 = t45 + c46;
            long cast48 = (long)b47;
            int t49 = a3[cast48];
            _Bool c50 = ((t44 > t49)) ? 1 : 0;
            if (c50) {
              int t51 = j34;
              long cast52 = (long)t51;
              int t53 = a3[cast52];
              hold4 = t53;
              int t54 = j34;
              int c55 = 1;
              int b56 = t54 + c55;
              long cast57 = (long)b56;
              int t58 = a3[cast57];
              int t59 = j34;
              long cast60 = (long)t59;
              a3[cast60] = t58;
              int t61 = hold4;
              int t62 = j34;
              int c63 = 1;
              int b64 = t62 + c63;
              long cast65 = (long)b64;
              a3[cast65] = t61;
            }
        for_step36: ;
          int t66 = j34;
          int u67 = t66 + 1;
          j34 = u67;
        }
    for_step28: ;
      int t68 = pass26;
      int u69 = t68 + 1;
      pass26 = u69;
    }
  char* cast70 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std71;
  __VERIFIER_nondet_memory(&std71, sizeof(std71));
    int k72;
    struct std___Setw agg_tmp173;
    int c74 = 0;
    k72 = c74;
    while (1) {
      int t76 = k72;
      int t77 = arraySize2;
      _Bool c78 = ((t76 < t77)) ? 1 : 0;
      if (!c78) break;
      int c79 = 4;
      struct std___Setw std80;
      __VERIFIER_nondet_memory(&std80, sizeof(std80));
      agg_tmp173 = std80;
      struct std___Setw t81 = agg_tmp173;
      struct std__basic_ostream_char__std__char_traits_char__* std82;
      __VERIFIER_nondet_memory(&std82, sizeof(std82));
      int t83 = k72;
      long cast84 = (long)t83;
      int t85 = a3[cast84];
      struct std__basic_ostream_char__std__char_traits_char__* std86;
      __VERIFIER_nondet_memory(&std86, sizeof(std86));
    for_step75: ;
      int t87 = k72;
      int u88 = t87 + 1;
      k72 = u88;
    }
  struct std__basic_ostream_char__std__char_traits_char__* std89;
  __VERIFIER_nondet_memory(&std89, sizeof(std89));
  int c90 = 0;
  __retval1 = c90;
  int t91 = __retval1;
  return t91;
}

