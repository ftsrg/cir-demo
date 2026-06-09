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
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[15] = "This is a test";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[17] = "' was found in \"";
char _str_2[4] = "\".\n";
char _str_3[21] = "' was not found in \"";
char _str_4[3] = "\".";
extern char* strchr(char* p0, int p1);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  char* string12;
  char character13;
  char character24;
  int c5 = 0;
  __retval1 = c5;
  char* cast6 = (char*)&(_str);
  string12 = cast6;
  char c7 = 97;
  character13 = c7;
  char c8 = 122;
  character24 = c8;
    char* t9 = string12;
    char t10 = character13;
    int cast11 = (int)t10;
    char* r12 = strchr(t9, cast11);
    char* c13 = ((void*)0);
    _Bool c14 = ((r12 != c13)) ? 1 : 0;
    if (c14) {
      char c15 = 39;
      struct std__basic_ostream_char__std__char_traits_char__* std16;
      __VERIFIER_nondet_memory(&std16, sizeof(std16));
      char t17 = character13;
      struct std__basic_ostream_char__std__char_traits_char__* std18;
      __VERIFIER_nondet_memory(&std18, sizeof(std18));
      char* cast19 = (char*)&(_str_1);
      struct std__basic_ostream_char__std__char_traits_char__* std20;
      __VERIFIER_nondet_memory(&std20, sizeof(std20));
      char* t21 = string12;
      struct std__basic_ostream_char__std__char_traits_char__* std22;
      __VERIFIER_nondet_memory(&std22, sizeof(std22));
      char* cast23 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* std24;
      __VERIFIER_nondet_memory(&std24, sizeof(std24));
    } else {
      char c25 = 39;
      struct std__basic_ostream_char__std__char_traits_char__* std26;
      __VERIFIER_nondet_memory(&std26, sizeof(std26));
      char t27 = character13;
      struct std__basic_ostream_char__std__char_traits_char__* std28;
      __VERIFIER_nondet_memory(&std28, sizeof(std28));
      char* cast29 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* std30;
      __VERIFIER_nondet_memory(&std30, sizeof(std30));
      char* t31 = string12;
      struct std__basic_ostream_char__std__char_traits_char__* std32;
      __VERIFIER_nondet_memory(&std32, sizeof(std32));
      char* cast33 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* std34;
      __VERIFIER_nondet_memory(&std34, sizeof(std34));
    }
    char* t35 = string12;
    char t36 = character24;
    int cast37 = (int)t36;
    char* r38 = strchr(t35, cast37);
    char* c39 = ((void*)0);
    _Bool c40 = ((r38 != c39)) ? 1 : 0;
    if (c40) {
      char c41 = 39;
      struct std__basic_ostream_char__std__char_traits_char__* std42;
      __VERIFIER_nondet_memory(&std42, sizeof(std42));
      char t43 = character24;
      struct std__basic_ostream_char__std__char_traits_char__* std44;
      __VERIFIER_nondet_memory(&std44, sizeof(std44));
      char* cast45 = (char*)&(_str_1);
      struct std__basic_ostream_char__std__char_traits_char__* std46;
      __VERIFIER_nondet_memory(&std46, sizeof(std46));
      char* t47 = string12;
      struct std__basic_ostream_char__std__char_traits_char__* std48;
      __VERIFIER_nondet_memory(&std48, sizeof(std48));
      char* cast49 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* std50;
      __VERIFIER_nondet_memory(&std50, sizeof(std50));
    } else {
      char c51 = 39;
      struct std__basic_ostream_char__std__char_traits_char__* std52;
      __VERIFIER_nondet_memory(&std52, sizeof(std52));
      char t53 = character24;
      struct std__basic_ostream_char__std__char_traits_char__* std54;
      __VERIFIER_nondet_memory(&std54, sizeof(std54));
      char* cast55 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* std56;
      __VERIFIER_nondet_memory(&std56, sizeof(std56));
      char* t57 = string12;
      struct std__basic_ostream_char__std__char_traits_char__* std58;
      __VERIFIER_nondet_memory(&std58, sizeof(std58));
      char* cast59 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* std60;
      __VERIFIER_nondet_memory(&std60, sizeof(std60));
      struct std__basic_ostream_char__std__char_traits_char__* std61;
      __VERIFIER_nondet_memory(&std61, sizeof(std61));
    }
  int c62 = 0;
  __retval1 = c62;
  int t63 = __retval1;
  return t63;
}

