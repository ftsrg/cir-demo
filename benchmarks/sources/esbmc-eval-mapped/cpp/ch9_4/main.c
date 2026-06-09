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

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct Point4 { int __field0; int __field1; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct Circle5 { struct Point4 __field0; double __field1; };
struct std__ctype_char_;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
extern void Point4__Point4(struct Point4* p0, int p1, int p2);
void Point4___Point4(struct Point4* p0) {}
extern void Circle5__Circle5(struct Circle5* p0, int p1, int p2, double p3);
void Circle5___Circle5(struct Circle5* p0) {}
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct Circle5 circle12;
  struct Circle5 circle23;
  int c4 = 0;
  __retval1 = c4;
    struct Point4 point5;
    int c6 = 11;
    int c7 = 22;
    Point4__Point4(&point5, c6, c7);
    {
      Point4___Point4(&point5);
    }
  struct std__basic_ostream_char__std__char_traits_char__* std8;
  __VERIFIER_nondet_memory(&std8, sizeof(std8));
  int c9 = 72;
  int c10 = 29;
  double c11 = 0x1.2p2;
  Circle5__Circle5(&circle12, c9, c10, c11);
    struct std__basic_ostream_char__std__char_traits_char__* std12;
    __VERIFIER_nondet_memory(&std12, sizeof(std12));
    int c13 = 5;
    int c14 = 5;
    int c15 = 10;
    double cast16 = (double)c15;
    Circle5__Circle5(&circle23, c13, c14, cast16);
      struct std__basic_ostream_char__std__char_traits_char__* std17;
      __VERIFIER_nondet_memory(&std17, sizeof(std17));
      int c18 = 0;
      __retval1 = c18;
      int t19 = __retval1;
      int ret_val20 = t19;
      {
        Circle5___Circle5(&circle23);
      }
      {
        Circle5___Circle5(&circle12);
      }
      return ret_val20;
  int t21 = __retval1;
  return t21;
}

