extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct Point2 { int __field0; int __field1; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Setprecision { int _M_n; };
struct Circle3 { struct Point2 __field0; double __field1; };
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
extern void Circle3__Circle3(struct Circle3* p0, int p1, int p2, double p3);
extern int Point2__getX___const(struct Point2* p0);
extern int Point2__getY___const(struct Point2* p0);
extern double Circle3__getRadius___const(struct Circle3* p0);
extern void Point2__setX(struct Point2* p0, int p1);
extern void Point2__setY(struct Point2* p0, int p1);
extern void Circle3__setRadius(struct Circle3* p0, double p1);
extern void Circle3__print___const(struct Circle3* p0);
extern double Circle3__getDiameter___const(struct Circle3* p0);
extern double Circle3__getCircumference___const(struct Circle3* p0);
extern double Circle3__getArea___const(struct Circle3* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct Circle3 circle2;
  struct std___Setprecision agg_tmp03;
  int c4 = 0;
  __retval1 = c4;
  int c5 = 37;
  int c6 = 43;
  double c7 = 0x1.4p1;
  Circle3__Circle3(&circle2, c5, c6, c7);
  char* cast8 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std9;
  __VERIFIER_nondet_memory(&std9, sizeof(std9));
  struct Point2* base10 = (struct Point2*)((char *)&(circle2) + 0);
  int r11 = Point2__getX___const(base10);
  struct std__basic_ostream_char__std__char_traits_char__* std12;
  __VERIFIER_nondet_memory(&std12, sizeof(std12));
  char* cast13 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std14;
  __VERIFIER_nondet_memory(&std14, sizeof(std14));
  struct Point2* base15 = (struct Point2*)((char *)&(circle2) + 0);
  int r16 = Point2__getY___const(base15);
  struct std__basic_ostream_char__std__char_traits_char__* std17;
  __VERIFIER_nondet_memory(&std17, sizeof(std17));
  char* cast18 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
  double r20 = Circle3__getRadius___const(&circle2);
  struct std__basic_ostream_char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  struct Point2* base22 = (struct Point2*)((char *)&(circle2) + 0);
  int c23 = 2;
  Point2__setX(base22, c23);
  struct Point2* base24 = (struct Point2*)((char *)&(circle2) + 0);
  int c25 = 2;
  Point2__setY(base24, c25);
  double c26 = 0x1.1p2;
  Circle3__setRadius(&circle2, c26);
  char* cast27 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std28;
  __VERIFIER_nondet_memory(&std28, sizeof(std28));
  Circle3__print___const(&circle2);
  struct std__basic_ostream_char__std__char_traits_char__* std29;
  __VERIFIER_nondet_memory(&std29, sizeof(std29));
  int c30 = 2;
  struct std___Setprecision std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
  agg_tmp03 = std31;
  struct std___Setprecision t32 = agg_tmp03;
  struct std__basic_ostream_char__std__char_traits_char__* std33;
  __VERIFIER_nondet_memory(&std33, sizeof(std33));
  char* cast34 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std35;
  __VERIFIER_nondet_memory(&std35, sizeof(std35));
  double r36 = Circle3__getDiameter___const(&circle2);
  struct std__basic_ostream_char__std__char_traits_char__* std37;
  __VERIFIER_nondet_memory(&std37, sizeof(std37));
  char* cast38 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std39;
  __VERIFIER_nondet_memory(&std39, sizeof(std39));
  double r40 = Circle3__getCircumference___const(&circle2);
  struct std__basic_ostream_char__std__char_traits_char__* std41;
  __VERIFIER_nondet_memory(&std41, sizeof(std41));
  char* cast42 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std43;
  __VERIFIER_nondet_memory(&std43, sizeof(std43));
  double r44 = Circle3__getArea___const(&circle2);
  struct std__basic_ostream_char__std__char_traits_char__* std45;
  __VERIFIER_nondet_memory(&std45, sizeof(std45));
  struct std__basic_ostream_char__std__char_traits_char__* std46;
  __VERIFIER_nondet_memory(&std46, sizeof(std46));
  int c47 = 0;
  __retval1 = c47;
  int t48 = __retval1;
  return t48;
}

