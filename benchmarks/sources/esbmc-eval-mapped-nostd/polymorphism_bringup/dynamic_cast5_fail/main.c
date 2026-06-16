// Struct definitions (auto-parsed)
struct A { void* __field0; };
struct B { struct A __field0; };
struct C { struct A __field0; };
struct anon_struct_0 { unsigned char* __field0; unsigned char* __field1; };
struct anon_struct_1 { unsigned char* __field0; unsigned char* __field1; unsigned char* __field2; };
struct anon_struct_2 { unsigned char* __field0[3]; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) void __VERIFIER_virtual_call_void(void* __obj, int __slot) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  ((void(*)(void*))__fn)(__obj);
}

extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
extern unsigned char _ZTI1A[];
extern unsigned char _ZTI1B[];
extern unsigned char _ZTI1C[];
int x __attribute__((aligned(4))) = 0;
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS1A[3] = "1A";
extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
char _ZTS1B[3] = "1B";
char _ZTS1C[3] = "1C";
char _str[5] = "x==1";
char _str_1[127] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/polymorphism_bringup/dynamic_cast5_fail/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern void* __dynamic_cast(void* p0, unsigned char* p1, unsigned char* p2, long p3);
void f(struct A* p0);
void A__A(struct A* p0);
void C__C(struct C* p0);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();
void A__f(struct A* p0);
void C__f(struct C* p0);

void *_ZTV1A[] = { (void*)0, (void*)0, (void*)&A__f };
void *_ZTV1C[] = { (void*)0, (void*)0, (void*)&C__f };

// function: _Z1fP1A
void f(struct A* v0) {
bb1: ;
  struct A* arg2;
  struct B* bp3;
  struct C* cp4;
  arg2 = v0;
  struct A* t5 = arg2;
  _Bool cast6 = (_Bool)t5;
  struct B* ternary7;
  if (cast6) {
    void* cast8 = (void*)t5;
    unsigned char* c9 = (unsigned char*)_ZTI1A;
    unsigned char* c10 = (unsigned char*)_ZTI1B;
    long c11 = 0;
    void* r12 = __dynamic_cast(cast8, c9, c10, c11);
    struct B* cast13 = (struct B*)r12;
    ternary7 = (struct B*)cast13;
  } else {
    struct B* c14 = ((void*)0);
    ternary7 = (struct B*)c14;
  }
  bp3 = ternary7;
  struct A* t15 = arg2;
  _Bool cast16 = (_Bool)t15;
  struct C* ternary17;
  if (cast16) {
    void* cast18 = (void*)t15;
    unsigned char* c19 = (unsigned char*)_ZTI1A;
    unsigned char* c20 = (unsigned char*)_ZTI1C;
    long c21 = 0;
    void* r22 = __dynamic_cast(cast18, c19, c20, c21);
    struct C* cast23 = (struct C*)r22;
    ternary17 = (struct C*)cast23;
  } else {
    struct C* c24 = ((void*)0);
    ternary17 = (struct C*)c24;
  }
  cp4 = ternary17;
    struct B* t25 = bp3;
    _Bool cast26 = (_Bool)t25;
    if (cast26) {
      struct B* t27 = bp3;
      void** v28 = (void**)t27;
      void* v29 = *((void**)v28);
      __VERIFIER_virtual_call_void(t27, 0);
    } else {
        struct C* t32 = cp4;
        _Bool cast33 = (_Bool)t32;
        if (cast33) {
          struct C* t34 = cp4;
          void** v35 = (void**)t34;
          void* v36 = *((void**)v35);
          __VERIFIER_virtual_call_void(t34, 0);
        } else {
          struct A* t39 = arg2;
          void** v40 = (void**)t39;
          void* v41 = *((void**)v40);
          __VERIFIER_virtual_call_void(t39, 0);
        }
    }
  return;
}

// function: _ZN1AC2Ev
void A__A(struct A* v44) {
bb45: ;
  struct A* this46;
  this46 = v44;
  struct A* t47 = this46;
  void* v48 = (void*)&_ZTV1A[2];
  void** v49 = (void**)t47;
  *(void**)(v49) = (void*)v48;
  return;
}

// function: _ZN1CC2Ev
void C__C(struct C* v50) {
bb51: ;
  struct C* this52;
  this52 = v50;
  struct C* t53 = this52;
  struct A* base54 = (struct A*)((char *)t53 + 0);
  A__A(base54);
  void* v55 = (void*)&_ZTV1C[2];
  void** v56 = (void**)t53;
  *(void**)(v56) = (void*)v55;
  return;
}

// function: main
int main() {
bb57: ;
  int __retval58;
  struct A aobj59;
  struct C cobj60;
  struct A* ap61;
  struct A* ap262;
  int c63 = 0;
  __retval58 = c63;
  A__A(&aobj59);
  C__C(&cobj60);
  struct A* base64 = (struct A*)((char *)&(cobj60) + 0);
  ap61 = base64;
  ap262 = &aobj59;
  struct A* t65 = ap61;
  f(t65);
  struct A* t66 = ap262;
  f(t66);
  int t67 = x;
  int c68 = 1;
  _Bool c69 = ((t67 == c68)) ? 1 : 0;
  if (c69) {
  } else {
    char* cast70 = (char*)&(_str);
    char* c71 = (char*)_str_1;
    unsigned int c72 = 46;
    char* cast73 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast70, c71, c72, cast73);
  }
  int t74 = __retval58;
  return t74;
}

// function: _ZN1A1fEv
void A__f(struct A* v75) {
bb76: ;
  struct A* this77;
  this77 = v75;
  struct A* t78 = this77;
  int c79 = 1;
  int t80 = x;
  int b81 = t80 + c79;
  *&x = b81;
  return;
}

// function: _ZN1C1fEv
void C__f(struct C* v82) {
bb83: ;
  struct C* this84;
  this84 = v82;
  struct C* t85 = this84;
  int c86 = 2;
  int t87 = x;
  int b88 = t87 + c86;
  *&x = b88;
  return;
}

