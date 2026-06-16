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
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct anon_struct_0 { unsigned char* __field0[5]; };
struct std__exception;
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

extern void *_ZTVSt9exception[];
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[47] = "  Function throwException throws an exception\n";
static const char _ZTISt9exception__n_[] = "_ZTISt9exception";
static void* _ZTISt9exception[2] = {(void*)0, (void*)_ZTISt9exception__n_};
char _str_1[47] = "  Exception handled in function throwException";
char _str_2[46] = "\n  Function throwException rethrows exception";
char _str_3[2] = "0";
char _str_4[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/try_catch/ch13_2/main.cpp";
char __PRETTY_FUNCTION____Z14throwExceptionv[22] = "void throwException()";
char _str_5[28] = "This also should not print\n";
char _str_6[39] = "\nmain invokes function throwException\n";
char _str_7[23] = "This should not print\n";
char _str_8[29] = "\n\nException handled in main\n";
char _str_9[47] = "Program control continues after catch in main\n";
extern void *_ZTVSt9exception[];
extern int __gxx_personality_v0();
void std__exception___exception(struct std__exception* p0) {}
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void throwException();
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z14throwExceptionv
void throwException() {
bb0: ;
    struct std__exception* caughtException1;
      char* cast3 = (char*)&(_str);
      struct std__basic_ostream_char__std__char_traits_char__* std4;
      __VERIFIER_nondet_memory(&std4, sizeof(std4));
      static char exc_buf5[8] = {0};
      struct std__exception* exc6 = (struct std__exception*)exc_buf5;
      // externalized std:: op: std::exception::exception()
      __cir_exc_ptr = (void*)exc6;
      __cir_exc_dtor = (void*)&std__exception___exception;
      __cir_exc_type = (const void*)__cir_eh_type__ZTISt9exception;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTISt9exception;
      __cir_exc_active = 1;
      goto cir_try_dispatch2;
      __builtin_unreachable();
    cir_try_dispatch2: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTISt9exception) {
      int ca_tok7 = 0;
      void* ca_exn8 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        caughtException1 = (struct std__exception*)__cir_exc_ptr;
        char* cast9 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std10;
        __VERIFIER_nondet_memory(&std10, sizeof(std10));
        char* cast11 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* std12;
        __VERIFIER_nondet_memory(&std12, sizeof(std12));
        char* cast13 = (char*)&(_str_3);
        char* c14 = (char*)_str_4;
        unsigned int c15 = 31;
        char* cast16 = (char*)&(__PRETTY_FUNCTION____Z14throwExceptionv);
        reach_error();
        __assert_fail(cast13, c14, c15, cast16);
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
  char* cast17 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std18;
  __VERIFIER_nondet_memory(&std18, sizeof(std18));
  return;
}

// function: main
int main() {
bb19: ;
  int __retval20;
  int c21 = 0;
  __retval20 = c21;
    struct std__exception* caughtException22;
      char* cast24 = (char*)&(_str_6);
      struct std__basic_ostream_char__std__char_traits_char__* std25;
      __VERIFIER_nondet_memory(&std25, sizeof(std25));
      throwException();
      if (__cir_exc_active) {
        goto cir_try_dispatch23;
      }
      char* cast26 = (char*)&(_str_7);
      struct std__basic_ostream_char__std__char_traits_char__* std27;
      __VERIFIER_nondet_memory(&std27, sizeof(std27));
    cir_try_dispatch23: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTISt9exception) {
      int ca_tok28 = 0;
      void* ca_exn29 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        caughtException22 = (struct std__exception*)__cir_exc_ptr;
        char* cast30 = (char*)&(_str_8);
        struct std__basic_ostream_char__std__char_traits_char__* std31;
        __VERIFIER_nondet_memory(&std31, sizeof(std31));
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
  char* cast32 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* std33;
  __VERIFIER_nondet_memory(&std33, sizeof(std33));
  int c34 = 0;
  __retval20 = c34;
  int t35 = __retval20;
  return t35;
}

