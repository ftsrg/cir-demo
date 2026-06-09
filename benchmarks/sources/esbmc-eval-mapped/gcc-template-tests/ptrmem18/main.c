// Struct definitions (auto-parsed)
struct S { void* __field0; int c; unsigned char __field2[4]; } __attribute__((packed));
struct T { struct S s; };
struct anon_struct_0 { long __field0; long __field1; };
struct anon_struct_1 { unsigned char* __field0[4]; };
struct anon_struct_2 { unsigned char* __field0; unsigned char* __field1; };

extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern unsigned char _ZTI1S[];
char _str[2] = "0";
char _str_1[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/gcc-template-tests/ptrmem18/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS1S[3] = "1S";
void T__T(struct T* p0);
void void_test1__S__f1_(struct T* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void void_test1__S__f2_(struct T* p0);
void void_test2__S__f1_(struct T* p0);
void void_test2__S__f2_(struct T* p0);
int main();
void S__S(struct S* p0);
void S__f1(struct S* p0);
void S__f2(struct S* p0);

void *_ZTV1S[] = { (void*)0, (void*)0, (void*)&S__f1, (void*)&S__f2 };

// function: _ZN1TC2Ev
__attribute__((aligned(2))) void T__T(struct T* v0) {
bb1:
  struct T* this2;
  this2 = v0;
  struct T* t3 = this2;
  S__S(&t3->s);
  return;
}

// function: _Z5test1IXadL_ZN1S2f1EvEEEvP1T
__attribute__((aligned(2))) void void_test1__S__f1_(struct T* v4) {
bb5:
  struct T* t6;
  t6 = v4;
  struct T* t7 = t6;
  struct anon_struct_0 c8 = {1, 0};
  long c9 = 1;
  long v10 = c8.__field1;
  void* cast11 = (void*)&(t7->s);
  void* ptr12 = cast11 + v10;
  long v13 = c8.__field0;
  long b14 = v13 & c9;
  _Bool c15 = ((b14 == c9)) ? 1 : 0;
  void* ternary16;
  if (c15) {
    char** cast17 = (char**)ptr12;
    char* t18 = *cast17;
    long b19 = v13 - c9;
    char* ptr20 = &(t18)[b19];
    void** cast21 = (void**)ptr20;
    void* t22 = *cast21;
    ternary16 = (void*)t22;
  } else {
    void* cast23 = (void*)v13;
    ternary16 = (void*)cast23;
  }
  ((void (*)(void*))ternary16)(ptr12);
  return;
}

// function: _Z5test1IXadL_ZN1S2f2EvEEEvP1T
__attribute__((aligned(2))) void void_test1__S__f2_(struct T* v24) {
bb25:
  struct T* t26;
  t26 = v24;
  struct T* t27 = t26;
  struct anon_struct_0 c28 = {9, 0};
  long c29 = 1;
  long v30 = c28.__field1;
  void* cast31 = (void*)&(t27->s);
  void* ptr32 = cast31 + v30;
  long v33 = c28.__field0;
  long b34 = v33 & c29;
  _Bool c35 = ((b34 == c29)) ? 1 : 0;
  void* ternary36;
  if (c35) {
    char** cast37 = (char**)ptr32;
    char* t38 = *cast37;
    long b39 = v33 - c29;
    char* ptr40 = &(t38)[b39];
    void** cast41 = (void**)ptr40;
    void* t42 = *cast41;
    ternary36 = (void*)t42;
  } else {
    void* cast43 = (void*)v33;
    ternary36 = (void*)cast43;
  }
  ((void (*)(void*))ternary36)(ptr32);
  return;
}

// function: _Z5test2IXadL_ZN1S2f1EvEEEvP1T
__attribute__((aligned(2))) void void_test2__S__f1_(struct T* v44) {
bb45:
  struct T* t46;
  struct S* s47;
  t46 = v44;
  struct T* t48 = t46;
  s47 = &t48->s;
  struct S* t49 = s47;
  struct anon_struct_0 c50 = {1, 0};
  long c51 = 1;
  long v52 = c50.__field1;
  void* cast53 = (void*)t49;
  void* ptr54 = cast53 + v52;
  long v55 = c50.__field0;
  long b56 = v55 & c51;
  _Bool c57 = ((b56 == c51)) ? 1 : 0;
  void* ternary58;
  if (c57) {
    char** cast59 = (char**)ptr54;
    char* t60 = *cast59;
    long b61 = v55 - c51;
    char* ptr62 = &(t60)[b61];
    void** cast63 = (void**)ptr62;
    void* t64 = *cast63;
    ternary58 = (void*)t64;
  } else {
    void* cast65 = (void*)v55;
    ternary58 = (void*)cast65;
  }
  ((void (*)(void*))ternary58)(ptr54);
  return;
}

// function: _Z5test2IXadL_ZN1S2f2EvEEEvP1T
__attribute__((aligned(2))) void void_test2__S__f2_(struct T* v66) {
bb67:
  struct T* t68;
  struct S* s69;
  t68 = v66;
  struct T* t70 = t68;
  s69 = &t70->s;
  struct S* t71 = s69;
  struct anon_struct_0 c72 = {9, 0};
  long c73 = 1;
  long v74 = c72.__field1;
  void* cast75 = (void*)t71;
  void* ptr76 = cast75 + v74;
  long v77 = c72.__field0;
  long b78 = v77 & c73;
  _Bool c79 = ((b78 == c73)) ? 1 : 0;
  void* ternary80;
  if (c79) {
    char** cast81 = (char**)ptr76;
    char* t82 = *cast81;
    long b83 = v77 - c73;
    char* ptr84 = &(t82)[b83];
    void** cast85 = (void**)ptr84;
    void* t86 = *cast85;
    ternary80 = (void*)t86;
  } else {
    void* cast87 = (void*)v77;
    ternary80 = (void*)cast87;
  }
  ((void (*)(void*))ternary80)(ptr76);
  return;
}

// function: main
__attribute__((aligned(2))) int main() {
bb88:
  int __retval89;
  struct T t90;
  int c91 = 0;
  __retval89 = c91;
  T__T(&t90);
  void_test1__S__f1_(&t90);
    int t92 = t90.s.c;
    int c93 = 1;
    _Bool c94 = ((t92 != c93)) ? 1 : 0;
    if (c94) {
      char* cast95 = (char*)&(_str);
      char* c96 = _str_1;
      unsigned int c97 = 45;
      char* cast98 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast95, c96, c97, cast98);
    }
  void_test1__S__f2_(&t90);
    int t99 = t90.s.c;
    int c100 = 17;
    _Bool c101 = ((t99 != c100)) ? 1 : 0;
    if (c101) {
      char* cast102 = (char*)&(_str);
      char* c103 = _str_1;
      unsigned int c104 = 48;
      char* cast105 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast102, c103, c104, cast105);
    }
  void_test2__S__f1_(&t90);
    int t106 = t90.s.c;
    int c107 = 18;
    _Bool c108 = ((t106 != c107)) ? 1 : 0;
    if (c108) {
      char* cast109 = (char*)&(_str);
      char* c110 = _str_1;
      unsigned int c111 = 51;
      char* cast112 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast109, c110, c111, cast112);
    }
  void_test2__S__f2_(&t90);
    int t113 = t90.s.c;
    int c114 = 34;
    _Bool c115 = ((t113 != c114)) ? 1 : 0;
    if (c115) {
      char* cast116 = (char*)&(_str);
      char* c117 = _str_1;
      unsigned int c118 = 54;
      char* cast119 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast116, c117, c118, cast119);
    }
  int t120 = __retval89;
  return t120;
}

// function: _ZN1SC2Ev
__attribute__((aligned(2))) void S__S(struct S* v121) {
bb122:
  struct S* this123;
  this123 = v121;
  struct S* t124 = this123;
  void* v125 = (void*)&_ZTV1S[2];
  void** v126 = (void**)t124;
  *(void**)(v126) = (void*)v125;
  int c127 = 0;
  t124->c = c127;
  return;
}

// function: _ZN1S2f1Ev
__attribute__((aligned(2))) void S__f1(struct S* v128) {
bb129:
  struct S* this130;
  this130 = v128;
  struct S* t131 = this130;
  int c132 = 1;
  int t133 = t131->c;
  int b134 = t133 + c132;
  t131->c = b134;
  return;
}

// function: _ZN1S2f2Ev
__attribute__((aligned(2))) void S__f2(struct S* v135) {
bb136:
  struct S* this137;
  this137 = v135;
  struct S* t138 = this137;
  int c139 = 16;
  int t140 = t138->c;
  int b141 = t140 + c139;
  t138->c = b141;
  return;
}

