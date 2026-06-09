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
char _str[36] = "Enter result (1 = pass, 2 = fail): ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[8] = "Passed ";
char _str_2[8] = "Failed ";
char _str_3[15] = "Raise tuition ";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int passes2;
  int failures3;
  int studentCounter4;
  int result5;
  int c6 = 0;
  __retval1 = c6;
  int c7 = 0;
  passes2 = c7;
  int c8 = 0;
  failures3 = c8;
  int c9 = 1;
  studentCounter4 = c9;
    while (1) {
      int t10 = studentCounter4;
      int c11 = 10;
      _Bool c12 = ((t10 <= c11)) ? 1 : 0;
      if (!c12) break;
        char* cast13 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* std14;
        __VERIFIER_nondet_memory(&std14, sizeof(std14));
        struct std__basic_istream_char__std__char_traits_char__* std15;
        __VERIFIER_nondet_memory(&std15, sizeof(std15));
          int t16 = result5;
          int c17 = 1;
          _Bool c18 = ((t16 == c17)) ? 1 : 0;
          if (c18) {
            int t19 = passes2;
            int c20 = 1;
            int b21 = t19 + c20;
            passes2 = b21;
          } else {
            int t22 = failures3;
            int c23 = 1;
            int b24 = t22 + c23;
            failures3 = b24;
          }
        int t25 = studentCounter4;
        int c26 = 1;
        int b27 = t25 + c26;
        studentCounter4 = b27;
    }
  char* cast28 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std29;
  __VERIFIER_nondet_memory(&std29, sizeof(std29));
  int t30 = passes2;
  struct std__basic_ostream_char__std__char_traits_char__* std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
  struct std__basic_ostream_char__std__char_traits_char__* std32;
  __VERIFIER_nondet_memory(&std32, sizeof(std32));
  char* cast33 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std34;
  __VERIFIER_nondet_memory(&std34, sizeof(std34));
  int t35 = failures3;
  struct std__basic_ostream_char__std__char_traits_char__* std36;
  __VERIFIER_nondet_memory(&std36, sizeof(std36));
  struct std__basic_ostream_char__std__char_traits_char__* std37;
  __VERIFIER_nondet_memory(&std37, sizeof(std37));
    int t38 = passes2;
    int c39 = 8;
    _Bool c40 = ((t38 > c39)) ? 1 : 0;
    if (c40) {
      char* cast41 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* std42;
      __VERIFIER_nondet_memory(&std42, sizeof(std42));
      struct std__basic_ostream_char__std__char_traits_char__* std43;
      __VERIFIER_nondet_memory(&std43, sizeof(std43));
    }
  int c44 = 0;
  __retval1 = c44;
  int t45 = __retval1;
  return t45;
}

