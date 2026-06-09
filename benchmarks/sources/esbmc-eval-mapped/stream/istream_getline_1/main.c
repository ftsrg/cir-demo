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
char _str[18] = "Enter your name: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[51] = "(int)cin.gcount() >= 0 && (int)cin.gcount() <= 256";
char _str_2[112] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stream/istream_getline_1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[29] = "Enter your favourite movie: ";
char _str_4[23] = "'s favourite movie is ";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern long __VERIFIER_nondet_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  char name2[256];
  char title3[256];
  int c4 = 0;
  __retval1 = c4;
  char* cast5 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std6;
  __VERIFIER_nondet_memory(&std6, sizeof(std6));
  char* cast7 = (char*)&(name2);
  long c8 = 256;
  struct std__basic_istream_char__std__char_traits_char__* std9;
  __VERIFIER_nondet_memory(&std9, sizeof(std9));
  long std10 = __VERIFIER_nondet_long();
  int cast11 = (int)std10;
  int c12 = 0;
  _Bool c13 = ((cast11 >= c12)) ? 1 : 0;
  _Bool ternary14;
  if (c13) {
    long std15 = __VERIFIER_nondet_long();
    int cast16 = (int)std15;
    int c17 = 256;
    _Bool c18 = ((cast16 <= c17)) ? 1 : 0;
    ternary14 = (_Bool)c18;
  } else {
    _Bool c19 = 0;
    ternary14 = (_Bool)c19;
  }
  if (ternary14) {
  } else {
    char* cast20 = (char*)&(_str_1);
    char* c21 = _str_2;
    unsigned int c22 = 18;
    char* cast23 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast20, c21, c22, cast23);
  }
  char* cast24 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std25;
  __VERIFIER_nondet_memory(&std25, sizeof(std25));
  char* cast26 = (char*)&(title3);
  long c27 = 256;
  struct std__basic_istream_char__std__char_traits_char__* std28;
  __VERIFIER_nondet_memory(&std28, sizeof(std28));
  long std29 = __VERIFIER_nondet_long();
  int cast30 = (int)std29;
  int c31 = 0;
  _Bool c32 = ((cast30 >= c31)) ? 1 : 0;
  _Bool ternary33;
  if (c32) {
    long std34 = __VERIFIER_nondet_long();
    int cast35 = (int)std34;
    int c36 = 256;
    _Bool c37 = ((cast35 <= c36)) ? 1 : 0;
    ternary33 = (_Bool)c37;
  } else {
    _Bool c38 = 0;
    ternary33 = (_Bool)c38;
  }
  if (ternary33) {
  } else {
    char* cast39 = (char*)&(_str_1);
    char* c40 = _str_2;
    unsigned int c41 = 21;
    char* cast42 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast39, c40, c41, cast42);
  }
  char* cast43 = (char*)&(name2);
  struct std__basic_ostream_char__std__char_traits_char__* std44;
  __VERIFIER_nondet_memory(&std44, sizeof(std44));
  char* cast45 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std46;
  __VERIFIER_nondet_memory(&std46, sizeof(std46));
  char* cast47 = (char*)&(title3);
  struct std__basic_ostream_char__std__char_traits_char__* std48;
  __VERIFIER_nondet_memory(&std48, sizeof(std48));
  int c49 = 0;
  __retval1 = c49;
  int t50 = __retval1;
  return t50;
}

