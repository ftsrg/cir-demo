// Struct definitions (auto-parsed)
struct File { void* __field0; };
struct InputFile { struct File __field0; };
struct OutputFile { void* __field0; };
struct anon_struct_0 { unsigned char* __field0[5]; unsigned char* __field1[3]; };
struct anon_struct_1 { unsigned char* __field0[5]; };
struct anon_struct_2 { unsigned char* __field0; unsigned char* __field1; };
struct anon_struct_3 { unsigned char* __field0; unsigned char* __field1; unsigned int __field2; unsigned int __field3; unsigned char* __field4; long __field5; };
struct anon_struct_4 { unsigned char* __field0; unsigned char* __field1; unsigned int __field2; unsigned int __field3; unsigned char* __field4; long __field5; unsigned char* __field6; long __field7; };
struct anon_struct_5 { unsigned char* __field0[3]; };
struct IOFile { struct InputFile __field0; struct OutputFile __field1; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) int __VERIFIER_virtual_call_int(void* __obj, int __slot) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((int(*)(void*))__fn)(__obj);
}

extern void *_ZTVN10__cxxabiv121__vmi_class_type_infoE[];
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern unsigned char _ZTI4File[];
extern unsigned char _ZTI9InputFile[];
extern unsigned char _ZTI10OutputFile[];
extern unsigned char _ZTI6IOFile[];
char _str[24] = "iofile->File::f() == 21";
char _str_1[143] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/polymorphism_bringup/10_MI_Mlvl_ndiamond_mcol_2ndcolval/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[29] = "iofile->InputFile::f() == 42";
char _str_3[30] = "iofile->OutputFile::f() == 63";
char _str_4[18] = "iofile->f() == 52";
extern void *_ZTVN10__cxxabiv121__vmi_class_type_infoE[];
char _ZTS9InputFile[11] = "9InputFile";
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS4File[6] = "4File";
char _ZTS6IOFile[8] = "6IOFile";
char _ZTS10OutputFile[13] = "10OutputFile";
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
void File__File(struct File* p0);
void InputFile__InputFile(struct InputFile* p0, void** p1);
void OutputFile__OutputFile(struct OutputFile* p0);
void IOFile__IOFile(struct IOFile* p0);
void operator_delete(void* p0, unsigned long p1) { free(p0); }
int File__f(struct File* p0);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int InputFile__f(struct InputFile* p0);
int OutputFile__f(struct OutputFile* p0);
int main();
int IOFile__f(struct IOFile* p0);
int non_virtual_thunk_to_IOFile__f(struct IOFile* p0);

void *_ZTV6IOFile[] = { (void*)0, (void*)0, (void*)0, (void*)0, (void*)&IOFile__f, (void*)0, (void*)0, (void*)&non_virtual_thunk_to_IOFile__f };
void *_ZTC6IOFile0_9InputFile[] = { (void*)0, (void*)0, (void*)0, (void*)0, (void*)&InputFile__f };
void *_ZTV4File[] = { (void*)0, (void*)0, (void*)&File__f };
void *_ZTV10OutputFile[] = { (void*)0, (void*)0, (void*)&OutputFile__f };
unsigned char* _ZTT6IOFile[4] __attribute__((aligned(8))) = {(unsigned char*)(&_ZTV6IOFile[4]), (unsigned char*)(&_ZTC6IOFile0_9InputFile[4]), (unsigned char*)(&_ZTC6IOFile0_9InputFile[4]), (unsigned char*)(&_ZTV6IOFile[4])};

// function: _ZN4FileC2Ev
void File__File(struct File* v0) {
bb1: ;
  struct File* this2;
  this2 = v0;
  struct File* t3 = this2;
  void* v4 = (void*)&_ZTV4File[2];
  void** v5 = (void**)t3;
  *(void**)(v5) = (void*)v4;
  return;
}

