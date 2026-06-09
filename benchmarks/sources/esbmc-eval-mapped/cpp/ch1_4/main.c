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
char _str[21] = "Enter first integer\n";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[22] = "Enter second integer\n";
char _str_2[8] = "Sum is ";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int integer12;
  int integer23;
  int sum4;
  int c5 = 0;
  __retval1 = c5;
  char* cast6 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std7;
  __VERIFIER_nondet_memory(&std7, sizeof(std7));
  struct std__basic_istream_char__std__char_traits_char__* std8;
  __VERIFIER_nondet_memory(&std8, sizeof(std8));
  char* cast9 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std10;
  __VERIFIER_nondet_memory(&std10, sizeof(std10));
  struct std__basic_istream_char__std__char_traits_char__* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  int t12 = integer12;
  int t13 = integer23;
  int b14 = t12 + t13;
  sum4 = b14;
  char* cast15 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std16;
  __VERIFIER_nondet_memory(&std16, sizeof(std16));
  int t17 = sum4;
  struct std__basic_ostream_char__std__char_traits_char__* std18;
  __VERIFIER_nondet_memory(&std18, sizeof(std18));
  struct std__basic_ostream_char__std__char_traits_char__* std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
  int c20 = 0;
  __retval1 = c20;
  int t21 = __retval1;
  return t21;
}

