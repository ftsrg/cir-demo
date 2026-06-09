extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct Increment { int count; int increment; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[9] = "count = ";
char _str_1[15] = ", increment = ";
char _str_2[22] = "Before incrementing: ";
char _str_3[17] = "After increment ";
char _str_4[3] = ": ";
void Increment__Increment_2(struct Increment* p0, int p1, int p2);
void Increment__Increment(struct Increment* p0, int p1, int p2) { Increment__Increment_2(p0, p1, p2); }
void Increment__print___const(struct Increment* p0);
void Increment__addIncrement(struct Increment* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _ZN9IncrementC2Eii
void Increment__Increment_2(struct Increment* v0, int v1, int v2) {
bb3:
  struct Increment* this4;
  int c5;
  int i6;
  this4 = v0;
  c5 = v1;
  i6 = v2;
  struct Increment* t7 = this4;
  int t8 = i6;
  t7->increment = t8;
  int t9 = c5;
  t7->count = t9;
  return;
}

// function: _ZNK9Increment5printEv
void Increment__print___const(struct Increment* v10) {
bb11:
  struct Increment* this12;
  this12 = v10;
  struct Increment* t13 = this12;
  char* cast14 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std15;
  __VERIFIER_nondet_memory(&std15, sizeof(std15));
  int t16 = t13->count;
  struct std__basic_ostream_char__std__char_traits_char__* std17;
  __VERIFIER_nondet_memory(&std17, sizeof(std17));
  char* cast18 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
  int t20 = t13->increment;
  struct std__basic_ostream_char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  struct std__basic_ostream_char__std__char_traits_char__* std22;
  __VERIFIER_nondet_memory(&std22, sizeof(std22));
  return;
}

// function: _ZN9Increment12addIncrementEv
void Increment__addIncrement(struct Increment* v23) {
bb24:
  struct Increment* this25;
  this25 = v23;
  struct Increment* t26 = this25;
  int t27 = t26->increment;
  int t28 = t26->count;
  int b29 = t28 + t27;
  t26->count = b29;
  return;
}

// function: main
int main() {
bb30:
  int __retval31;
  struct Increment value32;
  int c33 = 0;
  __retval31 = c33;
  int c34 = 10;
  int c35 = 5;
  Increment__Increment(&value32, c34, c35);
  char* cast36 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std37;
  __VERIFIER_nondet_memory(&std37, sizeof(std37));
  Increment__print___const(&value32);
    int j38;
    int c39 = 0;
    j38 = c39;
    while (1) {
      int t41 = j38;
      int c42 = 3;
      _Bool c43 = ((t41 < c42)) ? 1 : 0;
      if (!c43) break;
        Increment__addIncrement(&value32);
        char* cast44 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std45;
        __VERIFIER_nondet_memory(&std45, sizeof(std45));
        int t46 = j38;
        int c47 = 1;
        int b48 = t46 + c47;
        struct std__basic_ostream_char__std__char_traits_char__* std49;
        __VERIFIER_nondet_memory(&std49, sizeof(std49));
        char* cast50 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* std51;
        __VERIFIER_nondet_memory(&std51, sizeof(std51));
        Increment__print___const(&value32);
    for_step40: ;
      int t52 = j38;
      int u53 = t52 + 1;
      j38 = u53;
    }
  int c54 = 0;
  __retval31 = c54;
  int t55 = __retval31;
  return t55;
}

