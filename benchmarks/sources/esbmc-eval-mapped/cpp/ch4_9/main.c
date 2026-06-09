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

int __const_main_n[10] = {19, 3, 15, 7, 11, 9, 13, 5, 17, 1};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[8] = "Element";
char _str_1[6] = "Value";
char _str_2[10] = "Histogram";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int arraySize2;
  int n3[10];
  struct std___Setw agg_tmp04;
  struct std___Setw agg_tmp15;
  int c6 = 0;
  __retval1 = c6;
  int c7 = 10;
  arraySize2 = c7;
  // array copy
  __builtin_memcpy(n3, __const_main_n, (unsigned long)10 * sizeof(__const_main_n[0]));
  char* cast8 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std9;
  __VERIFIER_nondet_memory(&std9, sizeof(std9));
  int c10 = 13;
  struct std___Setw std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  agg_tmp04 = std11;
  struct std___Setw t12 = agg_tmp04;
  struct std__basic_ostream_char__std__char_traits_char__* std13;
  __VERIFIER_nondet_memory(&std13, sizeof(std13));
  char* cast14 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std15;
  __VERIFIER_nondet_memory(&std15, sizeof(std15));
  int c16 = 17;
  struct std___Setw std17;
  __VERIFIER_nondet_memory(&std17, sizeof(std17));
  agg_tmp15 = std17;
  struct std___Setw t18 = agg_tmp15;
  struct std__basic_ostream_char__std__char_traits_char__* std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
  char* cast20 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  struct std__basic_ostream_char__std__char_traits_char__* std22;
  __VERIFIER_nondet_memory(&std22, sizeof(std22));
    int i23;
    int c24 = 0;
    i23 = c24;
    while (1) {
      int t26 = i23;
      int t27 = arraySize2;
      _Bool c28 = ((t26 < t27)) ? 1 : 0;
      if (!c28) break;
        struct std___Setw agg_tmp229;
        struct std___Setw agg_tmp330;
        struct std___Setw agg_tmp431;
        int c32 = 7;
        struct std___Setw std33;
        __VERIFIER_nondet_memory(&std33, sizeof(std33));
        agg_tmp229 = std33;
        struct std___Setw t34 = agg_tmp229;
        struct std__basic_ostream_char__std__char_traits_char__* std35;
        __VERIFIER_nondet_memory(&std35, sizeof(std35));
        int t36 = i23;
        struct std__basic_ostream_char__std__char_traits_char__* std37;
        __VERIFIER_nondet_memory(&std37, sizeof(std37));
        int c38 = 13;
        struct std___Setw std39;
        __VERIFIER_nondet_memory(&std39, sizeof(std39));
        agg_tmp330 = std39;
        struct std___Setw t40 = agg_tmp330;
        struct std__basic_ostream_char__std__char_traits_char__* std41;
        __VERIFIER_nondet_memory(&std41, sizeof(std41));
        int t42 = i23;
        long cast43 = (long)t42;
        int t44 = n3[cast43];
        struct std__basic_ostream_char__std__char_traits_char__* std45;
        __VERIFIER_nondet_memory(&std45, sizeof(std45));
        int c46 = 9;
        struct std___Setw std47;
        __VERIFIER_nondet_memory(&std47, sizeof(std47));
        agg_tmp431 = std47;
        struct std___Setw t48 = agg_tmp431;
        struct std__basic_ostream_char__std__char_traits_char__* std49;
        __VERIFIER_nondet_memory(&std49, sizeof(std49));
          int j50;
          int c51 = 0;
          j50 = c51;
          while (1) {
            int t53 = j50;
            int t54 = i23;
            long cast55 = (long)t54;
            int t56 = n3[cast55];
            _Bool c57 = ((t53 < t56)) ? 1 : 0;
            if (!c57) break;
            char c58 = 42;
            struct std__basic_ostream_char__std__char_traits_char__* std59;
            __VERIFIER_nondet_memory(&std59, sizeof(std59));
          for_step52: ;
            int t60 = j50;
            int u61 = t60 + 1;
            j50 = u61;
          }
        struct std__basic_ostream_char__std__char_traits_char__* std62;
        __VERIFIER_nondet_memory(&std62, sizeof(std62));
    for_step25: ;
      int t63 = i23;
      int u64 = t63 + 1;
      i23 = u64;
    }
  int c65 = 0;
  __retval1 = c65;
  int t66 = __retval1;
  return t66;
}

