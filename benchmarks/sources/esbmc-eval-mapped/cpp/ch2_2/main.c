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
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_istream_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[27] = "Enter base as an integer: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[31] = "Enter exponent as an integer: ";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int x2;
  int y3;
  int i4;
  int power5;
  int c6 = 0;
  __retval1 = c6;
  int c7 = 1;
  i4 = c7;
  int c8 = 1;
  power5 = c8;
  char* cast9 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std10;
  __VERIFIER_nondet_memory(&std10, sizeof(std10));
  struct std__basic_istream_char__std__char_traits_char__* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  char* cast12 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std13;
  __VERIFIER_nondet_memory(&std13, sizeof(std13));
  struct std__basic_istream_char__std__char_traits_char__* std14;
  __VERIFIER_nondet_memory(&std14, sizeof(std14));
    while (1) {
      int t15 = i4;
      int t16 = y3;
      _Bool c17 = ((t15 <= t16)) ? 1 : 0;
      if (!c17) break;
        int t18 = x2;
        int t19 = power5;
        int b20 = t19 * t18;
        power5 = b20;
        int t21 = i4;
        int u22 = t21 + 1;
        i4 = u22;
    }
  int t23 = power5;
  struct std__basic_ostream_char__std__char_traits_char__* std24;
  __VERIFIER_nondet_memory(&std24, sizeof(std24));
  struct std__basic_ostream_char__std__char_traits_char__* std25;
  __VERIFIER_nondet_memory(&std25, sizeof(std25));
  int c26 = 0;
  __retval1 = c26;
  int t27 = __retval1;
  return t27;
}

