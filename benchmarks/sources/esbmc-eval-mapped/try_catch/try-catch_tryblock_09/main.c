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

static const char _ZTIi__n_[] = "_ZTIi";
static void* _ZTIi[2] = {(void*)0, (void*)_ZTIi__n_};
extern int __gxx_personality_v0();
int main();

// function: main
int main() {
bb0:
  int __retval1;
  int c2 = 0;
  __retval1 = c2;
    int unnamed3;
      static char exc_buf5[4] = {0};
      int* exc6 = (int*)exc_buf5;
      int c7 = 5;
      *exc6 = c7;
      __cir_exc_ptr = (void*)exc6;
      __cir_exc_dtor = (void*)0;
      __cir_exc_type = (const void*)__cir_eh_type__ZTIi;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTIi;
      __cir_exc_active = 1;
      goto cir_try_dispatch4;
      __builtin_unreachable();
    cir_try_dispatch4: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTIi) {
      int ca_tok8 = 0;
      void* ca_exn9 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        unnamed3 = *(int*)__cir_exc_ptr;
        int c10 = -1;
        __retval1 = c10;
        int t11 = __retval1;
        int ret_val12 = t11;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return ret_val12;
    }
    else {
      __cir_exc_active = 1;
      { int __cir_eh_ret = (int)0; return __cir_eh_ret; }
    { int __cir_eh_ret = (int)0; return __cir_eh_ret; }
    }
    }
  int t13 = __retval1;
  return t13;
}

