// Struct definitions (auto-parsed)
struct Vehicle { int data; };
struct Motorcycle { struct Vehicle __field0; };

char _str[5] = "res1";
char _str_1[126] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/inheritance_bringup/single_member_fail/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
void Motorcycle__Motorcycle(struct Motorcycle* p0);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();
void Vehicle__Vehicle(struct Vehicle* p0);

// function: _ZN10MotorcycleC2Ev
void Motorcycle__Motorcycle(struct Motorcycle* v0) {
bb1: ;
  struct Motorcycle* this2;
  this2 = v0;
  struct Motorcycle* t3 = this2;
  struct Vehicle* base4 = (struct Vehicle*)((char *)t3 + 0);
  Vehicle__Vehicle(base4);
  return;
}

// function: main
int main() {
bb5: ;
  int __retval6;
  struct Motorcycle m7;
  _Bool res18;
  int c9 = 0;
  __retval6 = c9;
  Motorcycle__Motorcycle(&m7);
  struct Vehicle* base10 = (struct Vehicle*)((char *)&(m7) + 0);
  int t11 = base10->data;
  int c12 = 0;
  _Bool c13 = ((t11 == c12)) ? 1 : 0;
  res18 = c13;
  _Bool t14 = res18;
  if (t14) {
  } else {
    char* cast15 = (char*)&(_str);
    char* c16 = (char*)_str_1;
    unsigned int c17 = 28;
    char* cast18 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast15, c16, c17, cast18);
  }
  int c19 = 0;
  __retval6 = c19;
  int t20 = __retval6;
  return t20;
}

// function: _ZN7VehicleC2Ev
void Vehicle__Vehicle(struct Vehicle* v21) {
bb22: ;
  struct Vehicle* this23;
  this23 = v21;
  struct Vehicle* t24 = this23;
  int c25 = 1;
  t24->data = c25;
  return;
}

