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
char _str[19] = "Enter an integer: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[15] = "The result is ";
_Bool mystery(unsigned int p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z7mysteryj
_Bool mystery(unsigned int v0) {
bb1:
  unsigned int bits2;
  _Bool __retval3;
  int SHIFT4;
  unsigned int MASK5;
  unsigned int total6;
  bits2 = v0;
  int c7 = 31;
  SHIFT4 = c7;
  unsigned int c8 = -2147483648;
  MASK5 = c8;
  unsigned int c9 = 0;
  total6 = c9;
    int i10;
    int c11 = 0;
    i10 = c11;
    while (1) {
      int t13 = i10;
      int t14 = SHIFT4;
      int c15 = 1;
      int b16 = t14 + c15;
      _Bool c17 = ((t13 < b16)) ? 1 : 0;
      if (!c17) break;
        unsigned int t18 = bits2;
        unsigned int t19 = MASK5;
        unsigned int b20 = t18 & t19;
        unsigned int t21 = MASK5;
        _Bool c22 = ((b20 == t21)) ? 1 : 0;
        if (c22) {
          unsigned int t23 = total6;
          unsigned int u24 = t23 + 1;
          total6 = u24;
        }
    for_step12: ;
      int t25 = i10;
      int u26 = t25 + 1;
      i10 = u26;
      int c27 = 1;
      unsigned int t28 = bits2;
      unsigned int s29 = t28 << c27;
      bits2 = s29;
    }
  unsigned int t30 = total6;
  unsigned int c31 = 2;
  unsigned int b32 = t30 % c31;
  _Bool cast33 = (_Bool)b32;
  _Bool u34 = !cast33;
  __retval3 = u34;
  _Bool t35 = __retval3;
  return t35;
}

// function: main
int main() {
bb36:
  int __retval37;
  unsigned int x38;
  int c39 = 0;
  __retval37 = c39;
  char* cast40 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std41;
  __VERIFIER_nondet_memory(&std41, sizeof(std41));
  struct std__basic_istream_char__std__char_traits_char__* std42;
  __VERIFIER_nondet_memory(&std42, sizeof(std42));
  struct std__basic_ostream_char__std__char_traits_char__* std43;
  __VERIFIER_nondet_memory(&std43, sizeof(std43));
  char* cast44 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std45;
  __VERIFIER_nondet_memory(&std45, sizeof(std45));
  unsigned int t46 = x38;
  _Bool r47 = mystery(t46);
  struct std__basic_ostream_char__std__char_traits_char__* std48;
  __VERIFIER_nondet_memory(&std48, sizeof(std48));
  struct std__basic_ostream_char__std__char_traits_char__* std49;
  __VERIFIER_nondet_memory(&std49, sizeof(std49));
  int c50 = 0;
  __retval37 = c50;
  int t51 = __retval37;
  return t51;
}

