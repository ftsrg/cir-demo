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
struct Test { int value; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct anon_struct_0 { long __field0; long __field1; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[10] = "function\n";
void Test__function(struct Test* p0);
void arrowStar(struct Test* p0);
void dotStar(struct Test* p0);
int main();

struct anon_struct_0 __const__Z9arrowStarP4Test_memPtr = {(long)&Test__function, 0};
extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _ZN4Test8functionEv
__attribute__((aligned(2))) void Test__function(struct Test* v0) {
bb1:
  struct Test* this2;
  this2 = v0;
  struct Test* t3 = this2;
  char* cast4 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std5;
  __VERIFIER_nondet_memory(&std5, sizeof(std5));
  return;
}

// function: _Z9arrowStarP4Test
__attribute__((aligned(2))) void arrowStar(struct Test* v6) {
bb7:
  struct Test* testPtr8;
  struct anon_struct_0 memPtr9;
  testPtr8 = v6;
  memPtr9 = *&__const__Z9arrowStarP4Test_memPtr; // copy
  struct Test* t10 = testPtr8;
  struct anon_struct_0 t11 = memPtr9;
  long c12 = 1;
  long v13 = t11.__field1;
  void* cast14 = (void*)t10;
  void* ptr15 = cast14 + v13;
  long v16 = t11.__field0;
  long b17 = v16 & c12;
  _Bool c18 = ((b17 == c12)) ? 1 : 0;
  void* ternary19;
  if (c18) {
    char** cast20 = (char**)ptr15;
    char* t21 = *cast20;
    long b22 = v16 - c12;
    char* ptr23 = &(t21)[b22];
    void** cast24 = (void**)ptr23;
    void* t25 = *cast24;
    ternary19 = (void*)t25;
  } else {
    void* cast26 = (void*)v16;
    ternary19 = (void*)cast26;
  }
  ((void (*)(void*))ternary19)(ptr15);
  return;
}

// function: _Z7dotStarP4Test
__attribute__((aligned(2))) void dotStar(struct Test* v27) {
bb28:
  struct Test* testPtr229;
  long vPtr30;
  testPtr229 = v27;
  long c31 = 0;
  vPtr30 = c31;
  struct Test* t32 = testPtr229;
  long t33 = vPtr30;
  char* cast34 = (char*)t32;
  char* ptr35 = &(cast34)[t33];
  int* cast36 = (int*)ptr35;
  int t37 = *cast36;
  struct std__basic_ostream_char__std__char_traits_char__* std38;
  __VERIFIER_nondet_memory(&std38, sizeof(std38));
  struct std__basic_ostream_char__std__char_traits_char__* std39;
  __VERIFIER_nondet_memory(&std39, sizeof(std39));
  return;
}

// function: main
__attribute__((aligned(2))) int main() {
bb40:
  int __retval41;
  struct Test test42;
  int c43 = 0;
  __retval41 = c43;
  int c44 = 8;
  test42.value = c44;
  arrowStar(&test42);
  dotStar(&test42);
  int c45 = 0;
  __retval41 = c45;
  int t46 = __retval41;
  return t46;
}

