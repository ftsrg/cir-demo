extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct Circle { int __field0; int __field1; double __field2; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Setprecision { int _M_n; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base10floatfieldE_const __attribute__((aligned(4))) = 260;
int _ZNSt8ios_base5fixedE_const __attribute__((aligned(4))) = 4;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[17] = "X coordinate is ";
char _str_1[18] = "\nY coordinate is ";
char _str_2[12] = "\nRadius is ";
char _str_3[45] = "\n\nThe new location and radius of circle are\n";
char _str_4[14] = "\nDiameter is ";
char _str_5[19] = "\nCircumference is ";
char _str_6[10] = "\nArea is ";
extern void Circle__Circle(struct Circle* p0, int p1, int p2, double p3);
extern int Circle__getX___const(struct Circle* p0);
extern int Circle__getY___const(struct Circle* p0);
extern double Circle__getRadius___const(struct Circle* p0);
extern void Circle__setX(struct Circle* p0, int p1);
extern void Circle__setY(struct Circle* p0, int p1);
extern void Circle__setRadius(struct Circle* p0, double p1);
extern void Circle__print___const(struct Circle* p0);
extern double Circle__getDiameter___const(struct Circle* p0);
extern double Circle__getCircumference___const(struct Circle* p0);
extern double Circle__getArea___const(struct Circle* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct Circle circle2;
  struct std___Setprecision agg_tmp03;
  int c4 = 0;
  __retval1 = c4;
  int c5 = 37;
  int c6 = 43;
  double c7 = 0x1.4p1;
  Circle__Circle(&circle2, c5, c6, c7);
  char* cast8 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std9;
  __VERIFIER_nondet_memory(&std9, sizeof(std9));
  int r10 = Circle__getX___const(&circle2);
  struct std__basic_ostream_char__std__char_traits_char__* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  char* cast12 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std13;
  __VERIFIER_nondet_memory(&std13, sizeof(std13));
  int r14 = Circle__getY___const(&circle2);
  struct std__basic_ostream_char__std__char_traits_char__* std15;
  __VERIFIER_nondet_memory(&std15, sizeof(std15));
  char* cast16 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std17;
  __VERIFIER_nondet_memory(&std17, sizeof(std17));
  double r18 = Circle__getRadius___const(&circle2);
  struct std__basic_ostream_char__std__char_traits_char__* std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
  int c20 = 2;
  Circle__setX(&circle2, c20);
  int c21 = 2;
  Circle__setY(&circle2, c21);
  double c22 = 0x1.1p2;
  Circle__setRadius(&circle2, c22);
  char* cast23 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std24;
  __VERIFIER_nondet_memory(&std24, sizeof(std24));
  Circle__print___const(&circle2);
  struct std__basic_ostream_char__std__char_traits_char__* std25;
  __VERIFIER_nondet_memory(&std25, sizeof(std25));
  int c26 = 2;
  struct std___Setprecision std27;
  __VERIFIER_nondet_memory(&std27, sizeof(std27));
  agg_tmp03 = std27;
  struct std___Setprecision t28 = agg_tmp03;
  struct std__basic_ostream_char__std__char_traits_char__* std29;
  __VERIFIER_nondet_memory(&std29, sizeof(std29));
  char* cast30 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
  double r32 = Circle__getDiameter___const(&circle2);
  struct std__basic_ostream_char__std__char_traits_char__* std33;
  __VERIFIER_nondet_memory(&std33, sizeof(std33));
  char* cast34 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std35;
  __VERIFIER_nondet_memory(&std35, sizeof(std35));
  double r36 = Circle__getCircumference___const(&circle2);
  struct std__basic_ostream_char__std__char_traits_char__* std37;
  __VERIFIER_nondet_memory(&std37, sizeof(std37));
  char* cast38 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std39;
  __VERIFIER_nondet_memory(&std39, sizeof(std39));
  double r40 = Circle__getArea___const(&circle2);
  struct std__basic_ostream_char__std__char_traits_char__* std41;
  __VERIFIER_nondet_memory(&std41, sizeof(std41));
  struct std__basic_ostream_char__std__char_traits_char__* std42;
  __VERIFIER_nondet_memory(&std42, sizeof(std42));
  int c43 = 0;
  __retval1 = c43;
  int t44 = __retval1;
  return t44;
}

