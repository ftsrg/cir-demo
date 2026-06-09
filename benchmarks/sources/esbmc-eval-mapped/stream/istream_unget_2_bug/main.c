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
char _str_1[26] = "!((int)cin.gcount() == 0)";
char _str_2[114] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stream/istream_unget_2_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[25] = "You have entered number ";
char _str_4[24] = " You have entered word ";
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
    char t10 = c2;
    int cast11 = (int)t10;
    int c12 = 48;
    _Bool c13 = ((cast11 >= c12)) ? 1 : 0;
    _Bool ternary14;
    if (c13) {
      char t15 = c2;
      int cast16 = (int)t15;
      int c17 = 57;
      _Bool c18 = ((cast16 <= c17)) ? 1 : 0;
      ternary14 = (_Bool)c18;
    } else {
      _Bool c19 = 0;
      ternary14 = (_Bool)c19;
    }
    if (ternary14) {
      struct std__basic_istream_char__std__char_traits_char__* std20;
      __VERIFIER_nondet_memory(&std20, sizeof(std20));
      long std21 = __VERIFIER_nondet_long();
      int cast22 = (int)std21;
      int c23 = 0;
      _Bool c24 = ((cast22 == c23)) ? 1 : 0;
      _Bool u25 = !c24;
      if (u25) {
      } else {
        char* cast26 = (char*)&(_str_1);
        char* c27 = _str_2;
        unsigned int c28 = 25;
        char* cast29 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast26, c27, c28, cast29);
      }
      struct std__basic_istream_char__std__char_traits_char__* std30;
      __VERIFIER_nondet_memory(&std30, sizeof(std30));
      char* cast31 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* std32;
      __VERIFIER_nondet_memory(&std32, sizeof(std32));
      int t33 = n3;
      struct std__basic_ostream_char__std__char_traits_char__* std34;
      __VERIFIER_nondet_memory(&std34, sizeof(std34));
      struct std__basic_ostream_char__std__char_traits_char__* std35;
      __VERIFIER_nondet_memory(&std35, sizeof(std35));
    } else {
      struct std__basic_istream_char__std__char_traits_char__* std36;
      __VERIFIER_nondet_memory(&std36, sizeof(std36));
      long std37 = __VERIFIER_nondet_long();
      int cast38 = (int)std37;
      int c39 = 0;
      _Bool c40 = ((cast38 == c39)) ? 1 : 0;
      _Bool u41 = !c40;
      if (u41) {
      } else {
        char* cast42 = (char*)&(_str_1);
        char* c43 = _str_2;
        unsigned int c44 = 32;
        char* cast45 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast42, c43, c44, cast45);
      }
      struct std__basic_istream_char__std__char_traits_char__* std46;
      __VERIFIER_nondet_memory(&std46, sizeof(std46));
      char* cast47 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* std48;
      __VERIFIER_nondet_memory(&std48, sizeof(std48));
      char* cast49 = (char*)&(str4);
      struct std__basic_ostream_char__std__char_traits_char__* std50;
      __VERIFIER_nondet_memory(&std50, sizeof(std50));
      struct std__basic_ostream_char__std__char_traits_char__* std51;
      __VERIFIER_nondet_memory(&std51, sizeof(std51));
    }
  int c52 = 0;
  __retval1 = c52;
  int t53 = __retval1;
  return t53;
}

