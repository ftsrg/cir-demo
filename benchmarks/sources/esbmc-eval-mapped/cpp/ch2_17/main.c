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
char _str[2] = " ";
char _str_1[34] = "\nBroke out of loop when x became ";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int x2;
  int c3 = 0;
  __retval1 = c3;
    int c4 = 1;
    x2 = c4;
    while (1) {
      int t6 = x2;
      int c7 = 10;
      _Bool c8 = ((t6 <= c7)) ? 1 : 0;
      if (!c8) break;
          int t9 = x2;
          int c10 = 5;
          _Bool c11 = ((t9 == c10)) ? 1 : 0;
          if (c11) {
            break;
          }
        int t12 = x2;
        struct std__basic_ostream_char__std__char_traits_char__* std13;
        __VERIFIER_nondet_memory(&std13, sizeof(std13));
        char* cast14 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* std15;
        __VERIFIER_nondet_memory(&std15, sizeof(std15));
    for_step5: ;
      int t16 = x2;
      int u17 = t16 + 1;
      x2 = u17;
    }
  char* cast18 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
  int t20 = x2;
  struct std__basic_ostream_char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  struct std__basic_ostream_char__std__char_traits_char__* std22;
  __VERIFIER_nondet_memory(&std22, sizeof(std22));
  int c23 = 0;
  __retval1 = c23;
  int t24 = __retval1;
  return t24;
}

