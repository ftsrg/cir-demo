// Struct definitions (auto-parsed)
struct File { void* __field0; };
struct InputFile { struct File __field0; };
struct OutputFile { struct File __field0; };
struct anon_struct_0 { unsigned char* __field0[5]; unsigned char* __field1[5]; };
struct anon_struct_1 { unsigned char* __field0[5]; };
struct anon_struct_2 { unsigned char* __field0; unsigned char* __field1; };
struct anon_struct_3 { unsigned char* __field0; unsigned char* __field1; unsigned int __field2; unsigned int __field3; unsigned char* __field4; long __field5; };
struct anon_struct_4 { unsigned char* __field0[5]; unsigned char* __field1[4]; };
struct anon_struct_5 { unsigned char* __field0; unsigned char* __field1; unsigned int __field2; unsigned int __field3; unsigned char* __field4; long __field5; unsigned char* __field6; long __field7; };
struct anon_struct_6 { unsigned char* __field0[3]; };
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
char _str_1[126] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/polymorphism_bringup/7_MI_Mlvl_diamond/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[29] = "iofile->InputFile::f() == 42";
char _str_3[30] = "iofile->OutputFile::f() == 63";
char _str_4[18] = "iofile->f() == 52";
extern void *_ZTVN10__cxxabiv121__vmi_class_type_infoE[];
char _ZTS9InputFile[11] = "9InputFile";
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS4File[6] = "4File";
char _ZTS10OutputFile[13] = "10OutputFile";
char _ZTS6IOFile[8] = "6IOFile";
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
void File__File(struct File* p0);
void InputFile__InputFile(struct InputFile* p0, void** p1);
void OutputFile__OutputFile(struct OutputFile* p0, void** p1);
void IOFile__IOFile(struct IOFile* p0);
void operator_delete(void* p0, unsigned long p1) { free(p0); }
int File__f(struct File* p0);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int InputFile__f(struct InputFile* p0);
int OutputFile__f(struct OutputFile* p0);
int main();
int virtual_thunk_to_OutputFile__f(struct OutputFile* p0);
int IOFile__f(struct IOFile* p0);
int non_virtual_thunk_to_IOFile__f(struct IOFile* p0);

void *_ZTV6IOFile[] = { (void*)0, (void*)0, (void*)0, (void*)0, (void*)&IOFile__f, (void*)0, (void*)0, (void*)0, (void*)0, (void*)&non_virtual_thunk_to_IOFile__f };
void *_ZTC6IOFile0_9InputFile[] = { (void*)0, (void*)0, (void*)0, (void*)0, (void*)&InputFile__f };
void *_ZTC6IOFile8_10OutputFile[] = { (void*)0, (void*)0, (void*)0, (void*)0, (void*)&OutputFile__f, (void*)0, (void*)0, (void*)0, (void*)&virtual_thunk_to_OutputFile__f };
void *_ZTV4File[] = { (void*)0, (void*)0, (void*)&File__f };
unsigned char* _ZTT6IOFile[7] __attribute__((aligned(8))) = {(unsigned char*)(&_ZTV6IOFile[4]), (unsigned char*)(&_ZTC6IOFile0_9InputFile[4]), (unsigned char*)(&_ZTC6IOFile0_9InputFile[4]), (unsigned char*)(&_ZTC6IOFile8_10OutputFile[4]), (unsigned char*)(&_ZTC6IOFile8_10OutputFile[8]), (unsigned char*)(&_ZTV6IOFile[4]), (unsigned char*)(&_ZTV6IOFile[9])};

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
void OutputFile__OutputFile(struct OutputFile* v33, void** v34) {
bb35: ;
  struct OutputFile* this36;
  void** vtt37;
  this36 = v33;
  vtt37 = v34;
  struct OutputFile* t38 = this36;
  void** t39 = vtt37;
  static void *vtt_slot40 = 0;
  void** vtt41 = (void**)&vtt_slot40;
  void** cast42 = (void**)vtt41;
  void* t43 = *cast42;
  void** v44 = (void**)t38;
  *(void**)(v44) = (void*)t43;
  static void *vtt_slot45 = 0;
  void** vtt46 = (void**)&vtt_slot45;
  void** cast47 = (void**)vtt46;
  void* t48 = *cast47;
  void** v49 = (void**)t38;
  void* v50 = *((void**)v49);
  unsigned char* cast51 = (unsigned char*)v50;
  long c52 = -32;
  unsigned char* ptr53 = &(cast51)[c52];
  long* cast54 = (long*)ptr53;
  long t55 = *cast54;
  unsigned char* cast56 = (unsigned char*)t38;
  unsigned char* ptr57 = &(cast56)[t55];
  struct OutputFile* cast58 = (struct OutputFile*)ptr57;
  void** v59 = (void**)cast58;
  *(void**)(v59) = (void*)t48;
  return;
}

