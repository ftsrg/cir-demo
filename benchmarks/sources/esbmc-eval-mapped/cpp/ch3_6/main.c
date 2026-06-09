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
char _str[3] = "  ";
int square(int p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z6squarei
int square(int v0) {
bb1:
  int y2;
  int __retval3;
  y2 = v0;
  int t4 = y2;
  int t5 = y2;
  int b6 = t4 * t5;
  __retval3 = b6;
  int t7 = __retval3;
  return t7;
}

// function: main
int main() {
bb8:
  int __retval9;
  int c10 = 0;
  __retval9 = c10;
    int x11;
    int c12 = 1;
    x11 = c12;
    while (1) {
      int t14 = x11;
      int c15 = 10;
      _Bool c16 = ((t14 <= c15)) ? 1 : 0;
      if (!c16) break;
      int t17 = x11;
      int r18 = square(t17);
      struct std__basic_ostream_char__std__char_traits_char__* std19;
      __VERIFIER_nondet_memory(&std19, sizeof(std19));
      char* cast20 = (char*)&(_str);
      struct std__basic_ostream_char__std__char_traits_char__* std21;
      __VERIFIER_nondet_memory(&std21, sizeof(std21));
    for_step13: ;
      int t22 = x11;
      int u23 = t22 + 1;
      x11 = u23;
    }
  struct std__basic_ostream_char__std__char_traits_char__* std24;
  __VERIFIER_nondet_memory(&std24, sizeof(std24));
  int c25 = 0;
  __retval9 = c25;
  int t26 = __retval9;
  return t26;
}

