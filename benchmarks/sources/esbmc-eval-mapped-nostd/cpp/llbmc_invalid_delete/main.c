// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) int __VERIFIER_virtual_call_int(void* __obj, int __slot) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((int(*)(void*))__fn)(__obj);
}

// Struct definitions (auto-parsed)
struct Base1 { void* __field0; };
struct Base2 { void* __field0; };
struct Derived { struct Base1 __field0; struct Base2 __field1; };
struct anon_struct_0 { unsigned char* __field0[4]; unsigned char* __field1[3]; };
struct anon_struct_1 { unsigned char* __field0; unsigned char* __field1; };
struct anon_struct_2 { unsigned char* __field0; unsigned char* __field1; unsigned int __field2; unsigned int __field3; unsigned char* __field4; long __field5; unsigned char* __field6; long __field7; };
struct anon_struct_3 { unsigned char* __field0[3]; };

extern void *_ZTVN10__cxxabiv121__vmi_class_type_infoE[];
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern unsigned char _ZTI5Base1[];
extern unsigned char _ZTI5Base2[];
extern unsigned char _ZTI7Derived[];
extern void *_ZTVN10__cxxabiv121__vmi_class_type_infoE[];
char _ZTS7Derived[9] = "7Derived";
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS5Base1[7] = "5Base1";
char _ZTS5Base2[7] = "5Base2";
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
void Derived__Derived(struct Derived* p0);
void operator_delete(void* p0, unsigned long p1) { free(p0); }
int main();
void Base1__Base1(struct Base1* p0);
void Base2__Base2(struct Base2* p0);
int Derived__f(struct Derived* p0);
int Derived__g(struct Derived* p0);
int non_virtual_thunk_to_Derived__g(struct Derived* p0);
int Base1__f(struct Base1* p0);
int Base2__g(struct Base2* p0);

void *_ZTV7Derived[] = { (void*)0, (void*)0, (void*)&Derived__f, (void*)&Derived__g, (void*)0, (void*)0, (void*)&non_virtual_thunk_to_Derived__g };
void *_ZTV5Base1[] = { (void*)0, (void*)0, (void*)&Base1__f };
void *_ZTV5Base2[] = { (void*)0, (void*)0, (void*)&Base2__g };

// function: _ZN7DerivedC2Ev
void Derived__Derived(struct Derived* v0) {
bb1:
  struct Derived* this2;
  this2 = v0;
  struct Derived* t3 = this2;
  struct Base1* base4 = (struct Base1*)((char *)t3 + 0);
  Base1__Base1(base4);
  struct Base2* base5 = (struct Base2*)((char *)t3 + 8);
  Base2__Base2(base5);
  void* v6 = (void*)&_ZTV7Derived[2];
  void** v7 = (void**)t3;
  *(void**)(v7) = (void*)v6;
  void* v8 = (void*)&_ZTV7Derived[6];
  struct Base2* base9 = (struct Base2*)((char *)t3 + 8);
  void** v10 = (void**)base9;
  *(void**)(v10) = (void*)v8;
  return;
}

// function: main
int main() {
bb11:
  int __retval12;
  struct Base2* o13;
  struct Derived* __new_result14;
  int r15;
  int c16 = 0;
  __retval12 = c16;
  unsigned long c17 = 16;
  void* r18 = operator_new(c17);
    struct Derived* cast19 = (struct Derived*)r18;
    __new_result14 = cast19;
    struct Derived c20 = {0};
    *cast19 = c20;
    Derived__Derived(cast19);
  struct Derived* t21 = __new_result14;
  struct Base2* base22 = ((t21) ? (struct Base2*)((char *)t21 + 8) : (struct Base2*)0);
  o13 = base22;
  struct Base2* t23 = o13;
  void** v24 = (void**)t23;
  void* v25 = *((void**)v24);
  int vcall28 = (int)__VERIFIER_virtual_call_int(t23, 0);
  r15 = vcall28;
  struct Base2* t29 = o13;
  struct Base2* c30 = ((void*)0);
  _Bool c31 = ((t29 != c30)) ? 1 : 0;
  if (c31) {
    {
      void* cast32 = (void*)t29;
      unsigned long c33 = 8;
      operator_delete(cast32, c33);
    }
  }
  int t34 = r15;
  __retval12 = t34;
  int t35 = __retval12;
  return t35;
}

// function: _ZN5Base1C2Ev
void Base1__Base1(struct Base1* v36) {
bb37:
  struct Base1* this38;
  this38 = v36;
  struct Base1* t39 = this38;
  void* v40 = (void*)&_ZTV5Base1[2];
  void** v41 = (void**)t39;
  *(void**)(v41) = (void*)v40;
  return;
}

// function: _ZN5Base2C2Ev
void Base2__Base2(struct Base2* v42) {
bb43:
  struct Base2* this44;
  this44 = v42;
  struct Base2* t45 = this44;
  void* v46 = (void*)&_ZTV5Base2[2];
  void** v47 = (void**)t45;
  *(void**)(v47) = (void*)v46;
  return;
}

// function: _ZN7Derived1fEv
int Derived__f(struct Derived* v48) {
bb49:
  struct Derived* this50;
  int __retval51;
  this50 = v48;
  struct Derived* t52 = this50;
  int c53 = 42;
  __retval51 = c53;
  int t54 = __retval51;
  return t54;
}

// function: _ZN7Derived1gEv
int Derived__g(struct Derived* v55) {
bb56:
  struct Derived* this57;
  int __retval58;
  this57 = v55;
  struct Derived* t59 = this57;
  int c60 = 42;
  __retval58 = c60;
  int t61 = __retval58;
  return t61;
}

// function: _ZThn8_N7Derived1gEv
int non_virtual_thunk_to_Derived__g(struct Derived* v62) {
bb63:
  struct Derived* this64;
  int __retval65;
  this64 = v62;
  struct Derived* t66 = this64;
  unsigned char* cast67 = (unsigned char*)t66;
  long c68 = -8;
  unsigned char* ptr69 = &(cast67)[c68];
  struct Derived* cast70 = (struct Derived*)ptr69;
  int r71 = Derived__g(cast70);
  __retval65 = r71;
  int t72 = __retval65;
  return t72;
}

// function: _ZN5Base11fEv
int Base1__f(struct Base1* v73) {
bb74:
  struct Base1* this75;
  int __retval76;
  this75 = v73;
  struct Base1* t77 = this75;
  int c78 = 21;
  __retval76 = c78;
  int t79 = __retval76;
  return t79;
}

// function: _ZN5Base21gEv
int Base2__g(struct Base2* v80) {
bb81:
  struct Base2* this82;
  int __retval83;
  this82 = v80;
  struct Base2* t84 = this82;
  int c85 = 21;
  __retval83 = c85;
  int t86 = __retval83;
  return t86;
}

