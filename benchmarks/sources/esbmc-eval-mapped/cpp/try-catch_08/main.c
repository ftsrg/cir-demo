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
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[35] = "Memory allocation failed for ptr[ ";
char _str_1[4] = " ]\n";
char _str_2[39] = "Allocated 50000000000 doubles in ptr[ ";
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
      int c8 = 50;
      _Bool c9 = ((t7 < c8)) ? 1 : 0;
      if (!c9) break;
        double* __new_result10;
        unsigned long c11 = 400000000000;
        void* r12 = operator_new__(c11);
          double* cast13 = (double*)r12;
          __new_result10 = cast13;
        double* t14 = __new_result10;
        int t15 = i4;
        long cast16 = (long)t15;
        ptr2[cast16] = t14;
          int t17 = i4;
          long cast18 = (long)t17;
          double* t19 = ptr2[cast18];
          double* c20 = ((void*)0);
          _Bool c21 = ((t19 == c20)) ? 1 : 0;
          if (c21) {
            char* cast22 = (char*)&(_str);
            struct std__basic_ostream_char__std__char_traits_char__* std23;
            __VERIFIER_nondet_memory(&std23, sizeof(std23));
            int t24 = i4;
            struct std__basic_ostream_char__std__char_traits_char__* std25;
            __VERIFIER_nondet_memory(&std25, sizeof(std25));
            char* cast26 = (char*)&(_str_1);
            struct std__basic_ostream_char__std__char_traits_char__* std27;
            __VERIFIER_nondet_memory(&std27, sizeof(std27));
            break;
          } else {
            char* cast28 = (char*)&(_str_2);
            struct std__basic_ostream_char__std__char_traits_char__* std29;
            __VERIFIER_nondet_memory(&std29, sizeof(std29));
            int t30 = i4;
            struct std__basic_ostream_char__std__char_traits_char__* std31;
            __VERIFIER_nondet_memory(&std31, sizeof(std31));
            char* cast32 = (char*)&(_str_1);
            struct std__basic_ostream_char__std__char_traits_char__* std33;
            __VERIFIER_nondet_memory(&std33, sizeof(std33));
          }
    for_step6: ;
      int t34 = i4;
      int u35 = t34 + 1;
      i4 = u35;
    }
  int c36 = 0;
  __retval1 = c36;
  int t37 = __retval1;
  return t37;
}

