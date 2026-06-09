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
int _ZNSt8ios_base5fixedE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base10floatfieldE_const __attribute__((aligned(4))) = 260;
int _ZNSt8ios_base10scientificE_const __attribute__((aligned(4))) = 256;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[29] = "Displayed in default format:";
char _str_1[33] = "\nDisplayed in scientific format:";
char _str_2[28] = "\nDisplayed in fixed format:";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  double x2;
  double y3;
  int c4 = 0;
  __retval1 = c4;
  double c5 = 0x1.43a2638f12fa5p-10;
  x2 = c5;
  double c6 = 0x1.cff66ap30;
  y3 = c6;
  char* cast7 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std8;
  __VERIFIER_nondet_memory(&std8, sizeof(std8));
  struct std__basic_ostream_char__std__char_traits_char__* std9;
  __VERIFIER_nondet_memory(&std9, sizeof(std9));
  double t10 = x2;
  struct std__basic_ostream_char__std__char_traits_char__* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  char c12 = 9;
  struct std__basic_ostream_char__std__char_traits_char__* std13;
  __VERIFIER_nondet_memory(&std13, sizeof(std13));
  double t14 = y3;
  struct std__basic_ostream_char__std__char_traits_char__* std15;
  __VERIFIER_nondet_memory(&std15, sizeof(std15));
  struct std__basic_ostream_char__std__char_traits_char__* std16;
  __VERIFIER_nondet_memory(&std16, sizeof(std16));
  char* cast17 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std18;
  __VERIFIER_nondet_memory(&std18, sizeof(std18));
  struct std__basic_ostream_char__std__char_traits_char__* std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
  struct std__basic_ostream_char__std__char_traits_char__* std20;
  __VERIFIER_nondet_memory(&std20, sizeof(std20));
  double t21 = x2;
  struct std__basic_ostream_char__std__char_traits_char__* std22;
  __VERIFIER_nondet_memory(&std22, sizeof(std22));
  char c23 = 9;
  struct std__basic_ostream_char__std__char_traits_char__* std24;
  __VERIFIER_nondet_memory(&std24, sizeof(std24));
  double t25 = y3;
  struct std__basic_ostream_char__std__char_traits_char__* std26;
  __VERIFIER_nondet_memory(&std26, sizeof(std26));
  struct std__basic_ostream_char__std__char_traits_char__* std27;
  __VERIFIER_nondet_memory(&std27, sizeof(std27));
  char* cast28 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std29;
  __VERIFIER_nondet_memory(&std29, sizeof(std29));
  struct std__basic_ostream_char__std__char_traits_char__* std30;
  __VERIFIER_nondet_memory(&std30, sizeof(std30));
  struct std__basic_ostream_char__std__char_traits_char__* std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
  double t32 = x2;
  struct std__basic_ostream_char__std__char_traits_char__* std33;
  __VERIFIER_nondet_memory(&std33, sizeof(std33));
  char c34 = 9;
  struct std__basic_ostream_char__std__char_traits_char__* std35;
  __VERIFIER_nondet_memory(&std35, sizeof(std35));
  double t36 = y3;
  struct std__basic_ostream_char__std__char_traits_char__* std37;
  __VERIFIER_nondet_memory(&std37, sizeof(std37));
  struct std__basic_ostream_char__std__char_traits_char__* std38;
  __VERIFIER_nondet_memory(&std38, sizeof(std38));
  int c39 = 0;
  __retval1 = c39;
  int t40 = __retval1;
  return t40;
}

