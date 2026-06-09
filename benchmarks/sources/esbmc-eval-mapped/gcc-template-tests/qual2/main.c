// Struct definitions (auto-parsed)
struct B { void* __field0; };
struct TPL_int_ { struct B __field0; };
struct anon_struct_0 { unsigned char* __field0[3]; };
struct anon_struct_1 { unsigned char* __field0; unsigned char* __field1; };
struct anon_struct_2 { unsigned char* __field0; unsigned char* __field1; unsigned char* __field2; };

extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern unsigned char _ZTI1B[];
extern unsigned char _ZTI3TPLIiE[];
int here __attribute__((aligned(4))) = 0;
int there __attribute__((aligned(4))) = 0;
char _str[23] = "0 == ( !i.activate ())";
char _str_1[112] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/gcc-template-tests/qual2/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
char _ZTS3TPLIiE[8] = "3TPLIiE";
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS1B[3] = "1B";
void TPL_int___TPL(struct TPL_int_* p0);
int TPL_int___activate(struct TPL_int_* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();
void B__B(struct B* p0);
int B__activate(struct B* p0);

void *_ZTV3TPLIiE[] = { (void*)0, (void*)0, (void*)&TPL_int___activate };
void *_ZTV1B[] = { (void*)0, (void*)0, (void*)&B__activate };

// function: _ZN3TPLIiEC2Ev
void TPL_int___TPL(struct TPL_int_* v0) {
bb1:
  struct TPL_int_* this2;
  this2 = v0;
  struct TPL_int_* t3 = this2;
  struct B* base4 = (struct B*)((char *)t3 + 0);
  B__B(base4);
  void* v5 = (void*)&_ZTV3TPLIiE[2];
  void** v6 = (void**)t3;
  *(void**)(v6) = (void*)v5;
  return;
}

// function: _ZN3TPLIiE8activateEv
int TPL_int___activate(struct TPL_int_* v7) {
bb8:
  struct TPL_int_* this9;
  int __retval10;
  this9 = v7;
  struct TPL_int_* t11 = this9;
  int t12 = there;
  int u13 = t12 + 1;
  *&there = u13;
  _Bool cast14 = (_Bool)t12;
  _Bool u15 = !cast14;
  _Bool ternary16;
  if (u15) {
    struct B* base17 = (struct B*)((char *)t11 + 0);
    int r18 = B__activate(base17);
    _Bool cast19 = (_Bool)r18;
    ternary16 = (_Bool)cast19;
  } else {
    _Bool c20 = 0;
    ternary16 = (_Bool)c20;
  }
  int cast21 = (int)ternary16;
  __retval10 = cast21;
  int t22 = __retval10;
  return t22;
}

// function: main
int main() {
bb23:
  int __retval24;
  struct TPL_int_ i25;
  int c26 = 0;
  __retval24 = c26;
  TPL_int___TPL(&i25);
  int c27 = 0;
  int r28 = TPL_int___activate(&i25);
  _Bool cast29 = (_Bool)r28;
  _Bool u30 = !cast29;
  int cast31 = (int)u30;
  _Bool c32 = ((c27 == cast31)) ? 1 : 0;
  if (c32) {
  } else {
    char* cast33 = (char*)&(_str);
    char* c34 = _str_1;
    unsigned int c35 = 36;
    char* cast36 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast33, c34, c35, cast36);
  }
  int t37 = __retval24;
  return t37;
}

// function: _ZN1BC2Ev
void B__B(struct B* v38) {
bb39:
  struct B* this40;
  this40 = v38;
  struct B* t41 = this40;
  void* v42 = (void*)&_ZTV1B[2];
  void** v43 = (void**)t41;
  *(void**)(v43) = (void*)v42;
  return;
}

// function: _ZN1B8activateEv
int B__activate(struct B* v44) {
bb45:
  struct B* this46;
  int __retval47;
  this46 = v44;
  struct B* t48 = this46;
  int t49 = here;
  int u50 = t49 + 1;
  *&here = u50;
  _Bool cast51 = (_Bool)t49;
  _Bool u52 = !cast51;
  int cast53 = (int)u52;
  __retval47 = cast53;
  int t54 = __retval47;
  return t54;
}

