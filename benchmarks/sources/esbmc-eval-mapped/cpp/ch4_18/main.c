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
char _str[27] = "Enter integer search key: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[24] = "Found value in element ";
char _str_2[16] = "Value not found";
int linearSearch(int* p0, int p1, int p2);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z12linearSearchPKiii
int linearSearch(int* v0, int v1, int v2) {
bb3:
  int* array4;
  int key5;
  int sizeOfArray6;
  int __retval7;
  array4 = v0;
  key5 = v1;
  sizeOfArray6 = v2;
    int j8;
    int c9 = 0;
    j8 = c9;
    while (1) {
      int t11 = j8;
      int t12 = sizeOfArray6;
      _Bool c13 = ((t11 < t12)) ? 1 : 0;
      if (!c13) break;
        int t14 = j8;
        long cast15 = (long)t14;
        int* t16 = array4;
        int* ptr17 = &(t16)[cast15];
        int t18 = *ptr17;
        int t19 = key5;
        _Bool c20 = ((t18 == t19)) ? 1 : 0;
        if (c20) {
          int t21 = j8;
          __retval7 = t21;
          int t22 = __retval7;
          int ret_val23 = t22;
          return ret_val23;
        }
    for_step10: ;
      int t24 = j8;
      int u25 = t24 + 1;
      j8 = u25;
    }
  int c26 = -1;
  __retval7 = c26;
  int t27 = __retval7;
  return t27;
}

// function: main
int main() {
bb28:
  int __retval29;
  int arraySize30;
  int a31[100];
  int searchKey32;
  int element33;
  int c34 = 0;
  __retval29 = c34;
  int c35 = 100;
  arraySize30 = c35;
    int i36;
    int c37 = 0;
    i36 = c37;
    while (1) {
      int t39 = i36;
      int t40 = arraySize30;
      _Bool c41 = ((t39 < t40)) ? 1 : 0;
      if (!c41) break;
      int c42 = 2;
      int t43 = i36;
      int b44 = c42 * t43;
      int t45 = i36;
      long cast46 = (long)t45;
      a31[cast46] = b44;
    for_step38: ;
      int t47 = i36;
      int u48 = t47 + 1;
      i36 = u48;
    }
  char* cast49 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std50;
  __VERIFIER_nondet_memory(&std50, sizeof(std50));
  struct std__basic_istream_char__std__char_traits_char__* std51;
  __VERIFIER_nondet_memory(&std51, sizeof(std51));
  int* cast52 = (int*)&(a31);
  int t53 = searchKey32;
  int t54 = arraySize30;
  int r55 = linearSearch(cast52, t53, t54);
  element33 = r55;
    int t56 = element33;
    int c57 = -1;
    _Bool c58 = ((t56 != c57)) ? 1 : 0;
    if (c58) {
      char* cast59 = (char*)&(_str_1);
      struct std__basic_ostream_char__std__char_traits_char__* std60;
      __VERIFIER_nondet_memory(&std60, sizeof(std60));
      int t61 = element33;
      struct std__basic_ostream_char__std__char_traits_char__* std62;
      __VERIFIER_nondet_memory(&std62, sizeof(std62));
      struct std__basic_ostream_char__std__char_traits_char__* std63;
      __VERIFIER_nondet_memory(&std63, sizeof(std63));
    } else {
      char* cast64 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* std65;
      __VERIFIER_nondet_memory(&std65, sizeof(std65));
      struct std__basic_ostream_char__std__char_traits_char__* std66;
      __VERIFIER_nondet_memory(&std66, sizeof(std66));
    }
  int c67 = 0;
  __retval29 = c67;
  int t68 = __retval29;
  return t68;
}

