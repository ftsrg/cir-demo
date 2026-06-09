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
struct Count { int x; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[32] = "counter.x after instantiation: ";
char _str_1[47] = "counter.x after call to setX friend function: ";
void setX(struct Count* p0, int p1);
void Count__Count(struct Count* p0);
void Count__print___const(struct Count* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z4setXR5Counti
void setX(struct Count* v0, int v1) {
bb2:
  struct Count* c3;
  int val4;
  c3 = v0;
  val4 = v1;
  int t5 = val4;
  struct Count* t6 = c3;
  t6->x = t5;
  return;
}

// function: _ZN5CountC2Ev
void Count__Count(struct Count* v7) {
bb8:
  struct Count* this9;
  this9 = v7;
  struct Count* t10 = this9;
  int c11 = 0;
  t10->x = c11;
  return;
}

// function: _ZNK5Count5printEv
void Count__print___const(struct Count* v12) {
bb13:
  struct Count* this14;
  this14 = v12;
  struct Count* t15 = this14;
  int t16 = t15->x;
  struct std__basic_ostream_char__std__char_traits_char__* std17;
  __VERIFIER_nondet_memory(&std17, sizeof(std17));
  struct std__basic_ostream_char__std__char_traits_char__* std18;
  __VERIFIER_nondet_memory(&std18, sizeof(std18));
  return;
}

// function: main
int main() {
bb19:
  int __retval20;
  struct Count counter21;
  int c22 = 0;
  __retval20 = c22;
  Count__Count(&counter21);
  char* cast23 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std24;
  __VERIFIER_nondet_memory(&std24, sizeof(std24));
  Count__print___const(&counter21);
  int c25 = 8;
  setX(&counter21, c25);
  char* cast26 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std27;
  __VERIFIER_nondet_memory(&std27, sizeof(std27));
  Count__print___const(&counter21);
  int c28 = 0;
  __retval20 = c28;
  int t29 = __retval20;
  return t29;
}

