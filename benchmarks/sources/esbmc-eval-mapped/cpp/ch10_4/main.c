extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}
__attribute__((weak)) void __VERIFIER_virtual_call_void(void* __obj, int __slot) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  ((void(*)(void*))__fn)(__obj);
}

// Struct definitions (auto-parsed)
struct Point { void* __field0; int __field1; int __field2; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Setprecision { int _M_n; };
struct Circle { struct Point __field0; double __field1; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base10floatfieldE_const __attribute__((aligned(4))) = 260;
int _ZNSt8ios_base5fixedE_const __attribute__((aligned(4))) = 4;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[45] = "Invoking print function on point and circle ";
char _str_1[30] = "\nobjects with static binding ";
char _str_2[10] = "\n\nPoint: ";
char _str_3[10] = "\nCircle: ";
char _str_4[47] = "\n\nInvoking print function on point and circle ";
char _str_5[30] = "\nobjects with dynamic binding";
char _str_6[49] = "\n\nCalling virtual function print with base-class";
char _str_7[30] = "\npointer to base-class object";
char _str_8[37] = "\ninvokes base-class print function:\n";
char _str_9[39] = "\n\nCalling virtual function print with ";
char _str_10[48] = "\nderived-class pointer to derived-class object ";
char _str_11[40] = "\ninvokes derived-class print function:\n";
char _str_12[34] = "\npointer to derived-class object ";
extern void Point__Point(struct Point* p0, int p1, int p2);
extern void Circle__Circle(struct Circle* p0, int p1, int p2, double p3);
extern void Point__print___const(struct Point* p0);
extern void Circle__print___const(struct Circle* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct Point point2;
  struct Point* pointPtr3;
  struct Circle circle4;
  struct Circle* circlePtr5;
  struct std___Setprecision agg_tmp06;
  int c7 = 0;
  __retval1 = c7;
  int c8 = 30;
  int c9 = 50;
  Point__Point(&point2, c8, c9);
  struct Point* c10 = ((void*)0);
  pointPtr3 = c10;
  int c11 = 120;
  int c12 = 89;
  double c13 = 0x1.599999999999ap1;
  Circle__Circle(&circle4, c11, c12, c13);
  struct Circle* c14 = ((void*)0);
  circlePtr5 = c14;
  struct std__basic_ostream_char__std__char_traits_char__* std15;
  __VERIFIER_nondet_memory(&std15, sizeof(std15));
  int c16 = 2;
  struct std___Setprecision std17;
  __VERIFIER_nondet_memory(&std17, sizeof(std17));
  agg_tmp06 = std17;
  struct std___Setprecision t18 = agg_tmp06;
  struct std__basic_ostream_char__std__char_traits_char__* std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
  char* cast20 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  char* cast22 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  char* cast24 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std25;
  __VERIFIER_nondet_memory(&std25, sizeof(std25));
  Point__print___const(&point2);
  char* cast26 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std27;
  __VERIFIER_nondet_memory(&std27, sizeof(std27));
  Circle__print___const(&circle4);
  char* cast28 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std29;
  __VERIFIER_nondet_memory(&std29, sizeof(std29));
  char* cast30 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
  pointPtr3 = &point2;
  char* cast32 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std33;
  __VERIFIER_nondet_memory(&std33, sizeof(std33));
  char* cast34 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std35;
  __VERIFIER_nondet_memory(&std35, sizeof(std35));
  char* cast36 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* std37;
  __VERIFIER_nondet_memory(&std37, sizeof(std37));
  struct Point* t38 = pointPtr3;
  void** v39 = (void**)t38;
  void* v40 = *((void**)v39);
  __VERIFIER_virtual_call_void(t38, 0);
  circlePtr5 = &circle4;
  char* cast43 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* std44;
  __VERIFIER_nondet_memory(&std44, sizeof(std44));
  char* cast45 = (char*)&(_str_10);
  struct std__basic_ostream_char__std__char_traits_char__* std46;
  __VERIFIER_nondet_memory(&std46, sizeof(std46));
  char* cast47 = (char*)&(_str_11);
  struct std__basic_ostream_char__std__char_traits_char__* std48;
  __VERIFIER_nondet_memory(&std48, sizeof(std48));
  struct Circle* t49 = circlePtr5;
  void** v50 = (void**)t49;
  void* v51 = *((void**)v50);
  __VERIFIER_virtual_call_void(t49, 0);
  struct Point* base54 = (struct Point*)((char *)&(circle4) + 0);
  pointPtr3 = base54;
  char* cast55 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std56;
  __VERIFIER_nondet_memory(&std56, sizeof(std56));
  char* cast57 = (char*)&(_str_12);
  struct std__basic_ostream_char__std__char_traits_char__* std58;
  __VERIFIER_nondet_memory(&std58, sizeof(std58));
  char* cast59 = (char*)&(_str_11);
  struct std__basic_ostream_char__std__char_traits_char__* std60;
  __VERIFIER_nondet_memory(&std60, sizeof(std60));
  struct Point* t61 = pointPtr3;
  void** v62 = (void**)t61;
  void* v63 = *((void**)v62);
  __VERIFIER_virtual_call_void(t61, 0);
  struct std__basic_ostream_char__std__char_traits_char__* std66;
  __VERIFIER_nondet_memory(&std66, sizeof(std66));
  int c67 = 0;
  __retval1 = c67;
  int t68 = __retval1;
  return t68;
}