// function: _ZN6IOFileC1Ev
void IOFile__IOFile(struct IOFile* v60) {
bb61: ;
  struct IOFile* this62;
  this62 = v60;
  struct IOFile* t63 = this62;
  struct File* base64 = (struct File*)((char *)t63 + 0);
  File__File(base64);
  struct InputFile* base65 = (struct InputFile*)((char *)t63 + 0);
  static void *vtt_slot66 = 0;
  void** vtt67 = (void**)&vtt_slot66;
  InputFile__InputFile(base65, vtt67);
  struct OutputFile* base68 = (struct OutputFile*)((char *)t63 + 8);
  static void *vtt_slot69 = 0;
  void** vtt70 = (void**)&vtt_slot69;
  OutputFile__OutputFile(base68, vtt70);
  void* v71 = (void*)&_ZTV6IOFile[4];
  void** v72 = (void**)t63;
  *(void**)(v72) = (void*)v71;
  void* v73 = (void*)&_ZTV6IOFile[4];
  void** v74 = (void**)t63;
  *(void**)(v74) = (void*)v73;
  void* v75 = (void*)&_ZTV6IOFile[9];
  struct OutputFile* base76 = (struct OutputFile*)((char *)t63 + 8);
  void** v77 = (void**)base76;
  *(void**)(v77) = (void*)v75;
  return;
}

// function: _ZN4File1fEv
int File__f(struct File* v78) {
bb79: ;
  struct File* this80;
  int __retval81;
  this80 = v78;
  struct File* t82 = this80;
  int c83 = 21;
  __retval81 = c83;
  int t84 = __retval81;
  return t84;
}

// function: _ZN9InputFile1fEv
int InputFile__f(struct InputFile* v85) {
bb86: ;
  struct InputFile* this87;
  int __retval88;
  this87 = v85;
  struct InputFile* t89 = this87;
  int c90 = 42;
  __retval88 = c90;
  int t91 = __retval88;
  return t91;
}

// function: _ZN10OutputFile1fEv
int OutputFile__f(struct OutputFile* v92) {
bb93: ;
  struct OutputFile* this94;
  int __retval95;
  this94 = v92;
  struct OutputFile* t96 = this94;
  int c97 = 63;
  __retval95 = c97;
  int t98 = __retval95;
  return t98;
}

