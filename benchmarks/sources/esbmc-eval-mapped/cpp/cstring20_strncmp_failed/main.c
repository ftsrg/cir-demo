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

char __const_main_str2[5] = "R2PO";
char __const_main_str[5] = "R2D2";
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[35] = "Looking for R2 astromech droids...";
char _str_1[5] = "R2xx";
char _str_2[6] = "found";
char _str_3[27] = "strncmp(str, str2, 4) == 0";
char _str_4[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern int strncmp(char* p0, char* p1, unsigned long p2);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  char str2[5];
  char str23[5];
  int n4;
  int c5 = 0;
  __retval1 = c5;
  // array copy
  __builtin_memcpy(str2, __const_main_str, (unsigned long)5 * sizeof(__const_main_str[0]));
  // array copy
  __builtin_memcpy(str23, __const_main_str2, (unsigned long)5 * sizeof(__const_main_str2[0]));
  char* cast6 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std7;
  __VERIFIER_nondet_memory(&std7, sizeof(std7));
    int c8 = 0;
    n4 = c8;
    while (1) {
      int t10 = n4;
      int c11 = 3;
      _Bool c12 = ((t10 < c11)) ? 1 : 0;
      if (!c12) break;
        char* cast13 = (char*)&(str23);
        char* cast14 = (char*)&(_str_1);
        unsigned long c15 = 2;
        int r16 = strncmp(cast13, cast14, c15);
        int c17 = 0;
        _Bool c18 = ((r16 == c17)) ? 1 : 0;
        if (c18) {
          char* cast19 = (char*)&(_str_2);
          struct std__basic_ostream_char__std__char_traits_char__* std20;
          __VERIFIER_nondet_memory(&std20, sizeof(std20));
          int t21 = n4;
          long cast22 = (long)t21;
          char t23 = str2[cast22];
          struct std__basic_ostream_char__std__char_traits_char__* std24;
          __VERIFIER_nondet_memory(&std24, sizeof(std24));
          struct std__basic_ostream_char__std__char_traits_char__* std25;
          __VERIFIER_nondet_memory(&std25, sizeof(std25));
        }
    for_step9: ;
      int t26 = n4;
      int u27 = t26 + 1;
      n4 = u27;
    }
  char* cast28 = (char*)&(str2);
  char* cast29 = (char*)&(str23);
  unsigned long c30 = 4;
  int r31 = strncmp(cast28, cast29, c30);
  int c32 = 0;
  _Bool c33 = ((r31 == c32)) ? 1 : 0;
  if (c33) {
  } else {
    char* cast34 = (char*)&(_str_3);
    char* c35 = _str_4;
    unsigned int c36 = 43;
    char* cast37 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast34, c35, c36, cast37);
  }
  int c38 = 0;
  __retval1 = c38;
  int t39 = __retval1;
  return t39;
}

