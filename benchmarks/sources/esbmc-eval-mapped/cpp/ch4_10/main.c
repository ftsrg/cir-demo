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

int __const_main_frequency[7];
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[5] = "Face";
char _str_1[10] = "Frequency";
extern void srand(unsigned int p0);
extern long time(long* p0);
extern int rand();
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int arraySize2;
  int frequency3[7];
  struct std___Setw agg_tmp04;
  int c5 = 0;
  __retval1 = c5;
  int c6 = 7;
  arraySize2 = c6;
  // array copy
  __builtin_memcpy(frequency3, __const_main_frequency, (unsigned long)7 * sizeof(__const_main_frequency[0]));
  long* c7 = ((void*)0);
  long r8 = time(c7);
  unsigned int cast9 = (unsigned int)r8;
  srand(cast9);
    int roll10;
    int c11 = 1;
    roll10 = c11;
    while (1) {
      int t13 = roll10;
      int c14 = 60;
      _Bool c15 = ((t13 <= c14)) ? 1 : 0;
      if (!c15) break;
      int c16 = 1;
      int r17 = rand();
      int c18 = 6;
      int b19 = r17 % c18;
      int b20 = c16 + b19;
      long cast21 = (long)b20;
      int t22 = frequency3[cast21];
      int u23 = t22 + 1;
      frequency3[cast21] = u23;
    for_step12: ;
      int t24 = roll10;
      int u25 = t24 + 1;
      roll10 = u25;
    }
  char* cast26 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std27;
  __VERIFIER_nondet_memory(&std27, sizeof(std27));
  int c28 = 13;
  struct std___Setw std29;
  __VERIFIER_nondet_memory(&std29, sizeof(std29));
  agg_tmp04 = std29;
  struct std___Setw t30 = agg_tmp04;
  struct std__basic_ostream_char__std__char_traits_char__* std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
  char* cast32 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std33;
  __VERIFIER_nondet_memory(&std33, sizeof(std33));
  struct std__basic_ostream_char__std__char_traits_char__* std34;
  __VERIFIER_nondet_memory(&std34, sizeof(std34));
    int face35;
    struct std___Setw agg_tmp136;
    struct std___Setw agg_tmp237;
    int c38 = 1;
    face35 = c38;
    while (1) {
      int t40 = face35;
      int t41 = arraySize2;
      _Bool c42 = ((t40 < t41)) ? 1 : 0;
      if (!c42) break;
      int c43 = 4;
      struct std___Setw std44;
      __VERIFIER_nondet_memory(&std44, sizeof(std44));
      agg_tmp136 = std44;
      struct std___Setw t45 = agg_tmp136;
      struct std__basic_ostream_char__std__char_traits_char__* std46;
      __VERIFIER_nondet_memory(&std46, sizeof(std46));
      int t47 = face35;
      struct std__basic_ostream_char__std__char_traits_char__* std48;
      __VERIFIER_nondet_memory(&std48, sizeof(std48));
      int c49 = 13;
      struct std___Setw std50;
      __VERIFIER_nondet_memory(&std50, sizeof(std50));
      agg_tmp237 = std50;
      struct std___Setw t51 = agg_tmp237;
      struct std__basic_ostream_char__std__char_traits_char__* std52;
      __VERIFIER_nondet_memory(&std52, sizeof(std52));
      int t53 = face35;
      long cast54 = (long)t53;
      int t55 = frequency3[cast54];
      struct std__basic_ostream_char__std__char_traits_char__* std56;
      __VERIFIER_nondet_memory(&std56, sizeof(std56));
      struct std__basic_ostream_char__std__char_traits_char__* std57;
      __VERIFIER_nondet_memory(&std57, sizeof(std57));
    for_step39: ;
      int t58 = face35;
      int u59 = t58 + 1;
      face35 = u59;
    }
  int c60 = 0;
  __retval1 = c60;
  int t61 = __retval1;
  return t61;
}

