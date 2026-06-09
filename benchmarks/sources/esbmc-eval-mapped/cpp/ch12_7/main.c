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
struct std___Setprecision { int _M_n; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base10floatfieldE_const __attribute__((aligned(4))) = 260;
int _ZNSt8ios_base5fixedE_const __attribute__((aligned(4))) = 4;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[38] = "Square root of 2 with precisions 0-9.";
char _str_1[43] = "Precision set by ios_base member-function ";
char _str_2[11] = "precision:";
char _str_3[38] = "\nPrecision set by stream-manipulator ";
char _str_4[14] = "setprecision:";
extern double sqrt(double p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern long __VERIFIER_nondet_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  double root22;
  int places3;
  int c4 = 0;
  __retval1 = c4;
  double c5 = 0x1p1;
  double r6 = sqrt(c5);
  root22 = r6;
  char* cast7 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std8;
  __VERIFIER_nondet_memory(&std8, sizeof(std8));
  struct std__basic_ostream_char__std__char_traits_char__* std9;
  __VERIFIER_nondet_memory(&std9, sizeof(std9));
  char* cast10 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  char* cast12 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std13;
  __VERIFIER_nondet_memory(&std13, sizeof(std13));
  struct std__basic_ostream_char__std__char_traits_char__* std14;
  __VERIFIER_nondet_memory(&std14, sizeof(std14));
  struct std__basic_ostream_char__std__char_traits_char__* std15;
  __VERIFIER_nondet_memory(&std15, sizeof(std15));
    int c16 = 0;
    places3 = c16;
    while (1) {
      int t18 = places3;
      int c19 = 9;
      _Bool c20 = ((t18 <= c19)) ? 1 : 0;
      if (!c20) break;
        void** v21 = (void**)&_ZSt4cout;
        void* v22 = *((void**)v21);
        unsigned char* cast23 = (unsigned char*)v22;
        long c24 = -24;
        unsigned char* ptr25 = &(cast23)[c24];
        long* cast26 = (long*)ptr25;
        long t27 = *cast26;
        unsigned char* cast28 = (unsigned char*)&_ZSt4cout;
        unsigned char* ptr29 = &(cast28)[t27];
        struct std__basic_ostream_char__std__char_traits_char__* cast30 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr29;
        struct std__ios_base* cast31 = (struct std__ios_base*)cast30;
        int t32 = places3;
        long cast33 = (long)t32;
        long std34 = __VERIFIER_nondet_long();
        double t35 = root22;
        struct std__basic_ostream_char__std__char_traits_char__* std36;
        __VERIFIER_nondet_memory(&std36, sizeof(std36));
        struct std__basic_ostream_char__std__char_traits_char__* std37;
        __VERIFIER_nondet_memory(&std37, sizeof(std37));
    for_step17: ;
      int t38 = places3;
      int u39 = t38 + 1;
      places3 = u39;
    }
  char* cast40 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std41;
  __VERIFIER_nondet_memory(&std41, sizeof(std41));
  char* cast42 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std43;
  __VERIFIER_nondet_memory(&std43, sizeof(std43));
  struct std__basic_ostream_char__std__char_traits_char__* std44;
  __VERIFIER_nondet_memory(&std44, sizeof(std44));
    struct std___Setprecision agg_tmp045;
    int c46 = 0;
    places3 = c46;
    while (1) {
      int t48 = places3;
      int c49 = 9;
      _Bool c50 = ((t48 <= c49)) ? 1 : 0;
      if (!c50) break;
      int t51 = places3;
      struct std___Setprecision std52;
      __VERIFIER_nondet_memory(&std52, sizeof(std52));
      agg_tmp045 = std52;
      struct std___Setprecision t53 = agg_tmp045;
      struct std__basic_ostream_char__std__char_traits_char__* std54;
      __VERIFIER_nondet_memory(&std54, sizeof(std54));
      double t55 = root22;
      struct std__basic_ostream_char__std__char_traits_char__* std56;
      __VERIFIER_nondet_memory(&std56, sizeof(std56));
      struct std__basic_ostream_char__std__char_traits_char__* std57;
      __VERIFIER_nondet_memory(&std57, sizeof(std57));
    for_step47: ;
      int t58 = places3;
      int u59 = t58 + 1;
      places3 = u59;
    }
  int c60 = 0;
  __retval1 = c60;
  int t61 = __retval1;
  return t61;
}

