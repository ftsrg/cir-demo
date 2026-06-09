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
char _str[17] = "Enter a number: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[19] = "You have entered: ";
char _str_2[23] = "(int)cin.gcount() >= 0";
char _str_3[117] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stream/istream_operator_float/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern long __VERIFIER_nondet_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  float n2;
  int c3 = 0;
  __retval1 = c3;
  char* cast4 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std5;
  __VERIFIER_nondet_memory(&std5, sizeof(std5));
  struct std__basic_istream_char__std__char_traits_char__* std6;
  __VERIFIER_nondet_memory(&std6, sizeof(std6));
  char* cast7 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std8;
  __VERIFIER_nondet_memory(&std8, sizeof(std8));
  float t9 = n2;
  struct std__basic_ostream_char__std__char_traits_char__* std10;
  __VERIFIER_nondet_memory(&std10, sizeof(std10));
  struct std__basic_ostream_char__std__char_traits_char__* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  long std12 = __VERIFIER_nondet_long();
  int cast13 = (int)std12;
  int c14 = 0;
  _Bool c15 = ((cast13 >= c14)) ? 1 : 0;
  if (c15) {
  } else {
    char* cast16 = (char*)&(_str_2);
    char* c17 = _str_3;
    unsigned int c18 = 20;
    char* cast19 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast16, c17, c18, cast19);
  }
  int c20 = 0;
  __retval1 = c20;
  int t21 = __retval1;
  return t21;
}

