// Struct definitions (auto-parsed)
struct A_int_ { void* __field0; };
struct B { struct A_int_ __field0; };
struct anon_struct_0 { unsigned char* __field0[3]; };
struct anon_struct_1 { unsigned char* __field0; unsigned char* __field1; };
struct anon_struct_2 { unsigned char* __field0; unsigned char* __field1; unsigned char* __field2; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) void __VERIFIER_virtual_call_void(void* __obj, int __slot) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  ((void(*)(void*))__fn)(__obj);
}

extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern unsigned char _ZTI1AIiE[];
extern unsigned char _ZTI1B[];
int r __attribute__((aligned(4))) = 0;
char _str[10] = "0 == ( r)";
char _str_1[114] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/gcc-template-tests/vtable1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
char _ZTS1B[3] = "1B";
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS1AIiE[6] = "1AIiE";
void B__B(struct B* p0);
void B___B(struct B* p0);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();
void A_int___A(struct A_int_* p0);
void A_int____A(struct A_int_* p0);
void B__f(struct B* p0);
void A_int___f(struct A_int_* p0);

void *_ZTV1B[] = { (void*)0, (void*)0, (void*)&B__f };
void *_ZTV1AIiE[] = { (void*)0, (void*)0, (void*)&A_int___f };

// function: _ZN1BC2Ev
void B__B(struct B* v0) {
bb1: ;
  struct B* this2;
  this2 = v0;
  struct B* t3 = this2;
  struct A_int_* base4 = (struct A_int_*)((char *)t3 + 0);
  A_int___A(base4);
    void* v5 = (void*)&_ZTV1B[2];
    void** v6 = (void**)t3;
    *(void**)(v6) = (void*)v5;
  return;
}

// function: _ZN1BD2Ev
void B___B(struct B* v7) {
bb8: ;
  struct B* this9;
  this9 = v7;
  struct B* t10 = this9;
  {
    struct A_int_* base11 = (struct A_int_*)((char *)t10 + 0);
    A_int____A(base11);
  }
  return;
}

// function: main
int main() {
bb12: ;
  int __retval13;
  int c14 = 0;
  __retval13 = c14;
    struct B b15;
    B__B(&b15);
    {
      B___B(&b15);
    }
  int c16 = 0;
  int t17 = r;
  _Bool c18 = ((c16 == t17)) ? 1 : 0;
  if (c18) {
  } else {
    char* cast19 = (char*)&(_str);
    char* c20 = (char*)_str_1;
    unsigned int c21 = 30;
    char* cast22 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast19, c20, c21, cast22);
  }
  int t23 = __retval13;
  return t23;
}

// function: _ZN1AIiEC2Ev
void A_int___A(struct A_int_* v24) {
bb25: ;
  struct A_int_* this26;
  this26 = v24;
  struct A_int_* t27 = this26;
  void* v28 = (void*)&_ZTV1AIiE[2];
  void** v29 = (void**)t27;
  *(void**)(v29) = (void*)v28;
  void** v30 = (void**)t27;
  void* v31 = *((void**)v30);
  __VERIFIER_virtual_call_void(t27, 0);
  return;
}

// function: _ZN1AIiED2Ev
void A_int____A(struct A_int_* v34) {
bb35: ;
  struct A_int_* this36;
  this36 = v34;
  struct A_int_* t37 = this36;
  void** v38 = (void**)t37;
  void* v39 = *((void**)v38);
  __VERIFIER_virtual_call_void(t37, 0);
  return;
}

// function: _ZN1B1fEv
void B__f(struct B* v42) {
bb43: ;
  struct B* this44;
  this44 = v42;
  struct B* t45 = this44;
  int t46 = r;
  int u47 = t46 + 1;
  *&r = u47;
  return;
}

// function: _ZN1AIiE1fEv
void A_int___f(struct A_int_* v48) {
bb49: ;
  struct A_int_* this50;
  this50 = v48;
  struct A_int_* t51 = this50;
  return;
}

