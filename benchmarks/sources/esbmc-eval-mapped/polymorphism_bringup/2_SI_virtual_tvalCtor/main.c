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
char _str_1[130] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/polymorphism_bringup/2_SI_virtual_tvalCtor/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[24] = "p->do_something() == 42";
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
    struct Penguin c28 = {0};
    *cast27 = c28;
    Penguin__Penguin(cast27);
  struct Penguin* t29 = __new_result18;
  struct Bird* base30 = (struct Bird*)((char *)t29 + 0);
  p17 = base30;
  struct Bird* t31 = b15;
  void** v32 = (void**)t31;
  void* v33 = *((void**)v32);
  int vcall36 = (int)__VERIFIER_virtual_call_int(t31, 0);
  int c37 = 21;
  _Bool c38 = ((vcall36 == c37)) ? 1 : 0;
  if (c38) {
  } else {
    char* cast39 = (char*)&(_str);
    char* c40 = _str_1;
    unsigned int c41 = 29;
    char* cast42 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast39, c40, c41, cast42);
  }
  struct Bird* t43 = p17;
  void** v44 = (void**)t43;
  void* v45 = *((void**)v44);
  int vcall48 = (int)__VERIFIER_virtual_call_int(t43, 0);
  int c49 = 42;
  _Bool c50 = ((vcall48 == c49)) ? 1 : 0;
  if (c50) {
  } else {
    char* cast51 = (char*)&(_str_2);
    char* c52 = _str_1;
    unsigned int c53 = 30;
    char* cast54 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast51, c52, c53, cast54);
  }
  struct Bird* t55 = b15;
  struct Bird* c56 = ((void*)0);
  _Bool c57 = ((t55 != c56)) ? 1 : 0;
  if (c57) {
    {
      void* cast58 = (void*)t55;
      unsigned long c59 = 8;
      operator_delete(cast58, c59);
    }
  }
  struct Bird* t60 = p17;
  struct Bird* c61 = ((void*)0);
  _Bool c62 = ((t60 != c61)) ? 1 : 0;
  if (c62) {
    {
      void* cast63 = (void*)t60;
      unsigned long c64 = 8;
      operator_delete(cast63, c64);
    }
  }
  int c65 = 0;
  __retval14 = c65;
  int t66 = __retval14;
  return t66;
}

// function: _ZN4Bird12do_somethingEv
int Bird__do_something(struct Bird* v67) {
bb68:
  struct Bird* this69;
  int __retval70;
  this69 = v67;
  struct Bird* t71 = this69;
  int c72 = 21;
  __retval70 = c72;
  int t73 = __retval70;
  return t73;
}

// function: _ZN7Penguin12do_somethingEv
int Penguin__do_something(struct Penguin* v74) {
bb75:
  struct Penguin* this76;
  int __retval77;
  this76 = v74;
  struct Penguin* t78 = this76;
  int c79 = 42;
  __retval77 = c79;
  int t80 = __retval77;
  return t80;
}

