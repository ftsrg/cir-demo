extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

char __const_main_szInput[256] = "test of the string";
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[25] = "The sentence entered is ";
char _str_1[17] = " characters long";
char _str_2[30] = "(unsigned)strlen(szInput)==18";
char _str_3[107] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/cstring9_strlen/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern unsigned long strlen(char* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  char szInput2[256];
  int c3 = 0;
  __retval1 = c3;
  // array copy
  __builtin_memcpy(szInput2, __const_main_szInput, (unsigned long)256 * sizeof(__const_main_szInput[0]));
  char* cast4 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std5;
  __VERIFIER_nondet_memory(&std5, sizeof(std5));
  char* cast6 = (char*)&(szInput2);
  unsigned long r7 = strlen(cast6);
  unsigned int cast8 = (unsigned int)r7;
  struct std__basic_ostream_char__std__char_traits_char__* std9;
  __VERIFIER_nondet_memory(&std9, sizeof(std9));
  char* cast10 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  struct std__basic_ostream_char__std__char_traits_char__* std12;
  __VERIFIER_nondet_memory(&std12, sizeof(std12));
  char* cast13 = (char*)&(szInput2);
  unsigned long r14 = strlen(cast13);
  unsigned int cast15 = (unsigned int)r14;
  unsigned int c16 = 18;
  _Bool c17 = ((cast15 == c16)) ? 1 : 0;
  if (c17) {
  } else {
    char* cast18 = (char*)&(_str_2);
    char* c19 = _str_3;
    unsigned int c20 = 17;
    char* cast21 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast18, c19, c20, cast21);
  }
  int c22 = 0;
  __retval1 = c22;
  int t23 = __retval1;
  return t23;
}

