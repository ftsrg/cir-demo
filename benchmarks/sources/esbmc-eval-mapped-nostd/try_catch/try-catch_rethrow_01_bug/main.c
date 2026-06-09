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
static const char __cir_eh_type__ZTIPFSt9exceptionvE[] = "_ZTIPFSt9exceptionvE";
static const char __cir_eh_type__ZTISt9exception[] = "_ZTISt9exception";

// Struct definitions (auto-parsed)
struct anon_struct_0 { unsigned char* __field0; unsigned char* __field1; };
struct anon_struct_1 { unsigned char* __field0; unsigned char* __field1; unsigned int __field2; unsigned char* __field3; };
struct std__exception { void* __field0; };

extern void *_ZTVN10__cxxabiv119__pointer_type_infoE[];
extern void *_ZTVN10__cxxabiv120__function_type_infoE[];
extern unsigned char _ZTIFSt9exceptionvE[];
extern unsigned char _ZTIPFSt9exceptionvE[];
extern void *_ZTVN10__cxxabiv119__pointer_type_infoE[];
char _ZTSPFSt9exceptionvE[17] = "PFSt9exceptionvE";
extern void *_ZTVN10__cxxabiv120__function_type_infoE[];
char _ZTSFSt9exceptionvE[16] = "FSt9exceptionvE";
static const char _ZTISt9exception__n_[] = "_ZTISt9exception";
static void* _ZTISt9exception[2] = {(void*)0, (void*)_ZTISt9exception__n_};
extern int __gxx_personality_v0();
void throwException();
int main();

// function: _Z14throwExceptionv
void throwException() {
bb0:
    void* unnamed1;
      __cir_exc_active = 1;
      goto cir_try_dispatch2;
      __builtin_unreachable();
    cir_try_dispatch2: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTIPFSt9exceptionvE) {
      int ca_tok3 = 0;
      void* ca_exn4 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        unnamed1 = *(void**)__cir_exc_ptr;
          void* unnamed5;
            __cir_exc_active = 1;
            {
              if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
            }
            goto cir_try_dispatch6;
            __builtin_unreachable();
          cir_try_dispatch6: ;
          if (__cir_exc_active) {
          if (__cir_exc_type == (const void*)__cir_eh_type__ZTIPFSt9exceptionvE) {
            int ca_tok7 = 0;
            void* ca_exn8 = (void*)__cir_exc_ptr;
            __cir_exc_active = 0;
              unnamed5 = *(void**)__cir_exc_ptr;
                void* unnamed9;
                  __cir_exc_active = 1;
                  {
                    if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                  }
                  goto cir_try_dispatch10;
                  __builtin_unreachable();
                cir_try_dispatch10: ;
                if (__cir_exc_active) {
                if (__cir_exc_type == (const void*)__cir_eh_type__ZTIPFSt9exceptionvE) {
                  int ca_tok11 = 0;
                  void* ca_exn12 = (void*)__cir_exc_ptr;
                  __cir_exc_active = 0;
                    unnamed9 = *(void**)__cir_exc_ptr;
                      void* unnamed13;
                        __cir_exc_active = 1;
                        {
                          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                        }
                        goto cir_try_dispatch14;
                        __builtin_unreachable();
                      cir_try_dispatch14: ;
                      if (__cir_exc_active) {
                      if (__cir_exc_type == (const void*)__cir_eh_type__ZTIPFSt9exceptionvE) {
                        int ca_tok15 = 0;
                        void* ca_exn16 = (void*)__cir_exc_ptr;
                        __cir_exc_active = 0;
                          unnamed13 = *(void**)__cir_exc_ptr;
                            void* unnamed17;
                              __cir_exc_active = 1;
                              {
                                if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                              }
                              goto cir_try_dispatch18;
                              __builtin_unreachable();
                            cir_try_dispatch18: ;
                            if (__cir_exc_active) {
                            if (__cir_exc_type == (const void*)__cir_eh_type__ZTIPFSt9exceptionvE) {
                              int ca_tok19 = 0;
                              void* ca_exn20 = (void*)__cir_exc_ptr;
                              __cir_exc_active = 0;
                                unnamed17 = *(void**)__cir_exc_ptr;
                                __cir_exc_active = 1;
                                {
                                  if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                                }
                                return;
                                __builtin_unreachable();
                            }
                            else {
                              __cir_exc_active = 1;
                              return;
                            return;
                            }
                            }
                      }
                      else {
                        __cir_exc_active = 1;
                        return;
                      return;
                      }
                      }
                }
                else {
                  __cir_exc_active = 1;
                  return;
                return;
                }
                }
          }
          else {
            __cir_exc_active = 1;
            return;
          return;
          }
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
bb21:
  int __retval22;
  int c23 = 0;
  __retval22 = c23;
    struct std__exception* caughtException24;
      throwException();
      if (__cir_exc_active) {
        goto cir_try_dispatch25;
      }
    cir_try_dispatch25: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTISt9exception) {
      int ca_tok26 = 0;
      void* ca_exn27 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        caughtException24 = (struct std__exception*)__cir_exc_ptr;
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
  int c28 = 0;
  __retval22 = c28;
  int t29 = __retval22;
  return t29;
}

