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
char _str[39] = "Enter two integers in the range 1-20: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int x2;
  int y3;
  int c4 = 0;
  __retval1 = c4;
  char* cast5 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std6;
  __VERIFIER_nondet_memory(&std6, sizeof(std6));
  struct std__basic_istream_char__std__char_traits_char__* std7;
  __VERIFIER_nondet_memory(&std7, sizeof(std7));
  struct std__basic_istream_char__std__char_traits_char__* std8;
  __VERIFIER_nondet_memory(&std8, sizeof(std8));
    int i9;
    int c10 = 1;
    i9 = c10;
    while (1) {
      int t12 = i9;
      int t13 = y3;
      _Bool c14 = ((t12 <= t13)) ? 1 : 0;
      if (!c14) break;
          int j15;
          int c16 = 1;
          j15 = c16;
          while (1) {
            int t18 = j15;
            int t19 = x2;
            _Bool c20 = ((t18 <= t19)) ? 1 : 0;
            if (!c20) break;
            char c21 = 64;
            struct std__basic_ostream_char__std__char_traits_char__* std22;
            __VERIFIER_nondet_memory(&std22, sizeof(std22));
          for_step17: ;
            int t23 = j15;
            int u24 = t23 + 1;
            j15 = u24;
          }
        struct std__basic_ostream_char__std__char_traits_char__* std25;
        __VERIFIER_nondet_memory(&std25, sizeof(std25));
    for_step11: ;
      int t26 = i9;
      int u27 = t26 + 1;
      i9 = u27;
    }
  int c28 = 0;
  __retval1 = c28;
  int t29 = __retval1;
  return t29;
}

