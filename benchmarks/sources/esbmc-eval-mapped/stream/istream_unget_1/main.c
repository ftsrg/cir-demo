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
struct std__basic_istream_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[27] = "Enter a number or a word: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[23] = "(int)cin.gcount() == 0";
char _str_2[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stream/istream_unget_1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[25] = "You have entered number ";
char _str_4[24] = " You have entered word ";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern int __VERIFIER_nondet_int(void);
extern long __VERIFIER_nondet_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  char c2;
  int n3;
  char str4[256];
  int c5 = 0;
  __retval1 = c5;
  char* cast6 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std7;
  __VERIFIER_nondet_memory(&std7, sizeof(std7));
  int std8 = __VERIFIER_nondet_int();
  char cast9 = (char)std8;
  c2 = cast9;
    char t10 = c2;
    int cast11 = (int)t10;
    int c12 = 48;
    _Bool c13 = ((cast11 >= c12)) ? 1 : 0;
    _Bool ternary14;
    if (c13) {
      char t15 = c2;
      int cast16 = (int)t15;
      int c17 = 57;
      _Bool c18 = ((cast16 <= c17)) ? 1 : 0;
      ternary14 = (_Bool)c18;
    } else {
      _Bool c19 = 0;
      ternary14 = (_Bool)c19;
    }
    if (ternary14) {
      struct std__basic_istream_char__std__char_traits_char__* std20;
      __VERIFIER_nondet_memory(&std20, sizeof(std20));
      long std21 = __VERIFIER_nondet_long();
      int cast22 = (int)std21;
      int c23 = 0;
      _Bool c24 = ((cast22 == c23)) ? 1 : 0;
      if (c24) {
      } else {
        char* cast25 = (char*)&(_str_1);
        char* c26 = _str_2;
        unsigned int c27 = 24;
        char* cast28 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast25, c26, c27, cast28);
      }
      struct std__basic_istream_char__std__char_traits_char__* std29;
      __VERIFIER_nondet_memory(&std29, sizeof(std29));
      char* cast30 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* std31;
      __VERIFIER_nondet_memory(&std31, sizeof(std31));
      int t32 = n3;
      struct std__basic_ostream_char__std__char_traits_char__* std33;
      __VERIFIER_nondet_memory(&std33, sizeof(std33));
      struct std__basic_ostream_char__std__char_traits_char__* std34;
      __VERIFIER_nondet_memory(&std34, sizeof(std34));
    } else {
      struct std__basic_istream_char__std__char_traits_char__* std35;
      __VERIFIER_nondet_memory(&std35, sizeof(std35));
      long std36 = __VERIFIER_nondet_long();
      int cast37 = (int)std36;
      int c38 = 0;
      _Bool c39 = ((cast37 == c38)) ? 1 : 0;
      if (c39) {
      } else {
        char* cast40 = (char*)&(_str_1);
        char* c41 = _str_2;
        unsigned int c42 = 31;
        char* cast43 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast40, c41, c42, cast43);
      }
      struct std__basic_istream_char__std__char_traits_char__* std44;
      __VERIFIER_nondet_memory(&std44, sizeof(std44));
      char* cast45 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* std46;
      __VERIFIER_nondet_memory(&std46, sizeof(std46));
      char* cast47 = (char*)&(str4);
      struct std__basic_ostream_char__std__char_traits_char__* std48;
      __VERIFIER_nondet_memory(&std48, sizeof(std48));
      struct std__basic_ostream_char__std__char_traits_char__* std49;
      __VERIFIER_nondet_memory(&std49, sizeof(std49));
    }
  int c50 = 0;
  __retval1 = c50;
  int t51 = __retval1;
  return t51;
}

