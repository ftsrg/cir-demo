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

char __const_main_str2[20] = "or not to be";
char __const_main_str1[20] = "To be ";
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
extern char* strncat(char* p0, char* p1, unsigned long p2);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  char str12[20];
  char str23[20];
  char* str4;
  int c5 = 0;
  __retval1 = c5;
  // array copy
  __builtin_memcpy(str12, __const_main_str1, (unsigned long)20 * sizeof(__const_main_str1[0]));
  // array copy
  __builtin_memcpy(str23, __const_main_str2, (unsigned long)20 * sizeof(__const_main_str2[0]));
  char* cast6 = (char*)&(str12);
  char* cast7 = (char*)&(str23);
  unsigned long c8 = 6;
  char* r9 = strncat(cast6, cast7, c8);
  str4 = r9;
  char* t10 = str4;
  struct std__basic_ostream_char__std__char_traits_char__* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  struct std__basic_ostream_char__std__char_traits_char__* std12;
  __VERIFIER_nondet_memory(&std12, sizeof(std12));
  int c13 = 0;
  __retval1 = c13;
  int t14 = __retval1;
  return t14;
}

