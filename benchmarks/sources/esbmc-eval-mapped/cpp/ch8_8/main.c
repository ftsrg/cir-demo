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
struct HugeInt { short integer[30]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[30] = "99999999999999999999999999999";
char _str_1[2] = "1";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[7] = "n1 is ";
char _str_3[8] = "\nn2 is ";
char _str_4[8] = "\nn3 is ";
char _str_5[8] = "\nn4 is ";
char _str_6[8] = "\nn5 is ";
char _str_7[3] = "\n\n";
char _str_8[4] = " + ";
char _str_9[4] = " = ";
char _str_10[4] = "\n= ";
char _str_11[6] = "10000";
extern void HugeInt__HugeInt_2(struct HugeInt* p0, long p1);
extern void HugeInt__HugeInt(struct HugeInt* p0, char* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, struct HugeInt* p1);
extern struct HugeInt HugeInt__operator__3(struct HugeInt* p0, struct HugeInt* p1);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
struct HugeInt* HugeInt__operator_(struct HugeInt* p0, struct HugeInt* p1);
extern struct HugeInt HugeInt__operator__4(struct HugeInt* p0, int p1);
extern struct HugeInt HugeInt__operator__2(struct HugeInt* p0, char* p1);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _ZN7HugeIntaSEOS_
struct HugeInt* HugeInt__operator_(struct HugeInt* v0, struct HugeInt* v1) {
bb2:
  struct HugeInt* this3;
  struct HugeInt* unnamed4;
  struct HugeInt* __retval5;
  this3 = v0;
  unnamed4 = v1;
  struct HugeInt* t6 = this3;
  void* cast7 = (void*)&(t6->integer);
  struct HugeInt* t8 = unnamed4;
  void* cast9 = (void*)&(t8->integer);
  unsigned long c10 = 60;
  void* r11 = memcpy(cast7, cast9, c10);
  __retval5 = t6;
  struct HugeInt* t12 = __retval5;
  return t12;
}

// function: main
int main() {
bb13:
  int __retval14;
  struct HugeInt n115;
  struct HugeInt n216;
  struct HugeInt n317;
  struct HugeInt n418;
  struct HugeInt n519;
  struct HugeInt ref_tmp020;
  struct HugeInt ref_tmp121;
  struct HugeInt ref_tmp222;
  struct HugeInt ref_tmp323;
  int c24 = 0;
  __retval14 = c24;
  long c25 = 7654321;
  HugeInt__HugeInt_2(&n115, c25);
  long c26 = 7891234;
  HugeInt__HugeInt_2(&n216, c26);
  char* cast27 = (char*)&(_str);
  HugeInt__HugeInt(&n317, cast27);
  char* cast28 = (char*)&(_str_1);
  HugeInt__HugeInt(&n418, cast28);
  long c29 = 0;
  HugeInt__HugeInt_2(&n519, c29);
  char* cast30 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
  struct std__basic_ostream_char__std__char_traits_char__* r32 = operator__(std31, &n115);
  char* cast33 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std34;
  __VERIFIER_nondet_memory(&std34, sizeof(std34));
  struct std__basic_ostream_char__std__char_traits_char__* r35 = operator__(std34, &n216);
  char* cast36 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std37;
  __VERIFIER_nondet_memory(&std37, sizeof(std37));
  struct std__basic_ostream_char__std__char_traits_char__* r38 = operator__(std37, &n317);
  char* cast39 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std40;
  __VERIFIER_nondet_memory(&std40, sizeof(std40));
  struct std__basic_ostream_char__std__char_traits_char__* r41 = operator__(std40, &n418);
  char* cast42 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std43;
  __VERIFIER_nondet_memory(&std43, sizeof(std43));
  struct std__basic_ostream_char__std__char_traits_char__* r44 = operator__(std43, &n519);
  char* cast45 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std46;
  __VERIFIER_nondet_memory(&std46, sizeof(std46));
  struct HugeInt r47 = HugeInt__operator__3(&n115, &n216);
  ref_tmp020 = r47;
  struct HugeInt* r48 = HugeInt__operator_(&n519, &ref_tmp020);
  struct std__basic_ostream_char__std__char_traits_char__* r49 = operator__(&_ZSt4cout, &n115);
  char* cast50 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* std51;
  __VERIFIER_nondet_memory(&std51, sizeof(std51));
  struct std__basic_ostream_char__std__char_traits_char__* r52 = operator__(std51, &n216);
  char* cast53 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* std54;
  __VERIFIER_nondet_memory(&std54, sizeof(std54));
  struct std__basic_ostream_char__std__char_traits_char__* r55 = operator__(std54, &n519);
  char* cast56 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std57;
  __VERIFIER_nondet_memory(&std57, sizeof(std57));
  struct std__basic_ostream_char__std__char_traits_char__* r58 = operator__(&_ZSt4cout, &n317);
  char* cast59 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* std60;
  __VERIFIER_nondet_memory(&std60, sizeof(std60));
  struct std__basic_ostream_char__std__char_traits_char__* r61 = operator__(std60, &n418);
  char* cast62 = (char*)&(_str_10);
  struct std__basic_ostream_char__std__char_traits_char__* std63;
  __VERIFIER_nondet_memory(&std63, sizeof(std63));
  struct HugeInt r64 = HugeInt__operator__3(&n317, &n418);
  ref_tmp121 = r64;
  struct std__basic_ostream_char__std__char_traits_char__* r65 = operator__(std63, &ref_tmp121);
  char* cast66 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std67;
  __VERIFIER_nondet_memory(&std67, sizeof(std67));
  int c68 = 9;
  struct HugeInt r69 = HugeInt__operator__4(&n115, c68);
  ref_tmp222 = r69;
  struct HugeInt* r70 = HugeInt__operator_(&n519, &ref_tmp222);
  struct std__basic_ostream_char__std__char_traits_char__* r71 = operator__(&_ZSt4cout, &n115);
  char* cast72 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* std73;
  __VERIFIER_nondet_memory(&std73, sizeof(std73));
  int c74 = 9;
  struct std__basic_ostream_char__std__char_traits_char__* std75;
  __VERIFIER_nondet_memory(&std75, sizeof(std75));
  char* cast76 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* std77;
  __VERIFIER_nondet_memory(&std77, sizeof(std77));
  struct std__basic_ostream_char__std__char_traits_char__* r78 = operator__(std77, &n519);
  char* cast79 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std80;
  __VERIFIER_nondet_memory(&std80, sizeof(std80));
  char* cast81 = (char*)&(_str_11);
  struct HugeInt r82 = HugeInt__operator__2(&n216, cast81);
  ref_tmp323 = r82;
  struct HugeInt* r83 = HugeInt__operator_(&n519, &ref_tmp323);
  struct std__basic_ostream_char__std__char_traits_char__* r84 = operator__(&_ZSt4cout, &n216);
  char* cast85 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* std86;
  __VERIFIER_nondet_memory(&std86, sizeof(std86));
  char* cast87 = (char*)&(_str_11);
  struct std__basic_ostream_char__std__char_traits_char__* std88;
  __VERIFIER_nondet_memory(&std88, sizeof(std88));
  char* cast89 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* std90;
  __VERIFIER_nondet_memory(&std90, sizeof(std90));
  struct std__basic_ostream_char__std__char_traits_char__* r91 = operator__(std90, &n519);
  struct std__basic_ostream_char__std__char_traits_char__* std92;
  __VERIFIER_nondet_memory(&std92, sizeof(std92));
  int c93 = 0;
  __retval14 = c93;
  int t94 = __retval14;
  return t94;
}

