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
struct std___Setw { int _M_n; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[29] = "The result of left shifting\n";
char _str_1[32] = "8 bit positions using the left ";
char _str_2[19] = "shift operator is\n";
char _str_3[31] = "\nThe result of right shifting\n";
char _str_4[33] = "8 bit positions using the right ";
char _str_5[4] = " = ";
void displayBits(unsigned int p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z11displayBitsj
void displayBits(unsigned int v0) {
bb1:
  unsigned int value2;
  int SHIFT3;
  unsigned int MASK4;
  struct std___Setw agg_tmp05;
  value2 = v0;
  int c6 = 31;
  SHIFT3 = c6;
  unsigned int c7 = -2147483648;
  MASK4 = c7;
  int c8 = 10;
  struct std___Setw std9;
  __VERIFIER_nondet_memory(&std9, sizeof(std9));
  agg_tmp05 = std9;
  struct std___Setw t10 = agg_tmp05;
  struct std__basic_ostream_char__std__char_traits_char__* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  unsigned int t12 = value2;
  struct std__basic_ostream_char__std__char_traits_char__* std13;
  __VERIFIER_nondet_memory(&std13, sizeof(std13));
  char* cast14 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std15;
  __VERIFIER_nondet_memory(&std15, sizeof(std15));
    unsigned int i16;
    unsigned int c17 = 1;
    i16 = c17;
    while (1) {
      unsigned int t19 = i16;
      int t20 = SHIFT3;
      int c21 = 1;
      int b22 = t20 + c21;
      unsigned int cast23 = (unsigned int)b22;
      _Bool c24 = ((t19 <= cast23)) ? 1 : 0;
      if (!c24) break;
        unsigned int t25 = value2;
        unsigned int t26 = MASK4;
        unsigned int b27 = t25 & t26;
        _Bool cast28 = (_Bool)b27;
        char c29 = 49;
        char c30 = 48;
        char sel31 = cast28 ? c29 : c30;
        struct std__basic_ostream_char__std__char_traits_char__* std32;
        __VERIFIER_nondet_memory(&std32, sizeof(std32));
        int c33 = 1;
        unsigned int t34 = value2;
        unsigned int s35 = t34 << c33;
        value2 = s35;
          unsigned int t36 = i16;
          unsigned int c37 = 8;
          unsigned int b38 = t36 % c37;
          unsigned int c39 = 0;
          _Bool c40 = ((b38 == c39)) ? 1 : 0;
          if (c40) {
            char c41 = 32;
            struct std__basic_ostream_char__std__char_traits_char__* std42;
            __VERIFIER_nondet_memory(&std42, sizeof(std42));
          }
    for_step18: ;
      unsigned int t43 = i16;
      unsigned int u44 = t43 + 1;
      i16 = u44;
    }
  struct std__basic_ostream_char__std__char_traits_char__* std45;
  __VERIFIER_nondet_memory(&std45, sizeof(std45));
  return;
}

// function: main
int main() {
bb46:
  int __retval47;
  unsigned int number148;
  int c49 = 0;
  __retval47 = c49;
  unsigned int c50 = 960;
  number148 = c50;
  char* cast51 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std52;
  __VERIFIER_nondet_memory(&std52, sizeof(std52));
  unsigned int t53 = number148;
  displayBits(t53);
  char* cast54 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std55;
  __VERIFIER_nondet_memory(&std55, sizeof(std55));
  char* cast56 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std57;
  __VERIFIER_nondet_memory(&std57, sizeof(std57));
  unsigned int t58 = number148;
  int c59 = 8;
  unsigned int s60 = t58 << c59;
  displayBits(s60);
  char* cast61 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std62;
  __VERIFIER_nondet_memory(&std62, sizeof(std62));
  unsigned int t63 = number148;
  displayBits(t63);
  char* cast64 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std65;
  __VERIFIER_nondet_memory(&std65, sizeof(std65));
  char* cast66 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std67;
  __VERIFIER_nondet_memory(&std67, sizeof(std67));
  unsigned int t68 = number148;
  int c69 = 8;
  unsigned int s70 = t68 >> c69;
  displayBits(s70);
  int c71 = 0;
  __retval47 = c71;
  int t72 = __retval47;
  return t72;
}

