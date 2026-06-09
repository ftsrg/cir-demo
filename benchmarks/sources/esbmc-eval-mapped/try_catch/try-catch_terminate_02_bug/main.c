extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;
// Per-RTTI address tags: each thrown/caught type symbol gets a
// distinct storage location so catch dispatch is a pointer compare.
static const char __cir_eh_type__ZTIi[] = "_ZTIi";

// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cerr __attribute__((aligned(8)));
char _str[26] = "terminate handler called\n";
static const char _ZTIi__n_[] = "_ZTIi";
static void* _ZTIi[2] = {(void*)0, (void*)_ZTIi__n_};
extern void abort();
void myterminate();
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z11myterminatev
void myterminate() {
bb0:
  char* cast1 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std2;
  __VERIFIER_nondet_memory(&std2, sizeof(std2));
  abort();
  return;
}

// function: main
int main() {
bb3:
  int __retval5;
  int c6 = 0;
  __retval5 = c6;
  void* std7;
  __VERIFIER_nondet_memory(&std7, sizeof(std7));
  static char exc_buf8[4] = {0};
  int* exc9 = (int*)exc_buf8;
  int c10 = 0;
  *exc9 = c10;
  __cir_exc_ptr = (void*)exc9;
  __cir_exc_dtor = (void*)0;
  __cir_exc_type = (const void*)__cir_eh_type__ZTIi;
  __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTIi;
  __cir_exc_active = 1;
  { int __cir_eh_ret = (int)0; return __cir_eh_ret; }
  __builtin_unreachable();
bb4:
  int c11 = 0;
  __retval5 = c11;
  int t12 = __retval5;
  return t12;
}

