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
char _str[19] = "Enter a sentence: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[25] = "Enter another sentence: ";
char _str_2[2] = "'";
char _str_3[20] = "' is greater than '";
char _str_4[3] = "'.";
char _str_5[17] = "' is less than '";
char _str_6[19] = "' is the same as '";
extern int memcmp(void* p0, void* p1, unsigned long p2);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  char str12[256];
  char str23[256];
  int n4;
  int c5 = 0;
  __retval1 = c5;
  char* cast6 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std7;
  __VERIFIER_nondet_memory(&std7, sizeof(std7));
  struct std__basic_ostream_char__std__char_traits_char__* std8;
  __VERIFIER_nondet_memory(&std8, sizeof(std8));
  struct std__basic_istream_char__std__char_traits_char__* std9;
  __VERIFIER_nondet_memory(&std9, sizeof(std9));
  char* cast10 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  struct std__basic_ostream_char__std__char_traits_char__* std12;
  __VERIFIER_nondet_memory(&std12, sizeof(std12));
  struct std__basic_istream_char__std__char_traits_char__* std13;
  __VERIFIER_nondet_memory(&std13, sizeof(std13));
  char* cast14 = (char*)&(str12);
  void* cast15 = (void*)cast14;
  char* cast16 = (char*)&(str23);
  void* cast17 = (void*)cast16;
  unsigned long c18 = 256;
  int r19 = memcmp(cast15, cast17, c18);
  n4 = r19;
    int t20 = n4;
    int c21 = 0;
    _Bool c22 = ((t20 > c21)) ? 1 : 0;
    if (c22) {
      char* cast23 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* std24;
      __VERIFIER_nondet_memory(&std24, sizeof(std24));
      char* cast25 = (char*)&(str12);
      struct std__basic_ostream_char__std__char_traits_char__* std26;
      __VERIFIER_nondet_memory(&std26, sizeof(std26));
      char* cast27 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* std28;
      __VERIFIER_nondet_memory(&std28, sizeof(std28));
      char* cast29 = (char*)&(str23);
      struct std__basic_ostream_char__std__char_traits_char__* std30;
      __VERIFIER_nondet_memory(&std30, sizeof(std30));
      char* cast31 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* std32;
      __VERIFIER_nondet_memory(&std32, sizeof(std32));
      struct std__basic_ostream_char__std__char_traits_char__* std33;
      __VERIFIER_nondet_memory(&std33, sizeof(std33));
    } else {
        int t34 = n4;
        int c35 = 0;
        _Bool c36 = ((t34 < c35)) ? 1 : 0;
        if (c36) {
          char* cast37 = (char*)&(_str_2);
          struct std__basic_ostream_char__std__char_traits_char__* std38;
          __VERIFIER_nondet_memory(&std38, sizeof(std38));
          char* cast39 = (char*)&(str12);
          struct std__basic_ostream_char__std__char_traits_char__* std40;
          __VERIFIER_nondet_memory(&std40, sizeof(std40));
          char* cast41 = (char*)&(_str_5);
          struct std__basic_ostream_char__std__char_traits_char__* std42;
          __VERIFIER_nondet_memory(&std42, sizeof(std42));
          char* cast43 = (char*)&(str23);
          struct std__basic_ostream_char__std__char_traits_char__* std44;
          __VERIFIER_nondet_memory(&std44, sizeof(std44));
          char* cast45 = (char*)&(_str_4);
          struct std__basic_ostream_char__std__char_traits_char__* std46;
          __VERIFIER_nondet_memory(&std46, sizeof(std46));
          struct std__basic_ostream_char__std__char_traits_char__* std47;
          __VERIFIER_nondet_memory(&std47, sizeof(std47));
        } else {
          char* cast48 = (char*)&(_str_2);
          struct std__basic_ostream_char__std__char_traits_char__* std49;
          __VERIFIER_nondet_memory(&std49, sizeof(std49));
          char* cast50 = (char*)&(str12);
          struct std__basic_ostream_char__std__char_traits_char__* std51;
          __VERIFIER_nondet_memory(&std51, sizeof(std51));
          char* cast52 = (char*)&(_str_6);
          struct std__basic_ostream_char__std__char_traits_char__* std53;
          __VERIFIER_nondet_memory(&std53, sizeof(std53));
          char* cast54 = (char*)&(str23);
          struct std__basic_ostream_char__std__char_traits_char__* std55;
          __VERIFIER_nondet_memory(&std55, sizeof(std55));
          char* cast56 = (char*)&(_str_4);
          struct std__basic_ostream_char__std__char_traits_char__* std57;
          __VERIFIER_nondet_memory(&std57, sizeof(std57));
          struct std__basic_ostream_char__std__char_traits_char__* std58;
          __VERIFIER_nondet_memory(&std58, sizeof(std58));
        }
    }
  int c59 = 0;
  __retval1 = c59;
  int t60 = __retval1;
  return t60;
}

