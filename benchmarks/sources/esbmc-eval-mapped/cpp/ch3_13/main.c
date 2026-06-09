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
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[5] = "! = ";
unsigned long factorial(unsigned long p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z9factorialm
unsigned long factorial(unsigned long v0) {
bb1:
  unsigned long number2;
  unsigned long __retval3;
  number2 = v0;
    unsigned long t4 = number2;
    unsigned long c5 = 1;
    _Bool c6 = ((t4 <= c5)) ? 1 : 0;
    if (c6) {
      unsigned long c7 = 1;
      __retval3 = c7;
      unsigned long t8 = __retval3;
      return t8;
    } else {
      unsigned long t9 = number2;
      unsigned long t10 = number2;
      unsigned long c11 = 1;
      unsigned long b12 = t10 - c11;
      unsigned long r13 = factorial(b12);
      unsigned long b14 = t9 * r13;
      __retval3 = b14;
      unsigned long t15 = __retval3;
      return t15;
    }
  abort();
}

// function: main
int main() {
bb16:
  int __retval17;
  int c18 = 0;
  __retval17 = c18;
    int i19;
    struct std___Setw agg_tmp020;
    int c21 = 0;
    i19 = c21;
    while (1) {
      int t23 = i19;
      int c24 = 10;
      _Bool c25 = ((t23 <= c24)) ? 1 : 0;
      if (!c25) break;
      int c26 = 2;
      struct std___Setw std27;
      __VERIFIER_nondet_memory(&std27, sizeof(std27));
      agg_tmp020 = std27;
      struct std___Setw t28 = agg_tmp020;
      struct std__basic_ostream_char__std__char_traits_char__* std29;
      __VERIFIER_nondet_memory(&std29, sizeof(std29));
      int t30 = i19;
      struct std__basic_ostream_char__std__char_traits_char__* std31;
      __VERIFIER_nondet_memory(&std31, sizeof(std31));
      char* cast32 = (char*)&(_str);
      struct std__basic_ostream_char__std__char_traits_char__* std33;
      __VERIFIER_nondet_memory(&std33, sizeof(std33));
      int t34 = i19;
      unsigned long cast35 = (unsigned long)t34;
      unsigned long r36 = factorial(cast35);
      struct std__basic_ostream_char__std__char_traits_char__* std37;
      __VERIFIER_nondet_memory(&std37, sizeof(std37));
      struct std__basic_ostream_char__std__char_traits_char__* std38;
      __VERIFIER_nondet_memory(&std38, sizeof(std38));
    for_step22: ;
      int t39 = i19;
      int u40 = t39 + 1;
      i19 = u40;
    }
  int c41 = 0;
  __retval17 = c41;
  int t42 = __retval17;
  return t42;
}

