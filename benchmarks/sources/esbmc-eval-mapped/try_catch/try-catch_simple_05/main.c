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
struct std__ctype_char_;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

static const char _ZTIi__n_[] = "_ZTIi";
static void* _ZTIi[2] = {(void*)0, (void*)_ZTIi__n_};
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
extern int __gxx_personality_v0();
void throwException();
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z14throwExceptionv
void throwException() {
bb0:
  int numerador1;
  int denominador2;
  int result3;
  int c4 = 2;
  numerador1 = c4;
  int c5 = 0;
  denominador2 = c5;
    int unnamed6;
        int t8 = denominador2;
        int c9 = 0;
        _Bool c10 = ((t8 == c9)) ? 1 : 0;
        if (c10) {
          static char exc_buf11[4] = {0};
          int* exc12 = (int*)exc_buf11;
          int c13 = 1;
          *exc12 = c13;
          __cir_exc_ptr = (void*)exc12;
          __cir_exc_dtor = (void*)0;
          __cir_exc_type = (const void*)__cir_eh_type__ZTIi;
          __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTIi;
          __cir_exc_active = 1;
          goto cir_try_dispatch7;
          __builtin_unreachable();
        }
    cir_try_dispatch7: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTIi) {
      int ca_tok14 = 0;
      void* ca_exn15 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        unnamed6 = *(int*)__cir_exc_ptr;
        int c16 = 1;
        denominador2 = c16;
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
  int t17 = numerador1;
  int t18 = denominador2;
  int b19 = t17 / t18;
  result3 = b19;
  int t20 = result3;
  struct std__basic_ostream_char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  struct std__basic_ostream_char__std__char_traits_char__* std22;
  __VERIFIER_nondet_memory(&std22, sizeof(std22));
  return;
}

// function: main
int main() {
bb23:
  int __retval24;
  int c25 = 0;
  __retval24 = c25;
  throwException();
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  int c26 = 0;
  __retval24 = c26;
  int t27 = __retval24;
  return t27;
}

