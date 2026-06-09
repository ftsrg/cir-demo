// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__basic_istream_char__std__char_traits_char__;

extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  char c2;
  char str3[256];
  int c4 = 0;
  __retval1 = c4;
  char* cast5 = (char*)&(str3);
  long c6 = 256;
  char c7 = 37;
  struct std__basic_istream_char__std__char_traits_char__* std8;
  __VERIFIER_nondet_memory(&std8, sizeof(std8));
  int c9 = 0;
  __retval1 = c9;
  int t10 = __retval1;
  return t10;
}

