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
char _str[11] = "min(1,2)==";
char _str_1[14] = "min(1,2) == 1";
char _str_2[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm59/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[11] = "min(2,1)==";
char _str_4[15] = "min('a','z')==";
char _str_5[17] = "min(3.14,2.72)==";
int min_3(int p0, int p1);
int min_2(double p0, double p1);
char min(char p0, char p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z3minii
int min_3(int v0, int v1) {
bb2:
  int left3;
  int right4;
  int __retval5;
  left3 = v0;
  right4 = v1;
    int t6 = left3;
    int t7 = right4;
    _Bool c8 = ((t6 < t7)) ? 1 : 0;
    if (c8) {
      int t9 = left3;
      __retval5 = t9;
      int t10 = __retval5;
      return t10;
    } else {
      int t11 = right4;
      __retval5 = t11;
      int t12 = __retval5;
      return t12;
    }
  abort();
}

// function: _Z3mindd
int min_2(double v13, double v14) {
bb15:
  double left16;
  double right17;
  int __retval18;
  left16 = v13;
  right17 = v14;
    double t19 = left16;
    double t20 = right17;
    _Bool c21 = ((t19 < t20)) ? 1 : 0;
    if (c21) {
      double t22 = left16;
      int cast23 = (int)t22;
      __retval18 = cast23;
      int t24 = __retval18;
      return t24;
    } else {
      double t25 = right17;
      int cast26 = (int)t25;
      __retval18 = cast26;
      int t27 = __retval18;
      return t27;
    }
  abort();
}

// function: _Z3mincc
char min(char v28, char v29) {
bb30:
  char left31;
  char right32;
  char __retval33;
  left31 = v28;
  right32 = v29;
    char t34 = left31;
    int cast35 = (int)t34;
    char t36 = right32;
    int cast37 = (int)t36;
    _Bool c38 = ((cast35 < cast37)) ? 1 : 0;
    if (c38) {
      char t39 = left31;
      __retval33 = t39;
      char t40 = __retval33;
      return t40;
    } else {
      char t41 = right32;
      __retval33 = t41;
      char t42 = __retval33;
      return t42;
    }
  abort();
}

// function: main
int main() {
bb43:
  int __retval44;
  int c45 = 0;
  __retval44 = c45;
  char* cast46 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std47;
  __VERIFIER_nondet_memory(&std47, sizeof(std47));
  int c48 = 1;
  int c49 = 2;
  int r50 = min_3(c48, c49);
  struct std__basic_ostream_char__std__char_traits_char__* std51;
  __VERIFIER_nondet_memory(&std51, sizeof(std51));
  struct std__basic_ostream_char__std__char_traits_char__* std52;
  __VERIFIER_nondet_memory(&std52, sizeof(std52));
  int c53 = 1;
  int c54 = 2;
  int r55 = min_3(c53, c54);
  int c56 = 1;
  _Bool c57 = ((r55 == c56)) ? 1 : 0;
  if (c57) {
  } else {
    char* cast58 = (char*)&(_str_1);
    char* c59 = _str_2;
    unsigned int c60 = 45;
    char* cast61 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast58, c59, c60, cast61);
  }
  char* cast62 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std63;
  __VERIFIER_nondet_memory(&std63, sizeof(std63));
  int c64 = 2;
  int c65 = 1;
  int r66 = min_3(c64, c65);
  struct std__basic_ostream_char__std__char_traits_char__* std67;
  __VERIFIER_nondet_memory(&std67, sizeof(std67));
  struct std__basic_ostream_char__std__char_traits_char__* std68;
  __VERIFIER_nondet_memory(&std68, sizeof(std68));
  char* cast69 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std70;
  __VERIFIER_nondet_memory(&std70, sizeof(std70));
  char c71 = 97;
  char c72 = 122;
  char r73 = min(c71, c72);
  struct std__basic_ostream_char__std__char_traits_char__* std74;
  __VERIFIER_nondet_memory(&std74, sizeof(std74));
  struct std__basic_ostream_char__std__char_traits_char__* std75;
  __VERIFIER_nondet_memory(&std75, sizeof(std75));
  char* cast76 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std77;
  __VERIFIER_nondet_memory(&std77, sizeof(std77));
  double c78 = 0x1.91eb851eb851fp1;
  double c79 = 0x1.5c28f5c28f5c3p1;
  int r80 = min_2(c78, c79);
  struct std__basic_ostream_char__std__char_traits_char__* std81;
  __VERIFIER_nondet_memory(&std81, sizeof(std81));
  struct std__basic_ostream_char__std__char_traits_char__* std82;
  __VERIFIER_nondet_memory(&std82, sizeof(std82));
  int c83 = 0;
  __retval44 = c83;
  int t84 = __retval44;
  return t84;
}

