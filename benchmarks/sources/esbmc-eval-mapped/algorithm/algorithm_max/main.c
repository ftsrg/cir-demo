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
char _str[11] = "max(1,2)==";
char _str_1[11] = "max(2,1)==";
char _str_2[17] = "max(3.14,2.73)==";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int ref_tmp02;
  int ref_tmp13;
  int ref_tmp24;
  int ref_tmp35;
  double ref_tmp46;
  double ref_tmp57;
  int c8 = 0;
  __retval1 = c8;
  char* cast9 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std10;
  __VERIFIER_nondet_memory(&std10, sizeof(std10));
  int c11 = 1;
  ref_tmp02 = c11;
  int c12 = 2;
  ref_tmp13 = c12;
  int* std13;
  __VERIFIER_nondet_memory(&std13, sizeof(std13));
  int t14 = *std13;
  struct std__basic_ostream_char__std__char_traits_char__* std15;
  __VERIFIER_nondet_memory(&std15, sizeof(std15));
  struct std__basic_ostream_char__std__char_traits_char__* std16;
  __VERIFIER_nondet_memory(&std16, sizeof(std16));
  char* cast17 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std18;
  __VERIFIER_nondet_memory(&std18, sizeof(std18));
  int c19 = 2;
  ref_tmp24 = c19;
  int c20 = 1;
  ref_tmp35 = c20;
  int* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  int t22 = *std21;
  struct std__basic_ostream_char__std__char_traits_char__* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  struct std__basic_ostream_char__std__char_traits_char__* std24;
  __VERIFIER_nondet_memory(&std24, sizeof(std24));
  char* cast25 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std26;
  __VERIFIER_nondet_memory(&std26, sizeof(std26));
  double c27 = 0x1.91eb851eb851fp1;
  ref_tmp46 = c27;
  double c28 = 0x1.5d70a3d70a3d7p1;
  ref_tmp57 = c28;
  double* std29;
  __VERIFIER_nondet_memory(&std29, sizeof(std29));
  double t30 = *std29;
  struct std__basic_ostream_char__std__char_traits_char__* std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
  struct std__basic_ostream_char__std__char_traits_char__* std32;
  __VERIFIER_nondet_memory(&std32, sizeof(std32));
  int c33 = 0;
  __retval1 = c33;
  int t34 = __retval1;
  return t34;
}

