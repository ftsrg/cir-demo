// Struct definitions (auto-parsed)
struct Vehicle { int data; };
struct Motorcycle { struct Vehicle __field0; };

char _str[5] = "res1";
char _str_1[113] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/inheritance_bringup/single_member_fail/main.cpp";
char _str_2[11] = "int main()";
// function: _ZN10MotorcycleC2Ev
void Motorcycle__Motorcycle(struct Motorcycle* v0) {
bb1:
  struct Motorcycle* this2;
  this2 = v0;
  struct Motorcycle* t3 = this2;
  struct Vehicle* base4 = (struct Vehicle*)((char *)t3 + 0);
  Vehicle__Vehicle(base4);
  return;
}

// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: main
int main() {
bb5:
  int __retval9;
  struct Motorcycle m10;
  _Bool res111;
  Motorcycle__Motorcycle(&m10);
  struct Vehicle* base12 = (struct Vehicle*)((char *)&m10 + 0);
  int t13 = base12->data;
  int c14 = 0;
  _Bool c15 = (t13 == c14) ? 1 : 0;
  res111 = c15;
  _Bool t16 = res111;
  if (t16) goto bb6; else goto bb7;
bb6:
  int c17 = 0;
  goto bb8;
bb7:
  char* cast18 = (char*)_str;
  char* c19 = _str_1;
  unsigned int c20 = 28;
  char* cast21 = (char*)_str_2;
  __assert_fail(cast18, c19, c20, cast21);
  goto bb8;
bb8:
  int c22 = 0;
  __retval9 = c22;
  int t23 = __retval9;
  return t23;
}

// function: _ZN7VehicleC2Ev
void Vehicle__Vehicle(struct Vehicle* v24) {
bb25:
  struct Vehicle* this26;
  this26 = v24;
  struct Vehicle* t27 = this26;
  int c28 = 1;
  t27->data = c28;
  return;
}

