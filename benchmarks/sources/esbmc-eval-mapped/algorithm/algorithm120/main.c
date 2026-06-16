extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ { void* _M_comp; };
struct __gnu_cxx____ops___Iter_comp_iter_myclass_ { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_less_iter { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct myclass { unsigned char __field0; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

int __const_main_myints[7] = {3, 7, 2, 5, 6, 4, 9};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
struct myclass myobj;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[25] = "The smallest element is ";
char _str_1[24] = "The largest element is ";
char _str_2[41] = "*max_element(myints,myints+7,myobj) != 9";
char _str_3[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm120/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
_Bool myfn(int p0, int p1);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z4myfnii
_Bool myfn(int v0, int v1) {
bb2: ;
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
bb10: ;
  int __retval11;
  int myints12[7];
  struct myclass agg_tmp013;
  struct myclass agg_tmp114;
  struct myclass agg_tmp215;
  int c16 = 0;
  __retval11 = c16;
  // array copy
  __builtin_memcpy(myints12, __const_main_myints, (unsigned long)7 * sizeof(__const_main_myints[0]));
  char* cast17 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std18;
  __VERIFIER_nondet_memory(&std18, sizeof(std18));
  int* cast19 = (int*)&(myints12);
  int* cast20 = (int*)&(myints12);
  int c21 = 7;
  int* ptr22 = &(cast20)[c21];
  int* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  int t24 = *std23;
  struct std__basic_ostream_char__std__char_traits_char__* std25;
  __VERIFIER_nondet_memory(&std25, sizeof(std25));
  struct std__basic_ostream_char__std__char_traits_char__* std26;
  __VERIFIER_nondet_memory(&std26, sizeof(std26));
  char* cast27 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std28;
  __VERIFIER_nondet_memory(&std28, sizeof(std28));
  int* cast29 = (int*)&(myints12);
  int* cast30 = (int*)&(myints12);
  int c31 = 7;
  int* ptr32 = &(cast30)[c31];
  int* std33;
  __VERIFIER_nondet_memory(&std33, sizeof(std33));
  int t34 = *std33;
  struct std__basic_ostream_char__std__char_traits_char__* std35;
  __VERIFIER_nondet_memory(&std35, sizeof(std35));
  struct std__basic_ostream_char__std__char_traits_char__* std36;
  __VERIFIER_nondet_memory(&std36, sizeof(std36));
  char* cast37 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std38;
  __VERIFIER_nondet_memory(&std38, sizeof(std38));
  int* cast39 = (int*)&(myints12);
  int* cast40 = (int*)&(myints12);
  int c41 = 7;
  int* ptr42 = &(cast40)[c41];
  int* std43;
  __VERIFIER_nondet_memory(&std43, sizeof(std43));
  int t44 = *std43;
  struct std__basic_ostream_char__std__char_traits_char__* std45;
  __VERIFIER_nondet_memory(&std45, sizeof(std45));
  struct std__basic_ostream_char__std__char_traits_char__* std46;
  __VERIFIER_nondet_memory(&std46, sizeof(std46));
  char* cast47 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std48;
  __VERIFIER_nondet_memory(&std48, sizeof(std48));
  int* cast49 = (int*)&(myints12);
  int* cast50 = (int*)&(myints12);
  int c51 = 7;
  int* ptr52 = &(cast50)[c51];
  int* std53;
  __VERIFIER_nondet_memory(&std53, sizeof(std53));
  int t54 = *std53;
  struct std__basic_ostream_char__std__char_traits_char__* std55;
  __VERIFIER_nondet_memory(&std55, sizeof(std55));
  struct std__basic_ostream_char__std__char_traits_char__* std56;
  __VERIFIER_nondet_memory(&std56, sizeof(std56));
  char* cast57 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std58;
  __VERIFIER_nondet_memory(&std58, sizeof(std58));
  int* cast59 = (int*)&(myints12);
  int* cast60 = (int*)&(myints12);
  int c61 = 7;
  int* ptr62 = &(cast60)[c61];
  struct myclass t63 = agg_tmp013;
  int* std64;
  __VERIFIER_nondet_memory(&std64, sizeof(std64));
  int t65 = *std64;
  struct std__basic_ostream_char__std__char_traits_char__* std66;
  __VERIFIER_nondet_memory(&std66, sizeof(std66));
  struct std__basic_ostream_char__std__char_traits_char__* std67;
  __VERIFIER_nondet_memory(&std67, sizeof(std67));
  int* cast68 = (int*)&(myints12);
  int* cast69 = (int*)&(myints12);
  int c70 = 7;
  int* ptr71 = &(cast69)[c70];
  struct myclass t72 = agg_tmp114;
  int* std73;
  __VERIFIER_nondet_memory(&std73, sizeof(std73));
  int t74 = *std73;
  int c75 = 9;
  _Bool c76 = ((t74 != c75)) ? 1 : 0;
  if (c76) {
  } else {
    char* cast77 = (char*)&(_str_2);
    char* c78 = (char*)_str_3;
    unsigned int c79 = 33;
    char* cast80 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast77, c78, c79, cast80);
  }
  char* cast81 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std82;
  __VERIFIER_nondet_memory(&std82, sizeof(std82));
  int* cast83 = (int*)&(myints12);
  int* cast84 = (int*)&(myints12);
  int c85 = 7;
  int* ptr86 = &(cast84)[c85];
  struct myclass t87 = agg_tmp215;
  int* std88;
  __VERIFIER_nondet_memory(&std88, sizeof(std88));
  int t89 = *std88;
  struct std__basic_ostream_char__std__char_traits_char__* std90;
  __VERIFIER_nondet_memory(&std90, sizeof(std90));
  struct std__basic_ostream_char__std__char_traits_char__* std91;
  __VERIFIER_nondet_memory(&std91, sizeof(std91));
  int c92 = 0;
  __retval11 = c92;
  int t93 = __retval11;
  return t93;
}

