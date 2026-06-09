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
char _str[5] = "x==2";
char _str_1[98] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/ch2_21/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[13] = "The sum is: ";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int sum2;
  int x3;
  int c4 = 0;
  __retval1 = c4;
  int c5 = 1;
  x3 = c5;
  int c6 = 0;
  sum2 = c6;
    while (1) {
      int t7 = x3;
      int c8 = 10;
      _Bool c9 = ((t7 <= c8)) ? 1 : 0;
      if (!c9) break;
        int t10 = x3;
        int t11 = sum2;
        int b12 = t11 + t10;
        sum2 = b12;
        int t13 = x3;
        int u14 = t13 + 1;
        x3 = u14;
        int t15 = x3;
        int c16 = 2;
        _Bool c17 = ((t15 == c16)) ? 1 : 0;
        if (c17) {
        } else {
          char* cast18 = (char*)&(_str);
          char* c19 = _str_1;
          unsigned int c20 = 29;
          char* cast21 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast18, c19, c20, cast21);
        }
    }
  char* cast22 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  int t24 = sum2;
  struct std__basic_ostream_char__std__char_traits_char__* std25;
  __VERIFIER_nondet_memory(&std25, sizeof(std25));
  struct std__basic_ostream_char__std__char_traits_char__* std26;
  __VERIFIER_nondet_memory(&std26, sizeof(std26));
  int c27 = 0;
  __retval1 = c27;
  int t28 = __retval1;
  return t28;
}

