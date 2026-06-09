extern void abort(void);
// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_istream_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[39] = "Enter your name (stop with percent) : ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[51] = "(int)cin.gcount() >= 0 && (int)cin.gcount() <= 256";
char _str_2[112] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stream/istream_getline_2/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[50] = "Enter your favourite movie (stop with percent) : ";
char _str_4[23] = "'s favourite movie is ";
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
  char c9 = 37;
  struct std__basic_istream_char__std__char_traits_char__* std10;
  __VERIFIER_nondet_memory(&std10, sizeof(std10));
  long std11 = __VERIFIER_nondet_long();
  int cast12 = (int)std11;
  int c13 = 0;
  _Bool c14 = ((cast12 >= c13)) ? 1 : 0;
  _Bool ternary15;
  if (c14) {
    long std16 = __VERIFIER_nondet_long();
    int cast17 = (int)std16;
    int c18 = 256;
    _Bool c19 = ((cast17 <= c18)) ? 1 : 0;
    ternary15 = (_Bool)c19;
  } else {
    _Bool c20 = 0;
    ternary15 = (_Bool)c20;
  }
  if (ternary15) {
  } else {
    char* cast21 = (char*)&(_str_1);
    char* c22 = _str_2;
    unsigned int c23 = 18;
    char* cast24 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast21, c22, c23, cast24);
  }
  char* cast25 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std26;
  __VERIFIER_nondet_memory(&std26, sizeof(std26));
  char* cast27 = (char*)&(title3);
  long c28 = 256;
  char c29 = 37;
  struct std__basic_istream_char__std__char_traits_char__* std30;
  __VERIFIER_nondet_memory(&std30, sizeof(std30));
  long std31 = __VERIFIER_nondet_long();
  int cast32 = (int)std31;
  int c33 = 0;
  _Bool c34 = ((cast32 >= c33)) ? 1 : 0;
  _Bool ternary35;
  if (c34) {
    long std36 = __VERIFIER_nondet_long();
    int cast37 = (int)std36;
    int c38 = 256;
    _Bool c39 = ((cast37 <= c38)) ? 1 : 0;
    ternary35 = (_Bool)c39;
  } else {
    _Bool c40 = 0;
    ternary35 = (_Bool)c40;
  }
  if (ternary35) {
  } else {
    char* cast41 = (char*)&(_str_1);
    char* c42 = _str_2;
    unsigned int c43 = 21;
    char* cast44 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast41, c42, c43, cast44);
  }
  char* cast45 = (char*)&(name2);
  struct std__basic_ostream_char__std__char_traits_char__* std46;
  __VERIFIER_nondet_memory(&std46, sizeof(std46));
  char* cast47 = (char*)&(_str_4);
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

