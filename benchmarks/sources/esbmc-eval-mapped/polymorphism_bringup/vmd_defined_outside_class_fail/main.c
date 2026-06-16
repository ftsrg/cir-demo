// Struct definitions (auto-parsed)
struct Bird { void* __field0; };
struct FlyingBird { struct Bird __field0; };
struct Penguin { struct Bird __field0; };
struct anon_struct_0 { unsigned char* __field0[7]; };
struct anon_struct_1 { unsigned char* __field0; unsigned char* __field1; };
struct anon_struct_2 { unsigned char* __field0; unsigned char* __field1; unsigned char* __field2; };
struct anon_struct_3 { unsigned char* __field0[6]; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) int __VERIFIER_virtual_call_int(void* __obj, int __slot) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((int(*)(void*))__fn)(__obj);
}
__attribute__((weak)) void __VERIFIER_virtual_call_void(void* __obj, int __slot) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  ((void(*)(void*))__fn)(__obj);
}

extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern unsigned char _ZTI4Bird[];
extern unsigned char _ZTI10FlyingBird[];
extern unsigned char _ZTI7Penguin[];
char _str[13] = "b->f() == 21";
char _str_1[139] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/polymorphism_bringup/vmd_defined_outside_class_fail/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[13] = "f->g() == 42";
char _str_3[13] = "p->g() == 21";
char _str_4[13] = "p->f() == 21";
extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
char _ZTS10FlyingBird[13] = "10FlyingBird";
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS4Bird[6] = "4Bird";
char _ZTS7Penguin[9] = "7Penguin";
void FlyingBird__fly(struct FlyingBird* p0);
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
void Bird__Bird(struct Bird* p0);
void operator_delete(void* p0, unsigned long p1) { free(p0); }
void FlyingBird__FlyingBird(struct FlyingBird* p0);
void Penguin__Penguin(struct Penguin* p0);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();
int Bird__f(struct Bird* p0);
int FlyingBird__g(struct FlyingBird* p0);
void FlyingBird___FlyingBird_2(struct FlyingBird* p0);
void FlyingBird___FlyingBird(struct FlyingBird* p0);
int Bird__g(struct Bird* p0);
void Bird___Bird_2(struct Bird* p0);
void Bird___Bird(struct Bird* p0);
int Penguin__f(struct Penguin* p0);
void Penguin___Penguin_2(struct Penguin* p0);
void Penguin___Penguin(struct Penguin* p0);

void *_ZTV10FlyingBird[] = { (void*)0, (void*)0, (void*)&Bird__f, (void*)&FlyingBird__g, (void*)&FlyingBird___FlyingBird_2, (void*)&FlyingBird___FlyingBird, (void*)&FlyingBird__fly };
void *_ZTV4Bird[] = { (void*)0, (void*)0, (void*)&Bird__f, (void*)&Bird__g, (void*)&Bird___Bird_2, (void*)&Bird___Bird };
void *_ZTV7Penguin[] = { (void*)0, (void*)0, (void*)&Penguin__f, (void*)&Bird__g, (void*)&Penguin___Penguin_2, (void*)&Penguin___Penguin };

// function: _ZN10FlyingBird3flyEv
void FlyingBird__fly(struct FlyingBird* v0) {
bb1: ;
  struct FlyingBird* this2;
  this2 = v0;
  struct FlyingBird* t3 = this2;
  return;
}

// function: _ZN4BirdC2Ev
void Bird__Bird(struct Bird* v4) {
bb5: ;
  struct Bird* this6;
  this6 = v4;
  struct Bird* t7 = this6;
  void* v8 = (void*)&_ZTV4Bird[2];
  void** v9 = (void**)t7;
  *(void**)(v9) = (void*)v8;
  return;
}

// function: _ZN10FlyingBirdC2Ev
void FlyingBird__FlyingBird(struct FlyingBird* v10) {
bb11: ;
  struct FlyingBird* this12;
  this12 = v10;
  struct FlyingBird* t13 = this12;
  struct Bird* base14 = (struct Bird*)((char *)t13 + 0);
  Bird__Bird(base14);
    void* v15 = (void*)&_ZTV10FlyingBird[2];
    void** v16 = (void**)t13;
    *(void**)(v16) = (void*)v15;
  return;
}

