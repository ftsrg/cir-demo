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
struct std___Setw { int _M_n; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[8] = "Element";
char _str_1[6] = "Value";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int arraySize2;
  int s3[10];
  struct std___Setw agg_tmp04;
  int c5 = 0;
  __retval1 = c5;
  int c6 = 10;
  arraySize2 = c6;
    int i7;
    int c8 = 0;
    i7 = c8;
    while (1) {
      int t10 = i7;
      int t11 = arraySize2;
      _Bool c12 = ((t10 < t11)) ? 1 : 0;
      if (!c12) break;
      int c13 = 2;
      int c14 = 2;
      int t15 = i7;
      int b16 = c14 * t15;
      int b17 = c13 + b16;
      int t18 = i7;
      long cast19 = (long)t18;
      s3[cast19] = b17;
    for_step9: ;
      int t20 = i7;
      int u21 = t20 + 1;
      i7 = u21;
    }
  char* cast22 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  int c24 = 13;
  struct std___Setw std25;
  __VERIFIER_nondet_memory(&std25, sizeof(std25));
  agg_tmp04 = std25;
  struct std___Setw t26 = agg_tmp04;
  struct std__basic_ostream_char__std__char_traits_char__* std27;
  __VERIFIER_nondet_memory(&std27, sizeof(std27));
  char* cast28 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std29;
  __VERIFIER_nondet_memory(&std29, sizeof(std29));
  struct std__basic_ostream_char__std__char_traits_char__* std30;
  __VERIFIER_nondet_memory(&std30, sizeof(std30));
    int j31;
    struct std___Setw agg_tmp132;
    struct std___Setw agg_tmp233;
    int c34 = 0;
    j31 = c34;
    while (1) {
      int t36 = j31;
      int t37 = arraySize2;
      _Bool c38 = ((t36 < t37)) ? 1 : 0;
      if (!c38) break;
      int c39 = 7;
      struct std___Setw std40;
      __VERIFIER_nondet_memory(&std40, sizeof(std40));
      agg_tmp132 = std40;
      struct std___Setw t41 = agg_tmp132;
      struct std__basic_ostream_char__std__char_traits_char__* std42;
      __VERIFIER_nondet_memory(&std42, sizeof(std42));
      int t43 = j31;
      struct std__basic_ostream_char__std__char_traits_char__* std44;
      __VERIFIER_nondet_memory(&std44, sizeof(std44));
      int c45 = 13;
      struct std___Setw std46;
      __VERIFIER_nondet_memory(&std46, sizeof(std46));
      agg_tmp233 = std46;
      struct std___Setw t47 = agg_tmp233;
      struct std__basic_ostream_char__std__char_traits_char__* std48;
      __VERIFIER_nondet_memory(&std48, sizeof(std48));
      int t49 = j31;
      long cast50 = (long)t49;
      int t51 = s3[cast50];
      struct std__basic_ostream_char__std__char_traits_char__* std52;
      __VERIFIER_nondet_memory(&std52, sizeof(std52));
      struct std__basic_ostream_char__std__char_traits_char__* std53;
      __VERIFIER_nondet_memory(&std53, sizeof(std53));
    for_step35: ;
      int t54 = j31;
      int u55 = t54 + 1;
      j31 = u55;
    }
  int c56 = 0;
  __retval1 = c56;
  int t57 = __retval1;
  return t57;
}

