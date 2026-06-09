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
char _str[20] = "Enter two strings: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
void mystery1(char* p0, char* p1);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z8mystery1PcPKc
void mystery1(char* v0, char* v1) {
bb2:
  char* s13;
  char* s24;
  s13 = v0;
  s24 = v1;
    while (1) {
      char* t5 = s13;
      char t6 = *t5;
      int cast7 = (int)t6;
      int c8 = 0;
      _Bool c9 = ((cast7 != c8)) ? 1 : 0;
      if (!c9) break;
      char* t10 = s13;
      int c11 = 1;
      char* ptr12 = &(t10)[c11];
      s13 = ptr12;
    }
    while (1) {
      char* t14 = s24;
      char t15 = *t14;
      char* t16 = s13;
      *t16 = t15;
      _Bool cast17 = (_Bool)t15;
      if (!cast17) break;
    for_step13: ;
      char* t18 = s13;
      int c19 = 1;
      char* ptr20 = &(t18)[c19];
      s13 = ptr20;
      char* t21 = s24;
      int c22 = 1;
      char* ptr23 = &(t21)[c22];
      s24 = ptr23;
    }
  return;
}

// function: main
int main() {
bb24:
  int __retval25;
  char string126[80];
  char string227[80];
  int c28 = 0;
  __retval25 = c28;
  char* cast29 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std30;
  __VERIFIER_nondet_memory(&std30, sizeof(std30));
  struct std__basic_istream_char__std__char_traits_char__* std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
  struct std__basic_istream_char__std__char_traits_char__* std32;
  __VERIFIER_nondet_memory(&std32, sizeof(std32));
  char* cast33 = (char*)&(string126);
  char* cast34 = (char*)&(string227);
  mystery1(cast33, cast34);
  char* cast35 = (char*)&(string126);
  struct std__basic_ostream_char__std__char_traits_char__* std36;
  __VERIFIER_nondet_memory(&std36, sizeof(std36));
  struct std__basic_ostream_char__std__char_traits_char__* std37;
  __VERIFIER_nondet_memory(&std37, sizeof(std37));
  int c38 = 0;
  __retval25 = c38;
  int t39 = __retval25;
  return t39;
}

