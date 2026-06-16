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

static const char _ZTIi__n_[] = "_ZTIi";
static void* _ZTIi[2] = {(void*)0, (void*)_ZTIi__n_};
char _str[6] = "v==10";
char _str_1[119] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/try_catch/try-catch_tryblock_08/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern int __gxx_personality_v0();
void f(int* p0);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _Z1fRi
void f(int* v0) {
bb1: ;
  int* x2;
  x2 = v0;
    int* i3;
      static char exc_buf5[4] = {0};
      int* exc6 = (int*)exc_buf5;
      int c7 = 10;
      *exc6 = c7;
      __cir_exc_ptr = (void*)exc6;
      __cir_exc_dtor = (void*)0;
      __cir_exc_type = (const void*)__cir_eh_type__ZTIi;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTIi;
      __cir_exc_active = 1;
      goto cir_try_dispatch4;
      __builtin_unreachable();
    cir_try_dispatch4: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTIi) {
      int ca_tok8 = 0;
      void* ca_exn9 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        i3 = (int*)__cir_exc_ptr;
        int* t10 = i3;
        int t11 = *t10;
        int* t12 = x2;
        *t12 = t11;
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
bb13: ;
  int __retval14;
  int v15;
  int c16 = 0;
  __retval14 = c16;
  int c17 = 0;
  v15 = c17;
  f(&v15);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  int t18 = v15;
  int c19 = 10;
  _Bool c20 = ((t18 == c19)) ? 1 : 0;
  if (c20) {
  } else {
    char* cast21 = (char*)&(_str);
    char* c22 = (char*)_str_1;
    unsigned int c23 = 21;
    char* cast24 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast21, c22, c23, cast24);
  }
  int t25 = __retval14;
  return t25;
}

