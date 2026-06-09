extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;
// Per-RTTI address tags: each thrown/caught type symbol gets a
// distinct storage location so catch dispatch is a pointer compare.
static const char __cir_eh_type__ZTI4Base[] = "_ZTI4Base";
static const char __cir_eh_type__ZTI7Derived[] = "_ZTI7Derived";

// Struct definitions (auto-parsed)
struct Base { unsigned char __field0; };
struct Derived { unsigned char __field0; };
struct anon_struct_0 { unsigned char* __field0; unsigned char* __field1; };
struct anon_struct_1 { unsigned char* __field0; unsigned char* __field1; unsigned char* __field2; };

extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern unsigned char _ZTI4Base[];
extern unsigned char _ZTI7Derived[];
extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
char _ZTS7Derived[9] = "7Derived";
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS4Base[6] = "4Base";
char _str[2] = "0";
char _str_1[120] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/try_catch/try-catch_order_03_bug/main.cpp";
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
    struct Base unnamed3;
      static char exc_buf5[1] = {0};
      struct Derived* exc6 = (struct Derived*)exc_buf5;
      __cir_exc_ptr = (void*)exc6;
      __cir_exc_dtor = (void*)0;
      __cir_exc_type = (const void*)__cir_eh_type__ZTI7Derived;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI7Derived;
      __cir_exc_active = 1;
      goto cir_try_dispatch4;
      __builtin_unreachable();
    cir_try_dispatch4: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI4Base) {
      int ca_tok7 = 0;
      void* ca_exn8 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        unnamed3 = *(struct Base*)__cir_exc_ptr;
        char* cast9 = (char*)&(_str);
        char* c10 = _str_1;
        unsigned int c11 = 18;
        char* cast12 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast9, c10, c11, cast12);
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
  int c13 = 0;
  __retval1 = c13;
  int t14 = __retval1;
  return t14;
}

