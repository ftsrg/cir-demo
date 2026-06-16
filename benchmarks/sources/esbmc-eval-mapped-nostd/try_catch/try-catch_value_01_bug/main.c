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

static const char _ZTIi__n_[] = "_ZTIi";
static void* _ZTIi[2] = {(void*)0, (void*)_ZTIi__n_};
char _str[2] = "0";
char _str_1[120] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/try_catch/try-catch_value_01_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern int __gxx_personality_v0();
void X__X(struct X* p0);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _ZN1XC2Ev
void X__X(struct X* v0) {
bb1: ;
  struct X* this2;
  this2 = v0;
  struct X* t3 = this2;
  static char exc_buf4[4] = {0};
  int* exc5 = (int*)exc_buf4;
  int c6 = 5;
  *exc5 = c6;
  __cir_exc_ptr = (void*)exc5;
  __cir_exc_dtor = (void*)0;
  __cir_exc_type = (const void*)__cir_eh_type__ZTIi;
  __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTIi;
  __cir_exc_active = 1;
  return;
  __builtin_unreachable();
}

// function: main
int main() {
bb7: ;
  int __retval8;
  int c9 = 0;
  __retval8 = c9;
    struct X x10;
    int e11;
      X__X(&x10);
      if (__cir_exc_active) {
        goto cir_try_dispatch12;
      }
    cir_try_dispatch12: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTIi) {
      int ca_tok13 = 0;
      void* ca_exn14 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        e11 = *(int*)__cir_exc_ptr;
          int t15 = e11;
          switch (t15) {
          case 5: ;
            char* cast16 = (char*)&(_str);
            char* c17 = (char*)_str_1;
            unsigned int c18 = 23;
            char* cast19 = (char*)&(__PRETTY_FUNCTION___main);
            reach_error();
            __assert_fail(cast16, c17, c18, cast19);
            {
              if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
            }
            break;
          default: ;
            int c20 = 1;
            __retval8 = c20;
            int t21 = __retval8;
            int ret_val22 = t21;
            return ret_val22;
          }
    }
    else {
      __cir_exc_active = 1;
      { int __cir_eh_ret = (int)0; return __cir_eh_ret; }
    { int __cir_eh_ret = (int)0; return __cir_eh_ret; }
    }
    }
  int c23 = 0;
  __retval8 = c23;
  int t24 = __retval8;
  return t24;
}

