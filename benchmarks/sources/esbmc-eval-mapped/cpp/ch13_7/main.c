extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct Integer { int value; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__auto_ptr_Integer_ { struct Integer* _M_ptr; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[47] = "Creating an auto_ptr object that points to an ";
char _str_1[9] = "Integer\n";
char _str_2[47] = "\nUsing the auto_ptr to manipulate the Integer\n";
char _str_3[27] = "Integer after setInteger: ";
char _str_4[22] = "\n\nTerminating program";
char _str_5[25] = "Constructor for Integer ";
char _str_6[24] = "Destructor for Integer ";
char _str_7[93] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h";
char __PRETTY_FUNCTION____ZNKSt8auto_ptrI7IntegerEptEv[73] = "element_type *std::auto_ptr<Integer>::operator->() const [_Tp = Integer]";
char _str_8[12] = "_M_ptr != 0";
char __PRETTY_FUNCTION____ZNKSt8auto_ptrI7IntegerEdeEv[72] = "element_type &std::auto_ptr<Integer>::operator*() const [_Tp = Integer]";
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
void Integer__Integer(struct Integer* p0, int p1);
void operator_delete(void* p0, unsigned long p1) { free(p0); }
void Integer__setInteger(struct Integer* p0, int p1);
int Integer__getInteger___const(struct Integer* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _ZN7IntegerC2Ei
void Integer__Integer(struct Integer* v0, int v1) {
bb2:
  struct Integer* this3;
  int i4;
  this3 = v0;
  i4 = v1;
  struct Integer* t5 = this3;
  int t6 = i4;
  t5->value = t6;
  char* cast7 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std8;
  __VERIFIER_nondet_memory(&std8, sizeof(std8));
  int t9 = t5->value;
  struct std__basic_ostream_char__std__char_traits_char__* std10;
  __VERIFIER_nondet_memory(&std10, sizeof(std10));
  struct std__basic_ostream_char__std__char_traits_char__* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  return;
}

// function: _ZN7Integer10setIntegerEi
void Integer__setInteger(struct Integer* v12, int v13) {
bb14:
  struct Integer* this15;
  int i16;
  this15 = v12;
  i16 = v13;
  struct Integer* t17 = this15;
  int t18 = i16;
  t17->value = t18;
  return;
}

// function: _ZNK7Integer10getIntegerEv
int Integer__getInteger___const(struct Integer* v19) {
bb20:
  struct Integer* this21;
  int __retval22;
  this21 = v19;
  struct Integer* t23 = this21;
  int t24 = t23->value;
  __retval22 = t24;
  int t25 = __retval22;
  return t25;
}

// function: main
int main() {
bb26:
  int __retval27;
  struct std__auto_ptr_Integer_ ptrToInteger28;
  struct Integer* __new_result29;
  int c30 = 0;
  __retval27 = c30;
  char* cast31 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std32;
  __VERIFIER_nondet_memory(&std32, sizeof(std32));
  char* cast33 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std34;
  __VERIFIER_nondet_memory(&std34, sizeof(std34));
  unsigned long c35 = 4;
  void* r36 = operator_new(c35);
    struct Integer* cast37 = (struct Integer*)r36;
    __new_result29 = cast37;
    int c38 = 7;
    Integer__Integer(cast37, c38);
  struct Integer* t39 = __new_result29;
  // externalized std:: op: std::auto_ptr<Integer>::auto_ptr(Integer*)
  __VERIFIER_nondet_memory(&ptrToInteger28, sizeof(ptrToInteger28));
  __VERIFIER_nondet_memory(t39, sizeof(*t39));
    char* cast40 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
    struct Integer* std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    int c43 = 99;
    Integer__setInteger(std42, c43);
    char* cast44 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
    struct Integer* std46;
    __VERIFIER_nondet_memory(&std46, sizeof(std46));
    int r47 = Integer__getInteger___const(std46);
    struct std__basic_ostream_char__std__char_traits_char__* std48;
    __VERIFIER_nondet_memory(&std48, sizeof(std48));
    char* cast49 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std50;
    __VERIFIER_nondet_memory(&std50, sizeof(std50));
    struct std__basic_ostream_char__std__char_traits_char__* std51;
    __VERIFIER_nondet_memory(&std51, sizeof(std51));
    int c52 = 0;
    __retval27 = c52;
    int t53 = __retval27;
    int ret_val54 = t53;
    {
      // externalized std:: op: std::auto_ptr<Integer>::~auto_ptr()
      __VERIFIER_nondet_memory(&ptrToInteger28, sizeof(ptrToInteger28));
    }
    return ret_val54;
  int t55 = __retval27;
  return t55;
}

