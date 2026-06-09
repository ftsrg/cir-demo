extern void abort(void);
// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cerr __attribute__((aligned(8)));
char _str[28] = "customNewHandler was called";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[35] = "Allocated 5000000 doubles in ptr[ ";
char _str_2[4] = " ]\n";
extern void abort();
void customNewHandler();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new__(unsigned long p0) { return malloc(p0); }
void operator_delete__(void* p0, unsigned long p1) { free(p0); }
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z16customNewHandlerv
void customNewHandler() {
bb0:
  char* cast1 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std2;
  __VERIFIER_nondet_memory(&std2, sizeof(std2));
  abort();
  return;
}

// function: main
int main() {
bb3:
  int __retval4;
  double* ptr5[5];
  int c6 = 0;
  __retval4 = c6;
  void* std7;
  __VERIFIER_nondet_memory(&std7, sizeof(std7));
    int i8;
    int c9 = 0;
    i8 = c9;
    while (1) {
      int t11 = i8;
      int c12 = 5;
      _Bool c13 = ((t11 < c12)) ? 1 : 0;
      if (!c13) break;
        double* __new_result14;
        unsigned long c15 = 40000000000000;
        void* r16 = operator_new__(c15);
          double* cast17 = (double*)r16;
          __new_result14 = cast17;
        double* t18 = __new_result14;
        int t19 = i8;
        long cast20 = (long)t19;
        ptr5[cast20] = t18;
        char* cast21 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std22;
        __VERIFIER_nondet_memory(&std22, sizeof(std22));
        int t23 = i8;
        struct std__basic_ostream_char__std__char_traits_char__* std24;
        __VERIFIER_nondet_memory(&std24, sizeof(std24));
        char* cast25 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* std26;
        __VERIFIER_nondet_memory(&std26, sizeof(std26));
    for_step10: ;
      int t27 = i8;
      int u28 = t27 + 1;
      i8 = u28;
    }
  int c29 = 0;
  __retval4 = c29;
  int t30 = __retval4;
  return t30;
}

