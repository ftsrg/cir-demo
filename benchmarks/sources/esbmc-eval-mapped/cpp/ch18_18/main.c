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
char _str[21] = "The value is 3.14159";
char _str_1[11] = "1234567890";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[11] = "string1 = ";
char _str_3[12] = "\nstring2 = ";
char _str_4[47] = "\n\nThe length of the initial segment of string1";
char _str_5[42] = "\ncontaining no characters from string2 = ";
extern unsigned long strcspn(char* p0, char* p1);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  char* string12;
  char* string23;
  int c4 = 0;
  __retval1 = c4;
  char* cast5 = (char*)&(_str);
  string12 = cast5;
  char* cast6 = (char*)&(_str_1);
  string23 = cast6;
  char* cast7 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std8;
  __VERIFIER_nondet_memory(&std8, sizeof(std8));
  char* t9 = string12;
  struct std__basic_ostream_char__std__char_traits_char__* std10;
  __VERIFIER_nondet_memory(&std10, sizeof(std10));
  char* cast11 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std12;
  __VERIFIER_nondet_memory(&std12, sizeof(std12));
  char* t13 = string23;
  struct std__basic_ostream_char__std__char_traits_char__* std14;
  __VERIFIER_nondet_memory(&std14, sizeof(std14));
  char* cast15 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std16;
  __VERIFIER_nondet_memory(&std16, sizeof(std16));
  char* cast17 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std18;
  __VERIFIER_nondet_memory(&std18, sizeof(std18));
  char* t19 = string12;
  char* t20 = string23;
  unsigned long r21 = strcspn(t19, t20);
  struct std__basic_ostream_char__std__char_traits_char__* std22;
  __VERIFIER_nondet_memory(&std22, sizeof(std22));
  struct std__basic_ostream_char__std__char_traits_char__* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  int c24 = 0;
  __retval1 = c24;
  int t25 = __retval1;
  return t25;
}

