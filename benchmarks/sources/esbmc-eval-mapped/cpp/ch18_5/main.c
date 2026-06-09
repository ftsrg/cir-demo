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
char _str[39] = "The result of combining the following\n";
char _str_1[37] = "using the bitwise AND operator & is\n";
char _str_2[40] = "\nThe result of combining the following\n";
char _str_3[46] = "using the bitwise inclusive OR operator | is\n";
char _str_4[46] = "using the bitwise exclusive OR operator ^ is\n";
char _str_5[26] = "\nThe one's complement of\n";
char _str_6[3] = "is";
char _str_7[4] = " = ";
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
  char* cast14 = (char*)&(_str_7);
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
  unsigned int number249;
  unsigned int mask50;
  unsigned int setBits51;
  int c52 = 0;
  __retval47 = c52;
  unsigned int c53 = -2115090941;
  number148 = c53;
  unsigned int c54 = 1;
  mask50 = c54;
  char* cast55 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std56;
  __VERIFIER_nondet_memory(&std56, sizeof(std56));
  unsigned int t57 = number148;
  displayBits(t57);
  unsigned int t58 = mask50;
  displayBits(t58);
  char* cast59 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std60;
  __VERIFIER_nondet_memory(&std60, sizeof(std60));
  unsigned int t61 = number148;
  unsigned int t62 = mask50;
  unsigned int b63 = t61 & t62;
  displayBits(b63);
  unsigned int c64 = 15;
  number148 = c64;
  unsigned int c65 = 241;
  setBits51 = c65;
  char* cast66 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std67;
  __VERIFIER_nondet_memory(&std67, sizeof(std67));
  unsigned int t68 = number148;
  displayBits(t68);
  unsigned int t69 = setBits51;
  displayBits(t69);
  char* cast70 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std71;
  __VERIFIER_nondet_memory(&std71, sizeof(std71));
  unsigned int t72 = number148;
  unsigned int t73 = setBits51;
  unsigned int b74 = t72 | t73;
  displayBits(b74);
  unsigned int c75 = 139;
  number148 = c75;
  unsigned int c76 = 199;
  number249 = c76;
  char* cast77 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std78;
  __VERIFIER_nondet_memory(&std78, sizeof(std78));
  unsigned int t79 = number148;
  displayBits(t79);
  unsigned int t80 = number249;
  displayBits(t80);
  char* cast81 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std82;
  __VERIFIER_nondet_memory(&std82, sizeof(std82));
  unsigned int t83 = number148;
  unsigned int t84 = number249;
  unsigned int b85 = t83 ^ t84;
  displayBits(b85);
  unsigned int c86 = 21845;
  number148 = c86;
  char* cast87 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std88;
  __VERIFIER_nondet_memory(&std88, sizeof(std88));
  unsigned int t89 = number148;
  displayBits(t89);
  char* cast90 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std91;
  __VERIFIER_nondet_memory(&std91, sizeof(std91));
  struct std__basic_ostream_char__std__char_traits_char__* std92;
  __VERIFIER_nondet_memory(&std92, sizeof(std92));
  unsigned int t93 = number148;
  unsigned int u94 = ~t93;
  displayBits(u94);
  int c95 = 0;
  __retval47 = c95;
  int t96 = __retval47;
  return t96;
}

