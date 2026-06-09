// Struct definitions (auto-parsed)
struct A { int i; };
struct B_bool_ { struct A __field0; _Bool b; unsigned char __field2[3]; } __attribute__((packed));
struct B_int_ { struct A __field0; int t; };

struct B_int_ b1 __attribute__((aligned(4)));
char _str[11] = "b1.t == 20";
char _str_1[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cbmc/Templates20/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[13] = "b2.b == true";
void B_int___B(struct B_int_* p0);
void __cxx_global_var_init();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void B_bool___B(struct B_bool_* p0);
int main();
void A__A(struct A* p0);
__attribute__((constructor)) void _GLOBAL__sub_I_main_cpp();

// function: _ZN1BIiEC2Ev
void B_int___B(struct B_int_* v0) {
bb1:
  struct B_int_* this2;
  this2 = v0;
  struct B_int_* t3 = this2;
  struct A* base4 = (struct A*)((char *)t3 + 0);
  A__A(base4);
  return;
}

// function: __cxx_global_var_init
void __cxx_global_var_init() {
bb5:
  B_int___B(&b1);
  return;
}

// function: _ZN1BIbEC2Ev
void B_bool___B(struct B_bool_* v6) {
bb7:
  struct B_bool_* this8;
  this8 = v6;
  struct B_bool_* t9 = this8;
  struct A* base10 = (struct A*)((char *)t9 + 0);
  A__A(base10);
  _Bool c11 = 1;
  t9->b = c11;
  return;
}

// function: main
int main() {
bb12:
  int __retval13;
  struct B_bool_ b214;
  int c15 = 0;
  __retval13 = c15;
  int c16 = 20;
  (&b1)->t = c16;
  int t17 = (&b1)->t;
  int c18 = 20;
  _Bool c19 = ((t17 == c18)) ? 1 : 0;
  if (c19) {
  } else {
    char* cast20 = (char*)&(_str);
    char* c21 = _str_1;
    unsigned int c22 = 51;
    char* cast23 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast20, c21, c22, cast23);
  }
  B_bool___B(&b214);
  _Bool t24 = b214.b;
  int cast25 = (int)t24;
  _Bool c26 = 1;
  int cast27 = (int)c26;
  _Bool c28 = ((cast25 == cast27)) ? 1 : 0;
  if (c28) {
  } else {
    char* cast29 = (char*)&(_str_2);
    char* c30 = _str_1;
    unsigned int c31 = 53;
    char* cast32 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast29, c30, c31, cast32);
  }
  int t33 = __retval13;
  return t33;
}

// function: _ZN1AC2Ev
void A__A(struct A* v34) {
bb35:
  struct A* this36;
  this36 = v34;
  struct A* t37 = this36;
  int c38 = 10;
  t37->i = c38;
  return;
}

// function: _GLOBAL__sub_I_main.cpp
__attribute__((constructor)) void _GLOBAL__sub_I_main_cpp() {
bb39:
  __cxx_global_var_init();
  return;
}

