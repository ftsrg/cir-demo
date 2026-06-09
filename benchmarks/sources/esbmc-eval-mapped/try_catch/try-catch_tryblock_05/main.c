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

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct B { unsigned char __field0; };
struct D { unsigned char __field0; };
struct E { char* error; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct anon_struct_0 { unsigned char* __field0; unsigned char* __field1; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern unsigned char _ZTI1E[];
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[17] = "Exception in D()";
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS1E[3] = "1E";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[39] = "Handler of function try block of D(): ";
char _str_2[12] = "~B() called";
char _str_3[12] = "~D() called";
extern int __gxx_personality_v0();
void B__B(struct B* p0);
void E__E(struct E* p0, char* p1);
void B___B(struct B* p0);
void D__D_2(struct D* p0);
void D__D(struct D* p0) { D__D_2(p0); }
void D___D(struct D* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _ZN1BC2Ev
void B__B(struct B* v0) {
bb1:
  struct B* this2;
  this2 = v0;
  struct B* t3 = this2;
  return;
}

// function: _ZN1EC2EPKc
void E__E(struct E* v4, char* v5) {
bb6:
  struct E* this7;
  char* arg8;
  this7 = v4;
  arg8 = v5;
  struct E* t9 = this7;
  char* t10 = arg8;
  t9->error = t10;
  return;
}

// function: _ZN1BD2Ev
void B___B(struct B* v11) {
bb12:
  struct B* this13;
  this13 = v11;
  struct B* t14 = this13;
  char* cast15 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std16;
  __VERIFIER_nondet_memory(&std16, sizeof(std16));
  struct std__basic_ostream_char__std__char_traits_char__* std17;
  __VERIFIER_nondet_memory(&std17, sizeof(std17));
  return;
}

// function: _ZN1DC2Ev
void D__D_2(struct D* v18) {
bb19:
  struct D* this20;
  this20 = v18;
  struct D* t21 = this20;
    struct E* e22;
      struct B* base24 = (struct B*)((char *)t21 + 0);
      B__B(base24);
      if (__cir_exc_active) {
        goto cir_try_dispatch23;
      }
        static char exc_buf25[8] = {0};
        struct E* exc26 = (struct E*)exc_buf25;
        char* cast27 = (char*)&(_str);
        E__E(exc26, cast27);
        if (__cir_exc_active) {
          {
            struct B* base28 = (struct B*)((char *)t21 + 0);
            B___B(base28);
          }
          goto cir_try_dispatch23;
        }
        __cir_exc_ptr = (void*)exc26;
        __cir_exc_dtor = (void*)0;
        __cir_exc_type = (const void*)__cir_eh_type__ZTI1E;
        __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI1E;
        __cir_exc_active = 1;
        {
          struct B* base29 = (struct B*)((char *)t21 + 0);
          B___B(base29);
        }
        goto cir_try_dispatch23;
        __builtin_unreachable();
    cir_try_dispatch23: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI1E) {
      int ca_tok30 = 0;
      void* ca_exn31 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        e22 = (struct E*)__cir_exc_ptr;
        char* cast32 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std33;
        __VERIFIER_nondet_memory(&std33, sizeof(std33));
        struct E* t34 = e22;
        char* t35 = t34->error;
        struct std__basic_ostream_char__std__char_traits_char__* std36;
        __VERIFIER_nondet_memory(&std36, sizeof(std36));
        struct std__basic_ostream_char__std__char_traits_char__* std37;
        __VERIFIER_nondet_memory(&std37, sizeof(std37));
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

// function: _ZN1DD2Ev
void D___D(struct D* v38) {
bb39:
  struct D* this40;
  this40 = v38;
  struct D* t41 = this40;
    char* cast42 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std43;
    __VERIFIER_nondet_memory(&std43, sizeof(std43));
    struct std__basic_ostream_char__std__char_traits_char__* std44;
    __VERIFIER_nondet_memory(&std44, sizeof(std44));
  {
    struct B* base45 = (struct B*)((char *)t41 + 0);
    B___B(base45);
  }
  return;
}

// function: main
int main() {
bb46:
  int __retval47;
  int c48 = 0;
  __retval47 = c48;
    struct D val49;
      D__D(&val49);
      if (__cir_exc_active) {
        goto cir_try_dispatch50;
      }
      {
        D___D(&val49);
      }
    cir_try_dispatch50: ;
    if (__cir_exc_active) {
    {
      int ca_tok51 = 0;
      void* ca_exn52 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
      {
        if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
      }
    }
    }
  int t53 = __retval47;
  return t53;
}