// function: _ZN7PenguinC2Ev
void Penguin__Penguin(struct Penguin* v17) {
bb18: ;
  struct Penguin* this19;
  this19 = v17;
  struct Penguin* t20 = this19;
  struct Bird* base21 = (struct Bird*)((char *)t20 + 0);
  Bird__Bird(base21);
    void* v22 = (void*)&_ZTV7Penguin[2];
    void** v23 = (void**)t20;
    *(void**)(v23) = (void*)v22;
  return;
}

// function: main
int main() {
bb24: ;
  int __retval25;
  struct Bird* b26;
  struct Bird* __new_result27;
  struct FlyingBird* f28;
  struct FlyingBird* __new_result29;
  struct Penguin* p30;
  struct Penguin* __new_result31;
  int c32 = 0;
  __retval25 = c32;
  unsigned long c33 = 8;
  void* r34 = operator_new(c33);
    struct Bird* cast35 = (struct Bird*)r34;
    __new_result27 = cast35;
    struct Bird c36 = {0};
    *cast35 = c36;
    Bird__Bird(cast35);
  struct Bird* t37 = __new_result27;
  b26 = t37;
  unsigned long c38 = 8;
  void* r39 = operator_new(c38);
    struct FlyingBird* cast40 = (struct FlyingBird*)r39;
    __new_result29 = cast40;
    struct FlyingBird c41 = {0};
    *cast40 = c41;
    FlyingBird__FlyingBird(cast40);
  struct FlyingBird* t42 = __new_result29;
  f28 = t42;
  unsigned long c43 = 8;
  void* r44 = operator_new(c43);
    struct Penguin* cast45 = (struct Penguin*)r44;
    __new_result31 = cast45;
    struct Penguin c46 = {0};
    *cast45 = c46;
    Penguin__Penguin(cast45);
  struct Penguin* t47 = __new_result31;
  p30 = t47;
  struct Bird* t48 = b26;
  void** v49 = (void**)t48;
  void* v50 = *((void**)v49);
  int vcall53 = (int)__VERIFIER_virtual_call_int(t48, 0);
  int c54 = 21;
  _Bool c55 = ((vcall53 == c54)) ? 1 : 0;
  if (c55) {
  } else {
    char* cast56 = (char*)&(_str);
    char* c57 = (char*)_str_1;
    unsigned int c58 = 40;
    char* cast59 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast56, c57, c58, cast59);
  }
  struct FlyingBird* t60 = f28;
  void** v61 = (void**)t60;
  void* v62 = *((void**)v61);
  int vcall65 = (int)__VERIFIER_virtual_call_int(t60, 1);
  int c66 = 42;
  _Bool c67 = ((vcall65 == c66)) ? 1 : 0;
  if (c67) {
  } else {
    char* cast68 = (char*)&(_str_2);
    char* c69 = (char*)_str_1;
    unsigned int c70 = 41;
    char* cast71 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast68, c69, c70, cast71);
  }
  struct Penguin* t72 = p30;
  struct Bird* base73 = (struct Bird*)((char *)t72 + 0);
  void** v74 = (void**)base73;
  void* v75 = *((void**)v74);
  int vcall78 = (int)__VERIFIER_virtual_call_int(base73, 1);
  int c79 = 21;
  _Bool c80 = ((vcall78 == c79)) ? 1 : 0;
  if (c80) {
  } else {
    char* cast81 = (char*)&(_str_3);
    char* c82 = (char*)_str_1;
    unsigned int c83 = 42;
    char* cast84 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast81, c82, c83, cast84);
  }
  struct Penguin* t85 = p30;
  void** v86 = (void**)t85;
  void* v87 = *((void**)v86);
  int vcall90 = (int)__VERIFIER_virtual_call_int(t85, 0);
  int c91 = 21;
  _Bool c92 = ((vcall90 == c91)) ? 1 : 0;
  if (c92) {
  } else {
    char* cast93 = (char*)&(_str_4);
    char* c94 = (char*)_str_1;
    unsigned int c95 = 43;
    char* cast96 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast93, c94, c95, cast96);
  }
  struct Bird* t97 = b26;
  struct Bird* c98 = ((void*)0);
  _Bool c99 = ((t97 != c98)) ? 1 : 0;
  if (c99) {
    void** v100 = (void**)t97;
    void* v101 = *((void**)v100);
    __VERIFIER_virtual_call_void(t97, 3);
  }
  struct FlyingBird* t104 = f28;
  struct FlyingBird* c105 = ((void*)0);
  _Bool c106 = ((t104 != c105)) ? 1 : 0;
  if (c106) {
    void** v107 = (void**)t104;
    void* v108 = *((void**)v107);
    __VERIFIER_virtual_call_void(t104, 3);
  }
  struct Penguin* t111 = p30;
  struct Penguin* c112 = ((void*)0);
  _Bool c113 = ((t111 != c112)) ? 1 : 0;
  if (c113) {
    void** v114 = (void**)t111;
    void* v115 = *((void**)v114);
    __VERIFIER_virtual_call_void(t111, 3);
  }
  int c118 = 0;
  __retval25 = c118;
  int t119 = __retval25;
  return t119;
}

