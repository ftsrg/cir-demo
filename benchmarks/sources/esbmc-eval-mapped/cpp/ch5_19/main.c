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
char _str[43] = "Enter a number between 0 and 2, 3 to end: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[29] = "Program execution completed.";
char _str_2[13] = "You entered ";
char _str_3[27] = " so function1 was called\n\n";
char _str_4[27] = " so function2 was called\n\n";
char _str_5[27] = " so function3 was called\n\n";
void function1(int p0);
void function2(int p0);
void function3(int p0);
int main();

void* __const_main_f[3] = {(void*)(&function1), (void*)(&function2), (void*)(&function3)};
extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z9function1i
void function1(int v0) {
bb1:
  int a2;
  a2 = v0;
  char* cast3 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std4;
  __VERIFIER_nondet_memory(&std4, sizeof(std4));
  int t5 = a2;
  struct std__basic_ostream_char__std__char_traits_char__* std6;
  __VERIFIER_nondet_memory(&std6, sizeof(std6));
  char* cast7 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std8;
  __VERIFIER_nondet_memory(&std8, sizeof(std8));
  return;
}

// function: _Z9function2i
void function2(int v9) {
bb10:
  int b11;
  b11 = v9;
  char* cast12 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std13;
  __VERIFIER_nondet_memory(&std13, sizeof(std13));
  int t14 = b11;
  struct std__basic_ostream_char__std__char_traits_char__* std15;
  __VERIFIER_nondet_memory(&std15, sizeof(std15));
  char* cast16 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std17;
  __VERIFIER_nondet_memory(&std17, sizeof(std17));
  return;
}

// function: _Z9function3i
void function3(int v18) {
bb19:
  int c20;
  c20 = v18;
  char* cast21 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std22;
  __VERIFIER_nondet_memory(&std22, sizeof(std22));
  int t23 = c20;
  struct std__basic_ostream_char__std__char_traits_char__* std24;
  __VERIFIER_nondet_memory(&std24, sizeof(std24));
  char* cast25 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std26;
  __VERIFIER_nondet_memory(&std26, sizeof(std26));
  return;
}

// function: main
int main() {
bb27:
  int __retval28;
  void* f29[3];
  int choice30;
  int c31 = 0;
  __retval28 = c31;
  // array copy
  __builtin_memcpy(f29, __const_main_f, (unsigned long)3 * sizeof(__const_main_f[0]));
  char* cast32 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std33;
  __VERIFIER_nondet_memory(&std33, sizeof(std33));
  struct std__basic_istream_char__std__char_traits_char__* std34;
  __VERIFIER_nondet_memory(&std34, sizeof(std34));
    while (1) {
      int t35 = choice30;
      int c36 = 0;
      _Bool c37 = ((t35 >= c36)) ? 1 : 0;
      _Bool ternary38;
      if (c37) {
        int t39 = choice30;
        int c40 = 3;
        _Bool c41 = ((t39 < c40)) ? 1 : 0;
        ternary38 = (_Bool)c41;
      } else {
        _Bool c42 = 0;
        ternary38 = (_Bool)c42;
      }
      if (!ternary38) break;
        int t43 = choice30;
        long cast44 = (long)t43;
        void* t45 = f29[cast44];
        int t46 = choice30;
        ((void (*)(int))t45)(t46);
        char* cast47 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* std48;
        __VERIFIER_nondet_memory(&std48, sizeof(std48));
        struct std__basic_istream_char__std__char_traits_char__* std49;
        __VERIFIER_nondet_memory(&std49, sizeof(std49));
    }
  char* cast50 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std51;
  __VERIFIER_nondet_memory(&std51, sizeof(std51));
  struct std__basic_ostream_char__std__char_traits_char__* std52;
  __VERIFIER_nondet_memory(&std52, sizeof(std52));
  int c53 = 0;
  __retval28 = c53;
  int t54 = __retval28;
  return t54;
}

