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
struct std___Setw { int _M_n; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_istream_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[2] = "0";
char _str_1[98] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/ch20_8/main.cpp";
char __PRETTY_FUNCTION____Z13signalHandleri[24] = "void signalHandler(int)";
char _str_2[20] = "\nInterrupt signal (";
char _str_3[13] = ") received.\n";
char _str_4[46] = "Do you wish to continue (1 = yes or 2 = no)? ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_5[22] = "(1 = yes or 2 = no)? ";
extern void* signal(int p0, void* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern void exit(int p0);
void signalHandler(int p0);
extern void srand(unsigned int p0);
extern long time(long* p0);
extern int raise(int p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z13signalHandleri
void signalHandler(int v0) {
bb1:
  int signalValue2;
  int response3;
  signalValue2 = v0;
  char* cast4 = (char*)&(_str);
  char* c5 = _str_1;
  unsigned int c6 = 56;
  char* cast7 = (char*)&(__PRETTY_FUNCTION____Z13signalHandleri);
  __assert_fail(cast4, c5, c6, cast7);
  char* cast8 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std9;
  __VERIFIER_nondet_memory(&std9, sizeof(std9));
  int t10 = signalValue2;
  struct std__basic_ostream_char__std__char_traits_char__* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  char* cast12 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std13;
  __VERIFIER_nondet_memory(&std13, sizeof(std13));
  char* cast14 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std15;
  __VERIFIER_nondet_memory(&std15, sizeof(std15));
  struct std__basic_istream_char__std__char_traits_char__* std16;
  __VERIFIER_nondet_memory(&std16, sizeof(std16));
    while (1) {
      int t17 = response3;
      int c18 = 1;
      _Bool c19 = ((t17 != c18)) ? 1 : 0;
      _Bool ternary20;
      if (c19) {
        int t21 = response3;
        int c22 = 2;
        _Bool c23 = ((t21 != c22)) ? 1 : 0;
        ternary20 = (_Bool)c23;
      } else {
        _Bool c24 = 0;
        ternary20 = (_Bool)c24;
      }
      if (!ternary20) break;
        char* cast25 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* std26;
        __VERIFIER_nondet_memory(&std26, sizeof(std26));
        struct std__basic_istream_char__std__char_traits_char__* std27;
        __VERIFIER_nondet_memory(&std27, sizeof(std27));
    }
    int t28 = response3;
    int c29 = 1;
    _Bool c30 = ((t28 != c29)) ? 1 : 0;
    if (c30) {
      int c31 = 0;
      exit(c31);
    }
  int c32 = 2;
  void* r33 = signal(c32, &signalHandler);
  int c34 = 2;
  struct std__basic_ostream_char__std__char_traits_char__* std35;
  __VERIFIER_nondet_memory(&std35, sizeof(std35));
  struct std__basic_ostream_char__std__char_traits_char__* std36;
  __VERIFIER_nondet_memory(&std36, sizeof(std36));
  return;
}

// function: main
int main() {
bb37:
  int __retval38;
  int c39 = 0;
  __retval38 = c39;
  int c40 = 2;
  void* r41 = signal(c40, &signalHandler);
  long* c42 = ((void*)0);
  long r43 = time(c42);
  unsigned int cast44 = (unsigned int)r43;
  srand(cast44);
    int i45;
    int c46 = 1;
    i45 = c46;
    while (1) {
      int t48 = i45;
      int c49 = 100;
      _Bool c50 = ((t48 <= c49)) ? 1 : 0;
      if (!c50) break;
        int x51;
        struct std___Setw agg_tmp052;
        int c53 = 25;
        x51 = c53;
          int t54 = x51;
          int c55 = 25;
          _Bool c56 = ((t54 == c55)) ? 1 : 0;
          if (c56) {
            int c57 = 2;
            int r58 = raise(c57);
          }
        int c59 = 4;
        struct std___Setw std60;
        __VERIFIER_nondet_memory(&std60, sizeof(std60));
        agg_tmp052 = std60;
        struct std___Setw t61 = agg_tmp052;
        struct std__basic_ostream_char__std__char_traits_char__* std62;
        __VERIFIER_nondet_memory(&std62, sizeof(std62));
        int t63 = i45;
        struct std__basic_ostream_char__std__char_traits_char__* std64;
        __VERIFIER_nondet_memory(&std64, sizeof(std64));
          int t65 = i45;
          int c66 = 10;
          int b67 = t65 % c66;
          int c68 = 0;
          _Bool c69 = ((b67 == c68)) ? 1 : 0;
          if (c69) {
            struct std__basic_ostream_char__std__char_traits_char__* std70;
            __VERIFIER_nondet_memory(&std70, sizeof(std70));
          }
    for_step47: ;
      int t71 = i45;
      int u72 = t71 + 1;
      i45 = u72;
    }
  int c73 = 0;
  __retval38 = c73;
  int t74 = __retval38;
  return t74;
}

