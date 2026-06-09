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
struct TestMutable { int value; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[16] = "Initial value: ";
char _str_1[18] = "\nModified value: ";
void TestMutable__TestMutable(struct TestMutable* p0, int p1);
int TestMutable__getValue___const(struct TestMutable* p0);
void TestMutable__modifyValue___const(struct TestMutable* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _ZN11TestMutableC2Ei
void TestMutable__TestMutable(struct TestMutable* v0, int v1) {
bb2:
  struct TestMutable* this3;
  int v4;
  this3 = v0;
  v4 = v1;
  struct TestMutable* t5 = this3;
  int t6 = v4;
  t5->value = t6;
  return;
}

// function: _ZNK11TestMutable8getValueEv
int TestMutable__getValue___const(struct TestMutable* v7) {
bb8:
  struct TestMutable* this9;
  int __retval10;
  this9 = v7;
  struct TestMutable* t11 = this9;
  int t12 = t11->value;
  __retval10 = t12;
  int t13 = __retval10;
  return t13;
}

// function: _ZNK11TestMutable11modifyValueEv
void TestMutable__modifyValue___const(struct TestMutable* v14) {
bb15:
  struct TestMutable* this16;
  this16 = v14;
  struct TestMutable* t17 = this16;
  int t18 = t17->value;
  int u19 = t18 + 1;
  t17->value = u19;
  return;
}

// function: main
int main() {
bb20:
  int __retval21;
  struct TestMutable test22;
  int c23 = 0;
  __retval21 = c23;
  int c24 = 99;
  TestMutable__TestMutable(&test22, c24);
  char* cast25 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std26;
  __VERIFIER_nondet_memory(&std26, sizeof(std26));
  int r27 = TestMutable__getValue___const(&test22);
  struct std__basic_ostream_char__std__char_traits_char__* std28;
  __VERIFIER_nondet_memory(&std28, sizeof(std28));
  TestMutable__modifyValue___const(&test22);
  char* cast29 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std30;
  __VERIFIER_nondet_memory(&std30, sizeof(std30));
  int r31 = TestMutable__getValue___const(&test22);
  struct std__basic_ostream_char__std__char_traits_char__* std32;
  __VERIFIER_nondet_memory(&std32, sizeof(std32));
  struct std__basic_ostream_char__std__char_traits_char__* std33;
  __VERIFIER_nondet_memory(&std33, sizeof(std33));
  int c34 = 0;
  __retval21 = c34;
  int t35 = __retval21;
  return t35;
}