// function: main
int main() {
bb99: ;
  int __retval100;
  struct IOFile* iofile101;
  struct IOFile* __new_result102;
  int c103 = 0;
  __retval100 = c103;
  unsigned long c104 = 16;
  void* r105 = operator_new(c104);
    struct IOFile* cast106 = (struct IOFile*)r105;
    __new_result102 = cast106;
    struct IOFile c107 = {0};
    *cast106 = c107;
    IOFile__IOFile(cast106);
  struct IOFile* t108 = __new_result102;
  iofile101 = t108;
  struct IOFile* t109 = iofile101;
  void** v110 = (void**)t109;
  void* v111 = *((void**)v110);
  unsigned char* cast112 = (unsigned char*)v111;
  long c113 = -32;
  unsigned char* ptr114 = &(cast112)[c113];
  long* cast115 = (long*)ptr114;
  long t116 = *cast115;
  unsigned char* cast117 = (unsigned char*)t109;
  unsigned char* ptr118 = &(cast117)[t116];
  struct IOFile* cast119 = (struct IOFile*)ptr118;
  struct File* cast120 = (struct File*)cast119;
  int r121 = File__f(cast120);
  int c122 = 21;
  _Bool c123 = ((r121 == c122)) ? 1 : 0;
  if (c123) {
  } else {
    char* cast124 = (char*)&(_str);
    char* c125 = (char*)_str_1;
    unsigned int c126 = 36;
    char* cast127 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast124, c125, c126, cast127);
  }
  struct IOFile* t128 = iofile101;
  struct InputFile* base129 = (struct InputFile*)((char *)t128 + 0);
  int r130 = InputFile__f(base129);
  int c131 = 42;
  _Bool c132 = ((r130 == c131)) ? 1 : 0;
  if (c132) {
  } else {
    char* cast133 = (char*)&(_str_2);
    char* c134 = (char*)_str_1;
    unsigned int c135 = 37;
    char* cast136 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast133, c134, c135, cast136);
  }
  struct IOFile* t137 = iofile101;
  struct OutputFile* base138 = (struct OutputFile*)((char *)t137 + 8);
  int r139 = OutputFile__f(base138);
  int c140 = 63;
  _Bool c141 = ((r139 == c140)) ? 1 : 0;
  if (c141) {
  } else {
    char* cast142 = (char*)&(_str_3);
    char* c143 = (char*)_str_1;
    unsigned int c144 = 38;
    char* cast145 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast142, c143, c144, cast145);
  }
  struct IOFile* t146 = iofile101;
  void** v147 = (void**)t146;
  void* v148 = *((void**)v147);
  int vcall151 = (int)__VERIFIER_virtual_call_int(t146, 0);
  int c152 = 52;
  _Bool c153 = ((vcall151 == c152)) ? 1 : 0;
  if (c153) {
  } else {
    char* cast154 = (char*)&(_str_4);
    char* c155 = (char*)_str_1;
    unsigned int c156 = 39;
    char* cast157 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast154, c155, c156, cast157);
  }
  struct IOFile* t158 = iofile101;
  struct IOFile* c159 = ((void*)0);
  _Bool c160 = ((t158 != c159)) ? 1 : 0;
  if (c160) {
    {
      void* cast161 = (void*)t158;
      unsigned long c162 = 16;
      operator_delete(cast161, c162);
    }
  }
  int c163 = 0;
  __retval100 = c163;
  int t164 = __retval100;
  return t164;
}

// function: _ZTv0_n24_N10OutputFile1fEv
int virtual_thunk_to_OutputFile__f(struct OutputFile* v165) {
bb166: ;
  struct OutputFile* this167;
  int __retval168;
  this167 = v165;
  struct OutputFile* t169 = this167;
  unsigned char* cast170 = (unsigned char*)t169;
  void** v171 = (void**)cast170;
  void* v172 = *((void**)v171);
  unsigned char* cast173 = (unsigned char*)v172;
  long c174 = -24;
  unsigned char* ptr175 = &(cast173)[c174];
  long* cast176 = (long*)ptr175;
  long t177 = *cast176;
  unsigned char* ptr178 = &(cast170)[t177];
  struct OutputFile* cast179 = (struct OutputFile*)ptr178;
  int r180 = OutputFile__f(cast179);
  __retval168 = r180;
  int t181 = __retval168;
  return t181;
}

// function: _ZN6IOFile1fEv
int IOFile__f(struct IOFile* v182) {
bb183: ;
  struct IOFile* this184;
  int __retval185;
  this184 = v182;
  struct IOFile* t186 = this184;
  int c187 = 52;
  __retval185 = c187;
  int t188 = __retval185;
  return t188;
}

// function: _ZThn8_N6IOFile1fEv
int non_virtual_thunk_to_IOFile__f(struct IOFile* v189) {
bb190: ;
  struct IOFile* this191;
  int __retval192;
  this191 = v189;
  struct IOFile* t193 = this191;
  unsigned char* cast194 = (unsigned char*)t193;
  long c195 = -8;
  unsigned char* ptr196 = &(cast194)[c195];
  struct IOFile* cast197 = (struct IOFile*)ptr196;
  int r198 = IOFile__f(cast197);
  __retval192 = r198;
  int t199 = __retval192;
  return t199;
}

