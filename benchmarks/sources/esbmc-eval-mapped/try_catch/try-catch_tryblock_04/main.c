extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;
// Per-RTTI address tags: each thrown/caught type symbol gets a
// distinct storage location so catch dispatch is a pointer compare.
static const char __cir_eh_type__ZTI1E[] = "_ZTI1E";

// Struct definitions (auto-parsed)
struct A { unsigned char __field0; };
struct E { char* error; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct anon_struct_0 { unsigned char* __field0; unsigned char* __field1; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern unsigned char _ZTI1E[];
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[17] = "Exception in f()";
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS1E[3] = "1E";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[17] = "Handler in f(): ";
char _str_2[20] = "Handler in main(): ";
char _str_3[28] = "Another handler in main(): ";
char _str_4[24] = "Returned value of f(): ";
char _str_5[5] = "i==1";
char _str_6[119] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/try_catch/try-catch_tryblock_04/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_7[17] = "Exception in A()";
char _str_8[17] = "Handler in A(): ";
extern int __gxx_personality_v0();
void E__E(struct E* p0, char* p1);
int f();
void A__A(struct A* p0);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _ZN1EC2EPKc
void E__E(struct E* v0, char* v1) {
bb2: ;
  struct E* this3;
  char* arg4;
  this3 = v0;
  arg4 = v1;
  struct E* t5 = this3;
  char* t6 = arg4;
  t5->error = t6;
  return;
}

// function: _Z1fv
int f() {
bb7: ;
  int __retval8;
    struct E* e9;
      static char exc_buf11[8] = {0};
      struct E* exc12 = (struct E*)exc_buf11;
      char* cast13 = (char*)&(_str);
      E__E(exc12, cast13);
      if (__cir_exc_active) {
        goto cir_try_dispatch10;
      }
      __cir_exc_ptr = (void*)exc12;
      __cir_exc_dtor = (void*)0;
      __cir_exc_type = (const void*)__cir_eh_type__ZTI1E;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI1E;
      __cir_exc_active = 1;
      goto cir_try_dispatch10;
      __builtin_unreachable();
    cir_try_dispatch10: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI1E) {
      int ca_tok14 = 0;
      void* ca_exn15 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        e9 = (struct E*)__cir_exc_ptr;
        char* cast16 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std17;
        __VERIFIER_nondet_memory(&std17, sizeof(std17));
        struct E* t18 = e9;
        char* t19 = t18->error;
        struct std__basic_ostream_char__std__char_traits_char__* std20;
        __VERIFIER_nondet_memory(&std20, sizeof(std20));
        struct std__basic_ostream_char__std__char_traits_char__* std21;
        __VERIFIER_nondet_memory(&std21, sizeof(std21));
        int c22 = 1;
        __retval8 = c22;
        int t23 = __retval8;
        int ret_val24 = t23;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return ret_val24;
    }
    else {
      __cir_exc_active = 1;
      { int __cir_eh_ret = (int)0; return __cir_eh_ret; }
    { int __cir_eh_ret = (int)0; return __cir_eh_ret; }
    }
    }
  abort();
}

// function: _ZN1AC2Ev
void A__A(struct A* v25) {
bb26: ;
  struct A* this27;
  this27 = v25;
  struct A* t28 = this27;
    struct E* e29;
      static char exc_buf31[8] = {0};
      struct E* exc32 = (struct E*)exc_buf31;
      char* cast33 = (char*)&(_str_7);
      E__E(exc32, cast33);
      if (__cir_exc_active) {
        goto cir_try_dispatch30;
      }
      __cir_exc_ptr = (void*)exc32;
      __cir_exc_dtor = (void*)0;
      __cir_exc_type = (const void*)__cir_eh_type__ZTI1E;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI1E;
      __cir_exc_active = 1;
      goto cir_try_dispatch30;
      __builtin_unreachable();
    cir_try_dispatch30: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI1E) {
      int ca_tok34 = 0;
      void* ca_exn35 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        e29 = (struct E*)__cir_exc_ptr;
        char* cast36 = (char*)&(_str_8);
        struct std__basic_ostream_char__std__char_traits_char__* std37;
        __VERIFIER_nondet_memory(&std37, sizeof(std37));
        struct E* t38 = e29;
        char* t39 = t38->error;
        struct std__basic_ostream_char__std__char_traits_char__* std40;
        __VERIFIER_nondet_memory(&std40, sizeof(std40));
        struct std__basic_ostream_char__std__char_traits_char__* std41;
        __VERIFIER_nondet_memory(&std41, sizeof(std41));
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
bb42: ;
  int __retval43;
  int i44;
  int c45 = 0;
  __retval43 = c45;
  int c46 = 0;
  i44 = c46;
    struct A cow47;
    struct E* e48;
      A__A(&cow47);
      if (__cir_exc_active) {
        goto cir_try_dispatch49;
      }
    cir_try_dispatch49: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI1E) {
      int ca_tok50 = 0;
      void* ca_exn51 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        e48 = (struct E*)__cir_exc_ptr;
        char* cast52 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* std53;
        __VERIFIER_nondet_memory(&std53, sizeof(std53));
        struct E* t54 = e48;
        char* t55 = t54->error;
        struct std__basic_ostream_char__std__char_traits_char__* std56;
        __VERIFIER_nondet_memory(&std56, sizeof(std56));
        struct std__basic_ostream_char__std__char_traits_char__* std57;
        __VERIFIER_nondet_memory(&std57, sizeof(std57));
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
    struct E* e58;
      int r60 = f();
      if (__cir_exc_active) {
        goto cir_try_dispatch59;
      }
      i44 = r60;
    cir_try_dispatch59: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI1E) {
      int ca_tok61 = 0;
      void* ca_exn62 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        e58 = (struct E*)__cir_exc_ptr;
        char* cast63 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std64;
        __VERIFIER_nondet_memory(&std64, sizeof(std64));
        struct E* t65 = e58;
        char* t66 = t65->error;
        struct std__basic_ostream_char__std__char_traits_char__* std67;
        __VERIFIER_nondet_memory(&std67, sizeof(std67));
        struct std__basic_ostream_char__std__char_traits_char__* std68;
        __VERIFIER_nondet_memory(&std68, sizeof(std68));
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
  char* cast69 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std70;
  __VERIFIER_nondet_memory(&std70, sizeof(std70));
  int t71 = i44;
  struct std__basic_ostream_char__std__char_traits_char__* std72;
  __VERIFIER_nondet_memory(&std72, sizeof(std72));
  struct std__basic_ostream_char__std__char_traits_char__* std73;
  __VERIFIER_nondet_memory(&std73, sizeof(std73));
  int t74 = i44;
  int c75 = 1;
  _Bool c76 = ((t74 == c75)) ? 1 : 0;
  if (c76) {
  } else {
    char* cast77 = (char*)&(_str_5);
    char* c78 = (char*)_str_6;
    unsigned int c79 = 46;
    char* cast80 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast77, c78, c79, cast80);
  }
  int t81 = __retval43;
  return t81;
}

