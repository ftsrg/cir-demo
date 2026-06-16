// Struct definitions (auto-parsed)
struct File { void* __field0; };
struct InputFile { struct File __field0; };
struct anon_struct_0 { unsigned char* __field0[3]; };
struct anon_struct_1 { unsigned char* __field0; unsigned char* __field1; };
struct anon_struct_2 { unsigned char* __field0; unsigned char* __field1; unsigned char* __field2; };
struct IOFile { struct InputFile __field0; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) int __VERIFIER_virtual_call_int(void* __obj, int __slot) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((int(*)(void*))__fn)(__obj);
}

extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern unsigned char _ZTI4File[];
extern unsigned char _ZTI9InputFile[];
extern unsigned char _ZTI6IOFile[];
char _str[23] = "iofile->File::f() == 1";
char _str_1[142] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/polymorphism_bringup/11_MI_Mlvl_ndiamond_scol_tpLvlPtr/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "iofile->f() != 10";
char _str_3[19] = "iofile->f() == 100";
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
extern void reach_error();
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
bb1: ;
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
bb8: ;
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
bb14: ;
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
    char* c30 = (char*)_str_1;
    unsigned int c31 = 30;
    char* cast32 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast29, c30, c31, cast32);
  }
  struct File* t33 = iofile16;
  void** v34 = (void**)t33;
  void* v35 = *((void**)v34);
  int vcall38 = (int)__VERIFIER_virtual_call_int(t33, 0);
  int c39 = 10;
  _Bool c40 = ((vcall38 != c39)) ? 1 : 0;
  if (c40) {
  } else {
    char* cast41 = (char*)&(_str_2);
    char* c42 = (char*)_str_1;
    unsigned int c43 = 31;
    char* cast44 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast41, c42, c43, cast44);
  }
  struct File* t45 = iofile16;
  void** v46 = (void**)t45;
  void* v47 = *((void**)v46);
  int vcall50 = (int)__VERIFIER_virtual_call_int(t45, 0);
  int c51 = 100;
  _Bool c52 = ((vcall50 == c51)) ? 1 : 0;
  if (c52) {
  } else {
    char* cast53 = (char*)&(_str_3);
    char* c54 = (char*)_str_1;
    unsigned int c55 = 32;
    char* cast56 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast53, c54, c55, cast56);
  }
  struct File* t57 = iofile16;
  struct File* c58 = ((void*)0);
  _Bool c59 = ((t57 != c58)) ? 1 : 0;
  if (c59) {
    {
      void* cast60 = (void*)t57;
      unsigned long c61 = 8;
      operator_delete(cast60, c61);
    }
  }
  int c62 = 0;
  __retval15 = c62;
  int t63 = __retval15;
  return t63;
}

// function: _ZN4FileC2Ev
void File__File(struct File* v64) {
bb65: ;
  struct File* this66;
  this66 = v64;
  struct File* t67 = this66;
  void* v68 = (void*)&_ZTV4File[2];
  void** v69 = (void**)t67;
  *(void**)(v69) = (void*)v68;
  return;
}

// function: _ZN9InputFileC2Ev
void InputFile__InputFile(struct InputFile* v70) {
bb71: ;
  struct InputFile* this72;
  this72 = v70;
  struct InputFile* t73 = this72;
  struct File* base74 = (struct File*)((char *)t73 + 0);
  File__File(base74);
  void* v75 = (void*)&_ZTV9InputFile[2];
  void** v76 = (void**)t73;
  *(void**)(v76) = (void*)v75;
  return;
}

// function: _ZN6IOFile1fEv
int IOFile__f(struct IOFile* v77) {
bb78: ;
  struct IOFile* this79;
  int __retval80;
  this79 = v77;
  struct IOFile* t81 = this79;
  int c82 = 100;
  __retval80 = c82;
  int t83 = __retval80;
  return t83;
}

// function: _ZN9InputFile1fEv
int InputFile__f(struct InputFile* v84) {
bb85: ;
  struct InputFile* this86;
  int __retval87;
  this86 = v84;
  struct InputFile* t88 = this86;
  int c89 = 10;
  __retval87 = c89;
  int t90 = __retval87;
  return t90;
}

