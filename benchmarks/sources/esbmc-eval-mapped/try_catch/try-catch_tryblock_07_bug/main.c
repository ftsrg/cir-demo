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
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;
// Per-RTTI address tags: each thrown/caught type symbol gets a
// distinct storage location so catch dispatch is a pointer compare.
static const char __cir_eh_type__ZTI1E[] = "_ZTI1E";

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct A { unsigned char __field0; };
struct B { unsigned char __field0; };
struct E { char* error; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct anon_struct_0 { unsigned char* __field0; unsigned char* __field1; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern unsigned char _ZTI1E[];
extern signed char __dso_handle;
long _ZGVZ4mainE3cow __attribute__((aligned(8))) = 0;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
struct A _ZZ4mainE3cow;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[8] = "In main";
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS1E[3] = "1E";
char _str_1[2] = "0";
char _str_2[123] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/try_catch/try-catch_tryblock_07_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[18] = "Exception in ~A()";
char _str_4[18] = "Exception in ~B()";
extern void __cxa_guard_release(long* p0);
extern void __cxa_atexit(void* p0, void* p1, signed char* p2);
extern int __cxa_guard_acquire(long* p0);
extern int __gxx_personality_v0();
void A___A(struct A* p0);
void B___B(struct B* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();
void E__E(struct E* p0, char* p1);

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _ZN1AD2Ev
void A___A(struct A* v0) {
bb1:
  struct A* this2;
  this2 = v0;
  struct A* t3 = this2;
  static char exc_buf4[8] = {0};
  struct E* exc5 = (struct E*)exc_buf4;
  char* cast6 = (char*)&(_str_3);
  E__E(exc5, cast6);
  if (__cir_exc_active) {
    return;
  }
  __cir_exc_ptr = (void*)exc5;
  __cir_exc_dtor = (void*)0;
  __cir_exc_type = (const void*)__cir_eh_type__ZTI1E;
  __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI1E;
  __cir_exc_active = 1;
  return;
  __builtin_unreachable();
}

// function: _ZN1BD2Ev
void B___B(struct B* v7) {
bb8:
  struct B* this9;
  this9 = v7;
  struct B* t10 = this9;
  static char exc_buf11[8] = {0};
  struct E* exc12 = (struct E*)exc_buf11;
  char* cast13 = (char*)&(_str_4);
  E__E(exc12, cast13);
  if (__cir_exc_active) {
    return;
  }
  __cir_exc_ptr = (void*)exc12;
  __cir_exc_dtor = (void*)0;
  __cir_exc_type = (const void*)__cir_eh_type__ZTI1E;
  __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI1E;
  __cir_exc_active = 1;
  return;
  __builtin_unreachable();
}

// function: main
int main() {
bb14:
  int __retval15;
  int c16 = 0;
  __retval15 = c16;
    struct B bull17;
    struct E* e18;
      char* cast20 = (char*)&(_str);
      struct std__basic_ostream_char__std__char_traits_char__* std21;
      __VERIFIER_nondet_memory(&std21, sizeof(std21));
      struct std__basic_ostream_char__std__char_traits_char__* std22;
      __VERIFIER_nondet_memory(&std22, sizeof(std22));
      char* cast23 = (char*)&_ZGVZ4mainE3cow;
      char t24 = *cast23;
      char c25 = 0;
      _Bool c26 = ((t24 == c25)) ? 1 : 0;
      if (c26) {
        int r27 = __cxa_guard_acquire(&_ZGVZ4mainE3cow);
        if (__cir_exc_active) {
          goto cir_try_dispatch19;
        }
        int c28 = 0;
        _Bool c29 = ((r27 != c28)) ? 1 : 0;
        if (c29) {
          void* cast30 = (void*)&A___A;
          void* cast31 = (void*)&_ZZ4mainE3cow;
          __cxa_atexit(cast30, cast31, &__dso_handle);
          if (__cir_exc_active) {
            goto cir_try_dispatch19;
          }
          __cxa_guard_release(&_ZGVZ4mainE3cow);
          if (__cir_exc_active) {
            goto cir_try_dispatch19;
          }
        }
      }
      {
        B___B(&bull17);
      }
    cir_try_dispatch19: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI1E) {
      int ca_tok32 = 0;
      void* ca_exn33 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        e18 = (struct E*)__cir_exc_ptr;
        char* cast34 = (char*)&(_str_1);
        char* c35 = _str_2;
        unsigned int c36 = 34;
        char* cast37 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast34, c35, c36, cast37);
        struct E* t38 = e18;
        char* t39 = t38->error;
        struct std__basic_ostream_char__std__char_traits_char__* std40;
        __VERIFIER_nondet_memory(&std40, sizeof(std40));
        struct std__basic_ostream_char__std__char_traits_char__* std41;
        __VERIFIER_nondet_memory(&std41, sizeof(std41));
      {
        if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
      }
    }
    else {
      __cir_exc_active = 1;
      { int __cir_eh_ret = (int)0; return __cir_eh_ret; }
    { int __cir_eh_ret = (int)0; return __cir_eh_ret; }
    }
    }
  int t42 = __retval15;
  return t42;
}

// function: _ZN1EC2EPKc
void E__E(struct E* v43, char* v44) {
bb45:
  struct E* this46;
  char* arg47;
  this46 = v43;
  arg47 = v44;
  struct E* t48 = this46;
  char* t49 = arg47;
  t48->error = t49;
  return;
}

