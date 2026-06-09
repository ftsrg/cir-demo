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

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[11] = "min(1,2)==";
char _str_1[11] = "min(2,1)==";
char _str_2[15] = "min('a','z')==";
char _str_3[20] = "min('a','z') != 'a'";
char _str_4[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm118/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_5[17] = "min(3.14,2.72)==";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int ref_tmp02;
  int ref_tmp13;
  int ref_tmp24;
  int ref_tmp35;
  char ref_tmp46;
  char ref_tmp57;
  double ref_tmp68;
  double ref_tmp79;
  int c10 = 0;
  __retval1 = c10;
  char* cast11 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std12;
  __VERIFIER_nondet_memory(&std12, sizeof(std12));
  int c13 = 1;
  ref_tmp02 = c13;
  int c14 = 2;
  ref_tmp13 = c14;
  int* std15;
  __VERIFIER_nondet_memory(&std15, sizeof(std15));
  int t16 = *std15;
  struct std__basic_ostream_char__std__char_traits_char__* std17;
  __VERIFIER_nondet_memory(&std17, sizeof(std17));
  struct std__basic_ostream_char__std__char_traits_char__* std18;
  __VERIFIER_nondet_memory(&std18, sizeof(std18));
  char* cast19 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std20;
  __VERIFIER_nondet_memory(&std20, sizeof(std20));
  int c21 = 2;
  ref_tmp24 = c21;
  int c22 = 1;
  ref_tmp35 = c22;
  int* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  int t24 = *std23;
  struct std__basic_ostream_char__std__char_traits_char__* std25;
  __VERIFIER_nondet_memory(&std25, sizeof(std25));
  struct std__basic_ostream_char__std__char_traits_char__* std26;
  __VERIFIER_nondet_memory(&std26, sizeof(std26));
  char* cast27 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std28;
  __VERIFIER_nondet_memory(&std28, sizeof(std28));
  char c29 = 97;
  ref_tmp46 = c29;
  char c30 = 122;
  ref_tmp57 = c30;
  char* std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
  char t32 = *std31;
  struct std__basic_ostream_char__std__char_traits_char__* std33;
  __VERIFIER_nondet_memory(&std33, sizeof(std33));
  struct std__basic_ostream_char__std__char_traits_char__* std34;
  __VERIFIER_nondet_memory(&std34, sizeof(std34));
  char* cast35 = (char*)&(_str_3);
  char* c36 = _str_4;
  unsigned int c37 = 19;
  char* cast38 = (char*)&(__PRETTY_FUNCTION___main);
  __assert_fail(cast35, c36, c37, cast38);
  char* cast39 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std40;
  __VERIFIER_nondet_memory(&std40, sizeof(std40));
  double c41 = 0x1.91eb851eb851fp1;
  ref_tmp68 = c41;
  double c42 = 0x1.5c28f5c28f5c3p1;
  ref_tmp79 = c42;
  double* std43;
  __VERIFIER_nondet_memory(&std43, sizeof(std43));
  double t44 = *std43;
  struct std__basic_ostream_char__std__char_traits_char__* std45;
  __VERIFIER_nondet_memory(&std45, sizeof(std45));
  struct std__basic_ostream_char__std__char_traits_char__* std46;
  __VERIFIER_nondet_memory(&std46, sizeof(std46));
  int c47 = 0;
  __retval1 = c47;
  int t48 = __retval1;
  return t48;
}

