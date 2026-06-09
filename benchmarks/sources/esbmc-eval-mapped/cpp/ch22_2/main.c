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
struct Array { int __field0; int* __field1; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[30] = "The array received contains:\n";
char _str_1[3] = "\n\n";
extern void Array__Array(struct Array* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, struct Array* p1);
void outputArray(struct Array* p0);
void Array___Array(struct Array* p0) {}
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z11outputArrayRK5Array
void outputArray(struct Array* v0) {
bb1:
  struct Array* arrayToOutput2;
  arrayToOutput2 = v0;
  char* cast3 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std4;
  __VERIFIER_nondet_memory(&std4, sizeof(std4));
  struct Array* t5 = arrayToOutput2;
  struct std__basic_ostream_char__std__char_traits_char__* r6 = operator__(std4, t5);
  char* cast7 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std8;
  __VERIFIER_nondet_memory(&std8, sizeof(std8));
  return;
}

// function: main
int main() {
bb9:
  int __retval10;
  struct Array integers111;
  struct Array ref_tmp012;
  int c13 = 0;
  __retval10 = c13;
  int c14 = 7;
  Array__Array(&integers111, c14);
    outputArray(&integers111);
    int c15 = 15;
    Array__Array(&ref_tmp012, c15);
      outputArray(&ref_tmp012);
    {
      Array___Array(&ref_tmp012);
    }
    int c16 = 0;
    __retval10 = c16;
    int t17 = __retval10;
    int ret_val18 = t17;
    {
      Array___Array(&integers111);
    }
    return ret_val18;
  int t19 = __retval10;
  return t19;
}

