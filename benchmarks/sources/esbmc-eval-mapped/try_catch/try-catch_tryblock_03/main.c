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
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS1E[3] = "1E";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[20] = "Handler in main(): ";
char _str_1[17] = "Handler in B(): ";
char _str_2[17] = "Exception in A()";
char _str_3[17] = "Handler in A(): ";
extern int __gxx_personality_v0();
void B__B(struct B* p0);
int main();
void E__E(struct E* p0, char* p1);
void A__A(struct A* p0);

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _ZN1BC2Ev
void B__B(struct B* v0) {
bb1:
  struct B* this2;
  this2 = v0;
  struct B* t3 = this2;
    struct E* e4;
      struct A* base6 = (struct A*)((char *)t3 + 0);
      A__A(base6);
      if (__cir_exc_active) {
        goto cir_try_dispatch5;
      }
    cir_try_dispatch5: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI1E) {
      int ca_tok7 = 0;
      void* ca_exn8 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        e4 = (struct E*)__cir_exc_ptr;
        char* cast9 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std10;
        __VERIFIER_nondet_memory(&std10, sizeof(std10));
        struct E* t11 = e4;
        char* t12 = t11->error;
        struct std__basic_ostream_char__std__char_traits_char__* std13;
        __VERIFIER_nondet_memory(&std13, sizeof(std13));
        struct std__basic_ostream_char__std__char_traits_char__* std14;
        __VERIFIER_nondet_memory(&std14, sizeof(std14));
      {
        if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
      }
    }
    else {
      __cir_exc_active = 1;
      return;
    return;
    }
    }
  return;
}

// function: main
int main() {
bb15:
  int __retval16;
  int c17 = 0;
  __retval16 = c17;
    struct B cow18;
    struct E* e19;
      B__B(&cow18);
      if (__cir_exc_active) {
        goto cir_try_dispatch20;
      }
    cir_try_dispatch20: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI1E) {
      int ca_tok21 = 0;
      void* ca_exn22 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        e19 = (struct E*)__cir_exc_ptr;
        char* cast23 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* std24;
        __VERIFIER_nondet_memory(&std24, sizeof(std24));
        struct E* t25 = e19;
        char* t26 = t25->error;
        struct std__basic_ostream_char__std__char_traits_char__* std27;
        __VERIFIER_nondet_memory(&std27, sizeof(std27));
        struct std__basic_ostream_char__std__char_traits_char__* std28;
        __VERIFIER_nondet_memory(&std28, sizeof(std28));
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
  int t29 = __retval16;
  return t29;
}

// function: _ZN1EC2EPKc
void E__E(struct E* v30, char* v31) {
bb32:
  struct E* this33;
  char* arg34;
  this33 = v30;
  arg34 = v31;
  struct E* t35 = this33;
  char* t36 = arg34;
  t35->error = t36;
  return;
}

// function: _ZN1AC2Ev
void A__A(struct A* v37) {
bb38:
  struct A* this39;
  this39 = v37;
  struct A* t40 = this39;
    struct E* e41;
      static char exc_buf43[8] = {0};
      struct E* exc44 = (struct E*)exc_buf43;
      char* cast45 = (char*)&(_str_2);
      E__E(exc44, cast45);
      if (__cir_exc_active) {
        goto cir_try_dispatch42;
      }
      __cir_exc_ptr = (void*)exc44;
      __cir_exc_dtor = (void*)0;
      __cir_exc_type = (const void*)__cir_eh_type__ZTI1E;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI1E;
      __cir_exc_active = 1;
      goto cir_try_dispatch42;
      __builtin_unreachable();
    cir_try_dispatch42: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI1E) {
      int ca_tok46 = 0;
      void* ca_exn47 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        e41 = (struct E*)__cir_exc_ptr;
        char* cast48 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std49;
        __VERIFIER_nondet_memory(&std49, sizeof(std49));
        struct E* t50 = e41;
        char* t51 = t50->error;
        struct std__basic_ostream_char__std__char_traits_char__* std52;
        __VERIFIER_nondet_memory(&std52, sizeof(std52));
        struct std__basic_ostream_char__std__char_traits_char__* std53;
        __VERIFIER_nondet_memory(&std53, sizeof(std53));
      {
        if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
      }
    }
    else {
      __cir_exc_active = 1;
      return;
    return;
    }
    }
  return;
}

