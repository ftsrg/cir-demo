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

char __const_main_str1[14] = "Sample string";
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[16] = "copy successful";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[8] = "\nstr1: ";
char _str_2[8] = "\nstr2: ";
char _str_3[8] = "\nstr3: ";
char _str_4[21] = "strcmp(str1,str2)==0";
char _str_5[107] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/cstring1_strcpy/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_6[34] = "strcmp(str3,\"copy successful\")==0";
extern char* strcpy(char* p0, char* p1);
extern int strcmp(char* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  char str12[14];
  char str23[40];
  char str34[40];
  int c5 = 0;
  __retval1 = c5;
  // array copy
  __builtin_memcpy(str12, __const_main_str1, (unsigned long)14 * sizeof(__const_main_str1[0]));
  char* cast6 = (char*)&(str23);
  char* cast7 = (char*)&(str12);
  char* r8 = strcpy(cast6, cast7);
  char* cast9 = (char*)&(str34);
  char* cast10 = (char*)&(_str);
  char* r11 = strcpy(cast9, cast10);
  char* cast12 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std13;
  __VERIFIER_nondet_memory(&std13, sizeof(std13));
  char* cast14 = (char*)&(str12);
  struct std__basic_ostream_char__std__char_traits_char__* std15;
  __VERIFIER_nondet_memory(&std15, sizeof(std15));
  char* cast16 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std17;
  __VERIFIER_nondet_memory(&std17, sizeof(std17));
  char* cast18 = (char*)&(str23);
  struct std__basic_ostream_char__std__char_traits_char__* std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
  char* cast20 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  char* cast22 = (char*)&(str34);
  struct std__basic_ostream_char__std__char_traits_char__* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  struct std__basic_ostream_char__std__char_traits_char__* std24;
  __VERIFIER_nondet_memory(&std24, sizeof(std24));
  char* cast25 = (char*)&(str12);
  char* cast26 = (char*)&(str23);
  int r27 = strcmp(cast25, cast26);
  int c28 = 0;
  _Bool c29 = ((r27 == c28)) ? 1 : 0;
  if (c29) {
  } else {
    char* cast30 = (char*)&(_str_4);
    char* c31 = _str_5;
    unsigned int c32 = 21;
    char* cast33 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast30, c31, c32, cast33);
  }
  char* cast34 = (char*)&(str34);
  char* cast35 = (char*)&(_str);
  int r36 = strcmp(cast34, cast35);
  int c37 = 0;
  _Bool c38 = ((r36 == c37)) ? 1 : 0;
  if (c38) {
  } else {
    char* cast39 = (char*)&(_str_6);
    char* c40 = _str_5;
    unsigned int c41 = 22;
    char* cast42 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast39, c40, c41, cast42);
  }
  int c43 = 0;
  __retval1 = c43;
  int t44 = __retval1;
  return t44;
}

