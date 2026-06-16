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
static const char __cir_eh_type__ZTI5Base1[] = "_ZTI5Base1";
static const char __cir_eh_type__ZTI5Base2[] = "_ZTI5Base2";
static const char __cir_eh_type__ZTI7Derived[] = "_ZTI7Derived";

// Struct definitions (auto-parsed)
struct Base { unsigned char __field0; };
struct Base1 { unsigned char __field0; };
struct Base2 { unsigned char __field0; };
struct Derived { unsigned char __field0; };
struct anon_struct_0 { unsigned char* __field0; unsigned char* __field1; };
struct anon_struct_1 { unsigned char* __field0; unsigned char* __field1; unsigned int __field2; unsigned int __field3; unsigned char* __field4; long __field5; unsigned char* __field6; long __field7; unsigned char* __field8; long __field9; };

extern void *_ZTVN10__cxxabiv121__vmi_class_type_infoE[];
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern unsigned char _ZTI5Base2[];
extern unsigned char _ZTI4Base[];
extern unsigned char _ZTI5Base1[];
extern unsigned char _ZTI7Derived[];
extern void *_ZTVN10__cxxabiv121__vmi_class_type_infoE[];
char _ZTS7Derived[9] = "7Derived";
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS5Base2[7] = "5Base2";
char _ZTS4Base[6] = "4Base";
char _ZTS5Base1[7] = "5Base1";
char _str[2] = "0";
char _str_1[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/try_catch/try-catch_order_02/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern int __gxx_personality_v0();
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: main
int main() {
bb0: ;
  int __retval1;
  int c2 = 0;
  __retval1 = c2;
    struct Base2 unnamed3;
    struct Base1 unnamed4;
    struct Base unnamed5;
      static char exc_buf7[1] = {0};
      struct Derived* exc8 = (struct Derived*)exc_buf7;
      __cir_exc_ptr = (void*)exc8;
      __cir_exc_dtor = (void*)0;
      __cir_exc_type = (const void*)__cir_eh_type__ZTI7Derived;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI7Derived;
      __cir_exc_active = 1;
      goto cir_try_dispatch6;
      __builtin_unreachable();
    cir_try_dispatch6: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI5Base2) {
      int ca_tok9 = 0;
      void* ca_exn10 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        unnamed3 = *(struct Base2*)__cir_exc_ptr;
      {
        if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
      }
    }
    else if (__cir_exc_type == (const void*)__cir_eh_type__ZTI5Base1) {
      int ca_tok11 = 0;
      void* ca_exn12 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        unnamed4 = *(struct Base1*)__cir_exc_ptr;
      {
        if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
      }
    }
    else if (__cir_exc_type == (const void*)__cir_eh_type__ZTI4Base) {
      int ca_tok13 = 0;
      void* ca_exn14 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        unnamed5 = *(struct Base*)__cir_exc_ptr;
        char* cast15 = (char*)&(_str);
        char* c16 = (char*)_str_1;
        unsigned int c17 = 22;
        char* cast18 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast15, c16, c17, cast18);
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
  int c19 = 0;
  __retval1 = c19;
  int t20 = __retval1;
  return t20;
}

