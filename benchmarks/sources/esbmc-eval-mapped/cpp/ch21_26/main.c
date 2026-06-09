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
struct std___Base_bitset_16UL_ { unsigned long _M_w[16]; };
struct std___Setw { int _M_n; };
struct std__bitset_1024UL_ { struct std___Base_bitset_16UL_ __field0; };
struct std__bitset_1024UL___reference { unsigned long* _M_wp; unsigned long _M_bpos; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_istream_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[47] = "The prime numbers in the range 2 to 1023 are:\n";
char _str_1[44] = "\nEnter a value from 1 to 1023 (-1 to end): ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_2[20] = " is a prime number\n";
char _str_3[24] = " is not a prime number\n";
char _str_4[44] = "\nEnter a value from 2 to 1023 (-1 to end): ";
char _str_5[13] = "bitset::test";
char _str_6[52] = "%s: __position (which is %zu) >= _Nb (which is %zu)";
char _str_7[14] = "bitset::reset";
extern double sqrt(double p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  int size2;
  int value3;
  struct std__bitset_1024UL_ sieve4;
  int finalBit5;
  int c6 = 0;
  __retval1 = c6;
  int c7 = 1024;
  size2 = c7;
  // externalized std:: op: std::bitset<1024ul>::bitset()
  __VERIFIER_nondet_memory(&sieve4, sizeof(sieve4));
  struct std__bitset_1024UL_* std8;
  __VERIFIER_nondet_memory(&std8, sizeof(std8));
  unsigned long std9 = __VERIFIER_nondet_unsigned_long();
  double cast10 = (double)std9;
  double r11 = sqrt(cast10);
  int c12 = 1;
  double cast13 = (double)c12;
  double b14 = r11 + cast13;
  int cast15 = (int)b14;
  finalBit5 = cast15;
    int i16;
    int c17 = 2;
    i16 = c17;
    while (1) {
      int t19 = i16;
      int t20 = finalBit5;
      _Bool c21 = ((t19 < t20)) ? 1 : 0;
      if (!c21) break;
        int t22 = i16;
        unsigned long cast23 = (unsigned long)t22;
        _Bool std24;
        __VERIFIER_nondet_memory(&std24, sizeof(std24));
        if (std24) {
            int j25;
            int c26 = 2;
            int t27 = i16;
            int b28 = c26 * t27;
            j25 = b28;
            while (1) {
              int t30 = j25;
              int t31 = size2;
              _Bool c32 = ((t30 < t31)) ? 1 : 0;
              if (!c32) break;
              int t33 = j25;
              unsigned long cast34 = (unsigned long)t33;
              struct std__bitset_1024UL_* std35;
              __VERIFIER_nondet_memory(&std35, sizeof(std35));
            for_step29: ;
              int t36 = i16;
              int t37 = j25;
              int b38 = t37 + t36;
              j25 = b38;
            }
        }
    for_step18: ;
      int t39 = i16;
      int u40 = t39 + 1;
      i16 = u40;
    }
  char* cast41 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std42;
  __VERIFIER_nondet_memory(&std42, sizeof(std42));
    int k43;
    int counter44;
    int c45 = 2;
    k43 = c45;
    int c46 = 0;
    counter44 = c46;
    while (1) {
      int t48 = k43;
      int t49 = size2;
      _Bool c50 = ((t48 < t49)) ? 1 : 0;
      if (!c50) break;
        int t51 = k43;
        unsigned long cast52 = (unsigned long)t51;
        _Bool std53;
        __VERIFIER_nondet_memory(&std53, sizeof(std53));
        if (std53) {
          struct std___Setw agg_tmp054;
          int c55 = 5;
          struct std___Setw std56;
          __VERIFIER_nondet_memory(&std56, sizeof(std56));
          agg_tmp054 = std56;
          struct std___Setw t57 = agg_tmp054;
          struct std__basic_ostream_char__std__char_traits_char__* std58;
          __VERIFIER_nondet_memory(&std58, sizeof(std58));
          int t59 = k43;
          struct std__basic_ostream_char__std__char_traits_char__* std60;
          __VERIFIER_nondet_memory(&std60, sizeof(std60));
            int t61 = counter44;
            int u62 = t61 + 1;
            counter44 = u62;
            int c63 = 12;
            int b64 = u62 % c63;
            int c65 = 0;
            _Bool c66 = ((b64 == c65)) ? 1 : 0;
            if (c66) {
              char c67 = 10;
              struct std__basic_ostream_char__std__char_traits_char__* std68;
              __VERIFIER_nondet_memory(&std68, sizeof(std68));
            }
        }
    for_step47: ;
      int t69 = k43;
      int u70 = t69 + 1;
      k43 = u70;
    }
  struct std__basic_ostream_char__std__char_traits_char__* std71;
  __VERIFIER_nondet_memory(&std71, sizeof(std71));
  char* cast72 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std73;
  __VERIFIER_nondet_memory(&std73, sizeof(std73));
  struct std__basic_istream_char__std__char_traits_char__* std74;
  __VERIFIER_nondet_memory(&std74, sizeof(std74));
    while (1) {
      int t75 = value3;
      int c76 = -1;
      _Bool c77 = ((t75 != c76)) ? 1 : 0;
      if (!c77) break;
          struct std__bitset_1024UL___reference ref_tmp078;
          _Bool tmp_exprcleanup79;
          int t80 = value3;
          unsigned long cast81 = (unsigned long)t80;
          struct std__bitset_1024UL___reference std82;
          __VERIFIER_nondet_memory(&std82, sizeof(std82));
          ref_tmp078 = std82;
            _Bool std83;
            __VERIFIER_nondet_memory(&std83, sizeof(std83));
            tmp_exprcleanup79 = std83;
          {
            // externalized std:: op: std::bitset<1024ul>::reference::~reference()
            __VERIFIER_nondet_memory(&ref_tmp078, sizeof(ref_tmp078));
          }
          _Bool t84 = tmp_exprcleanup79;
          if (t84) {
            int t85 = value3;
            struct std__basic_ostream_char__std__char_traits_char__* std86;
            __VERIFIER_nondet_memory(&std86, sizeof(std86));
            char* cast87 = (char*)&(_str_2);
            struct std__basic_ostream_char__std__char_traits_char__* std88;
            __VERIFIER_nondet_memory(&std88, sizeof(std88));
          } else {
            int t89 = value3;
            struct std__basic_ostream_char__std__char_traits_char__* std90;
            __VERIFIER_nondet_memory(&std90, sizeof(std90));
            char* cast91 = (char*)&(_str_3);
            struct std__basic_ostream_char__std__char_traits_char__* std92;
            __VERIFIER_nondet_memory(&std92, sizeof(std92));
          }
        char* cast93 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* std94;
        __VERIFIER_nondet_memory(&std94, sizeof(std94));
        struct std__basic_istream_char__std__char_traits_char__* std95;
        __VERIFIER_nondet_memory(&std95, sizeof(std95));
    }
  int c96 = 0;
  __retval1 = c96;
  int t97 = __retval1;
  return t97;
}

