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
union anon_0 { int integer1; double double1; char* charPtr; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[10] = "Anonymous";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[6] = "union";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  union anon_0 unnamed2;
  int integer23;
  double double24;
  char* char2Ptr5;
  int c6 = 0;
  __retval1 = c6;
  int c7 = 1;
  integer23 = c7;
  double c8 = 0x1.a666666666666p1;
  double24 = c8;
  char* cast9 = (char*)&(_str);
  char2Ptr5 = cast9;
  int t10 = integer23;
  struct std__basic_ostream_char__std__char_traits_char__* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  char c12 = 32;
  struct std__basic_ostream_char__std__char_traits_char__* std13;
  __VERIFIER_nondet_memory(&std13, sizeof(std13));
  int c14 = 2;
  unnamed2.integer1 = c14;
  int t15 = unnamed2.integer1;
  struct std__basic_ostream_char__std__char_traits_char__* std16;
  __VERIFIER_nondet_memory(&std16, sizeof(std16));
  struct std__basic_ostream_char__std__char_traits_char__* std17;
  __VERIFIER_nondet_memory(&std17, sizeof(std17));
  double t18 = double24;
  struct std__basic_ostream_char__std__char_traits_char__* std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
  char c20 = 32;
  struct std__basic_ostream_char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  double c22 = 0x1.199999999999ap2;
  unnamed2.double1 = c22;
  double t23 = unnamed2.double1;
  struct std__basic_ostream_char__std__char_traits_char__* std24;
  __VERIFIER_nondet_memory(&std24, sizeof(std24));
  struct std__basic_ostream_char__std__char_traits_char__* std25;
  __VERIFIER_nondet_memory(&std25, sizeof(std25));
  char* t26 = char2Ptr5;
  struct std__basic_ostream_char__std__char_traits_char__* std27;
  __VERIFIER_nondet_memory(&std27, sizeof(std27));
  char c28 = 32;
  struct std__basic_ostream_char__std__char_traits_char__* std29;
  __VERIFIER_nondet_memory(&std29, sizeof(std29));
  char* cast30 = (char*)&(_str_1);
  unnamed2.charPtr = cast30;
  char* t31 = unnamed2.charPtr;
  struct std__basic_ostream_char__std__char_traits_char__* std32;
  __VERIFIER_nondet_memory(&std32, sizeof(std32));
  struct std__basic_ostream_char__std__char_traits_char__* std33;
  __VERIFIER_nondet_memory(&std33, sizeof(std33));
  int c34 = 0;
  __retval1 = c34;
  int t35 = __retval1;
  return t35;
}

