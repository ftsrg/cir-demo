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
char _str[27] = "abcdefghijklmnopqrstuvwxyz";
char _str_1[5] = "four";
char _str_2[7] = "Boston";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[16] = "The length of \"";
char _str_4[6] = "\" is ";
char _str_5[17] = "\nThe length of \"";
extern unsigned long strlen(char* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  char* string12;
  char* string23;
  char* string34;
  int c5 = 0;
  __retval1 = c5;
  char* cast6 = (char*)&(_str);
  string12 = cast6;
  char* cast7 = (char*)&(_str_1);
  string23 = cast7;
  char* cast8 = (char*)&(_str_2);
  string34 = cast8;
  char* cast9 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std10;
  __VERIFIER_nondet_memory(&std10, sizeof(std10));
  char* t11 = string12;
  struct std__basic_ostream_char__std__char_traits_char__* std12;
  __VERIFIER_nondet_memory(&std12, sizeof(std12));
  char* cast13 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std14;
  __VERIFIER_nondet_memory(&std14, sizeof(std14));
  char* t15 = string12;
  unsigned long r16 = strlen(t15);
  struct std__basic_ostream_char__std__char_traits_char__* std17;
  __VERIFIER_nondet_memory(&std17, sizeof(std17));
  char* cast18 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
  char* t20 = string23;
  struct std__basic_ostream_char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  char* cast22 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  char* t24 = string23;
  unsigned long r25 = strlen(t24);
  struct std__basic_ostream_char__std__char_traits_char__* std26;
  __VERIFIER_nondet_memory(&std26, sizeof(std26));
  char* cast27 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std28;
  __VERIFIER_nondet_memory(&std28, sizeof(std28));
  char* t29 = string34;
  struct std__basic_ostream_char__std__char_traits_char__* std30;
  __VERIFIER_nondet_memory(&std30, sizeof(std30));
  char* cast31 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std32;
  __VERIFIER_nondet_memory(&std32, sizeof(std32));
  char* t33 = string34;
  unsigned long r34 = strlen(t33);
  struct std__basic_ostream_char__std__char_traits_char__* std35;
  __VERIFIER_nondet_memory(&std35, sizeof(std35));
  struct std__basic_ostream_char__std__char_traits_char__* std36;
  __VERIFIER_nondet_memory(&std36, sizeof(std36));
  int c37 = 0;
  __retval1 = c37;
  int t38 = __retval1;
  return t38;
}

