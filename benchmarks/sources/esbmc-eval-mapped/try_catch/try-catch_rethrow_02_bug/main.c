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
struct anon_struct_2 { unsigned char* __field0[5]; };
struct std__exception;

extern void *_ZTVN10__cxxabiv119__pointer_type_infoE[];
extern void *_ZTVN10__cxxabiv120__function_type_infoE[];
extern void *_ZTVSt9exception[];
extern unsigned char _ZTIFSt9exceptionvE[];
extern unsigned char _ZTIPFSt9exceptionvE[];
static const char _ZTISt9exception__n_[] = "_ZTISt9exception";
static void* _ZTISt9exception[2] = {(void*)0, (void*)_ZTISt9exception__n_};
extern void *_ZTVN10__cxxabiv119__pointer_type_infoE[];
char _ZTSPFSt9exceptionvE[17] = "PFSt9exceptionvE";
extern void *_ZTVN10__cxxabiv120__function_type_infoE[];
char _ZTSFSt9exceptionvE[16] = "FSt9exceptionvE";
char _str[2] = "0";
char _str_1[122] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/try_catch/try-catch_rethrow_02_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern void *_ZTVSt9exception[];
extern int __gxx_personality_v0();
void std__exception___exception(struct std__exception* p0) {}
void throwException();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z14throwExceptionv
void throwException() {
bb0:
    void* unnamed1;
      static char exc_buf3[8] = {0};
      struct std__exception* exc4 = (struct std__exception*)exc_buf3;
      // externalized std:: op: std::exception::exception()
      __VERIFIER_nondet_memory(exc4, sizeof(*exc4));
      __cir_exc_ptr = (void*)exc4;
      __cir_exc_dtor = (void*)&std__exception___exception;
      __cir_exc_type = (const void*)__cir_eh_type__ZTISt9exception;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTISt9exception;
      __cir_exc_active = 1;
      goto cir_try_dispatch2;
      __builtin_unreachable();
    cir_try_dispatch2: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTIPFSt9exceptionvE) {
      int ca_tok5 = 0;
      void* ca_exn6 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        unnamed1 = *(void**)__cir_exc_ptr;
          void* unnamed7;
            __cir_exc_active = 1;
            {
              if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
            }
            goto cir_try_dispatch8;
            __builtin_unreachable();
          cir_try_dispatch8: ;
          if (__cir_exc_active) {
          if (__cir_exc_type == (const void*)__cir_eh_type__ZTIPFSt9exceptionvE) {
            int ca_tok9 = 0;
            void* ca_exn10 = (void*)__cir_exc_ptr;
            __cir_exc_active = 0;
              unnamed7 = *(void**)__cir_exc_ptr;
                void* unnamed11;
                  __cir_exc_active = 1;
                  {
                    if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                  }
                  goto cir_try_dispatch12;
                  __builtin_unreachable();
                cir_try_dispatch12: ;
                if (__cir_exc_active) {
                if (__cir_exc_type == (const void*)__cir_eh_type__ZTIPFSt9exceptionvE) {
                  int ca_tok13 = 0;
                  void* ca_exn14 = (void*)__cir_exc_ptr;
                  __cir_exc_active = 0;
                    unnamed11 = *(void**)__cir_exc_ptr;
                      void* unnamed15;
                        __cir_exc_active = 1;
                        {
                          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                        }
                        goto cir_try_dispatch16;
                        __builtin_unreachable();
                      cir_try_dispatch16: ;
                      if (__cir_exc_active) {
                      if (__cir_exc_type == (const void*)__cir_eh_type__ZTIPFSt9exceptionvE) {
                        int ca_tok17 = 0;
                        void* ca_exn18 = (void*)__cir_exc_ptr;
                        __cir_exc_active = 0;
                          unnamed15 = *(void**)__cir_exc_ptr;
                            void* unnamed19;
                              __cir_exc_active = 1;
                              {
                                if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                              }
                              goto cir_try_dispatch20;
                              __builtin_unreachable();
                            cir_try_dispatch20: ;
                            if (__cir_exc_active) {
                            if (__cir_exc_type == (const void*)__cir_eh_type__ZTIPFSt9exceptionvE) {
                              int ca_tok21 = 0;
                              void* ca_exn22 = (void*)__cir_exc_ptr;
                              __cir_exc_active = 0;
                                unnamed19 = *(void**)__cir_exc_ptr;
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
bb23:
  int __retval24;
  int c25 = 0;
  __retval24 = c25;
    struct std__exception* caughtException26;
      throwException();
      if (__cir_exc_active) {
        goto cir_try_dispatch27;
      }
    cir_try_dispatch27: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTISt9exception) {
      int ca_tok28 = 0;
      void* ca_exn29 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        caughtException26 = (struct std__exception*)__cir_exc_ptr;
        char* cast30 = (char*)&(_str);
        char* c31 = _str_1;
        unsigned int c32 = 49;
        char* cast33 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast30, c31, c32, cast33);
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
  int c34 = 0;
  __retval24 = c34;
  int t35 = __retval24;
  return t35;
}

