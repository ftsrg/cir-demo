// Struct definitions (auto-parsed)
struct A { void* __field0; };
struct B { struct A __field0; };
struct anon_struct_0 { unsigned char* __field0[4]; };
struct anon_struct_1 { unsigned char* __field0; unsigned char* __field1; };
struct anon_struct_2 { unsigned char* __field0; unsigned char* __field1; unsigned char* __field2; };

extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern unsigned char _ZTI1A[];
extern unsigned char _ZTI1B[];
char _str[12] = "vp != &bobj";
char _str_1[126] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/inheritance_bringup/dynamic_cast4_fail/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
char _ZTS1B[3] = "1B";
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS1A[3] = "1A";
void B__B(struct B* p0);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void B___B_2(struct B* p0);
int main();
void A__A(struct A* p0);
void B___B(struct B* p0);
void A___A_2(struct A* p0);
extern void *malloc(unsigned long);
extern void free(void*);
void operator_delete(void* p0, unsigned long p1) { free(p0); }
void A___A(struct A* p0);

void *_ZTV1B[] = { (void*)0, (void*)0, (void*)&B___B_2, (void*)&B___B };
void *_ZTV1A[] = { (void*)0, (void*)0, (void*)&A___A_2, (void*)&A___A };

// function: _ZN1BC2Ev
void B__B(struct B* v0) {
bb1: ;
  struct B* this2;
  this2 = v0;
  struct B* t3 = this2;
  struct A* base4 = (struct A*)((char *)t3 + 0);
  A__A(base4);
    void* v5 = (void*)&_ZTV1B[2];
    void** v6 = (void**)t3;
    *(void**)(v6) = (void*)v5;
  return;
}

// function: _ZN1BD2Ev
void B___B_2(struct B* v7) {
bb8: ;
  struct B* this9;
  this9 = v7;
  struct B* t10 = this9;
  {
    struct A* base11 = (struct A*)((char *)t10 + 0);
    A___A_2(base11);
  }
  return;
}

// function: main
int main() {
bb12: ;
  int __retval13;
  struct B bobj14;
  struct A* ap15;
  void* vp16;
  int c17 = 0;
  __retval13 = c17;
  B__B(&bobj14);
    struct A* base18 = (struct A*)((char *)&(bobj14) + 0);
    ap15 = base18;
    struct A* t19 = ap15;
    _Bool cast20 = (_Bool)t19;
    void* ternary21;
    if (cast20) {
      void** v22 = (void**)t19;
      void* v23 = *((void**)v22);
      long* cast24 = (long*)v23;
      long c25 = -2;
      long* ptr26 = &(cast24)[c25];
      long t27 = *ptr26;
      unsigned char* cast28 = (unsigned char*)t19;
      unsigned char* ptr29 = &(cast28)[t27];
      void* cast30 = (void*)ptr29;
      ternary21 = (void*)cast30;
    } else {
      void* c31 = ((void*)0);
      ternary21 = (void*)c31;
    }
    vp16 = ternary21;
    void* t32 = vp16;
    void* cast33 = (void*)&(bobj14);
    _Bool c34 = ((t32 != cast33)) ? 1 : 0;
    if (c34) {
    } else {
      char* cast35 = (char*)&(_str);
      char* c36 = (char*)_str_1;
      unsigned int c37 = 25;
      char* cast38 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast35, c36, c37, cast38);
    }
  {
    B___B_2(&bobj14);
  }
  int t39 = __retval13;
  return t39;
}

// function: _ZN1AC2Ev
void A__A(struct A* v40) {
bb41: ;
  struct A* this42;
  this42 = v40;
  struct A* t43 = this42;
  void* v44 = (void*)&_ZTV1A[2];
  void** v45 = (void**)t43;
  *(void**)(v45) = (void*)v44;
  return;
}

// function: _ZN1BD0Ev
void B___B(struct B* v46) {
bb47: ;
  struct B* this48;
  this48 = v46;
  struct B* t49 = this48;
    B___B_2(t49);
  {
    void* cast50 = (void*)t49;
    unsigned long c51 = 8;
    operator_delete(cast50, c51);
  }
  return;
}

// function: _ZN1AD2Ev
void A___A_2(struct A* v52) {
bb53: ;
  struct A* this54;
  this54 = v52;
  struct A* t55 = this54;
  return;
}

// function: _ZN1AD0Ev
void A___A(struct A* v56) {
bb57: ;
  struct A* this58;
  this58 = v56;
  struct A* t59 = this58;
    A___A_2(t59);
  {
    void* cast60 = (void*)t59;
    unsigned long c61 = 8;
    operator_delete(cast60, c61);
  }
  return;
}

