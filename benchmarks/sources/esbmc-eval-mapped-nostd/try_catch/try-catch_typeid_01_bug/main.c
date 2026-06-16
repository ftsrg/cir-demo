extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;
// Per-RTTI address tags: each thrown/caught type symbol gets a
// distinct storage location so catch dispatch is a pointer compare.
static const char __cir_eh_type__ZTISt10bad_typeid[] = "_ZTISt10bad_typeid";

// Struct definitions (auto-parsed)
struct Polymorphic { void* __field0; };
struct std__exception { void* __field0; };
struct std__type_info { void* __field0; char* __name; };
struct std__bad_typeid { struct std__exception __field0; };

static const char _ZTISt10bad_typeid__n_[] = "_ZTISt10bad_typeid";
static void* _ZTISt10bad_typeid[2] = {(void*)0, (void*)_ZTISt10bad_typeid__n_};
char _str[2] = "0";
char _str_1[121] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/try_catch/try-catch_typeid_01_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern int __gxx_personality_v0();
extern void __cxa_bad_typeid();
char* std__type_info__name___const(struct std__type_info* p0);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _ZNKSt9type_info4nameEv
char* std__type_info__name___const(struct std__type_info* v0) {
bb1: ;
  struct std__type_info* this2;
  char* __retval3;
  this2 = v0;
  struct std__type_info* t4 = this2;
  long c5 = 0;
  char* t6 = t4->__name;
  char* ptr7 = &(t6)[c5];
  char t8 = *ptr7;
  int cast9 = (int)t8;
  int c10 = 42;
  _Bool c11 = ((cast9 == c10)) ? 1 : 0;
  char* ternary12;
  if (c11) {
    char* t13 = t4->__name;
    int c14 = 1;
    char* ptr15 = &(t13)[c14];
    ternary12 = (char*)ptr15;
  } else {
    char* t16 = t4->__name;
    ternary12 = (char*)t16;
  }
  __retval3 = ternary12;
  char* t17 = __retval3;
  return t17;
}

// function: main
int main() {
bb18: ;
  int __retval19;
  int c20 = 0;
  __retval19 = c20;
    struct Polymorphic* pb21;
    char* name22;
    struct std__bad_typeid* bt23;
      struct Polymorphic* c25 = ((void*)0);
      pb21 = c25;
      struct Polymorphic* t26 = pb21;
      struct Polymorphic* c27 = ((void*)0);
      _Bool c28 = ((t26 == c27)) ? 1 : 0;
      if (c28) {
        __cxa_bad_typeid();
        if (__cir_exc_active) {
          goto cir_try_dispatch24;
        }
        __builtin_unreachable();
      }
      void** v29 = (void**)t26;
      void* v30 = *((void**)v29);
      long c31 = -1;
      struct std__type_info** cast32 = (struct std__type_info**)v30;
      struct std__type_info** ptr33 = &(cast32)[c31];
      struct std__type_info* t34 = *ptr33;
      char* r35 = std__type_info__name___const(t34);
      name22 = r35;
    cir_try_dispatch24: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTISt10bad_typeid) {
      int ca_tok36 = 0;
      void* ca_exn37 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        bt23 = (struct std__bad_typeid*)__cir_exc_ptr;
        char* cast38 = (char*)&(_str);
        char* c39 = (char*)_str_1;
        unsigned int c40 = 23;
        char* cast41 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast38, c39, c40, cast41);
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
  int c42 = 0;
  __retval19 = c42;
  int t43 = __retval19;
  return t43;
}

