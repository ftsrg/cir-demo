// Struct definitions (auto-parsed)
struct A_Aint_ { unsigned char __field0; };
struct Aint { unsigned char __field0; };

int _ZL5count __attribute__((aligned(4))) = 0;
char _str[19] = "0 == ( count != 1)";
char _str_1[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/gcc-template-tests/new1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
void Aint__Aint_2(struct Aint* p0);
void Aint__Aint(struct Aint* p0) { Aint__Aint_2(p0); }
void Aint___Aint_2(struct Aint* p0);
void Aint___Aint(struct Aint* p0) { Aint___Aint_2(p0); }
unsigned int A_Aint___Blksize___const(struct A_Aint_* p0);
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new__(unsigned long p0) { return malloc(p0); }
void operator_delete__(void* p0, unsigned long p1) { free(p0); }
void A_Aint___f(struct A_Aint_* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: _ZN4AintC2Ev
void Aint__Aint_2(struct Aint* v0) {
bb1:
  struct Aint* this2;
  this2 = v0;
  struct Aint* t3 = this2;
  return;
}

// function: _ZN4AintD2Ev
void Aint___Aint_2(struct Aint* v4) {
bb5:
  struct Aint* this6;
  this6 = v4;
  struct Aint* t7 = this6;
  return;
}

// function: _ZNK1AI4AintE7BlksizeEv
unsigned int A_Aint___Blksize___const(struct A_Aint_* v8) {
bb9:
  struct A_Aint_* this10;
  unsigned int __retval11;
  this10 = v8;
  struct A_Aint_* t12 = this10;
  int t13 = _ZL5count;
  int u14 = t13 + 1;
  *&_ZL5count = u14;
  unsigned int c15 = 1;
  __retval11 = c15;
  unsigned int t16 = __retval11;
  return t16;
}

// function: _ZN1AI4AintE1fEv
void A_Aint___f(struct A_Aint_* v17) {
bb18:
  struct A_Aint_* this19;
  struct Aint* __new_result20;
  this19 = v17;
  struct A_Aint_* t21 = this19;
  unsigned int r22 = A_Aint___Blksize___const(t21);
  unsigned long cast23 = (unsigned long)r22;
  unsigned long c24 = 8;
  unsigned long ovr25;
  _Bool ovf26 = __builtin_add_overflow(cast23, c24, &ovr25);
  unsigned long c27 = -1;
  unsigned long sel28 = ovf26 ? c27 : ovr25;
  void* r29 = operator_new__(sel28);
    unsigned char* cast30 = (unsigned char*)r29;
    unsigned long* cast31 = (unsigned long*)cast30;
    *cast31 = cast23;
    int c32 = 8;
    unsigned char* ptr33 = &(cast30)[c32];
    void* cast34 = (void*)ptr33;
    struct Aint* cast35 = (struct Aint*)cast34;
    __new_result20 = cast35;
    struct Aint* cast36 = (struct Aint*)cast35;
    struct Aint* cast37 = (struct Aint*)cast36;
    struct Aint* ptr38 = &(cast37)[cast23];
    unsigned long c39 = 0;
    _Bool c40 = ((cast23 != c39)) ? 1 : 0;
    if (c40) {
      struct Aint* __array_idx41;
      __array_idx41 = cast37;
        do {
          struct Aint* t42 = __array_idx41;
          Aint__Aint(t42);
          unsigned long c43 = 1;
          struct Aint* ptr44 = &(t42)[c43];
          __array_idx41 = ptr44;
          struct Aint* t45 = __array_idx41;
          _Bool c46 = ((t45 != ptr38)) ? 1 : 0;
          if (!c46) break;
        } while (1);
    }
  struct Aint* t47 = __new_result20;
  return;
}

// function: main
int main() {
bb48:
  int __retval49;
  struct A_Aint_ a50;
  int c51 = 0;
  __retval49 = c51;
  A_Aint___f(&a50);
  int c52 = 0;
  int t53 = _ZL5count;
  int c54 = 1;
  _Bool c55 = ((t53 != c54)) ? 1 : 0;
  int cast56 = (int)c55;
  _Bool c57 = ((c52 == cast56)) ? 1 : 0;
  if (c57) {
  } else {
    char* cast58 = (char*)&(_str);
    char* c59 = _str_1;
    unsigned int c60 = 52;
    char* cast61 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast58, c59, c60, cast61);
  }
  int t62 = __retval49;
  return t62;
}