// function: _ZN9InputFileC2Ev
void InputFile__InputFile(struct InputFile* v6, void** v7) {
bb8: ;
  struct InputFile* this9;
  void** vtt10;
  this9 = v6;
  vtt10 = v7;
  struct InputFile* t11 = this9;
  void** t12 = vtt10;
  static void *vtt_slot13 = 0;
  void** vtt14 = (void**)&vtt_slot13;
  void** cast15 = (void**)vtt14;
  void* t16 = *cast15;
  void** v17 = (void**)t11;
  *(void**)(v17) = (void*)t16;
  static void *vtt_slot18 = 0;
  void** vtt19 = (void**)&vtt_slot18;
  void** cast20 = (void**)vtt19;
  void* t21 = *cast20;
  void** v22 = (void**)t11;
  void* v23 = *((void**)v22);
  unsigned char* cast24 = (unsigned char*)v23;
  long c25 = -32;
  unsigned char* ptr26 = &(cast24)[c25];
  long* cast27 = (long*)ptr26;
  long t28 = *cast27;
  unsigned char* cast29 = (unsigned char*)t11;
  unsigned char* ptr30 = &(cast29)[t28];
  struct InputFile* cast31 = (struct InputFile*)ptr30;
  void** v32 = (void**)cast31;
  *(void**)(v32) = (void*)t21;
  return;
}

// function: _ZN10OutputFileC2Ev
void OutputFile__OutputFile(struct OutputFile* v33) {
bb34: ;
  struct OutputFile* this35;
  this35 = v33;
  struct OutputFile* t36 = this35;
  void* v37 = (void*)&_ZTV10OutputFile[2];
  void** v38 = (void**)t36;
  *(void**)(v38) = (void*)v37;
  return;
}

// function: _ZN6IOFileC1Ev
void IOFile__IOFile(struct IOFile* v39) {
bb40: ;
  struct IOFile* this41;
  this41 = v39;
  struct IOFile* t42 = this41;
  struct File* base43 = (struct File*)((char *)t42 + 0);
  File__File(base43);
  struct InputFile* base44 = (struct InputFile*)((char *)t42 + 0);
  static void *vtt_slot45 = 0;
  void** vtt46 = (void**)&vtt_slot45;
  InputFile__InputFile(base44, vtt46);
  struct OutputFile* base47 = (struct OutputFile*)((char *)t42 + 8);
  OutputFile__OutputFile(base47);
  void* v48 = (void*)&_ZTV6IOFile[4];
  void** v49 = (void**)t42;
  *(void**)(v49) = (void*)v48;
  void* v50 = (void*)&_ZTV6IOFile[4];
  void** v51 = (void**)t42;
  *(void**)(v51) = (void*)v50;
  void* v52 = (void*)&_ZTV6IOFile[7];
  struct OutputFile* base53 = (struct OutputFile*)((char *)t42 + 8);
  void** v54 = (void**)base53;
  *(void**)(v54) = (void*)v52;
  return;
}

// function: _ZN4File1fEv
int File__f(struct File* v55) {
bb56: ;
  struct File* this57;
  int __retval58;
  this57 = v55;
  struct File* t59 = this57;
  int c60 = 21;
  __retval58 = c60;
  int t61 = __retval58;
  return t61;
}

// function: _ZN9InputFile1fEv
int InputFile__f(struct InputFile* v62) {
bb63: ;
  struct InputFile* this64;
  int __retval65;
  this64 = v62;
  struct InputFile* t66 = this64;
  int c67 = 42;
  __retval65 = c67;
  int t68 = __retval65;
  return t68;
}

// function: _ZN10OutputFile1fEv
int OutputFile__f(struct OutputFile* v69) {
bb70: ;
  struct OutputFile* this71;
  int __retval72;
  this71 = v69;
  struct OutputFile* t73 = this71;
  int c74 = 63;
  __retval72 = c74;
  int t75 = __retval72;
  return t75;
}

