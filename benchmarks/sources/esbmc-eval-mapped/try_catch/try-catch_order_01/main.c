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
static const char __cir_eh_type__ZTI7Derived[] = "_ZTI7Derived";

// Struct definitions (auto-parsed)
struct Base { unsigned char __field0; };
struct Base1 { unsigned char __field0; };
struct Derived { unsigned char __field0; };
struct anon_struct_0 { unsigned char* __field0; unsigned char* __field1; };
struct anon_struct_1 { unsigned char* __field0; unsigned char* __field1; unsigned int __field2; unsigned int __field3; unsigned char* __field4; long __field5; unsigned char* __field6; long __field7; };

extern void *_ZTVN10__cxxabiv121__vmi_class_type_infoE[];
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern unsigned char _ZTI4Base[];
extern unsigned char _ZTI5Base1[];
extern unsigned char _ZTI7Derived[];
extern void *_ZTVN10__cxxabiv121__vmi_class_type_infoE[];
char _ZTS7Derived[9] = "7Derived";
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS4Base[6] = "4Base";
char _ZTS5Base1[7] = "5Base1";
char _str[2] = "0";
char _str_1[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/try_catch/try-catch_order_01/main.cpp";
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
    struct Base unnamed3;
    struct Base1 unnamed4;
      static char exc_buf6[1] = {0};
      struct Derived* exc7 = (struct Derived*)exc_buf6;
      __cir_exc_ptr = (void*)exc7;
      __cir_exc_dtor = (void*)0;
      __cir_exc_type = (const void*)__cir_eh_type__ZTI7Derived;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI7Derived;
      __cir_exc_active = 1;
      goto cir_try_dispatch5;
      __builtin_unreachable();
    cir_try_dispatch5: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI4Base) {
      int ca_tok8 = 0;
      void* ca_exn9 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        unnamed3 = *(struct Base*)__cir_exc_ptr;
      {
        if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
      }
    }
    else if (__cir_exc_type == (const void*)__cir_eh_type__ZTI5Base1) {
      int ca_tok10 = 0;
      void* ca_exn11 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        unnamed4 = *(struct Base1*)__cir_exc_ptr;
        char* cast12 = (char*)&(_str);
        char* c13 = (char*)_str_1;
        unsigned int c14 = 20;
        char* cast15 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast12, c13, c14, cast15);
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
  int c16 = 0;
  __retval1 = c16;
  int t17 = __retval1;
  return t17;
}

