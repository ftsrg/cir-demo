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

int __const_main_frequency[11];
int __const_main_responses[40] = {1, 2, 6, 4, 8, 5, 9, 7, 8, 10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[7] = "Rating";
char _str_1[10] = "Frequency";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int responseSize2;
  int frequencySize3;
  int responses4[40];
  int frequency5[11];
  struct std___Setw agg_tmp06;
  int c7 = 0;
  __retval1 = c7;
  int c8 = 40;
  responseSize2 = c8;
  int c9 = 11;
  frequencySize3 = c9;
  // array copy
  __builtin_memcpy(responses4, __const_main_responses, (unsigned long)40 * sizeof(__const_main_responses[0]));
  // array copy
  __builtin_memcpy(frequency5, __const_main_frequency, (unsigned long)11 * sizeof(__const_main_frequency[0]));
    int answer10;
    int c11 = 0;
    answer10 = c11;
    while (1) {
      int t13 = answer10;
      int t14 = responseSize2;
      _Bool c15 = ((t13 < t14)) ? 1 : 0;
      if (!c15) break;
      int t16 = answer10;
      long cast17 = (long)t16;
      int t18 = responses4[cast17];
      long cast19 = (long)t18;
      int t20 = frequency5[cast19];
      int u21 = t20 + 1;
      frequency5[cast19] = u21;
    for_step12: ;
      int t22 = answer10;
      int u23 = t22 + 1;
      answer10 = u23;
    }
  char* cast24 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std25;
  __VERIFIER_nondet_memory(&std25, sizeof(std25));
  int c26 = 17;
  struct std___Setw std27;
  __VERIFIER_nondet_memory(&std27, sizeof(std27));
  agg_tmp06 = std27;
  struct std___Setw t28 = agg_tmp06;
  struct std__basic_ostream_char__std__char_traits_char__* std29;
  __VERIFIER_nondet_memory(&std29, sizeof(std29));
  char* cast30 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
  struct std__basic_ostream_char__std__char_traits_char__* std32;
  __VERIFIER_nondet_memory(&std32, sizeof(std32));
    int rating33;
    struct std___Setw agg_tmp134;
    struct std___Setw agg_tmp235;
    int c36 = 1;
    rating33 = c36;
    while (1) {
      int t38 = rating33;
      int t39 = frequencySize3;
      _Bool c40 = ((t38 < t39)) ? 1 : 0;
      if (!c40) break;
      int c41 = 6;
      struct std___Setw std42;
      __VERIFIER_nondet_memory(&std42, sizeof(std42));
      agg_tmp134 = std42;
      struct std___Setw t43 = agg_tmp134;
      struct std__basic_ostream_char__std__char_traits_char__* std44;
      __VERIFIER_nondet_memory(&std44, sizeof(std44));
      int t45 = rating33;
      struct std__basic_ostream_char__std__char_traits_char__* std46;
      __VERIFIER_nondet_memory(&std46, sizeof(std46));
      int c47 = 17;
      struct std___Setw std48;
      __VERIFIER_nondet_memory(&std48, sizeof(std48));
      agg_tmp235 = std48;
      struct std___Setw t49 = agg_tmp235;
      struct std__basic_ostream_char__std__char_traits_char__* std50;
      __VERIFIER_nondet_memory(&std50, sizeof(std50));
      int t51 = rating33;
      long cast52 = (long)t51;
      int t53 = frequency5[cast52];
      struct std__basic_ostream_char__std__char_traits_char__* std54;
      __VERIFIER_nondet_memory(&std54, sizeof(std54));
      struct std__basic_ostream_char__std__char_traits_char__* std55;
      __VERIFIER_nondet_memory(&std55, sizeof(std55));
    for_step37: ;
      int t56 = rating33;
      int u57 = t56 + 1;
      rating33 = u57;
    }
  int c58 = 0;
  __retval1 = c58;
  int t59 = __retval1;
  return t59;
}

