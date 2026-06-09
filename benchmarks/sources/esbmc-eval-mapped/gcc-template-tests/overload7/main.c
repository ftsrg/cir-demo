// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) int __VERIFIER_virtual_call_int(void* __obj, int __slot) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((int(*)(void*))__fn)(__obj);
}

// Struct definitions (auto-parsed)
struct A { void* __field0; };
struct B { struct A __field0; };
struct anon_struct_0 { unsigned char* __field0[3]; };
struct anon_struct_1 { unsigned char* __field0; unsigned char* __field1; };
struct anon_struct_2 { unsigned char* __field0; unsigned char* __field1; unsigned char* __field2; };

extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern unsigned char _ZTI1A[];
extern unsigned char _ZTI1B[];
char _str[20] = "0 == ( Bar (new B))";
char _str_1[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/gcc-template-tests/overload7/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
char _ZTS1B[3] = "1B";
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS1A[3] = "1A";
int int_Bar_B_(struct B* p0);
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
void B__B(struct B* p0);
void operator_delete(void* p0, unsigned long p1) { free(p0); }
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();
void A__A(struct A* p0);
int B__Foo(struct B* p0);
int A__Foo(struct A* p0);

void *_ZTV1B[] = { (void*)0, (void*)0, (void*)&B__Foo };
void *_ZTV1A[] = { (void*)0, (void*)0, (void*)&A__Foo };

// function: _Z3BarI1BEiPT_
int int_Bar_B_(struct B* v0) {
bb1:
  struct B* a2;
  int __retval3;
  a2 = v0;
    struct B* t4 = a2;
    struct A* base5 = (struct A*)((char *)t4 + 0);
    int r6 = A__Foo(base5);
    int c7 = 1;
    _Bool c8 = ((r6 != c7)) ? 1 : 0;
    if (c8) {
      int c9 = 1;
      __retval3 = c9;
      int t10 = __retval3;
      return t10;
    }
    struct B* t11 = a2;
    struct A* base12 = (struct A*)((char *)t11 + 0);
    void** v13 = (void**)base12;
    void* v14 = *((void**)v13);
    int vcall17 = (int)__VERIFIER_virtual_call_int(base12, 0);
    int c18 = 2;
    _Bool c19 = ((vcall17 != c18)) ? 1 : 0;
    if (c19) {
      int c20 = 2;
      __retval3 = c20;
      int t21 = __retval3;
      return t21;
    }
  int c22 = 0;
  __retval3 = c22;
  int t23 = __retval3;
  return t23;
}

// function: _ZN1BC2Ev
void B__B(struct B* v24) {
bb25:
  struct B* this26;
  this26 = v24;
  struct B* t27 = this26;
  struct A* base28 = (struct A*)((char *)t27 + 0);
  A__A(base28);
  void* v29 = (void*)&_ZTV1B[2];
  void** v30 = (void**)t27;
  *(void**)(v30) = (void*)v29;
  return;
}

// function: main
int main() {
bb31:
  int __retval32;
  struct B* __new_result33;
  int c34 = 0;
  __retval32 = c34;
  int c35 = 0;
  unsigned long c36 = 8;
  void* r37 = operator_new(c36);
    struct B* cast38 = (struct B*)r37;
    __new_result33 = cast38;
    B__B(cast38);
  struct B* t39 = __new_result33;
  int r40 = int_Bar_B_(t39);
  _Bool c41 = ((c35 == r40)) ? 1 : 0;
  if (c41) {
  } else {
    char* cast42 = (char*)&(_str);
    char* c43 = _str_1;
    unsigned int c44 = 38;
    char* cast45 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast42, c43, c44, cast45);
  }
  int t46 = __retval32;
  return t46;
}

// function: _ZN1AC2Ev
void A__A(struct A* v47) {
bb48:
  struct A* this49;
  this49 = v47;
  struct A* t50 = this49;
  void* v51 = (void*)&_ZTV1A[2];
  void** v52 = (void**)t50;
  *(void**)(v52) = (void*)v51;
  return;
}

// function: _ZN1B3FooEv
int B__Foo(struct B* v53) {
bb54:
  struct B* this55;
  int __retval56;
  this55 = v53;
  struct B* t57 = this55;
  int c58 = 2;
  __retval56 = c58;
  int t59 = __retval56;
  return t59;
}

// function: _ZN1A3FooEv
int A__Foo(struct A* v60) {
bb61:
  struct A* this62;
  int __retval63;
  this62 = v60;
  struct A* t64 = this62;
  int c65 = 1;
  __retval63 = c65;
  int t66 = __retval63;
  return t66;
}

