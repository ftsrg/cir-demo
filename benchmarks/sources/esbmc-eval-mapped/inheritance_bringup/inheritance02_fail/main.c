// Struct definitions (auto-parsed)
struct anon_struct_0 { unsigned char* __field0[3]; };
struct anon_struct_1 { unsigned char* __field0; unsigned char* __field1; };
struct anon_struct_2 { unsigned char* __field0; unsigned char* __field1; unsigned int __field2; unsigned int __field3; unsigned char* __field4; long __field5; };
struct exforsys { int x; };
struct sample { void* __field0; int s1; struct exforsys __field2; } __attribute__((packed));

extern void *_ZTVN10__cxxabiv121__vmi_class_type_infoE[];
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern unsigned char _ZTI8exforsys[];
extern unsigned char _ZTI6sample[];
char _str[15] = "s.getX() == 50";
char _str_1[126] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/inheritance_bringup/inheritance02_fail/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[17] = "s.getS1() == 200";
char _str_3[15] = "s.getX() == 51";
extern void *_ZTVN10__cxxabiv121__vmi_class_type_infoE[];
char _ZTS6sample[8] = "6sample";
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS8exforsys[10] = "8exforsys";
void exforsys__exforsys(struct exforsys* p0);
void sample__sample(struct sample* p0);
void exforsys__f(struct exforsys* p0, int p1);
int exforsys__getX(struct exforsys* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void sample__f1(struct sample* p0, int p1);
int sample__getS1(struct sample* p0);
void exforsys__add_one(struct exforsys* p0);
void sample__add_one(struct sample* p0);
int main();

void *_ZTV6sample[] = { (void*)0, (void*)0, (void*)0 };
unsigned char* _ZTT6sample[1] __attribute__((aligned(8))) = {(unsigned char*)(&_ZTV6sample[3])};

// function: _ZN8exforsysC2Ev
void exforsys__exforsys(struct exforsys* v0) {
bb1:
  struct exforsys* this2;
  this2 = v0;
  struct exforsys* t3 = this2;
  int c4 = 0;
  t3->x = c4;
  return;
}

// function: _ZN6sampleC1Ev
void sample__sample(struct sample* v5) {
bb6:
  struct sample* this7;
  this7 = v5;
  struct sample* t8 = this7;
  struct exforsys* base9 = (struct exforsys*)((char *)t8 + 12);
  exforsys__exforsys(base9);
  void* v10 = (void*)&_ZTV6sample[3];
  void** v11 = (void**)t8;
  *(void**)(v11) = (void*)v10;
  int c12 = 0;
  t8->s1 = c12;
  return;
}

// function: _ZN8exforsys1fEi
void exforsys__f(struct exforsys* v13, int v14) {
bb15:
  struct exforsys* this16;
  int n117;
  this16 = v13;
  n117 = v14;
  struct exforsys* t18 = this16;
  int t19 = n117;
  int c20 = 5;
  int b21 = t19 * c20;
  t18->x = b21;
  return;
}

// function: _ZN8exforsys4getXEv
int exforsys__getX(struct exforsys* v22) {
bb23:
  struct exforsys* this24;
  int __retval25;
  this24 = v22;
  struct exforsys* t26 = this24;
  int t27 = t26->x;
  __retval25 = t27;
  int t28 = __retval25;
  return t28;
}

// function: _ZN6sample2f1Ei
void sample__f1(struct sample* v29, int v30) {
bb31:
  struct sample* this32;
  int n133;
  this32 = v29;
  n133 = v30;
  struct sample* t34 = this32;
  int t35 = n133;
  int c36 = 10;
  int b37 = t35 * c36;
  t34->s1 = b37;
  return;
}

// function: _ZN6sample5getS1Ev
int sample__getS1(struct sample* v38) {
bb39:
  struct sample* this40;
  int __retval41;
  this40 = v38;
  struct sample* t42 = this40;
  int t43 = t42->s1;
  __retval41 = t43;
  int t44 = __retval41;
  return t44;
}

// function: _ZN8exforsys7add_oneEv
void exforsys__add_one(struct exforsys* v45) {
bb46:
  struct exforsys* this47;
  this47 = v45;
  struct exforsys* t48 = this47;
  int t49 = t48->x;
  int u50 = t49 + 1;
  t48->x = u50;
  return;
}

// function: _ZN6sample7add_oneEv
void sample__add_one(struct sample* v51) {
bb52:
  struct sample* this53;
  this53 = v51;
  struct sample* t54 = this53;
  void** v55 = (void**)t54;
  void* v56 = *((void**)v55);
  unsigned char* cast57 = (unsigned char*)v56;
  long c58 = -24;
  unsigned char* ptr59 = &(cast57)[c58];
  long* cast60 = (long*)ptr59;
  long t61 = *cast60;
  unsigned char* cast62 = (unsigned char*)t54;
  unsigned char* ptr63 = &(cast62)[t61];
  struct sample* cast64 = (struct sample*)ptr63;
  struct exforsys* cast65 = (struct exforsys*)cast64;
  exforsys__add_one(cast65);
  int t66 = t54->s1;
  int u67 = t66 + 1;
  t54->s1 = u67;
  return;
}

// function: main
int main() {
bb68:
  int __retval69;
  struct sample s70;
  int c71 = 0;
  __retval69 = c71;
  sample__sample(&s70);
  void** v72 = (void**)&(s70);
  void* v73 = *((void**)v72);
  unsigned char* cast74 = (unsigned char*)v73;
  long c75 = -24;
  unsigned char* ptr76 = &(cast74)[c75];
  long* cast77 = (long*)ptr76;
  long t78 = *cast77;
  unsigned char* cast79 = (unsigned char*)&(s70);
  unsigned char* ptr80 = &(cast79)[t78];
  struct sample* cast81 = (struct sample*)ptr80;
  struct exforsys* cast82 = (struct exforsys*)cast81;
  int c83 = 10;
  exforsys__f(cast82, c83);
  void** v84 = (void**)&(s70);
  void* v85 = *((void**)v84);
  unsigned char* cast86 = (unsigned char*)v85;
  long c87 = -24;
  unsigned char* ptr88 = &(cast86)[c87];
  long* cast89 = (long*)ptr88;
  long t90 = *cast89;
  unsigned char* cast91 = (unsigned char*)&(s70);
  unsigned char* ptr92 = &(cast91)[t90];
  struct sample* cast93 = (struct sample*)ptr92;
  struct exforsys* cast94 = (struct exforsys*)cast93;
  int r95 = exforsys__getX(cast94);
  int c96 = 50;
  _Bool c97 = ((r95 == c96)) ? 1 : 0;
  if (c97) {
  } else {
    char* cast98 = (char*)&(_str);
    char* c99 = _str_1;
    unsigned int c100 = 53;
    char* cast101 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast98, c99, c100, cast101);
  }
  int c102 = 20;
  sample__f1(&s70, c102);
  int r103 = sample__getS1(&s70);
  int c104 = 200;
  _Bool c105 = ((r103 == c104)) ? 1 : 0;
  if (c105) {
  } else {
    char* cast106 = (char*)&(_str_2);
    char* c107 = _str_1;
    unsigned int c108 = 55;
    char* cast109 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast106, c107, c108, cast109);
  }
  sample__add_one(&s70);
  void** v110 = (void**)&(s70);
  void* v111 = *((void**)v110);
  unsigned char* cast112 = (unsigned char*)v111;
  long c113 = -24;
  unsigned char* ptr114 = &(cast112)[c113];
  long* cast115 = (long*)ptr114;
  long t116 = *cast115;
  unsigned char* cast117 = (unsigned char*)&(s70);
  unsigned char* ptr118 = &(cast117)[t116];
  struct sample* cast119 = (struct sample*)ptr118;
  struct exforsys* cast120 = (struct exforsys*)cast119;
  int r121 = exforsys__getX(cast120);
  int c122 = 51;
  _Bool c123 = ((r121 == c122)) ? 1 : 0;
  if (c123) {
  } else {
    char* cast124 = (char*)&(_str_3);
    char* c125 = _str_1;
    unsigned int c126 = 57;
    char* cast127 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast124, c125, c126, cast127);
  }
  int r128 = sample__getS1(&s70);
  int c129 = 200;
  _Bool c130 = ((r128 == c129)) ? 1 : 0;
  if (c130) {
  } else {
    char* cast131 = (char*)&(_str_2);
    char* c132 = _str_1;
    unsigned int c133 = 58;
    char* cast134 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast131, c132, c133, cast134);
  }
  int t135 = __retval69;
  return t135;
}

