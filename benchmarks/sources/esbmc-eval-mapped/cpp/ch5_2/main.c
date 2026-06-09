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
char _str[17] = "Enter a string: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
int mystery2(char* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z8mystery2PKc
int mystery2(char* v0) {
bb1:
  char* s2;
  int __retval3;
  int x4;
  s2 = v0;
    int c5 = 0;
    x4 = c5;
    while (1) {
      char* t7 = s2;
      char t8 = *t7;
      int cast9 = (int)t8;
      int c10 = 0;
      _Bool c11 = ((cast9 != c10)) ? 1 : 0;
      if (!c11) break;
      int t12 = x4;
      int u13 = t12 + 1;
      x4 = u13;
    for_step6: ;
      char* t14 = s2;
      int c15 = 1;
      char* ptr16 = &(t14)[c15];
      s2 = ptr16;
    }
  int t17 = x4;
  __retval3 = t17;
  int t18 = __retval3;
  return t18;
}

// function: main
int main() {
bb19:
  int __retval20;
  char string121[80];
  int c22 = 0;
  __retval20 = c22;
  char* cast23 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std24;
  __VERIFIER_nondet_memory(&std24, sizeof(std24));
  struct std__basic_istream_char__std__char_traits_char__* std25;
  __VERIFIER_nondet_memory(&std25, sizeof(std25));
  char* cast26 = (char*)&(string121);
  int r27 = mystery2(cast26);
  struct std__basic_ostream_char__std__char_traits_char__* std28;
  __VERIFIER_nondet_memory(&std28, sizeof(std28));
  struct std__basic_ostream_char__std__char_traits_char__* std29;
  __VERIFIER_nondet_memory(&std29, sizeof(std29));
  int c30 = 0;
  __retval20 = c30;
  int t31 = __retval20;
  return t31;
}

