// Struct definitions (auto-parsed)
struct A { int m_x; };
struct B { void* __field0; struct A __field1; };
struct C { void* __field0; struct A __field1; };
struct D { struct B __field0; struct C __field1; struct A __field2; };
struct anon_struct_0 { unsigned char* __field0[3]; unsigned char* __field1[3]; };
struct anon_struct_1 { unsigned char* __field0[3]; };
struct anon_struct_2 { unsigned char* __field0; unsigned char* __field1; };
struct anon_struct_3 { unsigned char* __field0; unsigned char* __field1; unsigned int __field2; unsigned int __field3; unsigned char* __field4; long __field5; };
struct anon_struct_4 { unsigned char* __field0; unsigned char* __field1; unsigned int __field2; unsigned int __field3; unsigned char* __field4; long __field5; unsigned char* __field6; long __field7; };

extern void *_ZTVN10__cxxabiv121__vmi_class_type_infoE[];
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern unsigned char _ZTI1A[];
extern unsigned char _ZTI1B[];
extern unsigned char _ZTI1C[];
extern unsigned char _ZTI1D[];
char _str[16] = "a->getX() == 42";
char _str_1[134] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/polymorphism_bringup/llbmc_virtual_inheritance/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern void *_ZTVN10__cxxabiv121__vmi_class_type_infoE[];
char _ZTS1B[3] = "1B";
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS1A[3] = "1A";
char _ZTS1C[3] = "1C";
char _ZTS1D[3] = "1D";
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
void A__A(struct A* p0, int p1);
void B__B(struct B* p0, void** p1, int p2);
void C__C(struct C* p0, void** p1, int p2);
void D__D(struct D* p0, int p1);
void operator_delete(void* p0, unsigned long p1) { free(p0); }
int A__getX(struct A* p0);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

void *_ZTV1D[] = { (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0 };
void *_ZTC1D0_1B[] = { (void*)0, (void*)0, (void*)0 };
void *_ZTC1D8_1C[] = { (void*)0, (void*)0, (void*)0 };
unsigned char* _ZTT1D[4] __attribute__((aligned(8))) = {(unsigned char*)(&_ZTV1D[3]), (unsigned char*)(&_ZTC1D0_1B[3]), (unsigned char*)(&_ZTC1D8_1C[3]), (unsigned char*)(&_ZTV1D[6])};

// function: _ZN1AC2Ei
void A__A(struct A* v0, int v1) {
bb2: ;
  struct A* this3;
  int x4;
  this3 = v0;
  x4 = v1;
  struct A* t5 = this3;
  int t6 = x4;
  t5->m_x = t6;
  return;
}

// function: _ZN1BC2Ei
void B__B(struct B* v7, void** v8, int v9) {
bb10: ;
  struct B* this11;
  void** vtt12;
  int x13;
  this11 = v7;
  vtt12 = v8;
  x13 = v9;
  struct B* t14 = this11;
  void** t15 = vtt12;
  static void *vtt_slot16 = 0;
  void** vtt17 = (void**)&vtt_slot16;
  void** cast18 = (void**)vtt17;
  void* t19 = *cast18;
  void** v20 = (void**)t14;
  *(void**)(v20) = (void*)t19;
  return;
}

// function: _ZN1CC2Ei
void C__C(struct C* v21, void** v22, int v23) {
bb24: ;
  struct C* this25;
  void** vtt26;
  int x27;
  this25 = v21;
  vtt26 = v22;
  x27 = v23;
  struct C* t28 = this25;
  void** t29 = vtt26;
  static void *vtt_slot30 = 0;
  void** vtt31 = (void**)&vtt_slot30;
  void** cast32 = (void**)vtt31;
  void* t33 = *cast32;
  void** v34 = (void**)t28;
  *(void**)(v34) = (void*)t33;
  return;
}

// function: _ZN1DC1Ei
void D__D(struct D* v35, int v36) {
bb37: ;
  struct D* this38;
  int x39;
  this38 = v35;
  x39 = v36;
  struct D* t40 = this38;
  struct A* base41 = (struct A*)((char *)t40 + 16);
  int t42 = x39;
  A__A(base41, t42);
  struct B* base43 = (struct B*)((char *)t40 + 0);
  int t44 = x39;
  static void *vtt_slot45 = 0;
  void** vtt46 = (void**)&vtt_slot45;
  B__B(base43, vtt46, t44);
  struct C* base47 = (struct C*)((char *)t40 + 8);
  int t48 = x39;
  static void *vtt_slot49 = 0;
  void** vtt50 = (void**)&vtt_slot49;
  C__C(base47, vtt50, t48);
  void* v51 = (void*)&_ZTV1D[3];
  void** v52 = (void**)t40;
  *(void**)(v52) = (void*)v51;
  void* v53 = (void*)&_ZTV1D[6];
  struct C* base54 = (struct C*)((char *)t40 + 8);
  void** v55 = (void**)base54;
  *(void**)(v55) = (void*)v53;
  return;
}

// function: _ZN1A4getXEv
int A__getX(struct A* v56) {
bb57: ;
  struct A* this58;
  int __retval59;
  this58 = v56;
  struct A* t60 = this58;
  int t61 = t60->m_x;
  __retval59 = t61;
  int t62 = __retval59;
  return t62;
}

// function: main
int main() {
bb63: ;
  int __retval64;
  struct A* a65;
  struct D* __new_result66;
  int c67 = 0;
  __retval64 = c67;
  unsigned long c68 = 24;
  void* r69 = operator_new(c68);
    struct D* cast70 = (struct D*)r69;
    __new_result66 = cast70;
    int c71 = 42;
    D__D(cast70, c71);
  struct D* t72 = __new_result66;
  void** v73 = (void**)t72;
  void* v74 = *((void**)v73);
  unsigned char* cast75 = (unsigned char*)v74;
  long c76 = -24;
  unsigned char* ptr77 = &(cast75)[c76];
  long* cast78 = (long*)ptr77;
  long t79 = *cast78;
  unsigned char* cast80 = (unsigned char*)t72;
  unsigned char* ptr81 = &(cast80)[t79];
  struct D* cast82 = (struct D*)ptr81;
  struct A* cast83 = (struct A*)cast82;
  a65 = cast83;
  struct A* t84 = a65;
  int r85 = A__getX(t84);
  int c86 = 42;
  _Bool c87 = ((r85 == c86)) ? 1 : 0;
  if (c87) {
  } else {
    char* cast88 = (char*)&(_str);
    char* c89 = (char*)_str_1;
    unsigned int c90 = 48;
    char* cast91 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast88, c89, c90, cast91);
  }
  int c92 = 0;
  __retval64 = c92;
  int t93 = __retval64;
  return t93;
}

