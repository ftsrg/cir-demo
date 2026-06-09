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
struct ConstCastTest { int number; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[29] = "\nNumber after modification: ";
char _str_1[26] = "Initial value of number: ";
void ConstCastTest__setNumber(struct ConstCastTest* p0, int p1);
int ConstCastTest__getNumber___const(struct ConstCastTest* p0);
void ConstCastTest__printNumber___const(struct ConstCastTest* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _ZN13ConstCastTest9setNumberEi
void ConstCastTest__setNumber(struct ConstCastTest* v0, int v1) {
bb2:
  struct ConstCastTest* this3;
  int num4;
  this3 = v0;
  num4 = v1;
  struct ConstCastTest* t5 = this3;
  int t6 = num4;
  t5->number = t6;
  return;
}

// function: _ZNK13ConstCastTest9getNumberEv
int ConstCastTest__getNumber___const(struct ConstCastTest* v7) {
bb8:
  struct ConstCastTest* this9;
  int __retval10;
  this9 = v7;
  struct ConstCastTest* t11 = this9;
  int t12 = t11->number;
  __retval10 = t12;
  int t13 = __retval10;
  return t13;
}

// function: _ZNK13ConstCastTest11printNumberEv
void ConstCastTest__printNumber___const(struct ConstCastTest* v14) {
bb15:
  struct ConstCastTest* this16;
  this16 = v14;
  struct ConstCastTest* t17 = this16;
  char* cast18 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
  int t20 = t17->number;
  int u21 = t20 - 1;
  t17->number = u21;
  int t22 = t17->number;
  struct std__basic_ostream_char__std__char_traits_char__* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  struct std__basic_ostream_char__std__char_traits_char__* std24;
  __VERIFIER_nondet_memory(&std24, sizeof(std24));
  return;
}

// function: main
int main() {
bb25:
  int __retval26;
  struct ConstCastTest test27;
  int c28 = 0;
  __retval26 = c28;
  int c29 = 8;
  ConstCastTest__setNumber(&test27, c29);
  char* cast30 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
  int r32 = ConstCastTest__getNumber___const(&test27);
  struct std__basic_ostream_char__std__char_traits_char__* std33;
  __VERIFIER_nondet_memory(&std33, sizeof(std33));
  ConstCastTest__printNumber___const(&test27);
  int c34 = 0;
  __retval26 = c34;
  int t35 = __retval26;
  return t35;
}

