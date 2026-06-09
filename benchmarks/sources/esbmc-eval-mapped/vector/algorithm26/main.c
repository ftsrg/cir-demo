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
int current __attribute__((aligned(4))) = 0;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[18] = "myarray contains:";
char _str_1[2] = " ";
char _str_2[18] = "myarray[i] == i+1";
char _str_3[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm26/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
int UniqueNumber();
void void_generate_n_int__int__int________int___int__int____(int* p0, int p1, void* p2);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z12UniqueNumberv
int UniqueNumber() {
bb0:
  int __retval1;
  int t2 = current;
  int u3 = t2 + 1;
  *&current = u3;
  __retval1 = u3;
  int t4 = __retval1;
  return t4;
}

// function: _Z10generate_nIiiPFivEEvPT_T0_T1_
void void_generate_n_int__int__int________int___int__int____(int* v5, int v6, void* v7) {
bb8:
  int* first9;
  int n10;
  void* func11;
  first9 = v5;
  n10 = v6;
  func11 = v7;
    while (1) {
      int t13 = n10;
      int c14 = 0;
      _Bool c15 = ((t13 > c14)) ? 1 : 0;
      if (!c15) break;
      void* t16 = func11;
      int r17 = ((int (*)())t16)();
      int* t18 = first9;
      int c19 = 1;
      int* ptr20 = &(t18)[c19];
      first9 = ptr20;
      *t18 = r17;
    for_step12: ;
      int t21 = n10;
      int u22 = t21 - 1;
      n10 = u22;
    }
  return;
}

// function: main
int main() {
bb23:
  int __retval24;
  int myarray25[9];
  int i26;
  int c27 = 0;
  __retval24 = c27;
  int* cast28 = (int*)&(myarray25);
  int c29 = 9;
  void_generate_n_int__int__int________int___int__int____(cast28, c29, &UniqueNumber);
  char* cast30 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
    int i32;
    int c33 = 0;
    i32 = c33;
    while (1) {
      int t35 = i32;
      int c36 = 9;
      _Bool c37 = ((t35 < c36)) ? 1 : 0;
      if (!c37) break;
      char* cast38 = (char*)&(_str_1);
      struct std__basic_ostream_char__std__char_traits_char__* std39;
      __VERIFIER_nondet_memory(&std39, sizeof(std39));
      int t40 = i32;
      long cast41 = (long)t40;
      int t42 = myarray25[cast41];
      struct std__basic_ostream_char__std__char_traits_char__* std43;
      __VERIFIER_nondet_memory(&std43, sizeof(std43));
    for_step34: ;
      int t44 = i32;
      int u45 = t44 + 1;
      i32 = u45;
    }
    int c46 = 0;
    i26 = c46;
    while (1) {
      int t48 = i26;
      int c49 = 8;
      _Bool c50 = ((t48 < c49)) ? 1 : 0;
      if (!c50) break;
      int t51 = i26;
      long cast52 = (long)t51;
      int t53 = myarray25[cast52];
      int t54 = i26;
      int c55 = 1;
      int b56 = t54 + c55;
      _Bool c57 = ((t53 == b56)) ? 1 : 0;
      if (c57) {
      } else {
        char* cast58 = (char*)&(_str_2);
        char* c59 = _str_3;
        unsigned int c60 = 39;
        char* cast61 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast58, c59, c60, cast61);
      }
    for_step47: ;
      int t62 = i26;
      int u63 = t62 + 1;
      i26 = u63;
    }
  struct std__basic_ostream_char__std__char_traits_char__* std64;
  __VERIFIER_nondet_memory(&std64, sizeof(std64));
  int c65 = 0;
  __retval24 = c65;
  int t66 = __retval24;
  return t66;
}

