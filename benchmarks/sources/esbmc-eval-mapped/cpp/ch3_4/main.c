// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__basic_istream_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
int main();

extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int c2;
  int c3 = 0;
  __retval1 = c3;
    int std4 = __VERIFIER_nondet_int();
    c2 = std4;
    int c5 = -1;
    _Bool c6 = ((std4 != c5)) ? 1 : 0;
    if (c6) {
      int r7 = main();
      int t8 = c2;
      struct std__basic_ostream_char__std__char_traits_char__* std9;
      __VERIFIER_nondet_memory(&std9, sizeof(std9));
    }
  int c10 = 0;
  __retval1 = c10;
  int t11 = __retval1;
  return t11;
}

