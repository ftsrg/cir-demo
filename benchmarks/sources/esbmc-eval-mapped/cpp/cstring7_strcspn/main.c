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

char __const_main_keys[11] = "1234567890";
char __const_main_str[7] = "fcba73";
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[39] = "The first number in str is at position";
extern unsigned long strcspn(char* p0, char* p1);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  char str2[7];
  char keys3[11];
  int i4;
  int c5 = 0;
  __retval1 = c5;
  // array copy
  __builtin_memcpy(str2, __const_main_str, (unsigned long)7 * sizeof(__const_main_str[0]));
  // array copy
  __builtin_memcpy(keys3, __const_main_keys, (unsigned long)11 * sizeof(__const_main_keys[0]));
  char* cast6 = (char*)&(str2);
  char* cast7 = (char*)&(keys3);
  unsigned long r8 = strcspn(cast6, cast7);
  int cast9 = (int)r8;
  i4 = cast9;
  char* cast10 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  int t12 = i4;
  int c13 = 1;
  int b14 = t12 + c13;
  struct std__basic_ostream_char__std__char_traits_char__* std15;
  __VERIFIER_nondet_memory(&std15, sizeof(std15));
  struct std__basic_ostream_char__std__char_traits_char__* std16;
  __VERIFIER_nondet_memory(&std16, sizeof(std16));
  int c17 = 0;
  __retval1 = c17;
  int t18 = __retval1;
  return t18;
}

