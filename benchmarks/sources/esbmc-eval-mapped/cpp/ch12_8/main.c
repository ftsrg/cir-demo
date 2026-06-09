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

int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[18] = "Enter a sentence:";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern long __VERIFIER_nondet_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  int widthValue2;
  char sentence3[10];
  int c4 = 0;
  __retval1 = c4;
  int c5 = 4;
  widthValue2 = c5;
  char* cast6 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std7;
  __VERIFIER_nondet_memory(&std7, sizeof(std7));
  struct std__basic_ostream_char__std__char_traits_char__* std8;
  __VERIFIER_nondet_memory(&std8, sizeof(std8));
  void** v9 = (void**)&_ZSt3cin;
  void* v10 = *((void**)v9);
  unsigned char* cast11 = (unsigned char*)v10;
  long c12 = -24;
  unsigned char* ptr13 = &(cast11)[c12];
  long* cast14 = (long*)ptr13;
  long t15 = *cast14;
  unsigned char* cast16 = (unsigned char*)&_ZSt3cin;
  unsigned char* ptr17 = &(cast16)[t15];
  struct std__basic_istream_char__std__char_traits_char__* cast18 = (struct std__basic_istream_char__std__char_traits_char__*)ptr17;
  struct std__ios_base* cast19 = (struct std__ios_base*)cast18;
  long c20 = 5;
  long std21 = __VERIFIER_nondet_long();
    while (1) {
      struct std__basic_istream_char__std__char_traits_char__* std22;
      __VERIFIER_nondet_memory(&std22, sizeof(std22));
      void** v23 = (void**)std22;
      void* v24 = *((void**)v23);
      unsigned char* cast25 = (unsigned char*)v24;
      long c26 = -24;
      unsigned char* ptr27 = &(cast25)[c26];
      long* cast28 = (long*)ptr27;
      long t29 = *cast28;
      unsigned char* cast30 = (unsigned char*)std22;
      unsigned char* ptr31 = &(cast30)[t29];
      struct std__basic_istream_char__std__char_traits_char__* cast32 = (struct std__basic_istream_char__std__char_traits_char__*)ptr31;
      struct std__basic_ios_char__std__char_traits_char__* cast33 = (struct std__basic_ios_char__std__char_traits_char__*)cast32;
      _Bool std34;
      __VERIFIER_nondet_memory(&std34, sizeof(std34));
      if (!std34) break;
        void** v35 = (void**)&_ZSt4cout;
        void* v36 = *((void**)v35);
        unsigned char* cast37 = (unsigned char*)v36;
        long c38 = -24;
        unsigned char* ptr39 = &(cast37)[c38];
        long* cast40 = (long*)ptr39;
        long t41 = *cast40;
        unsigned char* cast42 = (unsigned char*)&_ZSt4cout;
        unsigned char* ptr43 = &(cast42)[t41];
        struct std__basic_ostream_char__std__char_traits_char__* cast44 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr43;
        struct std__ios_base* cast45 = (struct std__ios_base*)cast44;
        int t46 = widthValue2;
        int u47 = t46 + 1;
        widthValue2 = u47;
        long cast48 = (long)t46;
        long std49 = __VERIFIER_nondet_long();
        char* cast50 = (char*)&(sentence3);
        struct std__basic_ostream_char__std__char_traits_char__* std51;
        __VERIFIER_nondet_memory(&std51, sizeof(std51));
        struct std__basic_ostream_char__std__char_traits_char__* std52;
        __VERIFIER_nondet_memory(&std52, sizeof(std52));
        void** v53 = (void**)&_ZSt3cin;
        void* v54 = *((void**)v53);
        unsigned char* cast55 = (unsigned char*)v54;
        long c56 = -24;
        unsigned char* ptr57 = &(cast55)[c56];
        long* cast58 = (long*)ptr57;
        long t59 = *cast58;
        unsigned char* cast60 = (unsigned char*)&_ZSt3cin;
        unsigned char* ptr61 = &(cast60)[t59];
        struct std__basic_istream_char__std__char_traits_char__* cast62 = (struct std__basic_istream_char__std__char_traits_char__*)ptr61;
        struct std__ios_base* cast63 = (struct std__ios_base*)cast62;
        long c64 = 5;
        long std65 = __VERIFIER_nondet_long();
    }
  int c66 = 0;
  __retval1 = c66;
  int t67 = __retval1;
  return t67;
}

