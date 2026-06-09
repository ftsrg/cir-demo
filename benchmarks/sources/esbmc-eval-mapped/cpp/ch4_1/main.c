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

int __const_main_a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[11] = "Result is ";
int whatIsThis(int* p0, int p1);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z10whatIsThisPii
int whatIsThis(int* v0, int v1) {
bb2:
  int* b3;
  int size4;
  int __retval5;
  b3 = v0;
  size4 = v1;
    int t6 = size4;
    int c7 = 1;
    _Bool c8 = ((t6 == c7)) ? 1 : 0;
    if (c8) {
      long c9 = 0;
      int* t10 = b3;
      int* ptr11 = &(t10)[c9];
      int t12 = *ptr11;
      __retval5 = t12;
      int t13 = __retval5;
      return t13;
    } else {
      int t14 = size4;
      int c15 = 1;
      int b16 = t14 - c15;
      long cast17 = (long)b16;
      int* t18 = b3;
      int* ptr19 = &(t18)[cast17];
      int t20 = *ptr19;
      int* t21 = b3;
      int t22 = size4;
      int c23 = 1;
      int b24 = t22 - c23;
      int r25 = whatIsThis(t21, b24);
      int b26 = t20 + r25;
      __retval5 = b26;
      int t27 = __retval5;
      return t27;
    }
  abort();
}

// function: main
int main() {
bb28:
  int __retval29;
  int arraySize30;
  int a31[10];
  int result32;
  int c33 = 0;
  __retval29 = c33;
  int c34 = 10;
  arraySize30 = c34;
  // array copy
  __builtin_memcpy(a31, __const_main_a, (unsigned long)10 * sizeof(__const_main_a[0]));
  int* cast35 = (int*)&(a31);
  int t36 = arraySize30;
  int r37 = whatIsThis(cast35, t36);
  result32 = r37;
  char* cast38 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std39;
  __VERIFIER_nondet_memory(&std39, sizeof(std39));
  int t40 = result32;
  struct std__basic_ostream_char__std__char_traits_char__* std41;
  __VERIFIER_nondet_memory(&std41, sizeof(std41));
  struct std__basic_ostream_char__std__char_traits_char__* std42;
  __VERIFIER_nondet_memory(&std42, sizeof(std42));
  int c43 = 0;
  __retval29 = c43;
  int t44 = __retval29;
  return t44;
}

