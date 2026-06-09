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

void myfunction();
extern int __gxx_personality_v0();
int main();

// function: _Z10myfunctionv
void myfunction() {
bb0:
  return;
}

// function: main
int main() {
bb1:
  int __retval2;
  int c3 = 0;
  __retval2 = c3;
      myfunction();
    cir_try_dispatch4: ;
    if (__cir_exc_active) {
    {
      int ca_tok5 = 0;
      void* ca_exn6 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        int c7 = 3;
        __retval2 = c7;
        int t8 = __retval2;
        int ret_val9 = t8;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return ret_val9;
    }
    }
  int c10 = 0;
  __retval2 = c10;
  int t11 = __retval2;
  return t11;
}