// function: _ZN4Bird1fEv
int Bird__f(struct Bird* v120) {
bb121: ;
  struct Bird* this122;
  int __retval123;
  this122 = v120;
  struct Bird* t124 = this122;
  int c125 = 21;
  __retval123 = c125;
  int t126 = __retval123;
  return t126;
}

// function: _ZN10FlyingBird1gEv
int FlyingBird__g(struct FlyingBird* v127) {
bb128: ;
  struct FlyingBird* this129;
  int __retval130;
  this129 = v127;
  struct FlyingBird* t131 = this129;
  int c132 = 42;
  __retval130 = c132;
  int t133 = __retval130;
  return t133;
}

// function: _ZN10FlyingBirdD2Ev
void FlyingBird___FlyingBird_2(struct FlyingBird* v134) {
bb135: ;
  struct FlyingBird* this136;
  this136 = v134;
  struct FlyingBird* t137 = this136;
  {
    struct Bird* base138 = (struct Bird*)((char *)t137 + 0);
    Bird___Bird_2(base138);
  }
  return;
}

// function: _ZN10FlyingBirdD0Ev
void FlyingBird___FlyingBird(struct FlyingBird* v139) {
bb140: ;
  struct FlyingBird* this141;
  this141 = v139;
  struct FlyingBird* t142 = this141;
    FlyingBird___FlyingBird_2(t142);
  {
    void* cast143 = (void*)t142;
    unsigned long c144 = 8;
    operator_delete(cast143, c144);
  }
  return;
}

// function: _ZN4Bird1gEv
int Bird__g(struct Bird* v145) {
bb146: ;
  struct Bird* this147;
  int __retval148;
  this147 = v145;
  struct Bird* t149 = this147;
  int c150 = 21;
  __retval148 = c150;
  int t151 = __retval148;
  return t151;
}

// function: _ZN4BirdD2Ev
void Bird___Bird_2(struct Bird* v152) {
bb153: ;
  struct Bird* this154;
  this154 = v152;
  struct Bird* t155 = this154;
  return;
}

// function: _ZN4BirdD0Ev
void Bird___Bird(struct Bird* v156) {
bb157: ;
  struct Bird* this158;
  this158 = v156;
  struct Bird* t159 = this158;
    Bird___Bird_2(t159);
  {
    void* cast160 = (void*)t159;
    unsigned long c161 = 8;
    operator_delete(cast160, c161);
  }
  return;
}

// function: _ZN7Penguin1fEv
int Penguin__f(struct Penguin* v162) {
bb163: ;
  struct Penguin* this164;
  int __retval165;
  this164 = v162;
  struct Penguin* t166 = this164;
  int c167 = 42;
  __retval165 = c167;
  int t168 = __retval165;
  return t168;
}

// function: _ZN7PenguinD2Ev
void Penguin___Penguin_2(struct Penguin* v169) {
bb170: ;
  struct Penguin* this171;
  this171 = v169;
  struct Penguin* t172 = this171;
  {
    struct Bird* base173 = (struct Bird*)((char *)t172 + 0);
    Bird___Bird_2(base173);
  }
  return;
}

// function: _ZN7PenguinD0Ev
void Penguin___Penguin(struct Penguin* v174) {
bb175: ;
  struct Penguin* this176;
  this176 = v174;
  struct Penguin* t177 = this176;
    Penguin___Penguin_2(t177);
  {
    void* cast178 = (void*)t177;
    unsigned long c179 = 8;
    operator_delete(cast178, c179);
  }
  return;
}

