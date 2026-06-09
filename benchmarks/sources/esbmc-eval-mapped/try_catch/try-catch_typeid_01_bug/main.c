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
static const char __cir_eh_type__ZTISt10bad_typeid[] = "_ZTISt10bad_typeid";

// Struct definitions (auto-parsed)
struct Polymorphic { void* __field0; };
struct std__type_info;
struct std__bad_typeid;

static const char _ZTISt10bad_typeid__n_[] = "_ZTISt10bad_typeid";
static void* _ZTISt10bad_typeid[2] = {(void*)0, (void*)_ZTISt10bad_typeid__n_};
char _str[2] = "0";
char _str_1[121] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/try_catch/try-catch_typeid_01_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern int __gxx_personality_v0();
extern void __cxa_bad_typeid();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int c2 = 0;
  __retval1 = c2;
    struct Polymorphic* pb3;
    char* name4;
    struct std__bad_typeid* bt5;
      struct Polymorphic* c7 = ((void*)0);
      pb3 = c7;
      struct Polymorphic* t8 = pb3;
      struct Polymorphic* c9 = ((void*)0);
      _Bool c10 = ((t8 == c9)) ? 1 : 0;
      if (c10) {
        __cxa_bad_typeid();
        if (__cir_exc_active) {
          goto cir_try_dispatch6;
        }
        __builtin_unreachable();
      }
      void** v11 = (void**)t8;
      void* v12 = *((void**)v11);
      long c13 = -1;
      struct std__type_info** cast14 = (struct std__type_info**)v12;
      struct std__type_info** ptr15 = &(cast14)[c13];
      struct std__type_info* t16 = *ptr15;
      char* std17;
      __VERIFIER_nondet_memory(&std17, sizeof(std17));
      name4 = std17;
    cir_try_dispatch6: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTISt10bad_typeid) {
      int ca_tok18 = 0;
      void* ca_exn19 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        bt5 = (struct std__bad_typeid*)__cir_exc_ptr;
        char* cast20 = (char*)&(_str);
        char* c21 = _str_1;
        unsigned int c22 = 23;
        char* cast23 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast20, c21, c22, cast23);
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
  int c24 = 0;
  __retval1 = c24;
  int t25 = __retval1;
  return t25;
}

