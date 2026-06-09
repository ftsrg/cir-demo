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
int _ZNSt8ios_base5rightE_const __attribute__((aligned(4))) = 128;
int _ZNSt8ios_base11adjustfieldE_const __attribute__((aligned(4))) = 176;
int _ZNSt8ios_base4leftE_const __attribute__((aligned(4))) = 32;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[28] = "Default is right justified:";
char _str_1[36] = "\n\nUse std::left to left justify x:\n";
char _str_2[38] = "\n\nUse std::right to right justify x:\n";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int x2;
  struct std___Setw agg_tmp03;
  struct std___Setw agg_tmp14;
  struct std___Setw agg_tmp25;
  int c6 = 0;
  __retval1 = c6;
  int c7 = 12345;
  x2 = c7;
  char* cast8 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std9;
  __VERIFIER_nondet_memory(&std9, sizeof(std9));
  struct std__basic_ostream_char__std__char_traits_char__* std10;
  __VERIFIER_nondet_memory(&std10, sizeof(std10));
  int c11 = 10;
  struct std___Setw std12;
  __VERIFIER_nondet_memory(&std12, sizeof(std12));
  agg_tmp03 = std12;
  struct std___Setw t13 = agg_tmp03;
  struct std__basic_ostream_char__std__char_traits_char__* std14;
  __VERIFIER_nondet_memory(&std14, sizeof(std14));
  int t15 = x2;
  struct std__basic_ostream_char__std__char_traits_char__* std16;
  __VERIFIER_nondet_memory(&std16, sizeof(std16));
  char* cast17 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std18;
  __VERIFIER_nondet_memory(&std18, sizeof(std18));
  struct std__basic_ostream_char__std__char_traits_char__* std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
  int c20 = 10;
  struct std___Setw std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  agg_tmp14 = std21;
  struct std___Setw t22 = agg_tmp14;
  struct std__basic_ostream_char__std__char_traits_char__* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  int t24 = x2;
  struct std__basic_ostream_char__std__char_traits_char__* std25;
  __VERIFIER_nondet_memory(&std25, sizeof(std25));
  char* cast26 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std27;
  __VERIFIER_nondet_memory(&std27, sizeof(std27));
  struct std__basic_ostream_char__std__char_traits_char__* std28;
  __VERIFIER_nondet_memory(&std28, sizeof(std28));
  int c29 = 10;
  struct std___Setw std30;
  __VERIFIER_nondet_memory(&std30, sizeof(std30));
  agg_tmp25 = std30;
  struct std___Setw t31 = agg_tmp25;
  struct std__basic_ostream_char__std__char_traits_char__* std32;
  __VERIFIER_nondet_memory(&std32, sizeof(std32));
  int t33 = x2;
  struct std__basic_ostream_char__std__char_traits_char__* std34;
  __VERIFIER_nondet_memory(&std34, sizeof(std34));
  struct std__basic_ostream_char__std__char_traits_char__* std35;
  __VERIFIER_nondet_memory(&std35, sizeof(std35));
  int c36 = 0;
  __retval1 = c36;
  int t37 = __retval1;
  return t37;
}

