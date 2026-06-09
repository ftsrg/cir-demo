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
char _str_1[25] = "You have entered number ";
char _str_2[24] = " You have entered word ";
char _str_3[50] = "(int)cin.gcount() >= 0 && (int)cin.gcount() < 256";
char _str_4[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stream/istream_peek_1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
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
      char* cast21 = (char*)&(_str_1);
      struct std__basic_ostream_char__std__char_traits_char__* std22;
      __VERIFIER_nondet_memory(&std22, sizeof(std22));
      int t23 = n3;
      struct std__basic_ostream_char__std__char_traits_char__* std24;
      __VERIFIER_nondet_memory(&std24, sizeof(std24));
      struct std__basic_ostream_char__std__char_traits_char__* std25;
      __VERIFIER_nondet_memory(&std25, sizeof(std25));
    } else {
      struct std__basic_istream_char__std__char_traits_char__* std26;
      __VERIFIER_nondet_memory(&std26, sizeof(std26));
      char* cast27 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* std28;
      __VERIFIER_nondet_memory(&std28, sizeof(std28));
      char* cast29 = (char*)&(str4);
      struct std__basic_ostream_char__std__char_traits_char__* std30;
      __VERIFIER_nondet_memory(&std30, sizeof(std30));
      struct std__basic_ostream_char__std__char_traits_char__* std31;
      __VERIFIER_nondet_memory(&std31, sizeof(std31));
    }
  long std32 = __VERIFIER_nondet_long();
  int cast33 = (int)std32;
  int c34 = 0;
  _Bool c35 = ((cast33 >= c34)) ? 1 : 0;
  _Bool ternary36;
  if (c35) {
    long std37 = __VERIFIER_nondet_long();
    int cast38 = (int)std37;
    int c39 = 256;
    _Bool c40 = ((cast38 < c39)) ? 1 : 0;
    ternary36 = (_Bool)c40;
  } else {
    _Bool c41 = 0;
    ternary36 = (_Bool)c41;
  }
  if (ternary36) {
  } else {
    char* cast42 = (char*)&(_str_3);
    char* c43 = _str_4;
    unsigned int c44 = 33;
    char* cast45 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast42, c43, c44, cast45);
  }
  int c46 = 0;
  __retval1 = c46;
  int t47 = __retval1;
  return t47;
}

