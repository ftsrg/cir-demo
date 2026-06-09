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
char _str[19] = "Enter an integer: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[11] = "Fibonacci(";
char _str_2[5] = ") = ";
unsigned long fibonacci(unsigned long p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z9fibonaccim
unsigned long fibonacci(unsigned long v0) {
bb1:
  unsigned long n2;
  unsigned long __retval3;
  n2 = v0;
    unsigned long t4 = n2;
    unsigned long c5 = 0;
    _Bool c6 = ((t4 == c5)) ? 1 : 0;
    _Bool ternary7;
    if (c6) {
      _Bool c8 = 1;
      ternary7 = (_Bool)c8;
    } else {
      unsigned long t9 = n2;
      unsigned long c10 = 1;
      _Bool c11 = ((t9 == c10)) ? 1 : 0;
      ternary7 = (_Bool)c11;
    }
    if (ternary7) {
      unsigned long t12 = n2;
      __retval3 = t12;
      unsigned long t13 = __retval3;
      return t13;
    } else {
      unsigned long t14 = n2;
      unsigned long c15 = 1;
      unsigned long b16 = t14 - c15;
      unsigned long r17 = fibonacci(b16);
      unsigned long t18 = n2;
      unsigned long c19 = 2;
      unsigned long b20 = t18 - c19;
      unsigned long r21 = fibonacci(b20);
      unsigned long b22 = r17 + r21;
      __retval3 = b22;
      unsigned long t23 = __retval3;
      return t23;
    }
  abort();
}

// function: main
int main() {
bb24:
  int __retval25;
  unsigned long result26;
  unsigned long number27;
  int c28 = 0;
  __retval25 = c28;
  char* cast29 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std30;
  __VERIFIER_nondet_memory(&std30, sizeof(std30));
  struct std__basic_istream_char__std__char_traits_char__* std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
  unsigned long t32 = number27;
  unsigned long r33 = fibonacci(t32);
  result26 = r33;
  char* cast34 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std35;
  __VERIFIER_nondet_memory(&std35, sizeof(std35));
  unsigned long t36 = number27;
  struct std__basic_ostream_char__std__char_traits_char__* std37;
  __VERIFIER_nondet_memory(&std37, sizeof(std37));
  char* cast38 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std39;
  __VERIFIER_nondet_memory(&std39, sizeof(std39));
  unsigned long t40 = result26;
  struct std__basic_ostream_char__std__char_traits_char__* std41;
  __VERIFIER_nondet_memory(&std41, sizeof(std41));
  struct std__basic_ostream_char__std__char_traits_char__* std42;
  __VERIFIER_nondet_memory(&std42, sizeof(std42));
  int c43 = 0;
  __retval25 = c43;
  int t44 = __retval25;
  return t44;
}

