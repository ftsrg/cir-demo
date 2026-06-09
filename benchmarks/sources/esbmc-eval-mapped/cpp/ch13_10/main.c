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
// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[5] = "i<50";
char _str_1[99] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/ch13_10/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[35] = "Memory allocation failed for ptr[ ";
char _str_3[4] = " ]\n";
char _str_4[35] = "Allocated 5000000 doubles in ptr[ ";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new__(unsigned long p0) { return malloc(p0); }
void operator_delete__(void* p0, unsigned long p1) { free(p0); }
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  double* ptr2[50];
  int c3 = 0;
  __retval1 = c3;
    int i4;
    int c5 = 0;
    i4 = c5;
    while (1) {
      int t7 = i4;
      int c8 = 100;
      _Bool c9 = ((t7 < c8)) ? 1 : 0;
      if (!c9) break;
        double* __new_result10;
        int t11 = i4;
        int c12 = 50;
        _Bool c13 = ((t11 < c12)) ? 1 : 0;
        if (c13) {
        } else {
          char* cast14 = (char*)&(_str);
          char* c15 = _str_1;
          unsigned int c16 = 22;
          char* cast17 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast14, c15, c16, cast17);
        }
        unsigned long c18 = 40000000;
        void* r19 = operator_new__(c18);
          double* cast20 = (double*)r19;
          __new_result10 = cast20;
        double* t21 = __new_result10;
        int t22 = i4;
        long cast23 = (long)t22;
        ptr2[cast23] = t21;
          int t24 = i4;
          long cast25 = (long)t24;
          double* t26 = ptr2[cast25];
          double* c27 = ((void*)0);
          _Bool c28 = ((t26 == c27)) ? 1 : 0;
          if (c28) {
            char* cast29 = (char*)&(_str_2);
            struct std__basic_ostream_char__std__char_traits_char__* std30;
            __VERIFIER_nondet_memory(&std30, sizeof(std30));
            int t31 = i4;
            struct std__basic_ostream_char__std__char_traits_char__* std32;
            __VERIFIER_nondet_memory(&std32, sizeof(std32));
            char* cast33 = (char*)&(_str_3);
            struct std__basic_ostream_char__std__char_traits_char__* std34;
            __VERIFIER_nondet_memory(&std34, sizeof(std34));
            break;
          } else {
            char* cast35 = (char*)&(_str_4);
            struct std__basic_ostream_char__std__char_traits_char__* std36;
            __VERIFIER_nondet_memory(&std36, sizeof(std36));
            int t37 = i4;
            struct std__basic_ostream_char__std__char_traits_char__* std38;
            __VERIFIER_nondet_memory(&std38, sizeof(std38));
            char* cast39 = (char*)&(_str_3);
            struct std__basic_ostream_char__std__char_traits_char__* std40;
            __VERIFIER_nondet_memory(&std40, sizeof(std40));
          }
    for_step6: ;
      int t41 = i4;
      int u42 = t41 + 1;
      i4 = u42;
    }
  int c43 = 0;
  __retval1 = c43;
  int t44 = __retval1;
  return t44;
}

