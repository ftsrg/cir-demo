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

char __const_main_cset[11] = "1234567890";
char __const_main_strtext[6] = "129th";
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[5] = "i==3";
char _str_1[107] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/cstring8_strcpn/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[33] = "The length of initial number is ";
extern unsigned long strspn(char* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int i2;
  char strtext3[6];
  char cset4[11];
  int c5 = 0;
  __retval1 = c5;
  // array copy
  __builtin_memcpy(strtext3, __const_main_strtext, (unsigned long)6 * sizeof(__const_main_strtext[0]));
  // array copy
  __builtin_memcpy(cset4, __const_main_cset, (unsigned long)11 * sizeof(__const_main_cset[0]));
  char* cast6 = (char*)&(strtext3);
  char* cast7 = (char*)&(cset4);
  unsigned long r8 = strspn(cast6, cast7);
  int cast9 = (int)r8;
  i2 = cast9;
  int t10 = i2;
  int c11 = 3;
  _Bool c12 = ((t10 == c11)) ? 1 : 0;
  if (c12) {
  } else {
    char* cast13 = (char*)&(_str);
    char* c14 = _str_1;
    unsigned int c15 = 20;
    char* cast16 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast13, c14, c15, cast16);
  }
  char* cast17 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std18;
  __VERIFIER_nondet_memory(&std18, sizeof(std18));
  int t19 = i2;
  struct std__basic_ostream_char__std__char_traits_char__* std20;
  __VERIFIER_nondet_memory(&std20, sizeof(std20));
  struct std__basic_ostream_char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  int c22 = 0;
  __retval1 = c22;
  int t23 = __retval1;
  return t23;
}

