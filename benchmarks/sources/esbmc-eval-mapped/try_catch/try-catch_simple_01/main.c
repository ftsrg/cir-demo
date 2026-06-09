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
static const char __cir_eh_type__ZTIi[] = "_ZTIi";

// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
static const char _ZTIi__n_[] = "_ZTIi";
static void* _ZTIi[2] = {(void*)0, (void*)_ZTIi__n_};
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cerr __attribute__((aligned(8)));
char _str[12] = "caught int\n";
void myfunction();
extern int __gxx_personality_v0();
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z10myfunctionv
void myfunction() {
bb0:
  static char exc_buf1[4] = {0};
  int* exc2 = (int*)exc_buf1;
  int c3 = 1;
  *exc2 = c3;
  __cir_exc_ptr = (void*)exc2;
  __cir_exc_dtor = (void*)0;
  __cir_exc_type = (const void*)__cir_eh_type__ZTIi;
  __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTIi;
  __cir_exc_active = 1;
  return;
  __builtin_unreachable();
}

// function: main
int main() {
bb4:
  int __retval5;
  int c6 = 0;
  __retval5 = c6;
    int unnamed7;
      myfunction();
      if (__cir_exc_active) {
        goto cir_try_dispatch8;
      }
    cir_try_dispatch8: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTIi) {
      int ca_tok9 = 0;
      void* ca_exn10 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        unnamed7 = *(int*)__cir_exc_ptr;
        char* cast11 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* std12;
        __VERIFIER_nondet_memory(&std12, sizeof(std12));
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
  int c13 = 0;
  __retval5 = c13;
  int t14 = __retval5;
  return t14;
}

