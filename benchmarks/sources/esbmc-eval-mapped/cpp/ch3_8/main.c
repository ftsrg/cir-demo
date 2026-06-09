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

extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
extern int rand();
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int c2 = 0;
  __retval1 = c2;
    int counter3;
    int c4 = 1;
    counter3 = c4;
    while (1) {
      int t6 = counter3;
      int c7 = 20;
      _Bool c8 = ((t6 <= c7)) ? 1 : 0;
      if (!c8) break;
        struct std___Setw agg_tmp09;
        int c10 = 10;
        struct std___Setw std11;
        __VERIFIER_nondet_memory(&std11, sizeof(std11));
        agg_tmp09 = std11;
        struct std___Setw t12 = agg_tmp09;
        struct std__basic_ostream_char__std__char_traits_char__* std13;
        __VERIFIER_nondet_memory(&std13, sizeof(std13));
        int c14 = 1;
        int r15 = rand();
        int c16 = 6;
        int b17 = r15 % c16;
        int b18 = c14 + b17;
        struct std__basic_ostream_char__std__char_traits_char__* std19;
        __VERIFIER_nondet_memory(&std19, sizeof(std19));
          int t20 = counter3;
          int c21 = 5;
          int b22 = t20 % c21;
          int c23 = 0;
          _Bool c24 = ((b22 == c23)) ? 1 : 0;
          if (c24) {
            struct std__basic_ostream_char__std__char_traits_char__* std25;
            __VERIFIER_nondet_memory(&std25, sizeof(std25));
          }
    for_step5: ;
      int t26 = counter3;
      int u27 = t26 + 1;
      counter3 = u27;
    }
  int c28 = 0;
  __retval1 = c28;
  int t29 = __retval1;
  return t29;
}

