extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;
// Per-RTTI address tags: each thrown/caught type symbol gets a
// distinct storage location so catch dispatch is a pointer compare.
static const char __cir_eh_type__ZTI10ExceptionA[] = "_ZTI10ExceptionA";
static const char __cir_eh_type__ZTI10ExceptionB[] = "_ZTI10ExceptionB";

// Struct definitions (auto-parsed)
struct A { unsigned char __field0; };
struct B { unsigned char __field0; };
struct ExceptionA { unsigned char __field0; };
struct ExceptionB { unsigned char __field0; };
struct anon_struct_0 { unsigned char* __field0; unsigned char* __field1; };

extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern unsigned char _ZTI10ExceptionB[];
extern unsigned char _ZTI10ExceptionA[];
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS10ExceptionB[13] = "10ExceptionB";
char _str[19] = "Caught ExceptionB\n";
char _ZTS10ExceptionA[13] = "10ExceptionA";
char _str_1[19] = "Caught ExceptionA\n";
extern int nondet_int();
int hrandom();
extern int __gxx_personality_v0();
void A__A(struct A* p0);
void ExceptionB__ExceptionB(struct ExceptionB* p0);
void B__append(struct B* p0, int p1);
void A___A(struct A* p0);
extern int printf(char* p0, ...);
int main();
void ExceptionA__ExceptionA(struct ExceptionA* p0);
void A__logError(struct A* p0);

// function: _Z7hrandomv
int hrandom() {
bb0:
  int __retval1;
  int r2 = nondet_int();
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  int c3 = 2;
  int b4 = r2 % c3;
  __retval1 = b4;
  int t5 = __retval1;
  return t5;
}

// function: _ZN1AC2Ev
void A__A(struct A* v6) {
bb7:
  struct A* this8;
  this8 = v6;
  struct A* t9 = this8;
  return;
}

// function: _ZN10ExceptionBC2Ev
void ExceptionB__ExceptionB(struct ExceptionB* v10) {
bb11:
  struct ExceptionB* this13;
  this13 = v10;
  struct ExceptionB* t14 = this13;
  goto ERROR;
bb12:
ERROR: ;
  return;
}

// function: _ZN1B6appendEi
void B__append(struct B* v15, int v16) {
bb17:
  struct B* this18;
  int x19;
  this18 = v15;
  x19 = v16;
  struct B* t20 = this18;
  static char exc_buf21[1] = {0};
  struct ExceptionB* exc22 = (struct ExceptionB*)exc_buf21;
  ExceptionB__ExceptionB(exc22);
  if (__cir_exc_active) {
    return;
  }
  __cir_exc_ptr = (void*)exc22;
  __cir_exc_dtor = (void*)0;
  __cir_exc_type = (const void*)__cir_eh_type__ZTI10ExceptionB;
  __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI10ExceptionB;
  __cir_exc_active = 1;
  return;
  __builtin_unreachable();
}

// function: _ZN1AD2Ev
void A___A(struct A* v23) {
bb24:
  struct A* this25;
  this25 = v23;
  struct A* t26 = this25;
    struct ExceptionA e227;
        int r29 = hrandom();
        if (__cir_exc_active) {
          goto cir_try_dispatch28;
        }
        _Bool cast30 = (_Bool)r29;
        if (cast30) {
          A__logError(t26);
          if (__cir_exc_active) {
            goto cir_try_dispatch28;
          }
        }
    cir_try_dispatch28: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI10ExceptionA) {
      int ca_tok31 = 0;
      void* ca_exn32 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        e227 = *(struct ExceptionA*)__cir_exc_ptr;
        char* cast33 = (char*)&(_str_1);
        int r34 = printf(cast33);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          return;
        }
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
bb35:
  int __retval36;
  int c37 = 0;
  __retval36 = c37;
    struct B b38;
    struct A a39;
    struct ExceptionB e140;
      A__A(&a39);
      if (__cir_exc_active) {
        goto cir_try_dispatch41;
      }
        int c42 = 2;
        B__append(&b38, c42);
        if (__cir_exc_active) {
          {
            A___A(&a39);
          }
          goto cir_try_dispatch41;
        }
      {
        A___A(&a39);
      }
    cir_try_dispatch41: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI10ExceptionB) {
      int ca_tok43 = 0;
      void* ca_exn44 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        e140 = *(struct ExceptionB*)__cir_exc_ptr;
        char* cast45 = (char*)&(_str);
        int r46 = printf(cast45);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
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
  int t47 = __retval36;
  return t47;
}

// function: _ZN10ExceptionAC2Ev
void ExceptionA__ExceptionA(struct ExceptionA* v48) {
bb49:
  struct ExceptionA* this51;
  this51 = v48;
  struct ExceptionA* t52 = this51;
  goto ERROR;
bb50:
ERROR: ;
  return;
}

// function: _ZN1A8logErrorEv
void A__logError(struct A* v53) {
bb54:
  struct A* this55;
  this55 = v53;
  struct A* t56 = this55;
  static char exc_buf57[1] = {0};
  struct ExceptionA* exc58 = (struct ExceptionA*)exc_buf57;
  ExceptionA__ExceptionA(exc58);
  if (__cir_exc_active) {
    return;
  }
  __cir_exc_ptr = (void*)exc58;
  __cir_exc_dtor = (void*)0;
  __cir_exc_type = (const void*)__cir_eh_type__ZTI10ExceptionA;
  __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI10ExceptionA;
  __cir_exc_active = 1;
  return;
  __builtin_unreachable();
}

