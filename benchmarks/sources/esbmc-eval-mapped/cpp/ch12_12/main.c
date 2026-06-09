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

int _ZNSt8ios_base7showposE_const __attribute__((aligned(4))) = 2048;
int _ZNSt8ios_base11adjustfieldE_const __attribute__((aligned(4))) = 176;
int _ZNSt8ios_base8internalE_const __attribute__((aligned(4))) = 16;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std___Setw agg_tmp02;
  int c3 = 0;
  __retval1 = c3;
  struct std__basic_ostream_char__std__char_traits_char__* std4;
  __VERIFIER_nondet_memory(&std4, sizeof(std4));
  struct std__basic_ostream_char__std__char_traits_char__* std5;
  __VERIFIER_nondet_memory(&std5, sizeof(std5));
  int c6 = 10;
  struct std___Setw std7;
  __VERIFIER_nondet_memory(&std7, sizeof(std7));
  agg_tmp02 = std7;
  struct std___Setw t8 = agg_tmp02;
  struct std__basic_ostream_char__std__char_traits_char__* std9;
  __VERIFIER_nondet_memory(&std9, sizeof(std9));
  int c10 = 123;
  struct std__basic_ostream_char__std__char_traits_char__* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  struct std__basic_ostream_char__std__char_traits_char__* std12;
  __VERIFIER_nondet_memory(&std12, sizeof(std12));
  int c13 = 0;
  __retval1 = c13;
  int t14 = __retval1;
  return t14;
}

