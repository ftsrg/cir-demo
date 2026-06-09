/*
 * Copyright 2025 Budapest University of Technology and Economics
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

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
struct OutputFile { unsigned char __field0; };
struct anon_struct_0 { unsigned char* __field0[5]; };
struct anon_struct_1 { unsigned char* __field0; unsigned char* __field1; };
struct anon_struct_2 { unsigned char* __field0; unsigned char* __field1; unsigned int __field2; unsigned int __field3; unsigned char* __field4; long __field5; };
struct anon_struct_3 { unsigned char* __field0; unsigned char* __field1; unsigned int __field2; unsigned int __field3; unsigned char* __field4; long __field5; unsigned char* __field6; long __field7; };
struct anon_struct_4 { unsigned char* __field0[3]; };
struct IOFile { struct InputFile __field0; };

extern void *_ZTVN10__cxxabiv121__vmi_class_type_infoE[];
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern unsigned char _ZTI4File[];
extern unsigned char _ZTI9InputFile[];
extern unsigned char _ZTI10OutputFile[];
extern unsigned char _ZTI6IOFile[];
char _str[24] = "iofile->File::f() == 21";
char _str_1[148] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/polymorphism_bringup/10_MI_Mlvl_ndiamond_mcol_2ndcolval_fail/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[29] = "iofile->InputFile::f() == 42";
char _str_3[30] = "iofile->OutputFile::f() == 63";
char _str_4[18] = "iofile->f() == 63";
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
void IOFile__IOFile(struct IOFile* p0);
void operator_delete(void* p0, unsigned long p1) { free(p0); }
int File__f(struct File* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int InputFile__f(struct InputFile* p0);
int OutputFile__f(struct OutputFile* p0);
int main();
int IOFile__f(struct IOFile* p0);

void *_ZTV6IOFile[] = { (void*)0, (void*)0, (void*)0, (void*)0, (void*)&IOFile__f };
void *_ZTC6IOFile0_9InputFile[] = { (void*)0, (void*)0, (void*)0, (void*)0, (void*)&InputFile__f };
void *_ZTV4File[] = { (void*)0, (void*)0, (void*)&File__f };
unsigned char* _ZTT6IOFile[4] __attribute__((aligned(8))) = {(unsigned char*)(&_ZTV6IOFile[4]), (unsigned char*)(&_ZTC6IOFile0_9InputFile[4]), (unsigned char*)(&_ZTC6IOFile0_9InputFile[4]), (unsigned char*)(&_ZTV6IOFile[4])};

// function: _ZN4FileC2Ev
void File__File(struct File* v0) {
bb1:
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
bb8:
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

// function: _ZN6IOFileC1Ev
void IOFile__IOFile(struct IOFile* v33) {
bb34:
  struct IOFile* this35;
  this35 = v33;
  struct IOFile* t36 = this35;
  struct File* base37 = (struct File*)((char *)t36 + 0);
  File__File(base37);
  struct InputFile* base38 = (struct InputFile*)((char *)t36 + 0);
  static void *vtt_slot39 = 0;
  void** vtt40 = (void**)&vtt_slot39;
  InputFile__InputFile(base38, vtt40);
  struct OutputFile* base41 = (struct OutputFile*)((char *)t36 + 0);
  void* v42 = (void*)&_ZTV6IOFile[4];
  void** v43 = (void**)t36;
  *(void**)(v43) = (void*)v42;
  void* v44 = (void*)&_ZTV6IOFile[4];
  void** v45 = (void**)t36;
  *(void**)(v45) = (void*)v44;
  return;
}

// function: _ZN4File1fEv
int File__f(struct File* v46) {
bb47:
  struct File* this48;
  int __retval49;
  this48 = v46;
  struct File* t50 = this48;
  int c51 = 21;
  __retval49 = c51;
  int t52 = __retval49;
  return t52;
}

// function: _ZN9InputFile1fEv
int InputFile__f(struct InputFile* v53) {
bb54:
  struct InputFile* this55;
  int __retval56;
  this55 = v53;
  struct InputFile* t57 = this55;
  int c58 = 42;
  __retval56 = c58;
  int t59 = __retval56;
  return t59;
}

// function: _ZN10OutputFile1fEv
int OutputFile__f(struct OutputFile* v60) {
bb61:
  struct OutputFile* this62;
  int __retval63;
  this62 = v60;
  struct OutputFile* t64 = this62;
  int c65 = 63;
  __retval63 = c65;
  int t66 = __retval63;
  return t66;
}

// function: main
int main() {
bb67:
  int __retval68;
  struct IOFile* iofile69;
  struct IOFile* __new_result70;
  int c71 = 0;
  __retval68 = c71;
  unsigned long c72 = 8;
  void* r73 = operator_new(c72);
    struct IOFile* cast74 = (struct IOFile*)r73;
    __new_result70 = cast74;
    struct IOFile c75 = {0};
    *cast74 = c75;
    IOFile__IOFile(cast74);
  struct IOFile* t76 = __new_result70;
  iofile69 = t76;
  struct IOFile* t77 = iofile69;
  void** v78 = (void**)t77;
  void* v79 = *((void**)v78);
  unsigned char* cast80 = (unsigned char*)v79;
  long c81 = -32;
  unsigned char* ptr82 = &(cast80)[c81];
  long* cast83 = (long*)ptr82;
  long t84 = *cast83;
  unsigned char* cast85 = (unsigned char*)t77;
  unsigned char* ptr86 = &(cast85)[t84];
  struct IOFile* cast87 = (struct IOFile*)ptr86;
  struct File* cast88 = (struct File*)cast87;
  int r89 = File__f(cast88);
  int c90 = 21;
  _Bool c91 = ((r89 == c90)) ? 1 : 0;
  if (c91) {
  } else {
    char* cast92 = (char*)&(_str);
    char* c93 = _str_1;
    unsigned int c94 = 35;
    char* cast95 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast92, c93, c94, cast95);
  }
  struct IOFile* t96 = iofile69;
  struct InputFile* base97 = (struct InputFile*)((char *)t96 + 0);
  int r98 = InputFile__f(base97);
  int c99 = 42;
  _Bool c100 = ((r98 == c99)) ? 1 : 0;
  if (c100) {
  } else {
    char* cast101 = (char*)&(_str_2);
    char* c102 = _str_1;
    unsigned int c103 = 36;
    char* cast104 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast101, c102, c103, cast104);
  }
  struct IOFile* t105 = iofile69;
  struct OutputFile* base106 = (struct OutputFile*)((char *)t105 + 0);
  int r107 = OutputFile__f(base106);
  int c108 = 63;
  _Bool c109 = ((r107 == c108)) ? 1 : 0;
  if (c109) {
  } else {
    char* cast110 = (char*)&(_str_3);
    char* c111 = _str_1;
    unsigned int c112 = 37;
    char* cast113 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast110, c111, c112, cast113);
  }
  struct IOFile* t114 = iofile69;
  void** v115 = (void**)t114;
  void* v116 = *((void**)v115);
  int vcall119 = (int)__VERIFIER_virtual_call_int(t114, 0);
  int c120 = 63;
  _Bool c121 = ((vcall119 == c120)) ? 1 : 0;
  if (c121) {
  } else {
    char* cast122 = (char*)&(_str_4);
    char* c123 = _str_1;
    unsigned int c124 = 38;
    char* cast125 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast122, c123, c124, cast125);
  }
  struct IOFile* t126 = iofile69;
  struct IOFile* c127 = ((void*)0);
  _Bool c128 = ((t126 != c127)) ? 1 : 0;
  if (c128) {
    {
      void* cast129 = (void*)t126;
      unsigned long c130 = 8;
      operator_delete(cast129, c130);
    }
  }
  int c131 = 0;
  __retval68 = c131;
  int t132 = __retval68;
  return t132;
}

// function: _ZN6IOFile1fEv
int IOFile__f(struct IOFile* v133) {
bb134:
  struct IOFile* this135;
  int __retval136;
  this135 = v133;
  struct IOFile* t137 = this135;
  int c138 = 52;
  __retval136 = c138;
  int t139 = __retval136;
  return t139;
}

