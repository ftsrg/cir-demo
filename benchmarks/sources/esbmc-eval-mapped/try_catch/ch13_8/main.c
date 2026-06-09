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
static const char __cir_eh_type__ZTI21DivideByZeroException[] = "_ZTI21DivideByZeroException";

// Struct definitions (auto-parsed)
struct anon_struct_0 { unsigned char* __field0; unsigned char* __field1; unsigned char* __field2; };
struct anon_struct_1 { unsigned char* __field0[5]; };
struct std__exception;
struct DivideByZeroException { struct std__exception __field0; char* message; };

extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
extern void *_ZTVSt9exception[];
extern unsigned char _ZTI21DivideByZeroException[];
extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
char _ZTS21DivideByZeroException[24] = "21DivideByZeroException";
static const char _ZTISt9exception__n_[] = "_ZTISt9exception";
static void* _ZTISt9exception[2] = {(void*)0, (void*)_ZTISt9exception__n_};
char _str[28] = "attempted to divide by zero";
extern void *_ZTVSt9exception[];
void DivideByZeroException__DivideByZeroException(struct DivideByZeroException* p0);
void DivideByZeroException___DivideByZeroException_2(struct DivideByZeroException* p0);
double quotient(int p0, int p1);
extern int __gxx_personality_v0();
int main();
extern void *malloc(unsigned long);
extern void free(void*);
void operator_delete(void* p0, unsigned long p1) { free(p0); }
void DivideByZeroException___DivideByZeroException(struct DivideByZeroException* p0);
extern char* std__exception__what___const(struct std__exception* p0);

void *_ZTV21DivideByZeroException[] = { (void*)0, (void*)0, (void*)&DivideByZeroException___DivideByZeroException_2, (void*)&DivideByZeroException___DivideByZeroException, (void*)&std__exception__what___const };

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _ZN21DivideByZeroExceptionC2Ev
void DivideByZeroException__DivideByZeroException(struct DivideByZeroException* v0) {
bb1:
  struct DivideByZeroException* this2;
  this2 = v0;
  struct DivideByZeroException* t3 = this2;
  struct std__exception* base4 = (struct std__exception*)((char *)t3 + 0);
  // externalized std:: op: std::exception::exception()
  __VERIFIER_nondet_memory(base4, sizeof(*base4));
    void* v5 = (void*)&_ZTV21DivideByZeroException[2];
    void** v6 = (void**)t3;
    *(void**)(v6) = (void*)v5;
    char* cast7 = (char*)&(_str);
    t3->message = cast7;
  return;
}

// function: _ZN21DivideByZeroExceptionD2Ev
void DivideByZeroException___DivideByZeroException_2(struct DivideByZeroException* v8) {
bb9:
  struct DivideByZeroException* this10;
  this10 = v8;
  struct DivideByZeroException* t11 = this10;
  {
    struct std__exception* base12 = (struct std__exception*)((char *)t11 + 0);
    // externalized std:: op: std::exception::~exception()
    __VERIFIER_nondet_memory(base12, sizeof(*base12));
  }
  return;
}

// function: _Z8quotientii
double quotient(int v13, int v14) {
bb15:
  int numerator16;
  int denominator17;
  double __retval18;
  numerator16 = v13;
  denominator17 = v14;
    int t19 = denominator17;
    int c20 = 0;
    _Bool c21 = ((t19 == c20)) ? 1 : 0;
    if (c21) {
      static char exc_buf22[16] = {0};
      struct DivideByZeroException* exc23 = (struct DivideByZeroException*)exc_buf22;
      DivideByZeroException__DivideByZeroException(exc23);
      if (__cir_exc_active) {
        double __cir_eh_ret = (double)0;
        return __cir_eh_ret;
      }
      __cir_exc_ptr = (void*)exc23;
      __cir_exc_dtor = (void*)&DivideByZeroException___DivideByZeroException_2;
      __cir_exc_type = (const void*)__cir_eh_type__ZTI21DivideByZeroException;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI21DivideByZeroException;
      __cir_exc_active = 1;
      { double __cir_eh_ret = (double)0; return __cir_eh_ret; }
      __builtin_unreachable();
    }
  int t24 = numerator16;
  double cast25 = (double)t24;
  int t26 = denominator17;
  double cast27 = (double)t26;
  double b28 = cast25 / cast27;
  __retval18 = b28;
  double t29 = __retval18;
  return t29;
}

// function: main
int main() {
bb30:
  int __retval31;
  int number132;
  int number233;
  int result34;
  int c35 = 0;
  __retval31 = c35;
    struct DivideByZeroException* divideByZeroException36;
      int t38 = number132;
      int t39 = number233;
      double r40 = quotient(t38, t39);
      if (__cir_exc_active) {
        goto cir_try_dispatch37;
      }
      int cast41 = (int)r40;
      result34 = cast41;
    cir_try_dispatch37: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI21DivideByZeroException) {
      int ca_tok42 = 0;
      void* ca_exn43 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        divideByZeroException36 = (struct DivideByZeroException*)__cir_exc_ptr;
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
  int c44 = 0;
  __retval31 = c44;
  int t45 = __retval31;
  return t45;
}

// function: _ZN21DivideByZeroExceptionD0Ev
void DivideByZeroException___DivideByZeroException(struct DivideByZeroException* v46) {
bb47:
  struct DivideByZeroException* this48;
  this48 = v46;
  struct DivideByZeroException* t49 = this48;
    DivideByZeroException___DivideByZeroException_2(t49);
  {
    void* cast50 = (void*)t49;
    unsigned long c51 = 16;
    operator_delete(cast50, c51);
  }
  return;
}

