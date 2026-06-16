// Struct definitions (auto-parsed)
struct Base { void* __field0; };
struct Derived { struct Base __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct anon_struct_0 { unsigned char* __field0[3]; };
struct anon_struct_1 { unsigned char* __field0; unsigned char* __field1; };
struct anon_struct_2 { unsigned char* __field0; unsigned char* __field1; unsigned char* __field2; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) int __VERIFIER_virtual_call_int(void* __obj, int __slot) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((int(*)(void*))__fn)(__obj);
}

extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern unsigned char _ZTI4Base[];
extern unsigned char _ZTI7Derived[];
char _str[8] = "r == 42";
char _str_1[114] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/llbmc_virtual_function/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
char _ZTS7Derived[9] = "7Derived";
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS4Base[6] = "4Base";
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
void Derived__Derived(struct Derived* p0);
void operator_delete(void* p0, unsigned long p1) { free(p0); }
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();
void Base__Base(struct Base* p0);
int Derived__f(struct Derived* p0);
int Base__f(struct Base* p0);

void *_ZTV7Derived[] = { (void*)0, (void*)0, (void*)&Derived__f };
void *_ZTV4Base[] = { (void*)0, (void*)0, (void*)&Base__f };

// function: _ZN7DerivedC2Ev
void Derived__Derived(struct Derived* v0) {
bb1: ;
  struct Derived* this2;
  this2 = v0;
  struct Derived* t3 = this2;
  struct Base* base4 = (struct Base*)((char *)t3 + 0);
  Base__Base(base4);
  void* v5 = (void*)&_ZTV7Derived[2];
  void** v6 = (void**)t3;
  *(void**)(v6) = (void*)v5;
  return;
}

// function: main
int main() {
bb7: ;
  int __retval8;
  struct Base* o9;
  struct Derived* __new_result10;
  int r11;
  int c12 = 0;
  __retval8 = c12;
  unsigned long c13 = 16;
  void* r14 = operator_new(c13);
    struct Derived* cast15 = (struct Derived*)r14;
    __new_result10 = cast15;
    struct Derived c16 = {0};
    *cast15 = c16;
    Derived__Derived(cast15);
  struct Derived* t17 = __new_result10;
  struct Base* base18 = (struct Base*)((char *)t17 + 0);
  o9 = base18;
  struct Base* t19 = o9;
  void** v20 = (void**)t19;
  void* v21 = *((void**)v20);
  int vcall24 = (int)__VERIFIER_virtual_call_int(t19, 0);
  r11 = vcall24;
  struct Base* t25 = o9;
  struct Base* c26 = ((void*)0);
  _Bool c27 = ((t25 != c26)) ? 1 : 0;
  if (c27) {
    {
      void* cast28 = (void*)t25;
      unsigned long c29 = 8;
      operator_delete(cast28, c29);
    }
  }
  int t30 = r11;
  int c31 = 42;
  _Bool c32 = ((t30 == c31)) ? 1 : 0;
  if (c32) {
  } else {
    char* cast33 = (char*)&(_str);
    char* c34 = (char*)_str_1;
    unsigned int c35 = 28;
    char* cast36 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast33, c34, c35, cast36);
  }
  int t37 = r11;
  __retval8 = t37;
  int t38 = __retval8;
  return t38;
}

// function: _ZN4BaseC2Ev
void Base__Base(struct Base* v39) {
bb40: ;
  struct Base* this41;
  this41 = v39;
  struct Base* t42 = this41;
  void* v43 = (void*)&_ZTV4Base[2];
  void** v44 = (void**)t42;
  *(void**)(v44) = (void*)v43;
  return;
}

// function: _ZN7Derived1fEv
int Derived__f(struct Derived* v45) {
bb46: ;
  struct Derived* this47;
  int __retval48;
  this47 = v45;
  struct Derived* t49 = this47;
  int c50 = 42;
  __retval48 = c50;
  int t51 = __retval48;
  return t51;
}

// function: _ZN4Base1fEv
int Base__f(struct Base* v52) {
bb53: ;
  struct Base* this54;
  int __retval55;
  this54 = v52;
  struct Base* t56 = this54;
  int c57 = 21;
  __retval55 = c57;
  int t58 = __retval55;
  return t58;
}

