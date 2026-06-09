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
struct Bird { void* __field0; };
struct Penguin { struct Bird __field0; };
struct anon_struct_0 { unsigned char* __field0[4]; };
struct anon_struct_1 { unsigned char* __field0; unsigned char* __field1; };
struct anon_struct_2 { unsigned char* __field0; unsigned char* __field1; unsigned char* __field2; };

extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
extern unsigned char _ZTI4Bird[];
extern unsigned char _ZTI7Penguin[];
char _str[24] = "b->do_something() == 21";
char _str_1[141] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/polymorphism_bringup/8_SI_virtual_ntvalCtor_MultiOvrd/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[24] = "p->do_something() == 42";
char _str_3[20] = "b->do_other() == 25";
char _str_4[20] = "p->do_other() == 50";
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
int Bird__do_other(struct Bird* p0);
int Penguin__do_something(struct Penguin* p0);
int Penguin__do_other(struct Penguin* p0);

void *_ZTV4Bird[] = { (void*)0, (void*)0, (void*)&Bird__do_something, (void*)&Bird__do_other };
void *_ZTV7Penguin[] = { (void*)0, (void*)0, (void*)&Penguin__do_something, (void*)&Penguin__do_other };

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
    unsigned int c41 = 30;
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
    unsigned int c53 = 31;
    char* cast54 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast51, c52, c53, cast54);
  }
  struct Bird* t55 = b15;
  void** v56 = (void**)t55;
  void* v57 = *((void**)v56);
  int vcall60 = (int)__VERIFIER_virtual_call_int(t55, 1);
  int c61 = 25;
  _Bool c62 = ((vcall60 == c61)) ? 1 : 0;
  if (c62) {
  } else {
    char* cast63 = (char*)&(_str_3);
    char* c64 = _str_1;
    unsigned int c65 = 32;
    char* cast66 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast63, c64, c65, cast66);
  }
  struct Bird* t67 = p17;
  void** v68 = (void**)t67;
  void* v69 = *((void**)v68);
  int vcall72 = (int)__VERIFIER_virtual_call_int(t67, 1);
  int c73 = 50;
  _Bool c74 = ((vcall72 == c73)) ? 1 : 0;
  if (c74) {
  } else {
    char* cast75 = (char*)&(_str_4);
    char* c76 = _str_1;
    unsigned int c77 = 33;
    char* cast78 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast75, c76, c77, cast78);
  }
  struct Bird* t79 = b15;
  struct Bird* c80 = ((void*)0);
  _Bool c81 = ((t79 != c80)) ? 1 : 0;
  if (c81) {
    {
      void* cast82 = (void*)t79;
      unsigned long c83 = 8;
      operator_delete(cast82, c83);
    }
  }
  struct Bird* t84 = p17;
  struct Bird* c85 = ((void*)0);
  _Bool c86 = ((t84 != c85)) ? 1 : 0;
  if (c86) {
    {
      void* cast87 = (void*)t84;
      unsigned long c88 = 8;
      operator_delete(cast87, c88);
    }
  }
  int c89 = 0;
  __retval14 = c89;
  int t90 = __retval14;
  return t90;
}

// function: _ZN4Bird12do_somethingEv
int Bird__do_something(struct Bird* v91) {
bb92:
  struct Bird* this93;
  int __retval94;
  this93 = v91;
  struct Bird* t95 = this93;
  int c96 = 21;
  __retval94 = c96;
  int t97 = __retval94;
  return t97;
}

// function: _ZN4Bird8do_otherEv
int Bird__do_other(struct Bird* v98) {
bb99:
  struct Bird* this100;
  int __retval101;
  this100 = v98;
  struct Bird* t102 = this100;
  int c103 = 25;
  __retval101 = c103;
  int t104 = __retval101;
  return t104;
}

// function: _ZN7Penguin12do_somethingEv
int Penguin__do_something(struct Penguin* v105) {
bb106:
  struct Penguin* this107;
  int __retval108;
  this107 = v105;
  struct Penguin* t109 = this107;
  int c110 = 42;
  __retval108 = c110;
  int t111 = __retval108;
  return t111;
}

// function: _ZN7Penguin8do_otherEv
int Penguin__do_other(struct Penguin* v112) {
bb113:
  struct Penguin* this114;
  int __retval115;
  this114 = v112;
  struct Penguin* t116 = this114;
  int c117 = 50;
  __retval115 = c117;
  int t118 = __retval115;
  return t118;
}

