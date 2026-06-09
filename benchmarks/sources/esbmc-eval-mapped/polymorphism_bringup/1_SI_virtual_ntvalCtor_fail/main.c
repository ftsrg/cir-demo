// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) int __VERIFIER_virtual_call_int(void* __obj, int __slot) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((int(*)(void*))__fn)(__obj);
}

// Struct definitions (auto-parsed)
struct Bird { void* __field0; };
struct Penguin { struct Bird __field0; };
struct anon_struct_0 { unsigned char* __field0[3]; };
struct anon_struct_1 { unsigned char* __field0; unsigned char* __field1; };
struct anon_struct_2 { unsigned char* __field0; unsigned char* __field1; unsigned char* __field2; };

extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
extern unsigned char _ZTI4Bird[];
extern unsigned char _ZTI7Penguin[];
char _str[24] = "b->do_something() == 21";
char _str_1[136] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/polymorphism_bringup/1_SI_virtual_ntvalCtor_fail/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[24] = "p->do_something() == 21";
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS4Bird[6] = "4Bird";
extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
char _ZTS7Penguin[9] = "7Penguin";
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
void Bird__Bird(struct Bird* p0);
void operator_delete(void* p0, unsigned long p1) { free(p0); }
void Penguin__Penguin(struct Penguin* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();
int Bird__do_something(struct Bird* p0);
int Penguin__do_something(struct Penguin* p0);

void *_ZTV4Bird[] = { (void*)0, (void*)0, (void*)&Bird__do_something };
void *_ZTV7Penguin[] = { (void*)0, (void*)0, (void*)&Penguin__do_something };

// function: _ZN4BirdC2Ev
void Bird__Bird(struct Bird* v0) {
bb1:
  struct Bird* this2;
  this2 = v0;
  struct Bird* t3 = this2;
  void* v4 = (void*)&_ZTV4Bird[2];
  void** v5 = (void**)t3;
  *(void**)(v5) = (void*)v4;
  return;
}

// function: _ZN7PenguinC2Ev
void Penguin__Penguin(struct Penguin* v6) {
bb7:
  struct Penguin* this8;
  this8 = v6;
  struct Penguin* t9 = this8;
  struct Bird* base10 = (struct Bird*)((char *)t9 + 0);
  Bird__Bird(base10);
  void* v11 = (void*)&_ZTV7Penguin[2];
  void** v12 = (void**)t9;
  *(void**)(v12) = (void*)v11;
  return;
}

// function: main
int main() {
bb13:
  int __retval14;
  struct Bird* b15;
  struct Bird* __new_result16;
  struct Bird* p17;
  struct Penguin* __new_result18;
  int c19 = 0;
  __retval14 = c19;
  unsigned long c20 = 8;
  void* r21 = operator_new(c20);
    struct Bird* cast22 = (struct Bird*)r21;
    __new_result16 = cast22;
    struct Bird c23 = {0};
    *cast22 = c23;
    Bird__Bird(cast22);
  struct Bird* t24 = __new_result16;
  b15 = t24;
  unsigned long c25 = 8;
  void* r26 = operator_new(c25);
    struct Penguin* cast27 = (struct Penguin*)r26;
    __new_result18 = cast27;
    Penguin__Penguin(cast27);
  struct Penguin* t28 = __new_result18;
  struct Bird* base29 = (struct Bird*)((char *)t28 + 0);
  p17 = base29;
  struct Bird* t30 = b15;
  void** v31 = (void**)t30;
  void* v32 = *((void**)v31);
  int vcall35 = (int)__VERIFIER_virtual_call_int(t30, 0);
  int c36 = 21;
  _Bool c37 = ((vcall35 == c36)) ? 1 : 0;
  if (c37) {
  } else {
    char* cast38 = (char*)&(_str);
    char* c39 = _str_1;
    unsigned int c40 = 30;
    char* cast41 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast38, c39, c40, cast41);
  }
  struct Bird* t42 = p17;
  void** v43 = (void**)t42;
  void* v44 = *((void**)v43);
  int vcall47 = (int)__VERIFIER_virtual_call_int(t42, 0);
  int c48 = 21;
  _Bool c49 = ((vcall47 == c48)) ? 1 : 0;
  if (c49) {
  } else {
    char* cast50 = (char*)&(_str_2);
    char* c51 = _str_1;
    unsigned int c52 = 31;
    char* cast53 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast50, c51, c52, cast53);
  }
  struct Bird* t54 = b15;
  struct Bird* c55 = ((void*)0);
  _Bool c56 = ((t54 != c55)) ? 1 : 0;
  if (c56) {
    {
      void* cast57 = (void*)t54;
      unsigned long c58 = 8;
      operator_delete(cast57, c58);
    }
  }
  struct Bird* t59 = p17;
  struct Bird* c60 = ((void*)0);
  _Bool c61 = ((t59 != c60)) ? 1 : 0;
  if (c61) {
    {
      void* cast62 = (void*)t59;
      unsigned long c63 = 8;
      operator_delete(cast62, c63);
    }
  }
  int c64 = 0;
  __retval14 = c64;
  int t65 = __retval14;
  return t65;
}

// function: _ZN4Bird12do_somethingEv
int Bird__do_something(struct Bird* v66) {
bb67:
  struct Bird* this68;
  int __retval69;
  this68 = v66;
  struct Bird* t70 = this68;
  int c71 = 21;
  __retval69 = c71;
  int t72 = __retval69;
  return t72;
}

// function: _ZN7Penguin12do_somethingEv
int Penguin__do_something(struct Penguin* v73) {
bb74:
  struct Penguin* this75;
  int __retval76;
  this75 = v73;
  struct Penguin* t77 = this75;
  int c78 = 42;
  __retval76 = c78;
  int t79 = __retval76;
  return t79;
}

