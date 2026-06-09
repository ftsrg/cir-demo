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
static const char __cir_eh_type__ZTId[] = "_ZTId";
static const char __cir_eh_type__ZTIi[] = "_ZTIi";

static const char _ZTId__n_[] = "_ZTId";
static void* _ZTId[2] = {(void*)0, (void*)_ZTId__n_};
static const char _ZTIi__n_[] = "_ZTIi";
static void* _ZTIi[2] = {(void*)0, (void*)_ZTIi__n_};
static const char _ZTIc__n_[] = "_ZTIc";
static void* _ZTIc[2] = {(void*)0, (void*)_ZTIc__n_};
void myfunction();
extern int __gxx_personality_v0();
int main();

// function: _Z10myfunctionv
void myfunction() {
bb0:
  static char exc_buf1[8] = {0};
  double* exc2 = (double*)exc_buf1;
  double c3 = 0x1.4p2;
  *exc2 = c3;
  __cir_exc_ptr = (void*)exc2;
  __cir_exc_dtor = (void*)0;
  __cir_exc_type = (const void*)__cir_eh_type__ZTId;
  __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTId;
  __cir_exc_active = 1;
  return;
  __builtin_unreachable();
}

// function: main
int main() {
bb4:
  int __retval5;
  int c6 = 0;
  __retval5 = c6;
    int unnamed7;
    char unnamed8;
      myfunction();
    cir_try_dispatch9: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTIi) {
      int ca_tok10 = 0;
      void* ca_exn11 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        unnamed7 = *(int*)__cir_exc_ptr;
        int c12 = 3;
        __retval5 = c12;
        int t13 = __retval5;
        int ret_val14 = t13;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return ret_val14;
    }
    else if (__cir_exc_type == (const void*)__cir_eh_type__ZTIc) {
      int ca_tok15 = 0;
      void* ca_exn16 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        unnamed8 = *(char*)__cir_exc_ptr;
        int c17 = 2;
        __retval5 = c17;
        int t18 = __retval5;
        int ret_val19 = t18;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return ret_val19;
    }
    else {
      int ca_tok20 = 0;
      void* ca_exn21 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        int c22 = 1;
        __retval5 = c22;
        int t23 = __retval5;
        int ret_val24 = t23;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return ret_val24;
    }
    }
  int c25 = 0;
  __retval5 = c25;
  int t26 = __retval5;
  return t26;
}

