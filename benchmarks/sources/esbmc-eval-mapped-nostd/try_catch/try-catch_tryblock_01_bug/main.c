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
struct Y { unsigned char __field0; };

static const char _ZTIi__n_[] = "_ZTIi";
static void* _ZTIi[2] = {(void*)0, (void*)_ZTIi__n_};
void Y__Y(struct Y* p0);
int main();
extern int __gxx_personality_v0();
void X__X(struct X* p0);

// function: _ZN1YC2Ev
void Y__Y(struct Y* v0) {
bb1:
  struct Y* this2;
  this2 = v0;
  struct Y* t3 = this2;
    int unnamed4;
      struct X* base6 = (struct X*)((char *)t3 + 0);
      X__X(base6);
      if (__cir_exc_active) {
        goto cir_try_dispatch5;
      }
    cir_try_dispatch5: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTIi) {
      int ca_tok7 = 0;
      void* ca_exn8 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        unnamed4 = *(int*)__cir_exc_ptr;
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
bb9:
  int __retval10;
  struct Y y11;
  int c12 = 0;
  __retval10 = c12;
  Y__Y(&y11);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  int c13 = 0;
  __retval10 = c13;
  int t14 = __retval10;
  return t14;
}

// function: _ZN1XC2Ev
void X__X(struct X* v15) {
bb16:
  struct X* this17;
  this17 = v15;
  struct X* t18 = this17;
  static char exc_buf19[4] = {0};
  int* exc20 = (int*)exc_buf19;
  int c21 = 5;
  *exc20 = c21;
  __cir_exc_ptr = (void*)exc20;
  __cir_exc_dtor = (void*)0;
  __cir_exc_type = (const void*)__cir_eh_type__ZTIi;
  __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTIi;
  __cir_exc_active = 1;
  return;
  __builtin_unreachable();
}

