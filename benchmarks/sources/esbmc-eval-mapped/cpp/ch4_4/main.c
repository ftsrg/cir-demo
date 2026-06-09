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

int __const_main_n[10] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};
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
  int n2[10];
  struct std___Setw agg_tmp03;
  int c4 = 0;
  __retval1 = c4;
  // array copy
  __builtin_memcpy(n2, __const_main_n, (unsigned long)10 * sizeof(__const_main_n[0]));
  char* cast5 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std6;
  __VERIFIER_nondet_memory(&std6, sizeof(std6));
  int c7 = 13;
  struct std___Setw std8;
  __VERIFIER_nondet_memory(&std8, sizeof(std8));
  agg_tmp03 = std8;
  struct std___Setw t9 = agg_tmp03;
  struct std__basic_ostream_char__std__char_traits_char__* std10;
  __VERIFIER_nondet_memory(&std10, sizeof(std10));
  char* cast11 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std12;
  __VERIFIER_nondet_memory(&std12, sizeof(std12));
  struct std__basic_ostream_char__std__char_traits_char__* std13;
  __VERIFIER_nondet_memory(&std13, sizeof(std13));
    int i14;
    struct std___Setw agg_tmp115;
    struct std___Setw agg_tmp216;
    int c17 = 0;
    i14 = c17;
    while (1) {
      int t19 = i14;
      int c20 = 10;
      _Bool c21 = ((t19 < c20)) ? 1 : 0;
      if (!c21) break;
      int c22 = 7;
      struct std___Setw std23;
      __VERIFIER_nondet_memory(&std23, sizeof(std23));
      agg_tmp115 = std23;
      struct std___Setw t24 = agg_tmp115;
      struct std__basic_ostream_char__std__char_traits_char__* std25;
      __VERIFIER_nondet_memory(&std25, sizeof(std25));
      int t26 = i14;
      struct std__basic_ostream_char__std__char_traits_char__* std27;
      __VERIFIER_nondet_memory(&std27, sizeof(std27));
      int c28 = 13;
      struct std___Setw std29;
      __VERIFIER_nondet_memory(&std29, sizeof(std29));
      agg_tmp216 = std29;
      struct std___Setw t30 = agg_tmp216;
      struct std__basic_ostream_char__std__char_traits_char__* std31;
      __VERIFIER_nondet_memory(&std31, sizeof(std31));
      int t32 = i14;
      long cast33 = (long)t32;
      int t34 = n2[cast33];
      struct std__basic_ostream_char__std__char_traits_char__* std35;
      __VERIFIER_nondet_memory(&std35, sizeof(std35));
      struct std__basic_ostream_char__std__char_traits_char__* std36;
      __VERIFIER_nondet_memory(&std36, sizeof(std36));
    for_step18: ;
      int t37 = i14;
      int u38 = t37 + 1;
      i14 = u38;
    }
  int c39 = 0;
  __retval1 = c39;
  int t40 = __retval1;
  return t40;
}

