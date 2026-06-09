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

// Struct definitions (auto-parsed)
struct A { int m_x; };
struct B { void* __field0; struct A __field1; };
struct C { void* __field0; struct A __field1; };
struct D { struct B __field0; struct C __field1; struct A __field2; };
struct anon_struct_0 { unsigned char* __field0[3]; unsigned char* __field1[3]; };
struct anon_struct_1 { unsigned char* __field0[3]; };
struct anon_struct_2 { unsigned char* __field0; unsigned char* __field1; };
struct anon_struct_3 { unsigned char* __field0; unsigned char* __field1; unsigned int __field2; unsigned int __field3; unsigned char* __field4; long __field5; };
struct anon_struct_4 { unsigned char* __field0; unsigned char* __field1; unsigned int __field2; unsigned int __field3; unsigned char* __field4; long __field5; unsigned char* __field6; long __field7; };

extern void *_ZTVN10__cxxabiv121__vmi_class_type_infoE[];
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern unsigned char _ZTI1A[];
extern unsigned char _ZTI1B[];
extern unsigned char _ZTI1C[];
extern unsigned char _ZTI1D[];
char _str[16] = "a->getX() == 42";
char _str_1[140] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/polymorphism_bringup/llbmc_virtual_inheritance-wrong/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern void *_ZTVN10__cxxabiv121__vmi_class_type_infoE[];
char _ZTS1B[3] = "1B";
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS1A[3] = "1A";
char _ZTS1C[3] = "1C";
char _ZTS1D[3] = "1D";
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
void A__A(struct A* p0);
void B__B(struct B* p0, void** p1, int p2);
void C__C(struct C* p0, void** p1, int p2);
void D__D(struct D* p0, int p1);
void operator_delete(void* p0, unsigned long p1) { free(p0); }
int A__getX(struct A* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

void *_ZTV1D[] = { (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0 };
void *_ZTC1D0_1B[] = { (void*)0, (void*)0, (void*)0 };
void *_ZTC1D8_1C[] = { (void*)0, (void*)0, (void*)0 };
unsigned char* _ZTT1D[4] __attribute__((aligned(8))) = {(unsigned char*)(&_ZTV1D[3]), (unsigned char*)(&_ZTC1D0_1B[3]), (unsigned char*)(&_ZTC1D8_1C[3]), (unsigned char*)(&_ZTV1D[6])};

// function: _ZN1AC2Ev
void A__A(struct A* v0) {
bb1:
  struct A* this2;
  this2 = v0;
  struct A* t3 = this2;
  return;
}

// function: _ZN1BC2Ei
void B__B(struct B* v4, void** v5, int v6) {
bb7:
  struct B* this8;
  void** vtt9;
  int x10;
  this8 = v4;
  vtt9 = v5;
  x10 = v6;
  struct B* t11 = this8;
  void** t12 = vtt9;
  static void *vtt_slot13 = 0;
  void** vtt14 = (void**)&vtt_slot13;
  void** cast15 = (void**)vtt14;
  void* t16 = *cast15;
  void** v17 = (void**)t11;
  *(void**)(v17) = (void*)t16;
  return;
}

// function: _ZN1CC2Ei
void C__C(struct C* v18, void** v19, int v20) {
bb21:
  struct C* this22;
  void** vtt23;
  int x24;
  this22 = v18;
  vtt23 = v19;
  x24 = v20;
  struct C* t25 = this22;
  void** t26 = vtt23;
  static void *vtt_slot27 = 0;
  void** vtt28 = (void**)&vtt_slot27;
  void** cast29 = (void**)vtt28;
  void* t30 = *cast29;
  void** v31 = (void**)t25;
  *(void**)(v31) = (void*)t30;
  return;
}

// function: _ZN1DC1Ei
void D__D(struct D* v32, int v33) {
bb34:
  struct D* this35;
  int x36;
  this35 = v32;
  x36 = v33;
  struct D* t37 = this35;
  struct A* base38 = (struct A*)((char *)t37 + 16);
  A__A(base38);
  struct B* base39 = (struct B*)((char *)t37 + 0);
  int t40 = x36;
  static void *vtt_slot41 = 0;
  void** vtt42 = (void**)&vtt_slot41;
  B__B(base39, vtt42, t40);
  struct C* base43 = (struct C*)((char *)t37 + 8);
  int t44 = x36;
  static void *vtt_slot45 = 0;
  void** vtt46 = (void**)&vtt_slot45;
  C__C(base43, vtt46, t44);
  void* v47 = (void*)&_ZTV1D[3];
  void** v48 = (void**)t37;
  *(void**)(v48) = (void*)v47;
  void* v49 = (void*)&_ZTV1D[6];
  struct C* base50 = (struct C*)((char *)t37 + 8);
  void** v51 = (void**)base50;
  *(void**)(v51) = (void*)v49;
  return;
}

// function: _ZN1A4getXEv
int A__getX(struct A* v52) {
bb53:
  struct A* this54;
  int __retval55;
  this54 = v52;
  struct A* t56 = this54;
  int t57 = t56->m_x;
  __retval55 = t57;
  int t58 = __retval55;
  return t58;
}

// function: main
int main() {
bb59:
  int __retval60;
  struct A* a61;
  struct D* __new_result62;
  int c63 = 0;
  __retval60 = c63;
  unsigned long c64 = 24;
  void* r65 = operator_new(c64);
    struct D* cast66 = (struct D*)r65;
    __new_result62 = cast66;
    int c67 = 42;
    D__D(cast66, c67);
  struct D* t68 = __new_result62;
  void** v69 = (void**)t68;
  void* v70 = *((void**)v69);
  unsigned char* cast71 = (unsigned char*)v70;
  long c72 = -24;
  unsigned char* ptr73 = &(cast71)[c72];
  long* cast74 = (long*)ptr73;
  long t75 = *cast74;
  unsigned char* cast76 = (unsigned char*)t68;
  unsigned char* ptr77 = &(cast76)[t75];
  struct D* cast78 = (struct D*)ptr77;
  struct A* cast79 = (struct A*)cast78;
  a61 = cast79;
  struct A* t80 = a61;
  int r81 = A__getX(t80);
  int c82 = 42;
  _Bool c83 = ((r81 == c82)) ? 1 : 0;
  if (c83) {
  } else {
    char* cast84 = (char*)&(_str);
    char* c85 = _str_1;
    unsigned int c86 = 48;
    char* cast87 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast84, c85, c86, cast87);
  }
  int c88 = 0;
  __retval60 = c88;
  int t89 = __retval60;
  return t89;
}

