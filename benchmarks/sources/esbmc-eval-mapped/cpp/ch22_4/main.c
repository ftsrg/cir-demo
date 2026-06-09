extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct Base1 { int value; };
struct Base2 { char letter; };
struct Derived { struct Base1 __field0; struct Base2 __field1; double __field2; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[31] = "Object base1 contains integer ";
char _str_1[34] = "\nObject base2 contains character ";
char _str_2[27] = "\nObject derived contains:\n";
char _str_3[3] = "\n\n";
char _str_4[31] = "Data members of Derived can be";
char _str_5[24] = " accessed individually:";
char _str_6[15] = "\n    Integer: ";
char _str_7[15] = "\n  Character: ";
char _str_8[15] = "\nReal number: ";
char _str_9[30] = "Derived can be treated as an ";
char _str_10[30] = "object of either base class:\n";
char _str_11[28] = "base1Ptr->getData() yields ";
char _str_12[28] = "base2Ptr->getData() yields ";
void Base1__Base1(struct Base1* p0, int p1);
void Base2__Base2(struct Base2* p0, char p1);
extern void Derived__Derived(struct Derived* p0, int p1, char p2, double p3);
extern struct std__basic_ostream_char__std__char_traits_char__* operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, struct Derived* p1);
int Base1__getData___const(struct Base1* p0);
char Base2__getData___const(struct Base2* p0);
extern double Derived__getReal___const(struct Derived* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _ZN5Base1C2Ei
void Base1__Base1(struct Base1* v0, int v1) {
bb2:
  struct Base1* this3;
  int parameterValue4;
  this3 = v0;
  parameterValue4 = v1;
  struct Base1* t5 = this3;
  int t6 = parameterValue4;
  t5->value = t6;
  return;
}

// function: _ZN5Base2C2Ec
void Base2__Base2(struct Base2* v7, char v8) {
bb9:
  struct Base2* this10;
  char characterData11;
  this10 = v7;
  characterData11 = v8;
  struct Base2* t12 = this10;
  char t13 = characterData11;
  t12->letter = t13;
  return;
}

// function: _ZNK5Base17getDataEv
int Base1__getData___const(struct Base1* v14) {
bb15:
  struct Base1* this16;
  int __retval17;
  this16 = v14;
  struct Base1* t18 = this16;
  int t19 = t18->value;
  __retval17 = t19;
  int t20 = __retval17;
  return t20;
}

// function: _ZNK5Base27getDataEv
char Base2__getData___const(struct Base2* v21) {
bb22:
  struct Base2* this23;
  char __retval24;
  this23 = v21;
  struct Base2* t25 = this23;
  char t26 = t25->letter;
  __retval24 = t26;
  char t27 = __retval24;
  return t27;
}

// function: main
int main() {
bb28:
  int __retval29;
  struct Base1 base130;
  struct Base1* base1Ptr31;
  struct Base2 base232;
  struct Base2* base2Ptr33;
  struct Derived derived34;
  int c35 = 0;
  __retval29 = c35;
  int c36 = 10;
  Base1__Base1(&base130, c36);
  struct Base1* c37 = ((void*)0);
  base1Ptr31 = c37;
  char c38 = 90;
  Base2__Base2(&base232, c38);
  struct Base2* c39 = ((void*)0);
  base2Ptr33 = c39;
  int c40 = 7;
  char c41 = 65;
  double c42 = 0x1.cp1;
  Derived__Derived(&derived34, c40, c41, c42);
  char* cast43 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std44;
  __VERIFIER_nondet_memory(&std44, sizeof(std44));
  int r45 = Base1__getData___const(&base130);
  struct std__basic_ostream_char__std__char_traits_char__* std46;
  __VERIFIER_nondet_memory(&std46, sizeof(std46));
  char* cast47 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std48;
  __VERIFIER_nondet_memory(&std48, sizeof(std48));
  char r49 = Base2__getData___const(&base232);
  struct std__basic_ostream_char__std__char_traits_char__* std50;
  __VERIFIER_nondet_memory(&std50, sizeof(std50));
  char* cast51 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std52;
  __VERIFIER_nondet_memory(&std52, sizeof(std52));
  struct std__basic_ostream_char__std__char_traits_char__* r53 = operator__(std52, &derived34);
  char* cast54 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std55;
  __VERIFIER_nondet_memory(&std55, sizeof(std55));
  char* cast56 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std57;
  __VERIFIER_nondet_memory(&std57, sizeof(std57));
  char* cast58 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std59;
  __VERIFIER_nondet_memory(&std59, sizeof(std59));
  char* cast60 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std61;
  __VERIFIER_nondet_memory(&std61, sizeof(std61));
  struct Base1* base62 = (struct Base1*)((char *)&(derived34) + 0);
  int r63 = Base1__getData___const(base62);
  struct std__basic_ostream_char__std__char_traits_char__* std64;
  __VERIFIER_nondet_memory(&std64, sizeof(std64));
  char* cast65 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std66;
  __VERIFIER_nondet_memory(&std66, sizeof(std66));
  struct Base2* base67 = (struct Base2*)((char *)&(derived34) + 4);
  char r68 = Base2__getData___const(base67);
  struct std__basic_ostream_char__std__char_traits_char__* std69;
  __VERIFIER_nondet_memory(&std69, sizeof(std69));
  char* cast70 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* std71;
  __VERIFIER_nondet_memory(&std71, sizeof(std71));
  double r72 = Derived__getReal___const(&derived34);
  struct std__basic_ostream_char__std__char_traits_char__* std73;
  __VERIFIER_nondet_memory(&std73, sizeof(std73));
  char* cast74 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std75;
  __VERIFIER_nondet_memory(&std75, sizeof(std75));
  char* cast76 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* std77;
  __VERIFIER_nondet_memory(&std77, sizeof(std77));
  char* cast78 = (char*)&(_str_10);
  struct std__basic_ostream_char__std__char_traits_char__* std79;
  __VERIFIER_nondet_memory(&std79, sizeof(std79));
  struct Base1* base80 = (struct Base1*)((char *)&(derived34) + 0);
  base1Ptr31 = base80;
  char* cast81 = (char*)&(_str_11);
  struct std__basic_ostream_char__std__char_traits_char__* std82;
  __VERIFIER_nondet_memory(&std82, sizeof(std82));
  struct Base1* t83 = base1Ptr31;
  int r84 = Base1__getData___const(t83);
  struct std__basic_ostream_char__std__char_traits_char__* std85;
  __VERIFIER_nondet_memory(&std85, sizeof(std85));
  char c86 = 10;
  struct std__basic_ostream_char__std__char_traits_char__* std87;
  __VERIFIER_nondet_memory(&std87, sizeof(std87));
  struct Base2* base88 = ((&(derived34)) ? (struct Base2*)((char *)&(derived34) + 4) : (struct Base2*)0);
  base2Ptr33 = base88;
  char* cast89 = (char*)&(_str_12);
  struct std__basic_ostream_char__std__char_traits_char__* std90;
  __VERIFIER_nondet_memory(&std90, sizeof(std90));
  struct Base2* t91 = base2Ptr33;
  char r92 = Base2__getData___const(t91);
  struct std__basic_ostream_char__std__char_traits_char__* std93;
  __VERIFIER_nondet_memory(&std93, sizeof(std93));
  struct std__basic_ostream_char__std__char_traits_char__* std94;
  __VERIFIER_nondet_memory(&std94, sizeof(std94));
  int c95 = 0;
  __retval29 = c95;
  int t96 = __retval29;
  return t96;
}

