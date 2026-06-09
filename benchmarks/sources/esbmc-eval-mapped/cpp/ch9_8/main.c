extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct Point { int __field0; int __field1; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[17] = "X coordinate is ";
char _str_1[18] = "\nY coordinate is ";
char _str_2[32] = "\n\nThe new location of point is ";
char _str_3[19] = "point.getX() == 10";
char _str_4[97] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/ch9_8/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_5[19] = "point.getY() == 10";
extern void Point__Point(struct Point* p0, int p1, int p2);
extern int Point__getX___const(struct Point* p0);
extern int Point__getY___const(struct Point* p0);
extern void Point__setX(struct Point* p0, int p1);
extern void Point__setY(struct Point* p0, int p1);
extern void Point__print___const(struct Point* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct Point point2;
  int c3 = 0;
  __retval1 = c3;
  int c4 = 72;
  int c5 = 115;
  Point__Point(&point2, c4, c5);
  char* cast6 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std7;
  __VERIFIER_nondet_memory(&std7, sizeof(std7));
  int r8 = Point__getX___const(&point2);
  struct std__basic_ostream_char__std__char_traits_char__* std9;
  __VERIFIER_nondet_memory(&std9, sizeof(std9));
  char* cast10 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  int r12 = Point__getY___const(&point2);
  struct std__basic_ostream_char__std__char_traits_char__* std13;
  __VERIFIER_nondet_memory(&std13, sizeof(std13));
  int c14 = 10;
  Point__setX(&point2, c14);
  int c15 = 10;
  Point__setY(&point2, c15);
  char* cast16 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std17;
  __VERIFIER_nondet_memory(&std17, sizeof(std17));
  Point__print___const(&point2);
  struct std__basic_ostream_char__std__char_traits_char__* std18;
  __VERIFIER_nondet_memory(&std18, sizeof(std18));
  int r19 = Point__getX___const(&point2);
  int c20 = 10;
  _Bool c21 = ((r19 == c20)) ? 1 : 0;
  if (c21) {
  } else {
    char* cast22 = (char*)&(_str_3);
    char* c23 = _str_4;
    unsigned int c24 = 34;
    char* cast25 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast22, c23, c24, cast25);
  }
  int r26 = Point__getY___const(&point2);
  int c27 = 10;
  _Bool c28 = ((r26 == c27)) ? 1 : 0;
  if (c28) {
  } else {
    char* cast29 = (char*)&(_str_5);
    char* c30 = _str_4;
    unsigned int c31 = 35;
    char* cast32 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast29, c30, c31, cast32);
  }
  int c33 = 0;
  __retval1 = c33;
  int t34 = __retval1;
  return t34;
}

