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
struct X { unsigned char __field0; };

static const char _ZTIi__n_[] = "_ZTIi";
static void* _ZTIi[2] = {(void*)0, (void*)_ZTIi__n_};
extern int __gxx_personality_v0();
void X__X(struct X* p0);
int main();

// function: _ZN1XC2Ev
void X__X(struct X* v0) {
bb1:
  struct X* this2;
  this2 = v0;
  struct X* t3 = this2;
  static char exc_buf4[4] = {0};
  int* exc5 = (int*)exc_buf4;
  int c6 = 5;
  *exc5 = c6;
  __cir_exc_ptr = (void*)exc5;
  __cir_exc_dtor = (void*)0;
  __cir_exc_type = (const void*)__cir_eh_type__ZTIi;
  __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTIi;
  __cir_exc_active = 1;
  return;
  __builtin_unreachable();
}

// function: main
int main() {
bb7:
  int __retval8;
  int c9 = 0;
  __retval8 = c9;
    struct X x10;
    int e11;
      X__X(&x10);
    cir_try_dispatch12: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTIi) {
      int ca_tok13 = 0;
      void* ca_exn14 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        e11 = *(int*)__cir_exc_ptr;
        int c15 = 1;
        __retval8 = c15;
        int t16 = __retval8;
        int ret_val17 = t16;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return ret_val17;
    }
    else {
      __cir_exc_active = 1;
      { int __cir_eh_ret = (int)0; return __cir_eh_ret; }
    { int __cir_eh_ret = (int)0; return __cir_eh_ret; }
    }
    }
  int c18 = 0;
  __retval8 = c18;
  int t19 = __retval8;
  return t19;
}

