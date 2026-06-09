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
  int c2 = 0;
  __retval1 = c2;
    int counter3;
    int c4 = 1;
    counter3 = c4;
    while (1) {
      int t6 = counter3;
      int c7 = 10;
      _Bool c8 = ((t6 <= c7)) ? 1 : 0;
      if (!c8) break;
      int t9 = counter3;
      struct std__basic_ostream_char__std__char_traits_char__* std10;
      __VERIFIER_nondet_memory(&std10, sizeof(std10));
      struct std__basic_ostream_char__std__char_traits_char__* std11;
      __VERIFIER_nondet_memory(&std11, sizeof(std11));
    for_step5: ;
      int t12 = counter3;
      int u13 = t12 + 1;
      counter3 = u13;
    }
  int c14 = 0;
  __retval1 = c14;
  int t15 = __retval1;
  return t15;
}

