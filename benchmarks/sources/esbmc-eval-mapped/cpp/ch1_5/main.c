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
char _str[41] = "Enter two integers, and I will tell you\n";
char _str_1[33] = "the relationships they satisfy: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_2[14] = " is equal to ";
char _str_3[18] = " is not equal to ";
char _str_4[15] = " is less than ";
char _str_5[18] = " is greater than ";
char _str_6[27] = " is less than or equal to ";
char _str_7[30] = " is greater than or equal to ";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int num12;
  int num23;
  int c4 = 0;
  __retval1 = c4;
  char* cast5 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std6;
  __VERIFIER_nondet_memory(&std6, sizeof(std6));
  char* cast7 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std8;
  __VERIFIER_nondet_memory(&std8, sizeof(std8));
  struct std__basic_istream_char__std__char_traits_char__* std9;
  __VERIFIER_nondet_memory(&std9, sizeof(std9));
  struct std__basic_istream_char__std__char_traits_char__* std10;
  __VERIFIER_nondet_memory(&std10, sizeof(std10));
    int t11 = num12;
    int t12 = num23;
    _Bool c13 = ((t11 == t12)) ? 1 : 0;
    if (c13) {
      int t14 = num12;
      struct std__basic_ostream_char__std__char_traits_char__* std15;
      __VERIFIER_nondet_memory(&std15, sizeof(std15));
      char* cast16 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* std17;
      __VERIFIER_nondet_memory(&std17, sizeof(std17));
      int t18 = num23;
      struct std__basic_ostream_char__std__char_traits_char__* std19;
      __VERIFIER_nondet_memory(&std19, sizeof(std19));
      struct std__basic_ostream_char__std__char_traits_char__* std20;
      __VERIFIER_nondet_memory(&std20, sizeof(std20));
    }
    int t21 = num12;
    int t22 = num23;
    _Bool c23 = ((t21 != t22)) ? 1 : 0;
    if (c23) {
      int t24 = num12;
      struct std__basic_ostream_char__std__char_traits_char__* std25;
      __VERIFIER_nondet_memory(&std25, sizeof(std25));
      char* cast26 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* std27;
      __VERIFIER_nondet_memory(&std27, sizeof(std27));
      int t28 = num23;
      struct std__basic_ostream_char__std__char_traits_char__* std29;
      __VERIFIER_nondet_memory(&std29, sizeof(std29));
      struct std__basic_ostream_char__std__char_traits_char__* std30;
      __VERIFIER_nondet_memory(&std30, sizeof(std30));
    }
    int t31 = num12;
    int t32 = num23;
    _Bool c33 = ((t31 < t32)) ? 1 : 0;
    if (c33) {
      int t34 = num12;
      struct std__basic_ostream_char__std__char_traits_char__* std35;
      __VERIFIER_nondet_memory(&std35, sizeof(std35));
      char* cast36 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* std37;
      __VERIFIER_nondet_memory(&std37, sizeof(std37));
      int t38 = num23;
      struct std__basic_ostream_char__std__char_traits_char__* std39;
      __VERIFIER_nondet_memory(&std39, sizeof(std39));
      struct std__basic_ostream_char__std__char_traits_char__* std40;
      __VERIFIER_nondet_memory(&std40, sizeof(std40));
    }
    int t41 = num12;
    int t42 = num23;
    _Bool c43 = ((t41 > t42)) ? 1 : 0;
    if (c43) {
      int t44 = num12;
      struct std__basic_ostream_char__std__char_traits_char__* std45;
      __VERIFIER_nondet_memory(&std45, sizeof(std45));
      char* cast46 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* std47;
      __VERIFIER_nondet_memory(&std47, sizeof(std47));
      int t48 = num23;
      struct std__basic_ostream_char__std__char_traits_char__* std49;
      __VERIFIER_nondet_memory(&std49, sizeof(std49));
      struct std__basic_ostream_char__std__char_traits_char__* std50;
      __VERIFIER_nondet_memory(&std50, sizeof(std50));
    }
    int t51 = num12;
    int t52 = num23;
    _Bool c53 = ((t51 <= t52)) ? 1 : 0;
    if (c53) {
      int t54 = num12;
      struct std__basic_ostream_char__std__char_traits_char__* std55;
      __VERIFIER_nondet_memory(&std55, sizeof(std55));
      char* cast56 = (char*)&(_str_6);
      struct std__basic_ostream_char__std__char_traits_char__* std57;
      __VERIFIER_nondet_memory(&std57, sizeof(std57));
      int t58 = num23;
      struct std__basic_ostream_char__std__char_traits_char__* std59;
      __VERIFIER_nondet_memory(&std59, sizeof(std59));
      struct std__basic_ostream_char__std__char_traits_char__* std60;
      __VERIFIER_nondet_memory(&std60, sizeof(std60));
    }
    int t61 = num12;
    int t62 = num23;
    _Bool c63 = ((t61 >= t62)) ? 1 : 0;
    if (c63) {
      int t64 = num12;
      struct std__basic_ostream_char__std__char_traits_char__* std65;
      __VERIFIER_nondet_memory(&std65, sizeof(std65));
      char* cast66 = (char*)&(_str_7);
      struct std__basic_ostream_char__std__char_traits_char__* std67;
      __VERIFIER_nondet_memory(&std67, sizeof(std67));
      int t68 = num23;
      struct std__basic_ostream_char__std__char_traits_char__* std69;
      __VERIFIER_nondet_memory(&std69, sizeof(std69));
      struct std__basic_ostream_char__std__char_traits_char__* std70;
      __VERIFIER_nondet_memory(&std70, sizeof(std70));
    }
  int c71 = 0;
  __retval1 = c71;
  int t72 = __retval1;
  return t72;
}

