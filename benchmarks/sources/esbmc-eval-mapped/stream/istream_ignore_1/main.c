extern void abort(void);
// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long _M_gcount; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[34] = "Enter your first and last names: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[23] = "(int)cin.gcount() == 1";
char _str_2[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stream/istream_ignore_1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[19] = "Your initials are ";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern int __VERIFIER_nondet_int(void);
extern long __VERIFIER_nondet_long(void);
// function: main
int main() {
bb0: ;
  int __retval1;
  char first2;
  char last3;
  int i4;
  int j5;
  int c6 = 0;
  __retval1 = c6;
  char* cast7 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std8;
  __VERIFIER_nondet_memory(&std8, sizeof(std8));
  int std9 = __VERIFIER_nondet_int();
  char cast10 = (char)std9;
  first2 = cast10;
  long std11 = __VERIFIER_nondet_long();
  int cast12 = (int)std11;
  int c13 = 1;
  _Bool c14 = ((cast12 == c13)) ? 1 : 0;
  if (c14) {
  } else {
    char* cast15 = (char*)&(_str_1);
    char* c16 = (char*)_str_2;
    unsigned int c17 = 19;
    char* cast18 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast15, c16, c17, cast18);
  }
  long c19 = 256;
  int c20 = 32;
  struct std__basic_istream_char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  int std22 = __VERIFIER_nondet_int();
  char cast23 = (char)std22;
  last3 = cast23;
  long std24 = __VERIFIER_nondet_long();
  int cast25 = (int)std24;
  int c26 = 1;
  _Bool c27 = ((cast25 == c26)) ? 1 : 0;
  if (c27) {
  } else {
    char* cast28 = (char*)&(_str_1);
    char* c29 = (char*)_str_2;
    unsigned int c30 = 23;
    char* cast31 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast28, c29, c30, cast31);
  }
  char* cast32 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std33;
  __VERIFIER_nondet_memory(&std33, sizeof(std33));
  char t34 = first2;
  struct std__basic_ostream_char__std__char_traits_char__* std35;
  __VERIFIER_nondet_memory(&std35, sizeof(std35));
  char t36 = last3;
  struct std__basic_ostream_char__std__char_traits_char__* std37;
  __VERIFIER_nondet_memory(&std37, sizeof(std37));
  int c38 = 0;
  __retval1 = c38;
  int t39 = __retval1;
  return t39;
}

