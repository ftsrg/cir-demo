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

int __const_main_array3[2][3] = {{1, 2, 0}, {4, 0, 0}};
int __const_main_array2[2][3] = {{1, 2, 3}, {4, 5, 0}};
int __const_main_array1[2][3] = {{1, 2, 3}, {4, 5, 6}};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[29] = "Values in array1 by row are:";
char _str_1[29] = "Values in array2 by row are:";
char _str_2[29] = "Values in array3 by row are:";
void printArray_int_(int* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z10printArrayPA3_i
void printArray_int_(int* v0) {
bb1:
  int* a2;
  a2 = v0;
    int i3;
    int c4 = 0;
    i3 = c4;
    while (1) {
      int t6 = i3;
      int c7 = 2;
      _Bool c8 = ((t6 < c7)) ? 1 : 0;
      if (!c8) break;
          int j9;
          int c10 = 0;
          j9 = c10;
          while (1) {
            int t12 = j9;
            int c13 = 3;
            _Bool c14 = ((t12 < c13)) ? 1 : 0;
            if (!c14) break;
            int t15 = j9;
            long cast16 = (long)t15;
            int t17 = i3;
            long cast18 = (long)t17;
            int* t19 = a2;
            int* ptr20 = &(t19)[(cast18) * 3];
            int t21 = ptr20[cast16];
            struct std__basic_ostream_char__std__char_traits_char__* std22;
            __VERIFIER_nondet_memory(&std22, sizeof(std22));
            char c23 = 32;
            struct std__basic_ostream_char__std__char_traits_char__* std24;
            __VERIFIER_nondet_memory(&std24, sizeof(std24));
          for_step11: ;
            int t25 = j9;
            int u26 = t25 + 1;
            j9 = u26;
          }
        struct std__basic_ostream_char__std__char_traits_char__* std27;
        __VERIFIER_nondet_memory(&std27, sizeof(std27));
    for_step5: ;
      int t28 = i3;
      int u29 = t28 + 1;
      i3 = u29;
    }
  return;
}

// function: main
int main() {
bb30:
  int __retval31;
  int array132[2][3];
  int array233[2][3];
  int array334[2][3];
  int c35 = 0;
  __retval31 = c35;
  // array copy
  __builtin_memcpy(array132, __const_main_array1, (unsigned long)2 * sizeof(__const_main_array1[0]));
  // array copy
  __builtin_memcpy(array233, __const_main_array2, (unsigned long)2 * sizeof(__const_main_array2[0]));
  // array copy
  __builtin_memcpy(array334, __const_main_array3, (unsigned long)2 * sizeof(__const_main_array3[0]));
  char* cast36 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std37;
  __VERIFIER_nondet_memory(&std37, sizeof(std37));
  struct std__basic_ostream_char__std__char_traits_char__* std38;
  __VERIFIER_nondet_memory(&std38, sizeof(std38));
  int* cast39 = (int*)&(array132);
  printArray_int_(cast39);
  char* cast40 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std41;
  __VERIFIER_nondet_memory(&std41, sizeof(std41));
  struct std__basic_ostream_char__std__char_traits_char__* std42;
  __VERIFIER_nondet_memory(&std42, sizeof(std42));
  int* cast43 = (int*)&(array233);
  printArray_int_(cast43);
  char* cast44 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std45;
  __VERIFIER_nondet_memory(&std45, sizeof(std45));
  struct std__basic_ostream_char__std__char_traits_char__* std46;
  __VERIFIER_nondet_memory(&std46, sizeof(std46));
  int* cast47 = (int*)&(array334);
  printArray_int_(cast47);
  int c48 = 0;
  __retval31 = c48;
  int t49 = __retval31;
  return t49;
}

