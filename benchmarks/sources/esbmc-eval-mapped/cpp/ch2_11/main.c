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
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int counter2;
  int c3 = 0;
  __retval1 = c3;
  int c4 = 1;
  counter2 = c4;
    while (1) {
      int t5 = counter2;
      int c6 = 10;
      _Bool c7 = ((t5 <= c6)) ? 1 : 0;
      if (!c7) break;
        int t8 = counter2;
        struct std__basic_ostream_char__std__char_traits_char__* std9;
        __VERIFIER_nondet_memory(&std9, sizeof(std9));
        struct std__basic_ostream_char__std__char_traits_char__* std10;
        __VERIFIER_nondet_memory(&std10, sizeof(std10));
        int t11 = counter2;
        int u12 = t11 + 1;
        counter2 = u12;
    }
  int c13 = 0;
  __retval1 = c13;
  int t14 = __retval1;
  return t14;
}

