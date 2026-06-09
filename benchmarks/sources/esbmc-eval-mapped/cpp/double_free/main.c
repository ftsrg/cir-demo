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
struct myclass { unsigned char __field0; };
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[19] = "myclass destroyed\n";
char _str_1[21] = "myclass constructed\n";
extern void *malloc(unsigned long);
extern void free(void*);
void operator_delete__(void* p0, unsigned long p1) { free(p0); }
void myclass___myclass(struct myclass* p0);
void my_delete(struct myclass* p0);
void* operator_new__(unsigned long p0) { return malloc(p0); }
void myclass__myclass(struct myclass* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _ZN7myclassD2Ev
void myclass___myclass(struct myclass* v0) {
bb1:
  struct myclass* this2;
  this2 = v0;
  struct myclass* t3 = this2;
  char* cast4 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std5;
  __VERIFIER_nondet_memory(&std5, sizeof(std5));
  return;
}

// function: _Z9my_deleteP7myclass
void my_delete(struct myclass* v6) {
bb7:
  struct myclass* q8;
  q8 = v6;
  struct myclass* t9 = q8;
  struct myclass* c10 = ((void*)0);
  _Bool c11 = ((t9 != c10)) ? 1 : 0;
  if (c11) {
    unsigned char* cast12 = (unsigned char*)t9;
    long c13 = -8;
    unsigned char* ptr14 = &(cast12)[c13];
    void* cast15 = (void*)ptr14;
    unsigned long* cast16 = (unsigned long*)ptr14;
    unsigned long t17 = *cast16;
      struct myclass* ptr18 = &(t9)[t17];
      _Bool c19 = ((ptr18 != t9)) ? 1 : 0;
      if (c19) {
        struct myclass* __array_idx20;
        __array_idx20 = ptr18;
        do {
          struct myclass* t21 = __array_idx20;
          long c22 = -1;
          struct myclass* ptr23 = &(t21)[c22];
          __array_idx20 = ptr23;
          myclass___myclass(ptr23);
          struct myclass* t24 = __array_idx20;
          _Bool c25 = ((t24 != t9)) ? 1 : 0;
          if (!c25) break;
        } while (1);
      }
    {
      unsigned long c26 = 1;
      unsigned long b27 = c26 * t17;
      unsigned long c28 = 8;
      unsigned long b29 = b27 + c28;
      operator_delete__(cast15, b29);
    }
  }
  return;
}

// function: _ZN7myclassC2Ev
void myclass__myclass(struct myclass* v30) {
bb31:
  struct myclass* this32;
  this32 = v30;
  struct myclass* t33 = this32;
  char* cast34 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std35;
  __VERIFIER_nondet_memory(&std35, sizeof(std35));
  return;
}

// function: main
int main() {
bb36:
  int __retval37;
  struct myclass* pt38;
  struct myclass* __new_result39;
  int c40 = 0;
  __retval37 = c40;
  unsigned long c41 = 3;
  unsigned long c42 = 11;
  void* r43 = operator_new__(c42);
    unsigned char* cast44 = (unsigned char*)r43;
    unsigned long* cast45 = (unsigned long*)cast44;
    *cast45 = c41;
    int c46 = 8;
    unsigned char* ptr47 = &(cast44)[c46];
    void* cast48 = (void*)ptr47;
    struct myclass* cast49 = (struct myclass*)cast48;
    __new_result39 = cast49;
    struct myclass* cast50 = (struct myclass*)cast49;
    unsigned long c51 = 3;
    struct myclass* cast52 = (struct myclass*)cast50;
    struct myclass* ptr53 = &(cast52)[c51];
    struct myclass* __array_idx54;
    __array_idx54 = cast52;
      do {
        struct myclass* t55 = __array_idx54;
        myclass__myclass(t55);
        unsigned long c56 = 1;
        struct myclass* ptr57 = &(t55)[c56];
        __array_idx54 = ptr57;
        struct myclass* t58 = __array_idx54;
        _Bool c59 = ((t58 != ptr53)) ? 1 : 0;
        if (!c59) break;
      } while (1);
  struct myclass* t60 = __new_result39;
  pt38 = t60;
  struct myclass* t61 = pt38;
  struct myclass* c62 = ((void*)0);
  _Bool c63 = ((t61 != c62)) ? 1 : 0;
  if (c63) {
    unsigned char* cast64 = (unsigned char*)t61;
    long c65 = -8;
    unsigned char* ptr66 = &(cast64)[c65];
    void* cast67 = (void*)ptr66;
    unsigned long* cast68 = (unsigned long*)ptr66;
    unsigned long t69 = *cast68;
      struct myclass* ptr70 = &(t61)[t69];
      _Bool c71 = ((ptr70 != t61)) ? 1 : 0;
      if (c71) {
        struct myclass* __array_idx72;
        __array_idx72 = ptr70;
        do {
          struct myclass* t73 = __array_idx72;
          long c74 = -1;
          struct myclass* ptr75 = &(t73)[c74];
          __array_idx72 = ptr75;
          myclass___myclass(ptr75);
          struct myclass* t76 = __array_idx72;
          _Bool c77 = ((t76 != t61)) ? 1 : 0;
          if (!c77) break;
        } while (1);
      }
    {
      unsigned long c78 = 1;
      unsigned long b79 = c78 * t69;
      unsigned long c80 = 8;
      unsigned long b81 = b79 + c80;
      operator_delete__(cast67, b81);
    }
  }
  struct myclass* t82 = pt38;
  my_delete(t82);
  int c83 = 0;
  __retval37 = c83;
  int t84 = __retval37;
  return t84;
}

