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
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[10] = "Total is ";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int y2;
  int x3;
  int total4;
  int c5 = 0;
  __retval1 = c5;
  int c6 = 1;
  x3 = c6;
  int c7 = 0;
  total4 = c7;
    while (1) {
      int t8 = x3;
      int c9 = 10;
      _Bool c10 = ((t8 <= c9)) ? 1 : 0;
      if (!c10) break;
        int t11 = x3;
        int t12 = x3;
        int b13 = t11 * t12;
        y2 = b13;
        int t14 = y2;
        struct std__basic_ostream_char__std__char_traits_char__* std15;
        __VERIFIER_nondet_memory(&std15, sizeof(std15));
        struct std__basic_ostream_char__std__char_traits_char__* std16;
        __VERIFIER_nondet_memory(&std16, sizeof(std16));
        int t17 = y2;
        int t18 = total4;
        int b19 = t18 + t17;
        total4 = b19;
        int t20 = x3;
        int u21 = t20 + 1;
        x3 = u21;
    }
  char* cast22 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  int t24 = total4;
  struct std__basic_ostream_char__std__char_traits_char__* std25;
  __VERIFIER_nondet_memory(&std25, sizeof(std25));
  struct std__basic_ostream_char__std__char_traits_char__* std26;
  __VERIFIER_nondet_memory(&std26, sizeof(std26));
  int c27 = 0;
  __retval1 = c27;
  int t28 = __retval1;
  return t28;
}

