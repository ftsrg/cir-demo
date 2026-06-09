extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct Time { int __field0; int __field1; int __field2; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[20] = "Constructed with:\n\n";
char _str_1[26] = "all default arguments:\n  ";
char _str_2[4] = "\n  ";
char _str_3[48] = "\n\nhour specified; default minute and second:\n  ";
char _str_4[48] = "\n\nhour and minute specified; default second:\n  ";
char _str_5[41] = "\n\nhour, minute, and second specified:\n  ";
char _str_6[35] = "\n\nall invalid values specified:\n  ";
extern void Time__Time(struct Time* p0, int p1, int p2, int p3);
extern void Time__printUniversal(struct Time* p0);
extern void Time__printStandard(struct Time* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct Time t12;
  struct Time t23;
  struct Time t34;
  struct Time t45;
  struct Time t56;
  int c7 = 0;
  __retval1 = c7;
  int c8 = 0;
  int c9 = 0;
  int c10 = 0;
  Time__Time(&t12, c8, c9, c10);
  int c11 = 2;
  int c12 = 0;
  int c13 = 0;
  Time__Time(&t23, c11, c12, c13);
  int c14 = 21;
  int c15 = 34;
  int c16 = 0;
  Time__Time(&t34, c14, c15, c16);
  int c17 = 12;
  int c18 = 25;
  int c19 = 42;
  Time__Time(&t45, c17, c18, c19);
  int c20 = 27;
  int c21 = 74;
  int c22 = 99;
  Time__Time(&t56, c20, c21, c22);
  char* cast23 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std24;
  __VERIFIER_nondet_memory(&std24, sizeof(std24));
  char* cast25 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std26;
  __VERIFIER_nondet_memory(&std26, sizeof(std26));
  Time__printUniversal(&t12);
  char* cast27 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std28;
  __VERIFIER_nondet_memory(&std28, sizeof(std28));
  Time__printStandard(&t12);
  char* cast29 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std30;
  __VERIFIER_nondet_memory(&std30, sizeof(std30));
  Time__printUniversal(&t23);
  char* cast31 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std32;
  __VERIFIER_nondet_memory(&std32, sizeof(std32));
  Time__printStandard(&t23);
  char* cast33 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std34;
  __VERIFIER_nondet_memory(&std34, sizeof(std34));
  Time__printUniversal(&t34);
  char* cast35 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std36;
  __VERIFIER_nondet_memory(&std36, sizeof(std36));
  Time__printStandard(&t34);
  char* cast37 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std38;
  __VERIFIER_nondet_memory(&std38, sizeof(std38));
  Time__printUniversal(&t45);
  char* cast39 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std40;
  __VERIFIER_nondet_memory(&std40, sizeof(std40));
  Time__printStandard(&t45);
  char* cast41 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std42;
  __VERIFIER_nondet_memory(&std42, sizeof(std42));
  Time__printUniversal(&t56);
  char* cast43 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std44;
  __VERIFIER_nondet_memory(&std44, sizeof(std44));
  Time__printStandard(&t56);
  struct std__basic_ostream_char__std__char_traits_char__* std45;
  __VERIFIER_nondet_memory(&std45, sizeof(std45));
  int c46 = 0;
  __retval1 = c46;
  int t47 = __retval1;
  return t47;
}

