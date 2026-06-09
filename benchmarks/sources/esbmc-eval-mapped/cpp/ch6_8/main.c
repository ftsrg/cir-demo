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
struct CreateAndDestroy { int __field0; char* __field1; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

long _ZGVZ4mainE5third __attribute__((aligned(8))) = 0;
long _ZGVZ6createvE5sixth __attribute__((aligned(8))) = 0;
extern signed char __dso_handle;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
struct CreateAndDestroy _ZZ6createvE5sixth __attribute__((aligned(8)));
struct CreateAndDestroy _ZZ4mainE5third __attribute__((aligned(8)));
struct CreateAndDestroy first __attribute__((aligned(8)));
char _str[21] = "(global before main)";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[33] = "\nMAIN FUNCTION: EXECUTION BEGINS";
char _str_2[26] = "(local automatic in main)";
char _str_3[23] = "(local static in main)";
char _str_4[34] = "\nMAIN FUNCTION: EXECUTION RESUMES";
char _str_5[31] = "\nMAIN FUNCTION: EXECUTION ENDS";
char _str_6[35] = "\nCREATE FUNCTION: EXECUTION BEGINS";
char _str_7[28] = "(local automatic in create)";
char _str_8[25] = "(local static in create)";
char _str_9[33] = "\nCREATE FUNCTION: EXECUTION ENDS";
extern void __cxa_guard_release(long* p0);
extern int __cxa_guard_acquire(long* p0);
extern void __cxa_atexit(void* p0, void* p1, signed char* p2);
extern void CreateAndDestroy__CreateAndDestroy(struct CreateAndDestroy* p0, int p1, char* p2);
void CreateAndDestroy___CreateAndDestroy(struct CreateAndDestroy* p0) {}
void __cxx_global_var_init();
void create();
int main();
__attribute__((constructor)) void _GLOBAL__sub_I_main_cpp();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: __cxx_global_var_init
void __cxx_global_var_init() {
bb0:
  int c1 = 1;
  char* cast2 = (char*)&(_str);
  CreateAndDestroy__CreateAndDestroy(&first, c1, cast2);
  void* cast3 = (void*)&CreateAndDestroy___CreateAndDestroy;
  void* cast4 = (void*)&first;
  __cxa_atexit(cast3, cast4, &__dso_handle);
  return;
}

// function: _Z6createv
void create() {
bb5:
  struct CreateAndDestroy fifth6;
  struct CreateAndDestroy seventh7;
  char* cast8 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std9;
  __VERIFIER_nondet_memory(&std9, sizeof(std9));
  struct std__basic_ostream_char__std__char_traits_char__* std10;
  __VERIFIER_nondet_memory(&std10, sizeof(std10));
  int c11 = 5;
  char* cast12 = (char*)&(_str_7);
  CreateAndDestroy__CreateAndDestroy(&fifth6, c11, cast12);
    char* cast13 = (char*)&_ZGVZ6createvE5sixth;
    char t14 = *cast13;
    char c15 = 0;
    _Bool c16 = ((t14 == c15)) ? 1 : 0;
    if (c16) {
      int r17 = __cxa_guard_acquire(&_ZGVZ6createvE5sixth);
      int c18 = 0;
      _Bool c19 = ((r17 != c18)) ? 1 : 0;
      if (c19) {
        int c20 = 6;
        char* cast21 = (char*)&(_str_8);
        CreateAndDestroy__CreateAndDestroy(&_ZZ6createvE5sixth, c20, cast21);
        void* cast22 = (void*)&CreateAndDestroy___CreateAndDestroy;
        void* cast23 = (void*)&_ZZ6createvE5sixth;
        __cxa_atexit(cast22, cast23, &__dso_handle);
        __cxa_guard_release(&_ZGVZ6createvE5sixth);
      }
    }
    int c24 = 7;
    char* cast25 = (char*)&(_str_7);
    CreateAndDestroy__CreateAndDestroy(&seventh7, c24, cast25);
      char* cast26 = (char*)&(_str_9);
      struct std__basic_ostream_char__std__char_traits_char__* std27;
      __VERIFIER_nondet_memory(&std27, sizeof(std27));
      struct std__basic_ostream_char__std__char_traits_char__* std28;
      __VERIFIER_nondet_memory(&std28, sizeof(std28));
    {
      CreateAndDestroy___CreateAndDestroy(&seventh7);
    }
  {
    CreateAndDestroy___CreateAndDestroy(&fifth6);
  }
  return;
}

// function: main
int main() {
bb29:
  int __retval30;
  struct CreateAndDestroy second31;
  struct CreateAndDestroy fourth32;
  int c33 = 0;
  __retval30 = c33;
  char* cast34 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std35;
  __VERIFIER_nondet_memory(&std35, sizeof(std35));
  struct std__basic_ostream_char__std__char_traits_char__* std36;
  __VERIFIER_nondet_memory(&std36, sizeof(std36));
  int c37 = 2;
  char* cast38 = (char*)&(_str_2);
  CreateAndDestroy__CreateAndDestroy(&second31, c37, cast38);
    char* cast39 = (char*)&_ZGVZ4mainE5third;
    char t40 = *cast39;
    char c41 = 0;
    _Bool c42 = ((t40 == c41)) ? 1 : 0;
    if (c42) {
      int r43 = __cxa_guard_acquire(&_ZGVZ4mainE5third);
      int c44 = 0;
      _Bool c45 = ((r43 != c44)) ? 1 : 0;
      if (c45) {
        int c46 = 3;
        char* cast47 = (char*)&(_str_3);
        CreateAndDestroy__CreateAndDestroy(&_ZZ4mainE5third, c46, cast47);
        void* cast48 = (void*)&CreateAndDestroy___CreateAndDestroy;
        void* cast49 = (void*)&_ZZ4mainE5third;
        __cxa_atexit(cast48, cast49, &__dso_handle);
        __cxa_guard_release(&_ZGVZ4mainE5third);
      }
    }
    create();
    char* cast50 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std51;
    __VERIFIER_nondet_memory(&std51, sizeof(std51));
    struct std__basic_ostream_char__std__char_traits_char__* std52;
    __VERIFIER_nondet_memory(&std52, sizeof(std52));
    int c53 = 4;
    char* cast54 = (char*)&(_str_2);
    CreateAndDestroy__CreateAndDestroy(&fourth32, c53, cast54);
      char* cast55 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* std56;
      __VERIFIER_nondet_memory(&std56, sizeof(std56));
      struct std__basic_ostream_char__std__char_traits_char__* std57;
      __VERIFIER_nondet_memory(&std57, sizeof(std57));
      int c58 = 0;
      __retval30 = c58;
      int t59 = __retval30;
      int ret_val60 = t59;
      {
        CreateAndDestroy___CreateAndDestroy(&fourth32);
      }
      {
        CreateAndDestroy___CreateAndDestroy(&second31);
      }
      return ret_val60;
  int t61 = __retval30;
  return t61;
}

// function: _GLOBAL__sub_I_main.cpp
__attribute__((constructor)) void _GLOBAL__sub_I_main_cpp() {
bb62:
  __cxx_global_var_init();
  return;
}

