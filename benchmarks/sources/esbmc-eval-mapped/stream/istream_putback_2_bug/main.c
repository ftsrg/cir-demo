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
char _str[27] = "Enter a number or a word: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[23] = "(int)cin.gcount() == 1";
char _str_2[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stream/istream_putback_2_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[26] = "!((int)cin.gcount() == 0)";
char _str_4[25] = "You have entered number ";
char _str_5[24] = " You have entered word ";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern int __VERIFIER_nondet_int(void);
extern long __VERIFIER_nondet_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  char c2;
  int n3;
  char str4[256];
  int c5 = 0;
  __retval1 = c5;
  char* cast6 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std7;
  __VERIFIER_nondet_memory(&std7, sizeof(std7));
  int std8 = __VERIFIER_nondet_int();
  char cast9 = (char)std8;
  c2 = cast9;
  long std10 = __VERIFIER_nondet_long();
  int cast11 = (int)std10;
  int c12 = 1;
  _Bool c13 = ((cast11 == c12)) ? 1 : 0;
  if (c13) {
  } else {
    char* cast14 = (char*)&(_str_1);
    char* c15 = _str_2;
    unsigned int c16 = 21;
    char* cast17 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast14, c15, c16, cast17);
  }
    char t18 = c2;
    int cast19 = (int)t18;
    int c20 = 48;
    _Bool c21 = ((cast19 >= c20)) ? 1 : 0;
    _Bool ternary22;
    if (c21) {
      char t23 = c2;
      int cast24 = (int)t23;
      int c25 = 57;
      _Bool c26 = ((cast24 <= c25)) ? 1 : 0;
      ternary22 = (_Bool)c26;
    } else {
      _Bool c27 = 0;
      ternary22 = (_Bool)c27;
    }
    if (ternary22) {
      char t28 = c2;
      struct std__basic_istream_char__std__char_traits_char__* std29;
      __VERIFIER_nondet_memory(&std29, sizeof(std29));
      long std30 = __VERIFIER_nondet_long();
      int cast31 = (int)std30;
      int c32 = 0;
      _Bool c33 = ((cast31 == c32)) ? 1 : 0;
      _Bool u34 = !c33;
      if (u34) {
      } else {
        char* cast35 = (char*)&(_str_3);
        char* c36 = _str_2;
        unsigned int c37 = 25;
        char* cast38 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast35, c36, c37, cast38);
      }
      struct std__basic_istream_char__std__char_traits_char__* std39;
      __VERIFIER_nondet_memory(&std39, sizeof(std39));
      char* cast40 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* std41;
      __VERIFIER_nondet_memory(&std41, sizeof(std41));
      int t42 = n3;
      struct std__basic_ostream_char__std__char_traits_char__* std43;
      __VERIFIER_nondet_memory(&std43, sizeof(std43));
      struct std__basic_ostream_char__std__char_traits_char__* std44;
      __VERIFIER_nondet_memory(&std44, sizeof(std44));
    } else {
      char t45 = c2;
      struct std__basic_istream_char__std__char_traits_char__* std46;
      __VERIFIER_nondet_memory(&std46, sizeof(std46));
      long std47 = __VERIFIER_nondet_long();
      int cast48 = (int)std47;
      int c49 = 0;
      _Bool c50 = ((cast48 == c49)) ? 1 : 0;
      _Bool u51 = !c50;
      if (u51) {
      } else {
        char* cast52 = (char*)&(_str_3);
        char* c53 = _str_2;
        unsigned int c54 = 32;
        char* cast55 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast52, c53, c54, cast55);
      }
      struct std__basic_istream_char__std__char_traits_char__* std56;
      __VERIFIER_nondet_memory(&std56, sizeof(std56));
      char* cast57 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* std58;
      __VERIFIER_nondet_memory(&std58, sizeof(std58));
      char* cast59 = (char*)&(str4);
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

