extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;
// Per-RTTI address tags: each thrown/caught type symbol gets a
// distinct storage location so catch dispatch is a pointer compare.
static const char __cir_eh_type__ZTISt9exception[] = "_ZTISt9exception";

// Struct definitions (auto-parsed)
struct anon_struct_0 { unsigned char* __field0[5]; };
struct std__exception;

extern void *_ZTVSt9exception[];
static const char _ZTISt9exception__n_[] = "_ZTISt9exception";
static void* _ZTISt9exception[2] = {(void*)0, (void*)_ZTISt9exception__n_};
char _str[7] = "a != 2";
char _str_1[121] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/try_catch/try-catch_simple_04_bug/main.cpp";
char __PRETTY_FUNCTION____Z14throwExceptionv[22] = "void throwException()";
extern void *_ZTVSt9exception[];
extern int __gxx_personality_v0();
void std__exception___exception(struct std__exception* p0) {}
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void throwException();
int main();

// function: _Z14throwExceptionv
void throwException() {
bb0: ;
    struct std__exception* caughtException1;
    int a2;
      static char exc_buf4[8] = {0};
      struct std__exception* exc5 = (struct std__exception*)exc_buf4;
      // externalized std:: op: std::exception::exception()
      __cir_exc_ptr = (void*)exc5;
      __cir_exc_dtor = (void*)&std__exception___exception;
      __cir_exc_type = (const void*)__cir_eh_type__ZTISt9exception;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTISt9exception;
      __cir_exc_active = 1;
      goto cir_try_dispatch3;
      __builtin_unreachable();
    cir_try_dispatch3: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTISt9exception) {
      int ca_tok6 = 0;
      void* ca_exn7 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        caughtException1 = (struct std__exception*)__cir_exc_ptr;
        int c8 = 2;
        a2 = c8;
        int t9 = a2;
        int c10 = 2;
        _Bool c11 = ((t9 != c10)) ? 1 : 0;
        if (c11) {
        } else {
          char* cast12 = (char*)&(_str);
          char* c13 = (char*)_str_1;
          unsigned int c14 = 20;
          char* cast15 = (char*)&(__PRETTY_FUNCTION____Z14throwExceptionv);
          reach_error();
          __assert_fail(cast12, c13, c14, cast15);
        }
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
  return;
}

// function: main
int main() {
bb16: ;
  int __retval17;
  int c18 = 0;
  __retval17 = c18;
    struct std__exception* caughtException19;
      throwException();
      if (__cir_exc_active) {
        goto cir_try_dispatch20;
      }
    cir_try_dispatch20: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTISt9exception) {
      int ca_tok21 = 0;
      void* ca_exn22 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        caughtException19 = (struct std__exception*)__cir_exc_ptr;
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
  int c23 = 0;
  __retval17 = c23;
  int t24 = __retval17;
  return t24;
}

