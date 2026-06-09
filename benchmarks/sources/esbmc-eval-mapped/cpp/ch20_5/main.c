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

int _ZNSt8ios_base11adjustfieldE_const __attribute__((aligned(4))) = 176;
int _ZNSt8ios_base4leftE_const __attribute__((aligned(4))) = 32;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval3;
  int count4;
  struct std___Setw agg_tmp05;
  int c6 = 0;
  __retval3 = c6;
  int c7 = 1;
  count4 = c7;
  goto bb1;
bb1:
start: ;
    int t8 = count4;
    int c9 = 10;
    _Bool c10 = ((t8 > c9)) ? 1 : 0;
    if (c10) {
      goto end;
    }
  int c11 = 2;
  struct std___Setw std12;
  __VERIFIER_nondet_memory(&std12, sizeof(std12));
  agg_tmp05 = std12;
  struct std___Setw t13 = agg_tmp05;
  struct std__basic_ostream_char__std__char_traits_char__* std14;
  __VERIFIER_nondet_memory(&std14, sizeof(std14));
  struct std__basic_ostream_char__std__char_traits_char__* std15;
  __VERIFIER_nondet_memory(&std15, sizeof(std15));
  int t16 = count4;
  struct std__basic_ostream_char__std__char_traits_char__* std17;
  __VERIFIER_nondet_memory(&std17, sizeof(std17));
  int t18 = count4;
  int u19 = t18 + 1;
  count4 = u19;
  goto start;
bb2:
end: ;
  struct std__basic_ostream_char__std__char_traits_char__* std20;
  __VERIFIER_nondet_memory(&std20, sizeof(std20));
  int c21 = 0;
  __retval3 = c21;
  int t22 = __retval3;
  return t22;
}

