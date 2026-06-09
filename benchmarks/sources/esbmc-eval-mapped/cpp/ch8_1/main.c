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
struct PhoneNumber { char areaCode[4]; char exchange[4]; char line[5]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Setw { int _M_n; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_istream_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[2] = "(";
char _str_1[3] = ") ";
char _str_2[2] = "-";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[48] = "Enter phone number in the form (123) 456-7890:\n";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_4[31] = "The phone number entered was: ";
struct std__basic_ostream_char__std__char_traits_char__* operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, struct PhoneNumber* p1);
struct std__basic_istream_char__std__char_traits_char__* operator___2(struct std__basic_istream_char__std__char_traits_char__* p0, struct PhoneNumber* p1);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _ZlsRSoRK11PhoneNumber
struct std__basic_ostream_char__std__char_traits_char__* operator__(struct std__basic_ostream_char__std__char_traits_char__* v0, struct PhoneNumber* v1) {
bb2:
  struct std__basic_ostream_char__std__char_traits_char__* output3;
  struct PhoneNumber* num4;
  struct std__basic_ostream_char__std__char_traits_char__* __retval5;
  output3 = v0;
  num4 = v1;
  struct std__basic_ostream_char__std__char_traits_char__* t6 = output3;
  char* cast7 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std8;
  __VERIFIER_nondet_memory(&std8, sizeof(std8));
  struct PhoneNumber* t9 = num4;
  char* cast10 = (char*)&(t9->areaCode);
  struct std__basic_ostream_char__std__char_traits_char__* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  char* cast12 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std13;
  __VERIFIER_nondet_memory(&std13, sizeof(std13));
  struct PhoneNumber* t14 = num4;
  char* cast15 = (char*)&(t14->exchange);
  struct std__basic_ostream_char__std__char_traits_char__* std16;
  __VERIFIER_nondet_memory(&std16, sizeof(std16));
  char* cast17 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std18;
  __VERIFIER_nondet_memory(&std18, sizeof(std18));
  struct PhoneNumber* t19 = num4;
  char* cast20 = (char*)&(t19->line);
  struct std__basic_ostream_char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  struct std__basic_ostream_char__std__char_traits_char__* t22 = output3;
  __retval5 = t22;
  struct std__basic_ostream_char__std__char_traits_char__* t23 = __retval5;
  return t23;
}

// function: _ZrsRSiR11PhoneNumber
struct std__basic_istream_char__std__char_traits_char__* operator___2(struct std__basic_istream_char__std__char_traits_char__* v24, struct PhoneNumber* v25) {
bb26:
  struct std__basic_istream_char__std__char_traits_char__* input27;
  struct PhoneNumber* num28;
  struct std__basic_istream_char__std__char_traits_char__* __retval29;
  struct std___Setw agg_tmp030;
  struct std___Setw agg_tmp131;
  struct std___Setw agg_tmp232;
  input27 = v24;
  num28 = v25;
  struct std__basic_istream_char__std__char_traits_char__* t33 = input27;
  struct std__basic_istream_char__std__char_traits_char__* std34;
  __VERIFIER_nondet_memory(&std34, sizeof(std34));
  struct std__basic_istream_char__std__char_traits_char__* t35 = input27;
  int c36 = 4;
  struct std___Setw std37;
  __VERIFIER_nondet_memory(&std37, sizeof(std37));
  agg_tmp030 = std37;
  struct std___Setw t38 = agg_tmp030;
  struct std__basic_istream_char__std__char_traits_char__* std39;
  __VERIFIER_nondet_memory(&std39, sizeof(std39));
  struct PhoneNumber* t40 = num28;
  struct std__basic_istream_char__std__char_traits_char__* std41;
  __VERIFIER_nondet_memory(&std41, sizeof(std41));
  struct std__basic_istream_char__std__char_traits_char__* t42 = input27;
  long c43 = 2;
  struct std__basic_istream_char__std__char_traits_char__* std44;
  __VERIFIER_nondet_memory(&std44, sizeof(std44));
  struct std__basic_istream_char__std__char_traits_char__* t45 = input27;
  int c46 = 4;
  struct std___Setw std47;
  __VERIFIER_nondet_memory(&std47, sizeof(std47));
  agg_tmp131 = std47;
  struct std___Setw t48 = agg_tmp131;
  struct std__basic_istream_char__std__char_traits_char__* std49;
  __VERIFIER_nondet_memory(&std49, sizeof(std49));
  struct PhoneNumber* t50 = num28;
  struct std__basic_istream_char__std__char_traits_char__* std51;
  __VERIFIER_nondet_memory(&std51, sizeof(std51));
  struct std__basic_istream_char__std__char_traits_char__* t52 = input27;
  struct std__basic_istream_char__std__char_traits_char__* std53;
  __VERIFIER_nondet_memory(&std53, sizeof(std53));
  struct std__basic_istream_char__std__char_traits_char__* t54 = input27;
  int c55 = 5;
  struct std___Setw std56;
  __VERIFIER_nondet_memory(&std56, sizeof(std56));
  agg_tmp232 = std56;
  struct std___Setw t57 = agg_tmp232;
  struct std__basic_istream_char__std__char_traits_char__* std58;
  __VERIFIER_nondet_memory(&std58, sizeof(std58));
  struct PhoneNumber* t59 = num28;
  struct std__basic_istream_char__std__char_traits_char__* std60;
  __VERIFIER_nondet_memory(&std60, sizeof(std60));
  struct std__basic_istream_char__std__char_traits_char__* t61 = input27;
  __retval29 = t61;
  struct std__basic_istream_char__std__char_traits_char__* t62 = __retval29;
  return t62;
}

// function: main
int main() {
bb63:
  int __retval64;
  struct PhoneNumber phone65;
  int c66 = 0;
  __retval64 = c66;
  char* cast67 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std68;
  __VERIFIER_nondet_memory(&std68, sizeof(std68));
  struct std__basic_istream_char__std__char_traits_char__* r69 = operator___2(&_ZSt3cin, &phone65);
  char* cast70 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std71;
  __VERIFIER_nondet_memory(&std71, sizeof(std71));
  struct std__basic_ostream_char__std__char_traits_char__* r72 = operator__(&_ZSt4cout, &phone65);
  struct std__basic_ostream_char__std__char_traits_char__* std73;
  __VERIFIER_nondet_memory(&std73, sizeof(std73));
  int c74 = 0;
  __retval64 = c74;
  int t75 = __retval64;
  return t75;
}

