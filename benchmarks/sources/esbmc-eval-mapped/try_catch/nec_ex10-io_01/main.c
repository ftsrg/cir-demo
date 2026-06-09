extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;
// Per-RTTI address tags: each thrown/caught type symbol gets a
// distinct storage location so catch dispatch is a pointer compare.
static const char __cir_eh_type__ZTI11IOException[] = "_ZTI11IOException";

// Struct definitions (auto-parsed)
struct IOException { unsigned char __field0; };
struct MyFile { char* fileName; };
struct anon_struct_0 { unsigned char* __field0; unsigned char* __field1; };

extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern unsigned char _ZTI11IOException[];
char _str[7] = "sample";
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS11IOException[14] = "11IOException";
char _str_1[17] = "Some IO failed.\n";
extern int __gxx_personality_v0();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
void MyFile__MyFile(struct MyFile* p0, char* p1);
void operator_delete(void* p0, unsigned long p1) { free(p0); }
extern int getpid();
void IOException__IOException(struct IOException* p0);
void MyFile__readLine(struct MyFile* p0);
extern int printf(char* p0, ...);
int main();

// function: _ZN6MyFileC2EPKc
void MyFile__MyFile(struct MyFile* v0, char* v1) {
bb2:
  struct MyFile* this3;
  char* str4;
  this3 = v0;
  str4 = v1;
  struct MyFile* t5 = this3;
  char* t6 = str4;
  t5->fileName = t6;
  return;
}

// function: _ZN11IOExceptionC2Ev
void IOException__IOException(struct IOException* v7) {
bb8:
  struct IOException* this10;
  this10 = v7;
  struct IOException* t11 = this10;
  goto ERROR;
bb9:
ERROR: ;
  return;
}

// function: _ZN6MyFile8readLineEv
void MyFile__readLine(struct MyFile* v12) {
bb13:
  struct MyFile* this14;
  this14 = v12;
  struct MyFile* t15 = this14;
    int r16 = getpid();
    int c17 = 2;
    int b18 = r16 % c17;
    _Bool cast19 = (_Bool)b18;
    if (cast19) {
      static char exc_buf20[1] = {0};
      struct IOException* exc21 = (struct IOException*)exc_buf20;
      IOException__IOException(exc21);
      if (__cir_exc_active) {
        return;
      }
      __cir_exc_ptr = (void*)exc21;
      __cir_exc_dtor = (void*)0;
      __cir_exc_type = (const void*)__cir_eh_type__ZTI11IOException;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI11IOException;
      __cir_exc_active = 1;
      return;
      __builtin_unreachable();
    }
  return;
}

// function: main
int main() {
bb22:
  int __retval23;
  int c24 = 0;
  __retval23 = c24;
    struct MyFile* file25;
    struct MyFile* __new_result26;
    struct IOException* e27;
      unsigned long c29 = 8;
      void* r30 = operator_new(c29);
      if (__cir_exc_active) {
        goto cir_try_dispatch28;
      }
        struct MyFile* cast31 = (struct MyFile*)r30;
        __new_result26 = cast31;
        char* cast32 = (char*)&(_str);
        MyFile__MyFile(cast31, cast32);
        if (__cir_exc_active) {
          {
            operator_delete(r30, c29);
          }
          goto cir_try_dispatch28;
        }
      struct MyFile* t33 = __new_result26;
      file25 = t33;
      struct MyFile* t34 = file25;
      MyFile__readLine(t34);
      if (__cir_exc_active) {
        goto cir_try_dispatch28;
      }
      struct MyFile* t35 = file25;
      struct MyFile* c36 = ((void*)0);
      _Bool c37 = ((t35 != c36)) ? 1 : 0;
      if (c37) {
        {
          void* cast38 = (void*)t35;
          unsigned long c39 = 8;
          operator_delete(cast38, c39);
        }
      }
    cir_try_dispatch28: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI11IOException) {
      int ca_tok40 = 0;
      void* ca_exn41 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        e27 = (struct IOException*)__cir_exc_ptr;
        char* cast42 = (char*)&(_str_1);
        int r43 = printf(cast42);
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
  int c44 = 0;
  __retval23 = c44;
  int t45 = __retval23;
  return t45;
}

