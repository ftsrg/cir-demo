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

int _ZNSt8ios_base6eofbitE_const __attribute__((aligned(4))) = 2;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[28] = "Before input, cin.eof() is ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[42] = "Enter a sentence followed by end-of-file:";
char _str_2[25] = "\nEOF in this system is: ";
char _str_3[27] = "After input, cin.eof() is ";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern int __VERIFIER_nondet_int(void);
// function: main
int main() {
bb0:
  int __retval1;
  int character2;
  int c3 = 0;
  __retval1 = c3;
  char* cast4 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std5;
  __VERIFIER_nondet_memory(&std5, sizeof(std5));
  void** v6 = (void**)&_ZSt3cin;
  void* v7 = *((void**)v6);
  unsigned char* cast8 = (unsigned char*)v7;
  long c9 = -24;
  unsigned char* ptr10 = &(cast8)[c9];
  long* cast11 = (long*)ptr10;
  long t12 = *cast11;
  unsigned char* cast13 = (unsigned char*)&_ZSt3cin;
  unsigned char* ptr14 = &(cast13)[t12];
  struct std__basic_istream_char__std__char_traits_char__* cast15 = (struct std__basic_istream_char__std__char_traits_char__*)ptr14;
  struct std__basic_ios_char__std__char_traits_char__* cast16 = (struct std__basic_ios_char__std__char_traits_char__*)cast15;
  _Bool std17;
  __VERIFIER_nondet_memory(&std17, sizeof(std17));
  struct std__basic_ostream_char__std__char_traits_char__* std18;
  __VERIFIER_nondet_memory(&std18, sizeof(std18));
  struct std__basic_ostream_char__std__char_traits_char__* std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
  char* cast20 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  struct std__basic_ostream_char__std__char_traits_char__* std22;
  __VERIFIER_nondet_memory(&std22, sizeof(std22));
    while (1) {
      int std23 = __VERIFIER_nondet_int();
      character2 = std23;
      int c24 = -1;
      _Bool c25 = ((std23 != c24)) ? 1 : 0;
      if (!c25) break;
      int t26 = character2;
      char cast27 = (char)t26;
      struct std__basic_ostream_char__std__char_traits_char__* std28;
      __VERIFIER_nondet_memory(&std28, sizeof(std28));
    }
  char* cast29 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std30;
  __VERIFIER_nondet_memory(&std30, sizeof(std30));
  int t31 = character2;
  struct std__basic_ostream_char__std__char_traits_char__* std32;
  __VERIFIER_nondet_memory(&std32, sizeof(std32));
  struct std__basic_ostream_char__std__char_traits_char__* std33;
  __VERIFIER_nondet_memory(&std33, sizeof(std33));
  char* cast34 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std35;
  __VERIFIER_nondet_memory(&std35, sizeof(std35));
  void** v36 = (void**)&_ZSt3cin;
  void* v37 = *((void**)v36);
  unsigned char* cast38 = (unsigned char*)v37;
  long c39 = -24;
  unsigned char* ptr40 = &(cast38)[c39];
  long* cast41 = (long*)ptr40;
  long t42 = *cast41;
  unsigned char* cast43 = (unsigned char*)&_ZSt3cin;
  unsigned char* ptr44 = &(cast43)[t42];
  struct std__basic_istream_char__std__char_traits_char__* cast45 = (struct std__basic_istream_char__std__char_traits_char__*)ptr44;
  struct std__basic_ios_char__std__char_traits_char__* cast46 = (struct std__basic_ios_char__std__char_traits_char__*)cast45;
  _Bool std47;
  __VERIFIER_nondet_memory(&std47, sizeof(std47));
  struct std__basic_ostream_char__std__char_traits_char__* std48;
  __VERIFIER_nondet_memory(&std48, sizeof(std48));
  struct std__basic_ostream_char__std__char_traits_char__* std49;
  __VERIFIER_nondet_memory(&std49, sizeof(std49));
  int c50 = 0;
  __retval1 = c50;
  int t51 = __retval1;
  return t51;
}

