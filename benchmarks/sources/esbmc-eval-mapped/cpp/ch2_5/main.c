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
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[2] = "<";
char _str_1[2] = ">";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int row2;
  int column3;
  int c4 = 0;
  __retval1 = c4;
  int c5 = 10;
  row2 = c5;
    while (1) {
      int t6 = row2;
      int c7 = 1;
      _Bool c8 = ((t6 >= c7)) ? 1 : 0;
      if (!c8) break;
        int c9 = 1;
        column3 = c9;
          while (1) {
            int t10 = column3;
            int c11 = 10;
            _Bool c12 = ((t10 <= c11)) ? 1 : 0;
            if (!c12) break;
              int t13 = row2;
              int c14 = 2;
              int b15 = t13 % c14;
              _Bool cast16 = (_Bool)b15;
              char* ternary17;
              if (cast16) {
                ternary17 = (char*)_str;
              } else {
                ternary17 = (char*)_str_1;
              }
              char* cast18 = (char*)ternary17;
              struct std__basic_ostream_char__std__char_traits_char__* std19;
              __VERIFIER_nondet_memory(&std19, sizeof(std19));
              int t20 = column3;
              int u21 = t20 + 1;
              column3 = u21;
          }
        int t22 = row2;
        int u23 = t22 - 1;
        row2 = u23;
        struct std__basic_ostream_char__std__char_traits_char__* std24;
        __VERIFIER_nondet_memory(&std24, sizeof(std24));
    }
  int c25 = 0;
  __retval1 = c25;
  int t26 = __retval1;
  return t26;
}

