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

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct anon_struct_0 { unsigned char* __field0; unsigned char* __field1; unsigned char* __field2; };
struct anon_struct_1 { unsigned char* __field0[5]; };
struct std__exception;
struct DivideByZeroException { struct std__exception __field0; char* message; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_istream_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
extern void *_ZTVSt9exception[];
extern unsigned char _ZTI21DivideByZeroException[];
int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
char _ZTS21DivideByZeroException[24] = "21DivideByZeroException";
static const char _ZTISt9exception__n_[] = "_ZTISt9exception";
static void* _ZTISt9exception[2] = {(void*)0, (void*)_ZTISt9exception__n_};
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[42] = "Enter two integers (end-of-file to end): ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[18] = "The quotient is: ";
char _str_2[21] = "Exception occurred: ";
char _str_3[43] = "\nEnter two integers (end-of-file to end): ";
char _str_4[28] = "attempted to divide by zero";
char _str_5[2] = "0";
char _str_6[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/try_catch/ch13_1/main.cpp";
char __PRETTY_FUNCTION____ZN21DivideByZeroExceptionC2Ev[47] = "DivideByZeroException::DivideByZeroException()";
extern void *_ZTVSt9exception[];
void DivideByZeroException__DivideByZeroException(struct DivideByZeroException* p0);
void DivideByZeroException___DivideByZeroException_2(struct DivideByZeroException* p0);
double quotient(int p0, int p1);
extern int __gxx_personality_v0();
char* DivideByZeroException__whato___const(struct DivideByZeroException* p0);
int main();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
    char* cast7 = (char*)&(_str_4);
    t3->message = cast7;
    char* cast8 = (char*)&(_str_5);
    char* c9 = _str_6;
    unsigned int c10 = 20;
    char* cast11 = (char*)&(__PRETTY_FUNCTION____ZN21DivideByZeroExceptionC2Ev);
    __assert_fail(cast8, c9, c10, cast11);
  return;
}

// function: _ZN21DivideByZeroExceptionD2Ev
void DivideByZeroException___DivideByZeroException_2(struct DivideByZeroException* v12) {
bb13:
  struct DivideByZeroException* this14;
  this14 = v12;
  struct DivideByZeroException* t15 = this14;
  {
    struct std__exception* base16 = (struct std__exception*)((char *)t15 + 0);
    // externalized std:: op: std::exception::~exception()
    __VERIFIER_nondet_memory(base16, sizeof(*base16));
  }
  return;
}

// function: _Z8quotientii
double quotient(int v17, int v18) {
bb19:
  int numerator20;
  int denominator21;
  double __retval22;
  numerator20 = v17;
  denominator21 = v18;
    int t23 = denominator21;
    int c24 = 0;
    _Bool c25 = ((t23 == c24)) ? 1 : 0;
    if (c25) {
      static char exc_buf26[16] = {0};
      struct DivideByZeroException* exc27 = (struct DivideByZeroException*)exc_buf26;
      DivideByZeroException__DivideByZeroException(exc27);
      if (__cir_exc_active) {
        double __cir_eh_ret = (double)0;
        return __cir_eh_ret;
      }
      __cir_exc_ptr = (void*)exc27;
      __cir_exc_dtor = (void*)&DivideByZeroException___DivideByZeroException_2;
      __cir_exc_type = (const void*)__cir_eh_type__ZTI21DivideByZeroException;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI21DivideByZeroException;
      __cir_exc_active = 1;
      { double __cir_eh_ret = (double)0; return __cir_eh_ret; }
      __builtin_unreachable();
    }
  int t28 = numerator20;
  double cast29 = (double)t28;
  int t30 = denominator21;
  double cast31 = (double)t30;
  double b32 = cast29 / cast31;
  __retval22 = b32;
  double t33 = __retval22;
  return t33;
}

// function: _ZNK21DivideByZeroException5whatoEv
char* DivideByZeroException__whato___const(struct DivideByZeroException* v34) {
bb35:
  struct DivideByZeroException* this36;
  char* __retval37;
  this36 = v34;
  struct DivideByZeroException* t38 = this36;
  char* t39 = t38->message;
  __retval37 = t39;
  char* t40 = __retval37;
  return t40;
}

// function: main
int main() {
bb41:
  int __retval42;
  int number143;
  int number244;
  int result45;
  int c46 = 0;
  __retval42 = c46;
  char* cast47 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std48;
  __VERIFIER_nondet_memory(&std48, sizeof(std48));
    while (1) {
      struct std__basic_istream_char__std__char_traits_char__* std49;
      __VERIFIER_nondet_memory(&std49, sizeof(std49));
      struct std__basic_istream_char__std__char_traits_char__* std50;
      __VERIFIER_nondet_memory(&std50, sizeof(std50));
      void** v51 = (void**)std50;
      void* v52 = *((void**)v51);
      unsigned char* cast53 = (unsigned char*)v52;
      long c54 = -24;
      unsigned char* ptr55 = &(cast53)[c54];
      long* cast56 = (long*)ptr55;
      long t57 = *cast56;
      unsigned char* cast58 = (unsigned char*)std50;
      unsigned char* ptr59 = &(cast58)[t57];
      struct std__basic_istream_char__std__char_traits_char__* cast60 = (struct std__basic_istream_char__std__char_traits_char__*)ptr59;
      struct std__basic_ios_char__std__char_traits_char__* cast61 = (struct std__basic_ios_char__std__char_traits_char__*)cast60;
      _Bool std62;
      __VERIFIER_nondet_memory(&std62, sizeof(std62));
      if (!std62) break;
          struct DivideByZeroException* divideByZeroException63;
            int t65 = number143;
            result45 = t65;
            int t66 = number143;
            int t67 = number244;
            double r68 = quotient(t66, t67);
            if (__cir_exc_active) {
              goto cir_try_dispatch64;
            }
            int cast69 = (int)r68;
            result45 = cast69;
            char* cast70 = (char*)&(_str_1);
            struct std__basic_ostream_char__std__char_traits_char__* std71;
            __VERIFIER_nondet_memory(&std71, sizeof(std71));
            int t72 = result45;
            struct std__basic_ostream_char__std__char_traits_char__* std73;
            __VERIFIER_nondet_memory(&std73, sizeof(std73));
            struct std__basic_ostream_char__std__char_traits_char__* std74;
            __VERIFIER_nondet_memory(&std74, sizeof(std74));
          cir_try_dispatch64: ;
          if (__cir_exc_active) {
          if (__cir_exc_type == (const void*)__cir_eh_type__ZTI21DivideByZeroException) {
            int ca_tok75 = 0;
            void* ca_exn76 = (void*)__cir_exc_ptr;
            __cir_exc_active = 0;
              divideByZeroException63 = (struct DivideByZeroException*)__cir_exc_ptr;
              char* cast77 = (char*)&(_str_2);
              struct std__basic_ostream_char__std__char_traits_char__* std78;
              __VERIFIER_nondet_memory(&std78, sizeof(std78));
              struct DivideByZeroException* t79 = divideByZeroException63;
              char* r80 = DivideByZeroException__whato___const(t79);
              if (__cir_exc_active) {
                {
                  if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              struct std__basic_ostream_char__std__char_traits_char__* std81;
              __VERIFIER_nondet_memory(&std81, sizeof(std81));
              struct std__basic_ostream_char__std__char_traits_char__* std82;
              __VERIFIER_nondet_memory(&std82, sizeof(std82));
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
        char* cast83 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std84;
        __VERIFIER_nondet_memory(&std84, sizeof(std84));
    }
  struct std__basic_ostream_char__std__char_traits_char__* std85;
  __VERIFIER_nondet_memory(&std85, sizeof(std85));
  int c86 = 0;
  __retval42 = c86;
  int t87 = __retval42;
  return t87;
}

// function: _ZN21DivideByZeroExceptionD0Ev
void DivideByZeroException___DivideByZeroException(struct DivideByZeroException* v88) {
bb89:
  struct DivideByZeroException* this90;
  this90 = v88;
  struct DivideByZeroException* t91 = this90;
    DivideByZeroException___DivideByZeroException_2(t91);
  {
    void* cast92 = (void*)t91;
    unsigned long c93 = 16;
    operator_delete(cast92, c93);
  }
  return;
}

