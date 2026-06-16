extern void abort(void);
// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long _M_gcount; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[39] = "Enter your name (stop with percent) : ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[54] = "!((int)cin.gcount() >= 0 && (int)cin.gcount() <= 256)";
char _str_2[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stream/istream_getline_4_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[50] = "Enter your favourite movie (stop with percent) : ";
char _str_4[23] = "'s favourite movie is ";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern long __VERIFIER_nondet_long(void);
// function: main
int main() {
bb0: ;
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
  _Bool u21 = !ternary15;
  if (u21) {
  } else {
    char* cast22 = (char*)&(_str_1);
    char* c23 = (char*)_str_2;
    unsigned int c24 = 19;
    char* cast25 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast22, c23, c24, cast25);
  }
  char* cast26 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std27;
  __VERIFIER_nondet_memory(&std27, sizeof(std27));
  char* cast28 = (char*)&(title3);
  long c29 = 256;
  char c30 = 37;
  struct std__basic_istream_char__std__char_traits_char__* std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
  long std32 = __VERIFIER_nondet_long();
  int cast33 = (int)std32;
  int c34 = 0;
  _Bool c35 = ((cast33 >= c34)) ? 1 : 0;
  _Bool ternary36;
  if (c35) {
    long std37 = __VERIFIER_nondet_long();
    int cast38 = (int)std37;
    int c39 = 256;
    _Bool c40 = ((cast38 <= c39)) ? 1 : 0;
    ternary36 = (_Bool)c40;
  } else {
    _Bool c41 = 0;
    ternary36 = (_Bool)c41;
  }
  _Bool u42 = !ternary36;
  if (u42) {
  } else {
    char* cast43 = (char*)&(_str_1);
    char* c44 = (char*)_str_2;
    unsigned int c45 = 22;
    char* cast46 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast43, c44, c45, cast46);
  }
  char* cast47 = (char*)&(name2);
  struct std__basic_ostream_char__std__char_traits_char__* std48;
  __VERIFIER_nondet_memory(&std48, sizeof(std48));
  char* cast49 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std50;
  __VERIFIER_nondet_memory(&std50, sizeof(std50));
  char* cast51 = (char*)&(title3);
  struct std__basic_ostream_char__std__char_traits_char__* std52;
  __VERIFIER_nondet_memory(&std52, sizeof(std52));
  int c53 = 0;
  __retval1 = c53;
  int t54 = __retval1;
  return t54;
}

