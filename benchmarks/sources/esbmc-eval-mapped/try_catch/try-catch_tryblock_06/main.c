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
struct E { char* error; };
struct N__C { unsigned char __field0; };
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
struct N__C _ZN1N4calfE;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[8] = "In main";
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS1E[3] = "1E";
char _str_1[7] = "In C()";
char _str_2[17] = "Exception in C()";
void N__C__C(struct N__C* p0);
void __cxx_global_var_init();
extern int __gxx_personality_v0();
int main();
void E__E(struct E* p0, char* p1);
__attribute__((constructor)) void _GLOBAL__sub_I_main_cpp();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _ZN1N1CC2Ev
void N__C__C(struct N__C* v0) {
bb1:
  struct N__C* this2;
  this2 = v0;
  struct N__C* t3 = this2;
  char* cast4 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std5;
  __VERIFIER_nondet_memory(&std5, sizeof(std5));
  struct std__basic_ostream_char__std__char_traits_char__* std6;
  __VERIFIER_nondet_memory(&std6, sizeof(std6));
  static char exc_buf7[8] = {0};
  struct E* exc8 = (struct E*)exc_buf7;
  char* cast9 = (char*)&(_str_2);
  E__E(exc8, cast9);
  if (__cir_exc_active) {
    return;
  }
  __cir_exc_ptr = (void*)exc8;
  __cir_exc_dtor = (void*)0;
  __cir_exc_type = (const void*)__cir_eh_type__ZTI1E;
  __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI1E;
  __cir_exc_active = 1;
  return;
  __builtin_unreachable();
}

// function: __cxx_global_var_init
void __cxx_global_var_init() {
bb10:
  N__C__C(&_ZN1N4calfE);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: main
int main() {
bb11:
  int __retval12;
  int c13 = 0;
  __retval12 = c13;
    struct E* e14;
      char* cast16 = (char*)&(_str);
      struct std__basic_ostream_char__std__char_traits_char__* std17;
      __VERIFIER_nondet_memory(&std17, sizeof(std17));
      struct std__basic_ostream_char__std__char_traits_char__* std18;
      __VERIFIER_nondet_memory(&std18, sizeof(std18));
    cir_try_dispatch15: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI1E) {
      int ca_tok19 = 0;
      void* ca_exn20 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        e14 = (struct E*)__cir_exc_ptr;
        struct E* t21 = e14;
        char* t22 = t21->error;
        struct std__basic_ostream_char__std__char_traits_char__* std23;
        __VERIFIER_nondet_memory(&std23, sizeof(std23));
        struct std__basic_ostream_char__std__char_traits_char__* std24;
        __VERIFIER_nondet_memory(&std24, sizeof(std24));
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
  int t25 = __retval12;
  return t25;
}

// function: _ZN1EC2EPKc
void E__E(struct E* v26, char* v27) {
bb28:
  struct E* this29;
  char* arg30;
  this29 = v26;
  arg30 = v27;
  struct E* t31 = this29;
  char* t32 = arg30;
  t31->error = t32;
  return;
}

// function: _GLOBAL__sub_I_main.cpp
__attribute__((constructor)) void _GLOBAL__sub_I_main_cpp() {
bb33:
  __cxx_global_var_init();
  if (__cir_exc_active) {
    return;
  }
  return;
}

