extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;
// Per-RTTI address tags: each thrown/caught type symbol gets a
// distinct storage location so catch dispatch is a pointer compare.
static const char __cir_eh_type__ZTIc[] = "_ZTIc";
static const char __cir_eh_type__ZTIi[] = "_ZTIi";

static const char _ZTIc__n_[] = "_ZTIc";
static void* _ZTIc[2] = {(void*)0, (void*)_ZTIc__n_};
static const char _ZTIi__n_[] = "_ZTIi";
static void* _ZTIi[2] = {(void*)0, (void*)_ZTIi__n_};
char _str[2] = "0";
char _str_1[121] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/try_catch/try-catch_simple_07_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern int __gxx_personality_v0();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: main
int main() {
bb0:
  int __retval1;
  int c2 = 0;
  __retval1 = c2;
    int unnamed3;
    char unnamed4;
      static char exc_buf6[1] = {0};
      char* exc7 = (char*)exc_buf6;
      char c8 = 97;
      *exc7 = c8;
      __cir_exc_ptr = (void*)exc7;
      __cir_exc_dtor = (void*)0;
      __cir_exc_type = (const void*)__cir_eh_type__ZTIc;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTIc;
      __cir_exc_active = 1;
      goto cir_try_dispatch5;
      __builtin_unreachable();
    cir_try_dispatch5: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTIi) {
      int ca_tok9 = 0;
      void* ca_exn10 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        unnamed3 = *(int*)__cir_exc_ptr;
        int c11 = 1;
        __retval1 = c11;
        int t12 = __retval1;
        int ret_val13 = t12;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return ret_val13;
    }
    else if (__cir_exc_type == (const void*)__cir_eh_type__ZTIc) {
      int ca_tok14 = 0;
      void* ca_exn15 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        unnamed4 = *(char*)__cir_exc_ptr;
        char* cast16 = (char*)&(_str);
        char* c17 = _str_1;
        unsigned int c18 = 16;
        char* cast19 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast16, c17, c18, cast19);
        int c20 = 2;
        __retval1 = c20;
        int t21 = __retval1;
        int ret_val22 = t21;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return ret_val22;
    }
    else {
      __cir_exc_active = 1;
      { int __cir_eh_ret = (int)0; return __cir_eh_ret; }
    { int __cir_eh_ret = (int)0; return __cir_eh_ret; }
    }
    }
  int c23 = 0;
  __retval1 = c23;
  int t24 = __retval1;
  return t24;
}

