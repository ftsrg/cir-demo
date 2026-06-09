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
struct std___Setprecision { int _M_n; };
struct std___Setw { int _M_n; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base10floatfieldE_const __attribute__((aligned(4))) = 260;
int _ZNSt8ios_base5fixedE_const __attribute__((aligned(4))) = 4;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[5] = "Year";
char _str_1[18] = "Amount on deposit";
extern double pow(double p0, double p1);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  double amount2;
  double principal3;
  double rate4;
  struct std___Setw agg_tmp05;
  struct std___Setprecision agg_tmp16;
  int c7 = 0;
  __retval1 = c7;
  double c8 = 0x1.f4p9;
  principal3 = c8;
  double c9 = 0x1.999999999999ap-5;
  rate4 = c9;
  char* cast10 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  int c12 = 21;
  struct std___Setw std13;
  __VERIFIER_nondet_memory(&std13, sizeof(std13));
  agg_tmp05 = std13;
  struct std___Setw t14 = agg_tmp05;
  struct std__basic_ostream_char__std__char_traits_char__* std15;
  __VERIFIER_nondet_memory(&std15, sizeof(std15));
  char* cast16 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std17;
  __VERIFIER_nondet_memory(&std17, sizeof(std17));
  struct std__basic_ostream_char__std__char_traits_char__* std18;
  __VERIFIER_nondet_memory(&std18, sizeof(std18));
  struct std__basic_ostream_char__std__char_traits_char__* std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
  int c20 = 2;
  struct std___Setprecision std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  agg_tmp16 = std21;
  struct std___Setprecision t22 = agg_tmp16;
  struct std__basic_ostream_char__std__char_traits_char__* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
    int year24;
    int c25 = 1;
    year24 = c25;
    while (1) {
      int t27 = year24;
      int c28 = 10;
      _Bool c29 = ((t27 <= c28)) ? 1 : 0;
      if (!c29) break;
        struct std___Setw agg_tmp230;
        struct std___Setw agg_tmp331;
        double t32 = principal3;
        double c33 = 0x1p0;
        double t34 = rate4;
        double b35 = c33 + t34;
        int t36 = year24;
        double cast37 = (double)t36;
        double r38 = pow(b35, cast37);
        double b39 = t32 * r38;
        amount2 = b39;
        int c40 = 4;
        struct std___Setw std41;
        __VERIFIER_nondet_memory(&std41, sizeof(std41));
        agg_tmp230 = std41;
        struct std___Setw t42 = agg_tmp230;
        struct std__basic_ostream_char__std__char_traits_char__* std43;
        __VERIFIER_nondet_memory(&std43, sizeof(std43));
        int t44 = year24;
        struct std__basic_ostream_char__std__char_traits_char__* std45;
        __VERIFIER_nondet_memory(&std45, sizeof(std45));
        int c46 = 21;
        struct std___Setw std47;
        __VERIFIER_nondet_memory(&std47, sizeof(std47));
        agg_tmp331 = std47;
        struct std___Setw t48 = agg_tmp331;
        struct std__basic_ostream_char__std__char_traits_char__* std49;
        __VERIFIER_nondet_memory(&std49, sizeof(std49));
        double t50 = amount2;
        struct std__basic_ostream_char__std__char_traits_char__* std51;
        __VERIFIER_nondet_memory(&std51, sizeof(std51));
        struct std__basic_ostream_char__std__char_traits_char__* std52;
        __VERIFIER_nondet_memory(&std52, sizeof(std52));
    for_step26: ;
      int t53 = year24;
      int u54 = t53 + 1;
      year24 = u54;
    }
  int c55 = 0;
  __retval1 = c55;
  int t56 = __retval1;
  return t56;
}

