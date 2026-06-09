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
struct std__basic_istream_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[20] = "\nInterrupt signal (";
char _str_1[13] = ") received.\n";
char _str_2[46] = "Do you wish to continue (1 = yes or 2 = no)? ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_3[22] = "(1 = yes or 2 = no)? ";
extern void* signal(int p0, void* p1);
extern void exit(int p0);
void signalHandler(int p0);
extern void srand(unsigned int p0);
extern long time(long* p0);
extern int rand();
extern int raise(int p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z13signalHandleri
void signalHandler(int v0) {
bb1:
  int signalValue2;
  int response3;
  signalValue2 = v0;
  char* cast4 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std5;
  __VERIFIER_nondet_memory(&std5, sizeof(std5));
  int t6 = signalValue2;
  struct std__basic_ostream_char__std__char_traits_char__* std7;
  __VERIFIER_nondet_memory(&std7, sizeof(std7));
  char* cast8 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std9;
  __VERIFIER_nondet_memory(&std9, sizeof(std9));
  char* cast10 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  struct std__basic_istream_char__std__char_traits_char__* std12;
  __VERIFIER_nondet_memory(&std12, sizeof(std12));
    while (1) {
      int t13 = response3;
      int c14 = 1;
      _Bool c15 = ((t13 != c14)) ? 1 : 0;
      _Bool ternary16;
      if (c15) {
        int t17 = response3;
        int c18 = 2;
        _Bool c19 = ((t17 != c18)) ? 1 : 0;
        ternary16 = (_Bool)c19;
      } else {
        _Bool c20 = 0;
        ternary16 = (_Bool)c20;
      }
      if (!ternary16) break;
        char* cast21 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std22;
        __VERIFIER_nondet_memory(&std22, sizeof(std22));
        struct std__basic_istream_char__std__char_traits_char__* std23;
        __VERIFIER_nondet_memory(&std23, sizeof(std23));
    }
    int t24 = response3;
    int c25 = 1;
    _Bool c26 = ((t24 != c25)) ? 1 : 0;
    if (c26) {
      int c27 = 0;
      exit(c27);
    }
  int c28 = 2;
  void* r29 = signal(c28, &signalHandler);
  int c30 = 2;
  struct std__basic_ostream_char__std__char_traits_char__* std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
  struct std__basic_ostream_char__std__char_traits_char__* std32;
  __VERIFIER_nondet_memory(&std32, sizeof(std32));
  return;
}

// function: main
int main() {
bb33:
  int __retval34;
  int c35 = 0;
  __retval34 = c35;
  int c36 = 2;
  void* r37 = signal(c36, &signalHandler);
  long* c38 = ((void*)0);
  long r39 = time(c38);
  unsigned int cast40 = (unsigned int)r39;
  srand(cast40);
    int i41;
    int c42 = 1;
    i41 = c42;
    while (1) {
      int t44 = i41;
      int c45 = 100;
      _Bool c46 = ((t44 <= c45)) ? 1 : 0;
      if (!c46) break;
        int x47;
        struct std___Setw agg_tmp048;
        int c49 = 1;
        int r50 = rand();
        int c51 = 50;
        int b52 = r50 % c51;
        int b53 = c49 + b52;
        x47 = b53;
          int t54 = x47;
          int c55 = 25;
          _Bool c56 = ((t54 == c55)) ? 1 : 0;
          if (c56) {
            int c57 = 2;
            int r58 = raise(c57);
          }
        int c59 = 4;
        struct std___Setw std60;
        __VERIFIER_nondet_memory(&std60, sizeof(std60));
        agg_tmp048 = std60;
        struct std___Setw t61 = agg_tmp048;
        struct std__basic_ostream_char__std__char_traits_char__* std62;
        __VERIFIER_nondet_memory(&std62, sizeof(std62));
        int t63 = i41;
        struct std__basic_ostream_char__std__char_traits_char__* std64;
        __VERIFIER_nondet_memory(&std64, sizeof(std64));
          int t65 = i41;
          int c66 = 10;
          int b67 = t65 % c66;
          int c68 = 0;
          _Bool c69 = ((b67 == c68)) ? 1 : 0;
          if (c69) {
            struct std__basic_ostream_char__std__char_traits_char__* std70;
            __VERIFIER_nondet_memory(&std70, sizeof(std70));
          }
    for_step43: ;
      int t71 = i41;
      int u72 = t71 + 1;
      i41 = u72;
    }
  int c73 = 0;
  __retval34 = c73;
  int t74 = __retval34;
  return t74;
}

