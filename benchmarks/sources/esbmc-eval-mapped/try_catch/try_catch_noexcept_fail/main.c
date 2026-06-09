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
static const char __cir_eh_type__ZTId[] = "_ZTId";

static const char _ZTId__n_[] = "_ZTId";
static void* _ZTId[2] = {(void*)0, (void*)_ZTId__n_};
void myfunction();
extern int __gxx_personality_v0();
int main();

// function: _Z10myfunctionv
void myfunction() {
bb0:
  static char exc_buf1[8] = {0};
  double* exc2 = (double*)exc_buf1;
  double c3 = 0x1.4p2;
  *exc2 = c3;
  __cir_exc_ptr = (void*)exc2;
  __cir_exc_dtor = (void*)0;
  __cir_exc_type = (const void*)__cir_eh_type__ZTId;
  __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTId;
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
      myfunction();
    cir_try_dispatch7: ;
    if (__cir_exc_active) {
    {
      int ca_tok8 = 0;
      void* ca_exn9 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        int c10 = 3;
        __retval5 = c10;
        int t11 = __retval5;
        int ret_val12 = t11;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return ret_val12;
    }
    }
  int c13 = 0;
  __retval5 = c13;
  int t14 = __retval5;
  return t14;
}

