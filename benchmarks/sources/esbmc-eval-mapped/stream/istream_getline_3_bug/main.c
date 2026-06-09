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
char _str[18] = "Enter your name: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[54] = "!((int)cin.gcount() >= 0 && (int)cin.gcount() <= 256)";
char _str_2[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stream/istream_getline_3_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[29] = "Enter your favourite movie: ";
char _str_4[53] = "!((int)cin.gcount() >= 0 && (int)cin.gcount() <=256)";
char _str_5[23] = "'s favourite movie is ";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern long __VERIFIER_nondet_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  char name2[256];
  char title3[256];
  int c4 = 0;
  __retval1 = c4;
  char* cast5 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std6;
  __VERIFIER_nondet_memory(&std6, sizeof(std6));
  char* cast7 = (char*)&(name2);
  long c8 = 256;
  struct std__basic_istream_char__std__char_traits_char__* std9;
  __VERIFIER_nondet_memory(&std9, sizeof(std9));
  long std10 = __VERIFIER_nondet_long();
  int cast11 = (int)std10;
  int c12 = 0;
  _Bool c13 = ((cast11 >= c12)) ? 1 : 0;
  _Bool ternary14;
  if (c13) {
    long std15 = __VERIFIER_nondet_long();
    int cast16 = (int)std15;
    int c17 = 256;
    _Bool c18 = ((cast16 <= c17)) ? 1 : 0;
    ternary14 = (_Bool)c18;
  } else {
    _Bool c19 = 0;
    ternary14 = (_Bool)c19;
  }
  _Bool u20 = !ternary14;
  if (u20) {
  } else {
    char* cast21 = (char*)&(_str_1);
    char* c22 = _str_2;
    unsigned int c23 = 19;
    char* cast24 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast21, c22, c23, cast24);
  }
  char* cast25 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std26;
  __VERIFIER_nondet_memory(&std26, sizeof(std26));
  char* cast27 = (char*)&(title3);
  long c28 = 256;
  struct std__basic_istream_char__std__char_traits_char__* std29;
  __VERIFIER_nondet_memory(&std29, sizeof(std29));
  long std30 = __VERIFIER_nondet_long();
  int cast31 = (int)std30;
  int c32 = 0;
  _Bool c33 = ((cast31 >= c32)) ? 1 : 0;
  _Bool ternary34;
  if (c33) {
    long std35 = __VERIFIER_nondet_long();
    int cast36 = (int)std35;
    int c37 = 256;
    _Bool c38 = ((cast36 <= c37)) ? 1 : 0;
    ternary34 = (_Bool)c38;
  } else {
    _Bool c39 = 0;
    ternary34 = (_Bool)c39;
  }
  _Bool u40 = !ternary34;
  if (u40) {
  } else {
    char* cast41 = (char*)&(_str_4);
    char* c42 = _str_2;
    unsigned int c43 = 22;
    char* cast44 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast41, c42, c43, cast44);
  }
  char* cast45 = (char*)&(name2);
  struct std__basic_ostream_char__std__char_traits_char__* std46;
  __VERIFIER_nondet_memory(&std46, sizeof(std46));
  char* cast47 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std48;
  __VERIFIER_nondet_memory(&std48, sizeof(std48));
  char* cast49 = (char*)&(title3);
  struct std__basic_ostream_char__std__char_traits_char__* std50;
  __VERIFIER_nondet_memory(&std50, sizeof(std50));
  int c51 = 0;
  __retval1 = c51;
  int t52 = __retval1;
  return t52;
}

