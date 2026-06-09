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

char __const_main_s4[40] = "Happy New Year ";
char __const_main_s3[40];
char __const_main_s2[10] = "New Year ";
char __const_main_s1[20] = "Happy ";
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[6] = "s1 = ";
char _str_1[7] = "\ns2 = ";
char _str_2[30] = "\n\nAfter strcat(s1, s2):\ns1 = ";
char _str_3[15] = "!strcmp(s1,s4)";
char _str_4[98] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/ch5_21/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_5[34] = "\n\nAfter strncat(s3, s1, 6):\ns1 = ";
char _str_6[7] = "\ns3 = ";
char _str_7[30] = "\n\nAfter strcat(s3, s1):\ns1 = ";
extern char* strcat(char* p0, char* p1);
extern int strcmp(char* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern char* strncat(char* p0, char* p1, unsigned long p2);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  char s12[20];
  char s23[10];
  char s34[40];
  char s45[40];
  int c6 = 0;
  __retval1 = c6;
  // array copy
  __builtin_memcpy(s12, __const_main_s1, (unsigned long)20 * sizeof(__const_main_s1[0]));
  // array copy
  __builtin_memcpy(s23, __const_main_s2, (unsigned long)10 * sizeof(__const_main_s2[0]));
  // array copy
  __builtin_memcpy(s34, __const_main_s3, (unsigned long)40 * sizeof(__const_main_s3[0]));
  // array copy
  __builtin_memcpy(s45, __const_main_s4, (unsigned long)40 * sizeof(__const_main_s4[0]));
  char* cast7 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std8;
  __VERIFIER_nondet_memory(&std8, sizeof(std8));
  char* cast9 = (char*)&(s12);
  struct std__basic_ostream_char__std__char_traits_char__* std10;
  __VERIFIER_nondet_memory(&std10, sizeof(std10));
  char* cast11 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std12;
  __VERIFIER_nondet_memory(&std12, sizeof(std12));
  char* cast13 = (char*)&(s23);
  struct std__basic_ostream_char__std__char_traits_char__* std14;
  __VERIFIER_nondet_memory(&std14, sizeof(std14));
  char* cast15 = (char*)&(s12);
  char* cast16 = (char*)&(s23);
  char* r17 = strcat(cast15, cast16);
  char* cast18 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
  char* cast20 = (char*)&(s12);
  struct std__basic_ostream_char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  char* cast22 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  char* cast24 = (char*)&(s23);
  struct std__basic_ostream_char__std__char_traits_char__* std25;
  __VERIFIER_nondet_memory(&std25, sizeof(std25));
  char* cast26 = (char*)&(s12);
  char* cast27 = (char*)&(s45);
  int r28 = strcmp(cast26, cast27);
  _Bool cast29 = (_Bool)r28;
  _Bool u30 = !cast29;
  if (u30) {
  } else {
    char* cast31 = (char*)&(_str_3);
    char* c32 = _str_4;
    unsigned int c33 = 30;
    char* cast34 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast31, c32, c33, cast34);
  }
  char* cast35 = (char*)&(s34);
  char* cast36 = (char*)&(s12);
  unsigned long c37 = 6;
  char* r38 = strncat(cast35, cast36, c37);
  char* cast39 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std40;
  __VERIFIER_nondet_memory(&std40, sizeof(std40));
  char* cast41 = (char*)&(s12);
  struct std__basic_ostream_char__std__char_traits_char__* std42;
  __VERIFIER_nondet_memory(&std42, sizeof(std42));
  char* cast43 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std44;
  __VERIFIER_nondet_memory(&std44, sizeof(std44));
  char* cast45 = (char*)&(s34);
  struct std__basic_ostream_char__std__char_traits_char__* std46;
  __VERIFIER_nondet_memory(&std46, sizeof(std46));
  char* cast47 = (char*)&(s34);
  char* cast48 = (char*)&(s12);
  char* r49 = strcat(cast47, cast48);
  char* cast50 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std51;
  __VERIFIER_nondet_memory(&std51, sizeof(std51));
  char* cast52 = (char*)&(s12);
  struct std__basic_ostream_char__std__char_traits_char__* std53;
  __VERIFIER_nondet_memory(&std53, sizeof(std53));
  char* cast54 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std55;
  __VERIFIER_nondet_memory(&std55, sizeof(std55));
  char* cast56 = (char*)&(s34);
  struct std__basic_ostream_char__std__char_traits_char__* std57;
  __VERIFIER_nondet_memory(&std57, sizeof(std57));
  struct std__basic_ostream_char__std__char_traits_char__* std58;
  __VERIFIER_nondet_memory(&std58, sizeof(std58));
  int c59 = 0;
  __retval1 = c59;
  int t60 = __retval1;
  return t60;
}

