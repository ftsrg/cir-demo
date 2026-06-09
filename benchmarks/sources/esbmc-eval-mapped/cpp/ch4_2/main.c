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

int __const_main_a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[29] = "The values in the array are:";
char _str_1[3] = "  ";
void someFunction(int* p0, int p1, int p2);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z12someFunctionPiii
void someFunction(int* v0, int v1, int v2) {
bb3:
  int* b4;
  int current5;
  int size6;
  b4 = v0;
  current5 = v1;
  size6 = v2;
    int t7 = current5;
    int t8 = size6;
    _Bool c9 = ((t7 < t8)) ? 1 : 0;
    if (c9) {
      int* t10 = b4;
      int t11 = current5;
      int c12 = 1;
      int b13 = t11 + c12;
      int t14 = size6;
      someFunction(t10, b13, t14);
      int t15 = current5;
      long cast16 = (long)t15;
      int* t17 = b4;
      int* ptr18 = &(t17)[cast16];
      int t19 = *ptr18;
      struct std__basic_ostream_char__std__char_traits_char__* std20;
      __VERIFIER_nondet_memory(&std20, sizeof(std20));
      char* cast21 = (char*)&(_str_1);
      struct std__basic_ostream_char__std__char_traits_char__* std22;
      __VERIFIER_nondet_memory(&std22, sizeof(std22));
    }
  return;
}

// function: main
int main() {
bb23:
  int __retval24;
  int arraySize25;
  int a26[10];
  int c27 = 0;
  __retval24 = c27;
  int c28 = 10;
  arraySize25 = c28;
  // array copy
  __builtin_memcpy(a26, __const_main_a, (unsigned long)10 * sizeof(__const_main_a[0]));
  char* cast29 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std30;
  __VERIFIER_nondet_memory(&std30, sizeof(std30));
  struct std__basic_ostream_char__std__char_traits_char__* std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
  int* cast32 = (int*)&(a26);
  int c33 = 0;
  int t34 = arraySize25;
  someFunction(cast32, c33, t34);
  struct std__basic_ostream_char__std__char_traits_char__* std35;
  __VERIFIER_nondet_memory(&std35, sizeof(std35));
  int c36 = 0;
  __retval24 = c36;
  int t37 = __retval24;
  return t37;
}

