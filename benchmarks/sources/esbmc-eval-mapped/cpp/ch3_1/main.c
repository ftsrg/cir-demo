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
struct std__ctype_char_;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
int cube(int p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z4cubei
int cube(int v0) {
bb1:
  int y2;
  int __retval3;
  y2 = v0;
  int t4 = y2;
  int t5 = y2;
  int b6 = t4 * t5;
  int t7 = y2;
  int b8 = b6 * t7;
  __retval3 = b8;
  int t9 = __retval3;
  return t9;
}

// function: main
int main() {
bb10:
  int __retval11;
  int x12;
  int c13 = 0;
  __retval11 = c13;
    int c14 = 1;
    x12 = c14;
    while (1) {
      int t16 = x12;
      int c17 = 10;
      _Bool c18 = ((t16 <= c17)) ? 1 : 0;
      if (!c18) break;
      int t19 = x12;
      int r20 = cube(t19);
      struct std__basic_ostream_char__std__char_traits_char__* std21;
      __VERIFIER_nondet_memory(&std21, sizeof(std21));
      struct std__basic_ostream_char__std__char_traits_char__* std22;
      __VERIFIER_nondet_memory(&std22, sizeof(std22));
    for_step15: ;
      int t23 = x12;
      int u24 = t23 + 1;
      x12 = u24;
    }
  int c25 = 0;
  __retval11 = c25;
  int t26 = __retval11;
  return t26;
}

