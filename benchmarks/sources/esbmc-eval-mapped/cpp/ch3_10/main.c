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
struct std__basic_istream_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[13] = "Enter seed: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
extern void srand(unsigned int p0);
extern int rand();
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  unsigned int seed2;
  int c3 = 0;
  __retval1 = c3;
  char* cast4 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std5;
  __VERIFIER_nondet_memory(&std5, sizeof(std5));
  struct std__basic_istream_char__std__char_traits_char__* std6;
  __VERIFIER_nondet_memory(&std6, sizeof(std6));
  unsigned int t7 = seed2;
  srand(t7);
    int counter8;
    int c9 = 1;
    counter8 = c9;
    while (1) {
      int t11 = counter8;
      int c12 = 10;
      _Bool c13 = ((t11 <= c12)) ? 1 : 0;
      if (!c13) break;
        struct std___Setw agg_tmp014;
        int c15 = 10;
        struct std___Setw std16;
        __VERIFIER_nondet_memory(&std16, sizeof(std16));
        agg_tmp014 = std16;
        struct std___Setw t17 = agg_tmp014;
        struct std__basic_ostream_char__std__char_traits_char__* std18;
        __VERIFIER_nondet_memory(&std18, sizeof(std18));
        int c19 = 1;
        int r20 = rand();
        int c21 = 6;
        int b22 = r20 % c21;
        int b23 = c19 + b22;
        struct std__basic_ostream_char__std__char_traits_char__* std24;
        __VERIFIER_nondet_memory(&std24, sizeof(std24));
          int t25 = counter8;
          int c26 = 5;
          int b27 = t25 % c26;
          int c28 = 0;
          _Bool c29 = ((b27 == c28)) ? 1 : 0;
          if (c29) {
            struct std__basic_ostream_char__std__char_traits_char__* std30;
            __VERIFIER_nondet_memory(&std30, sizeof(std30));
          }
    for_step10: ;
      int t31 = counter8;
      int u32 = t31 + 1;
      counter8 = u32;
    }
  int c33 = 0;
  __retval1 = c33;
  int t34 = __retval1;
  return t34;
}

