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
static const char __cir_eh_type__ZTIPi[] = "_ZTIPi";

static const char _ZTIPi__n_[] = "_ZTIPi";
static void* _ZTIPi[2] = {(void*)0, (void*)_ZTIPi__n_};
char _str[2] = "0";
char _str_1[121] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/try_catch/try-catch_simple_17_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern int __gxx_personality_v0();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: main
int main() {
bb0:
  int __retval1;
  int c2 = 0;
  __retval1 = c2;
    int array3[5];
    int* unnamed4;
      static char exc_buf6[8] = {0};
      int** exc7 = (int**)exc_buf6;
      int* cast8 = (int*)&(array3);
      *exc7 = cast8;
      __cir_exc_ptr = (void*)exc7;
      __cir_exc_dtor = (void*)0;
      __cir_exc_type = (const void*)__cir_eh_type__ZTIPi;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTIPi;
      __cir_exc_active = 1;
      goto cir_try_dispatch5;
      __builtin_unreachable();
    cir_try_dispatch5: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTIPi) {
      int ca_tok9 = 0;
      void* ca_exn10 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        unnamed4 = *(int**)__cir_exc_ptr;
        char* cast11 = (char*)&(_str);
        char* c12 = _str_1;
        unsigned int c13 = 16;
        char* cast14 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast11, c12, c13, cast14);
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
  int c15 = 0;
  __retval1 = c15;
  int t16 = __retval1;
  return t16;
}

