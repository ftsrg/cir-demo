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
char _str[37] = "The number of bytes in the array is ";
char _str_1[45] = "\nThe number of bytes returned by getSize is ";
unsigned long getSize(double* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z7getSizePd
unsigned long getSize(double* v0) {
bb1:
  double* ptr2;
  unsigned long __retval3;
  ptr2 = v0;
  unsigned long c4 = 8;
  __retval3 = c4;
  unsigned long t5 = __retval3;
  return t5;
}

// function: main
int main() {
bb6:
  int __retval7;
  double array8[20];
  int c9 = 0;
  __retval7 = c9;
  char* cast10 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  unsigned long c12 = 160;
  struct std__basic_ostream_char__std__char_traits_char__* std13;
  __VERIFIER_nondet_memory(&std13, sizeof(std13));
  char* cast14 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std15;
  __VERIFIER_nondet_memory(&std15, sizeof(std15));
  double* cast16 = (double*)&(array8);
  unsigned long r17 = getSize(cast16);
  struct std__basic_ostream_char__std__char_traits_char__* std18;
  __VERIFIER_nondet_memory(&std18, sizeof(std18));
  struct std__basic_ostream_char__std__char_traits_char__* std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
  int c20 = 0;
  __retval7 = c20;
  int t21 = __retval7;
  return t21;
}

