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
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[11] = "max(1,2)==";
char _str_1[14] = "max(1,2) == 2";
char _str_2[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm60/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[11] = "max(2,1)==";
char _str_4[15] = "max('a','z')==";
char _str_5[17] = "max(3.14,2.73)==";
double max_2(double p0, double p1);
int max_3(int p0, int p1);
char max(char p0, char p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z3maxdd
double max_2(double v0, double v1) {
bb2:
  double left3;
  double right4;
  double __retval5;
  left3 = v0;
  right4 = v1;
    double t6 = left3;
    double t7 = right4;
    _Bool c8 = ((t6 > t7)) ? 1 : 0;
    if (c8) {
      double t9 = left3;
      __retval5 = t9;
      double t10 = __retval5;
      return t10;
    } else {
      double t11 = right4;
      __retval5 = t11;
      double t12 = __retval5;
      return t12;
    }
  abort();
}

// function: _Z3maxii
int max_3(int v13, int v14) {
bb15:
  int left16;
  int right17;
  int __retval18;
  left16 = v13;
  right17 = v14;
    int t19 = left16;
    int t20 = right17;
    _Bool c21 = ((t19 > t20)) ? 1 : 0;
    if (c21) {
      int t22 = left16;
      __retval18 = t22;
      int t23 = __retval18;
      return t23;
    } else {
      int t24 = right17;
      __retval18 = t24;
      int t25 = __retval18;
      return t25;
    }
  abort();
}

// function: _Z3maxcc
char max(char v26, char v27) {
bb28:
  char left29;
  char right30;
  char __retval31;
  left29 = v26;
  right30 = v27;
    char t32 = left29;
    int cast33 = (int)t32;
    char t34 = right30;
    int cast35 = (int)t34;
    _Bool c36 = ((cast33 > cast35)) ? 1 : 0;
    if (c36) {
      char t37 = left29;
      __retval31 = t37;
      char t38 = __retval31;
      return t38;
    } else {
      char t39 = right30;
      __retval31 = t39;
      char t40 = __retval31;
      return t40;
    }
  abort();
}

// function: main
int main() {
bb41:
  int __retval42;
  int c43 = 0;
  __retval42 = c43;
  char* cast44 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std45;
  __VERIFIER_nondet_memory(&std45, sizeof(std45));
  int c46 = 1;
  int c47 = 2;
  int r48 = max_3(c46, c47);
  struct std__basic_ostream_char__std__char_traits_char__* std49;
  __VERIFIER_nondet_memory(&std49, sizeof(std49));
  struct std__basic_ostream_char__std__char_traits_char__* std50;
  __VERIFIER_nondet_memory(&std50, sizeof(std50));
  int c51 = 1;
  int c52 = 2;
  int r53 = max_3(c51, c52);
  int c54 = 2;
  _Bool c55 = ((r53 == c54)) ? 1 : 0;
  if (c55) {
  } else {
    char* cast56 = (char*)&(_str_1);
    char* c57 = _str_2;
    unsigned int c58 = 44;
    char* cast59 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast56, c57, c58, cast59);
  }
  char* cast60 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std61;
  __VERIFIER_nondet_memory(&std61, sizeof(std61));
  int c62 = 2;
  int c63 = 1;
  int r64 = max_3(c62, c63);
  struct std__basic_ostream_char__std__char_traits_char__* std65;
  __VERIFIER_nondet_memory(&std65, sizeof(std65));
  struct std__basic_ostream_char__std__char_traits_char__* std66;
  __VERIFIER_nondet_memory(&std66, sizeof(std66));
  char* cast67 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std68;
  __VERIFIER_nondet_memory(&std68, sizeof(std68));
  char c69 = 97;
  char c70 = 122;
  char r71 = max(c69, c70);
  struct std__basic_ostream_char__std__char_traits_char__* std72;
  __VERIFIER_nondet_memory(&std72, sizeof(std72));
  struct std__basic_ostream_char__std__char_traits_char__* std73;
  __VERIFIER_nondet_memory(&std73, sizeof(std73));
  char* cast74 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std75;
  __VERIFIER_nondet_memory(&std75, sizeof(std75));
  double c76 = 0x1.91eb851eb851fp1;
  double c77 = 0x1.5d70a3d70a3d7p1;
  double r78 = max_2(c76, c77);
  struct std__basic_ostream_char__std__char_traits_char__* std79;
  __VERIFIER_nondet_memory(&std79, sizeof(std79));
  struct std__basic_ostream_char__std__char_traits_char__* std80;
  __VERIFIER_nondet_memory(&std80, sizeof(std80));
  int c81 = 0;
  __retval42 = c81;
  int t82 = __retval42;
  return t82;
}