// function: main
int main() {
bb76: ;
  int __retval77;
  struct IOFile* iofile78;
  struct IOFile* __new_result79;
  int c80 = 0;
  __retval77 = c80;
  unsigned long c81 = 16;
  void* r82 = operator_new(c81);
    struct IOFile* cast83 = (struct IOFile*)r82;
    __new_result79 = cast83;
    struct IOFile c84 = {0};
    *cast83 = c84;
    IOFile__IOFile(cast83);
  struct IOFile* t85 = __new_result79;
  iofile78 = t85;
  struct IOFile* t86 = iofile78;
  void** v87 = (void**)t86;
  void* v88 = *((void**)v87);
  unsigned char* cast89 = (unsigned char*)v88;
  long c90 = -32;
  unsigned char* ptr91 = &(cast89)[c90];
  long* cast92 = (long*)ptr91;
  long t93 = *cast92;
  unsigned char* cast94 = (unsigned char*)t86;
  unsigned char* ptr95 = &(cast94)[t93];
  struct IOFile* cast96 = (struct IOFile*)ptr95;
  struct File* cast97 = (struct File*)cast96;
  int r98 = File__f(cast97);
  int c99 = 21;
  _Bool c100 = ((r98 == c99)) ? 1 : 0;
  if (c100) {
  } else {
    char* cast101 = (char*)&(_str);
    char* c102 = (char*)_str_1;
    unsigned int c103 = 35;
    char* cast104 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast101, c102, c103, cast104);
  }
  struct IOFile* t105 = iofile78;
  struct InputFile* base106 = (struct InputFile*)((char *)t105 + 0);
  int r107 = InputFile__f(base106);
  int c108 = 42;
  _Bool c109 = ((r107 == c108)) ? 1 : 0;
  if (c109) {
  } else {
    char* cast110 = (char*)&(_str_2);
    char* c111 = (char*)_str_1;
    unsigned int c112 = 36;
    char* cast113 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast110, c111, c112, cast113);
  }
  struct IOFile* t114 = iofile78;
  struct OutputFile* base115 = (struct OutputFile*)((char *)t114 + 8);
  int r116 = OutputFile__f(base115);
  int c117 = 63;
  _Bool c118 = ((r116 == c117)) ? 1 : 0;
  if (c118) {
  } else {
    char* cast119 = (char*)&(_str_3);
    char* c120 = (char*)_str_1;
    unsigned int c121 = 37;
    char* cast122 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast119, c120, c121, cast122);
  }
  struct IOFile* t123 = iofile78;
  void** v124 = (void**)t123;
  void* v125 = *((void**)v124);
  int vcall128 = (int)__VERIFIER_virtual_call_int(t123, 0);
  int c129 = 52;
  _Bool c130 = ((vcall128 == c129)) ? 1 : 0;
  if (c130) {
  } else {
    char* cast131 = (char*)&(_str_4);
    char* c132 = (char*)_str_1;
    unsigned int c133 = 38;
    char* cast134 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast131, c132, c133, cast134);
  }
  struct IOFile* t135 = iofile78;
  struct IOFile* c136 = ((void*)0);
  _Bool c137 = ((t135 != c136)) ? 1 : 0;
  if (c137) {
    {
      void* cast138 = (void*)t135;
      unsigned long c139 = 16;
      operator_delete(cast138, c139);
    }
  }
  int c140 = 0;
  __retval77 = c140;
  int t141 = __retval77;
  return t141;
}

// function: _ZN6IOFile1fEv
int IOFile__f(struct IOFile* v142) {
bb143: ;
  struct IOFile* this144;
  int __retval145;
  this144 = v142;
  struct IOFile* t146 = this144;
  int c147 = 52;
  __retval145 = c147;
  int t148 = __retval145;
  return t148;
}

// function: _ZThn8_N6IOFile1fEv
int non_virtual_thunk_to_IOFile__f(struct IOFile* v149) {
bb150: ;
  struct IOFile* this151;
  int __retval152;
  this151 = v149;
  struct IOFile* t153 = this151;
  unsigned char* cast154 = (unsigned char*)t153;
  long c155 = -8;
  unsigned char* ptr156 = &(cast154)[c155];
  struct IOFile* cast157 = (struct IOFile*)ptr156;
  int r158 = IOFile__f(cast157);
  __retval152 = r158;
  int t159 = __retval152;
  return t159;
}

