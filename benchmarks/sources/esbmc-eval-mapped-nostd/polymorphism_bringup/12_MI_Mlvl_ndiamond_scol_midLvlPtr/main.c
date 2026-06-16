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
char _str[24] = "iofile2->File::f() == 1";
char _str_1[143] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/polymorphism_bringup/12_MI_Mlvl_ndiamond_scol_midLvlPtr/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[30] = "iofile2->InputFile::f() == 10";
char _str_3[18] = "iofile2->f() != 1";
char _str_4[19] = "iofile2->f() != 10";
char _str_5[20] = "iofile2->f() == 100";
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
int InputFile__f(struct InputFile* p0);
int main();
void File__File(struct File* p0);
void InputFile__InputFile(struct InputFile* p0);
int IOFile__f(struct IOFile* p0);

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

// function: _ZN9InputFile1fEv
int InputFile__f(struct InputFile* v14) {
bb15: ;
  struct InputFile* this16;
  int __retval17;
  this16 = v14;
  struct InputFile* t18 = this16;
  int c19 = 10;
  __retval17 = c19;
  int t20 = __retval17;
  return t20;
}

// function: main
int main() {
bb21: ;
  int __retval22;
  struct InputFile* iofile223;
  struct IOFile* __new_result24;
  int c25 = 0;
  __retval22 = c25;
  unsigned long c26 = 8;
  void* r27 = operator_new(c26);
    struct IOFile* cast28 = (struct IOFile*)r27;
    __new_result24 = cast28;
    struct IOFile c29 = {0};
    *cast28 = c29;
    IOFile__IOFile(cast28);
  struct IOFile* t30 = __new_result24;
  struct InputFile* base31 = (struct InputFile*)((char *)t30 + 0);
  iofile223 = base31;
  struct InputFile* t32 = iofile223;
  struct File* base33 = (struct File*)((char *)t32 + 0);
  int r34 = File__f(base33);
  int c35 = 1;
  _Bool c36 = ((r34 == c35)) ? 1 : 0;
  if (c36) {
  } else {
    char* cast37 = (char*)&(_str);
    char* c38 = (char*)_str_1;
    unsigned int c39 = 30;
    char* cast40 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast37, c38, c39, cast40);
  }
  struct InputFile* t41 = iofile223;
  int r42 = InputFile__f(t41);
  int c43 = 10;
  _Bool c44 = ((r42 == c43)) ? 1 : 0;
  if (c44) {
  } else {
    char* cast45 = (char*)&(_str_2);
    char* c46 = (char*)_str_1;
    unsigned int c47 = 31;
    char* cast48 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast45, c46, c47, cast48);
  }
  struct InputFile* t49 = iofile223;
  void** v50 = (void**)t49;
  void* v51 = *((void**)v50);
  int vcall54 = (int)__VERIFIER_virtual_call_int(t49, 0);
  int c55 = 1;
  _Bool c56 = ((vcall54 != c55)) ? 1 : 0;
  if (c56) {
  } else {
    char* cast57 = (char*)&(_str_3);
    char* c58 = (char*)_str_1;
    unsigned int c59 = 32;
    char* cast60 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast57, c58, c59, cast60);
  }
  struct InputFile* t61 = iofile223;
  void** v62 = (void**)t61;
  void* v63 = *((void**)v62);
  int vcall66 = (int)__VERIFIER_virtual_call_int(t61, 0);
  int c67 = 10;
  _Bool c68 = ((vcall66 != c67)) ? 1 : 0;
  if (c68) {
  } else {
    char* cast69 = (char*)&(_str_4);
    char* c70 = (char*)_str_1;
    unsigned int c71 = 33;
    char* cast72 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast69, c70, c71, cast72);
  }
  struct InputFile* t73 = iofile223;
  void** v74 = (void**)t73;
  void* v75 = *((void**)v74);
  int vcall78 = (int)__VERIFIER_virtual_call_int(t73, 0);
  int c79 = 100;
  _Bool c80 = ((vcall78 == c79)) ? 1 : 0;
  if (c80) {
  } else {
    char* cast81 = (char*)&(_str_5);
    char* c82 = (char*)_str_1;
    unsigned int c83 = 34;
    char* cast84 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast81, c82, c83, cast84);
  }
  struct InputFile* t85 = iofile223;
  struct InputFile* c86 = ((void*)0);
  _Bool c87 = ((t85 != c86)) ? 1 : 0;
  if (c87) {
    {
      void* cast88 = (void*)t85;
      unsigned long c89 = 8;
      operator_delete(cast88, c89);
    }
  }
  int c90 = 0;
  __retval22 = c90;
  int t91 = __retval22;
  return t91;
}

// function: _ZN4FileC2Ev
void File__File(struct File* v92) {
bb93: ;
  struct File* this94;
  this94 = v92;
  struct File* t95 = this94;
  void* v96 = (void*)&_ZTV4File[2];
  void** v97 = (void**)t95;
  *(void**)(v97) = (void*)v96;
  return;
}

// function: _ZN9InputFileC2Ev
void InputFile__InputFile(struct InputFile* v98) {
bb99: ;
  struct InputFile* this100;
  this100 = v98;
  struct InputFile* t101 = this100;
  struct File* base102 = (struct File*)((char *)t101 + 0);
  File__File(base102);
  void* v103 = (void*)&_ZTV9InputFile[2];
  void** v104 = (void**)t101;
  *(void**)(v104) = (void*)v103;
  return;
}

// function: _ZN6IOFile1fEv
int IOFile__f(struct IOFile* v105) {
bb106: ;
  struct IOFile* this107;
  int __retval108;
  this107 = v105;
  struct IOFile* t109 = this107;
  int c110 = 100;
  __retval108 = c110;
  int t111 = __retval108;
  return t111;
}

