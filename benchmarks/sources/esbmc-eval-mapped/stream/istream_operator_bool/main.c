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
int _ZNSt8ios_base9boolalphaE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[21] = "Enter a bool value: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[47] = "cin.flags() & ios::boolalpha == ios::boolalpha";
char _str_2[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stream/istream_operator_bool/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[19] = "You have entered: ";
char _str_4[27] = "Enter another bool value: ";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern int __VERIFIER_nondet_int(void);
// function: main
int main() {
bb0:
  int __retval1;
  _Bool n2;
  int c3 = 0;
  __retval1 = c3;
  char* cast4 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std5;
  __VERIFIER_nondet_memory(&std5, sizeof(std5));
  struct std__basic_istream_char__std__char_traits_char__* std6;
  __VERIFIER_nondet_memory(&std6, sizeof(std6));
  struct std__basic_istream_char__std__char_traits_char__* std7;
  __VERIFIER_nondet_memory(&std7, sizeof(std7));
  void** v8 = (void**)&_ZSt3cin;
  void* v9 = *((void**)v8);
  unsigned char* cast10 = (unsigned char*)v9;
  long c11 = -24;
  unsigned char* ptr12 = &(cast10)[c11];
  long* cast13 = (long*)ptr12;
  long t14 = *cast13;
  unsigned char* cast15 = (unsigned char*)&_ZSt3cin;
  unsigned char* ptr16 = &(cast15)[t14];
  struct std__basic_istream_char__std__char_traits_char__* cast17 = (struct std__basic_istream_char__std__char_traits_char__*)ptr16;
  struct std__ios_base* cast18 = (struct std__ios_base*)cast17;
  int std19 = __VERIFIER_nondet_int();
  int t20 = _ZNSt8ios_base9boolalphaE_const;
  int t21 = _ZNSt8ios_base9boolalphaE_const;
  _Bool c22 = ((t20 == t21)) ? 1 : 0;
  int cast23 = (int)c22;
  int b24 = std19 & cast23;
  _Bool cast25 = (_Bool)b24;
  if (cast25) {
  } else {
    char* cast26 = (char*)&(_str_1);
    char* c27 = _str_2;
    unsigned int c28 = 18;
    char* cast29 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast26, c27, c28, cast29);
  }
  char* cast30 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
  _Bool t32 = n2;
  struct std__basic_ostream_char__std__char_traits_char__* std33;
  __VERIFIER_nondet_memory(&std33, sizeof(std33));
  struct std__basic_ostream_char__std__char_traits_char__* std34;
  __VERIFIER_nondet_memory(&std34, sizeof(std34));
  char* cast35 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std36;
  __VERIFIER_nondet_memory(&std36, sizeof(std36));
  struct std__basic_istream_char__std__char_traits_char__* std37;
  __VERIFIER_nondet_memory(&std37, sizeof(std37));
  struct std__basic_istream_char__std__char_traits_char__* std38;
  __VERIFIER_nondet_memory(&std38, sizeof(std38));
  void** v39 = (void**)&_ZSt3cin;
  void* v40 = *((void**)v39);
  unsigned char* cast41 = (unsigned char*)v40;
  long c42 = -24;
  unsigned char* ptr43 = &(cast41)[c42];
  long* cast44 = (long*)ptr43;
  long t45 = *cast44;
  unsigned char* cast46 = (unsigned char*)&_ZSt3cin;
  unsigned char* ptr47 = &(cast46)[t45];
  struct std__basic_istream_char__std__char_traits_char__* cast48 = (struct std__basic_istream_char__std__char_traits_char__*)ptr47;
  struct std__ios_base* cast49 = (struct std__ios_base*)cast48;
  int std50 = __VERIFIER_nondet_int();
  int t51 = _ZNSt8ios_base9boolalphaE_const;
  int t52 = _ZNSt8ios_base9boolalphaE_const;
  _Bool c53 = ((t51 == t52)) ? 1 : 0;
  int cast54 = (int)c53;
  int b55 = std50 & cast54;
  _Bool cast56 = (_Bool)b55;
  if (cast56) {
  } else {
    char* cast57 = (char*)&(_str_1);
    char* c58 = _str_2;
    unsigned int c59 = 23;
    char* cast60 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast57, c58, c59, cast60);
  }
  char* cast61 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std62;
  __VERIFIER_nondet_memory(&std62, sizeof(std62));
  _Bool t63 = n2;
  struct std__basic_ostream_char__std__char_traits_char__* std64;
  __VERIFIER_nondet_memory(&std64, sizeof(std64));
  struct std__basic_ostream_char__std__char_traits_char__* std65;
  __VERIFIER_nondet_memory(&std65, sizeof(std65));
  int c66 = 0;
  __retval1 = c66;
  int t67 = __retval1;
  return t67;
}

