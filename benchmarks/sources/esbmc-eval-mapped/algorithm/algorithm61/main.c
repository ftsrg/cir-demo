extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ { void* _M_comp; };
struct __gnu_cxx____ops___Iter_comp_iter_myclass_ { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_less_iter { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct myclass { unsigned char __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int __const_main_myints[7] = {3, 7, 2, 5, 6, 4, 9};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
struct myclass myobj;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[25] = "The smallest element is ";
char _str_1[35] = "*min_element(myints,myints+7) == 2";
char _str_2[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm61/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[24] = "The largest element is ";
char _str_4[35] = "*max_element(myints,myints+7) == 9";
_Bool myfn(int p0, int p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z4myfnii
_Bool myfn(int v0, int v1) {
bb2:
  int i3;
  int j4;
  _Bool __retval5;
  i3 = v0;
  j4 = v1;
  int t6 = i3;
  int t7 = j4;
  _Bool c8 = ((t6 < t7)) ? 1 : 0;
  __retval5 = c8;
  _Bool t9 = __retval5;
  return t9;
}

// function: main
int main() {
bb10:
  int __retval11;
  int myints12[7];
  struct myclass agg_tmp013;
  struct myclass agg_tmp114;
  int c15 = 0;
  __retval11 = c15;
  // array copy
  __builtin_memcpy(myints12, __const_main_myints, (unsigned long)7 * sizeof(__const_main_myints[0]));
  char* cast16 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std17;
  __VERIFIER_nondet_memory(&std17, sizeof(std17));
  int* cast18 = (int*)&(myints12);
  int* cast19 = (int*)&(myints12);
  int c20 = 7;
  int* ptr21 = &(cast19)[c20];
  int* std22;
  __VERIFIER_nondet_memory(&std22, sizeof(std22));
  int t23 = *std22;
  struct std__basic_ostream_char__std__char_traits_char__* std24;
  __VERIFIER_nondet_memory(&std24, sizeof(std24));
  struct std__basic_ostream_char__std__char_traits_char__* std25;
  __VERIFIER_nondet_memory(&std25, sizeof(std25));
  int* cast26 = (int*)&(myints12);
  int* cast27 = (int*)&(myints12);
  int c28 = 7;
  int* ptr29 = &(cast27)[c28];
  int* std30;
  __VERIFIER_nondet_memory(&std30, sizeof(std30));
  int t31 = *std30;
  int c32 = 2;
  _Bool c33 = ((t31 == c32)) ? 1 : 0;
  if (c33) {
  } else {
    char* cast34 = (char*)&(_str_1);
    char* c35 = _str_2;
    unsigned int c36 = 25;
    char* cast37 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast34, c35, c36, cast37);
  }
  char* cast38 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std39;
  __VERIFIER_nondet_memory(&std39, sizeof(std39));
  int* cast40 = (int*)&(myints12);
  int* cast41 = (int*)&(myints12);
  int c42 = 7;
  int* ptr43 = &(cast41)[c42];
  int* std44;
  __VERIFIER_nondet_memory(&std44, sizeof(std44));
  int t45 = *std44;
  struct std__basic_ostream_char__std__char_traits_char__* std46;
  __VERIFIER_nondet_memory(&std46, sizeof(std46));
  struct std__basic_ostream_char__std__char_traits_char__* std47;
  __VERIFIER_nondet_memory(&std47, sizeof(std47));
  int* cast48 = (int*)&(myints12);
  int* cast49 = (int*)&(myints12);
  int c50 = 7;
  int* ptr51 = &(cast49)[c50];
  int* std52;
  __VERIFIER_nondet_memory(&std52, sizeof(std52));
  int t53 = *std52;
  int c54 = 9;
  _Bool c55 = ((t53 == c54)) ? 1 : 0;
  if (c55) {
  } else {
    char* cast56 = (char*)&(_str_4);
    char* c57 = _str_2;
    unsigned int c58 = 27;
    char* cast59 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast56, c57, c58, cast59);
  }
  char* cast60 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std61;
  __VERIFIER_nondet_memory(&std61, sizeof(std61));
  int* cast62 = (int*)&(myints12);
  int* cast63 = (int*)&(myints12);
  int c64 = 7;
  int* ptr65 = &(cast63)[c64];
  int* std66;
  __VERIFIER_nondet_memory(&std66, sizeof(std66));
  int t67 = *std66;
  struct std__basic_ostream_char__std__char_traits_char__* std68;
  __VERIFIER_nondet_memory(&std68, sizeof(std68));
  struct std__basic_ostream_char__std__char_traits_char__* std69;
  __VERIFIER_nondet_memory(&std69, sizeof(std69));
  char* cast70 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std71;
  __VERIFIER_nondet_memory(&std71, sizeof(std71));
  int* cast72 = (int*)&(myints12);
  int* cast73 = (int*)&(myints12);
  int c74 = 7;
  int* ptr75 = &(cast73)[c74];
  int* std76;
  __VERIFIER_nondet_memory(&std76, sizeof(std76));
  int t77 = *std76;
  struct std__basic_ostream_char__std__char_traits_char__* std78;
  __VERIFIER_nondet_memory(&std78, sizeof(std78));
  struct std__basic_ostream_char__std__char_traits_char__* std79;
  __VERIFIER_nondet_memory(&std79, sizeof(std79));
  char* cast80 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std81;
  __VERIFIER_nondet_memory(&std81, sizeof(std81));
  int* cast82 = (int*)&(myints12);
  int* cast83 = (int*)&(myints12);
  int c84 = 7;
  int* ptr85 = &(cast83)[c84];
  struct myclass t86 = agg_tmp013;
  int* std87;
  __VERIFIER_nondet_memory(&std87, sizeof(std87));
  int t88 = *std87;
  struct std__basic_ostream_char__std__char_traits_char__* std89;
  __VERIFIER_nondet_memory(&std89, sizeof(std89));
  struct std__basic_ostream_char__std__char_traits_char__* std90;
  __VERIFIER_nondet_memory(&std90, sizeof(std90));
  char* cast91 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std92;
  __VERIFIER_nondet_memory(&std92, sizeof(std92));
  int* cast93 = (int*)&(myints12);
  int* cast94 = (int*)&(myints12);
  int c95 = 7;
  int* ptr96 = &(cast94)[c95];
  struct myclass t97 = agg_tmp114;
  int* std98;
  __VERIFIER_nondet_memory(&std98, sizeof(std98));
  int t99 = *std98;
  struct std__basic_ostream_char__std__char_traits_char__* std100;
  __VERIFIER_nondet_memory(&std100, sizeof(std100));
  struct std__basic_ostream_char__std__char_traits_char__* std101;
  __VERIFIER_nondet_memory(&std101, sizeof(std101));
  int c102 = 0;
  __retval11 = c102;
  int t103 = __retval11;
  return t103;
}

