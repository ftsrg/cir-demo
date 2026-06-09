// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) int __VERIFIER_virtual_call_int(void* __obj, int __slot) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((int(*)(void*))__fn)(__obj);
}

// Struct definitions (auto-parsed)
struct File { void* __field0; };
struct InputFile { struct File __field0; };
struct anon_struct_0 { unsigned char* __field0[3]; };
struct anon_struct_1 { unsigned char* __field0; unsigned char* __field1; };
struct anon_struct_2 { unsigned char* __field0; unsigned char* __field1; unsigned char* __field2; };
struct IOFile { struct InputFile __field0; };

extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern unsigned char _ZTI4File[];
extern unsigned char _ZTI9InputFile[];
extern unsigned char _ZTI6IOFile[];
char _str[23] = "iofile->File::f() == 1";
char _str_1[147] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/polymorphism_bringup/11_MI_Mlvl_ndiamond_scol_tpLvlPtr_fail/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "iofile->f() == 10";
extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
char _ZTS6IOFile[8] = "6IOFile";
char _ZTS9InputFile[11] = "9InputFile";
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS4File[6] = "4File";
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
void IOFile__IOFile(struct IOFile* p0);
void operator_delete(void* p0, unsigned long p1) { free(p0); }
int File__f(struct File* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();
void File__File(struct File* p0);
void InputFile__InputFile(struct InputFile* p0);
int IOFile__f(struct IOFile* p0);
int InputFile__f(struct InputFile* p0);

void *_ZTV6IOFile[] = { (void*)0, (void*)0, (void*)&IOFile__f };
void *_ZTV9InputFile[] = { (void*)0, (void*)0, (void*)&InputFile__f };
void *_ZTV4File[] = { (void*)0, (void*)0, (void*)&File__f };

// function: _ZN6IOFileC2Ev
void IOFile__IOFile(struct IOFile* v0) {
bb1:
  struct IOFile* this2;
  this2 = v0;
  struct IOFile* t3 = this2;
  struct InputFile* base4 = (struct InputFile*)((char *)t3 + 0);
  InputFile__InputFile(base4);
  void* v5 = (void*)&_ZTV6IOFile[2];
  void** v6 = (void**)t3;
  *(void**)(v6) = (void*)v5;
  return;
}

// function: _ZN4File1fEv
int File__f(struct File* v7) {
bb8:
  struct File* this9;
  int __retval10;
  this9 = v7;
  struct File* t11 = this9;
  int c12 = 1;
  __retval10 = c12;
  int t13 = __retval10;
  return t13;
}

// function: main
int main() {
bb14:
  int __retval15;
  struct File* iofile16;
  struct IOFile* __new_result17;
  int c18 = 0;
  __retval15 = c18;
  unsigned long c19 = 8;
  void* r20 = operator_new(c19);
    struct IOFile* cast21 = (struct IOFile*)r20;
    __new_result17 = cast21;
    struct IOFile c22 = {0};
    *cast21 = c22;
    IOFile__IOFile(cast21);
  struct IOFile* t23 = __new_result17;
  struct File* base24 = (struct File*)((char *)t23 + 0);
  iofile16 = base24;
  struct File* t25 = iofile16;
  int r26 = File__f(t25);
  int c27 = 1;
  _Bool c28 = ((r26 == c27)) ? 1 : 0;
  if (c28) {
  } else {
    char* cast29 = (char*)&(_str);
    char* c30 = _str_1;
    unsigned int c31 = 31;
    char* cast32 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast29, c30, c31, cast32);
  }
  struct File* t33 = iofile16;
  void** v34 = (void**)t33;
  void* v35 = *((void**)v34);
  int vcall38 = (int)__VERIFIER_virtual_call_int(t33, 0);
  int c39 = 10;
  _Bool c40 = ((vcall38 == c39)) ? 1 : 0;
  if (c40) {
  } else {
    char* cast41 = (char*)&(_str_2);
    char* c42 = _str_1;
    unsigned int c43 = 32;
    char* cast44 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast41, c42, c43, cast44);
  }
  struct File* t45 = iofile16;
  struct File* c46 = ((void*)0);
  _Bool c47 = ((t45 != c46)) ? 1 : 0;
  if (c47) {
    {
      void* cast48 = (void*)t45;
      unsigned long c49 = 8;
      operator_delete(cast48, c49);
    }
  }
  int c50 = 0;
  __retval15 = c50;
  int t51 = __retval15;
  return t51;
}

// function: _ZN4FileC2Ev
void File__File(struct File* v52) {
bb53:
  struct File* this54;
  this54 = v52;
  struct File* t55 = this54;
  void* v56 = (void*)&_ZTV4File[2];
  void** v57 = (void**)t55;
  *(void**)(v57) = (void*)v56;
  return;
}

// function: _ZN9InputFileC2Ev
void InputFile__InputFile(struct InputFile* v58) {
bb59:
  struct InputFile* this60;
  this60 = v58;
  struct InputFile* t61 = this60;
  struct File* base62 = (struct File*)((char *)t61 + 0);
  File__File(base62);
  void* v63 = (void*)&_ZTV9InputFile[2];
  void** v64 = (void**)t61;
  *(void**)(v64) = (void*)v63;
  return;
}

// function: _ZN6IOFile1fEv
int IOFile__f(struct IOFile* v65) {
bb66:
  struct IOFile* this67;
  int __retval68;
  this67 = v65;
  struct IOFile* t69 = this67;
  int c70 = 100;
  __retval68 = c70;
  int t71 = __retval68;
  return t71;
}

// function: _ZN9InputFile1fEv
int InputFile__f(struct InputFile* v72) {
bb73:
  struct InputFile* this74;
  int __retval75;
  this74 = v72;
  struct InputFile* t76 = this74;
  int c77 = 10;
  __retval75 = c77;
  int t78 = __retval75;
  return t78;
}

