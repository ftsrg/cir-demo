// Struct definitions (auto-parsed)
struct Base1 { int value; };
struct Base2 { char letter; };
struct Derived { double real; };

char _str[22] = "base1.getData() == 10";
char _str_1[113] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/inheritance_bringup/inheritance09_fail/main.cpp";
char _str_2[11] = "int main()";
char _str_3[23] = "base2.getData() == 'Z'";
char _str_4[30];
char _str_5[32];
char _str_6[25] = "derived.getReal() == 3.5";
char _str_7[25] = "base1Ptr->getData() == 7";
char _str_8[27] = "base2Ptr->getData() == 'B'";
// function: _ZN5Base1C2Ei
void Base1__Base1(struct Base1* v0, int v1) {
bb2:
  struct Base1* this3;
  int parameterValue4;
  this3 = v0;
  parameterValue4 = v1;
  struct Base1* t5 = this3;
  int t6 = parameterValue4;
  *t5->value = t6;
  return;
}

// function: _ZN5Base2C2Ec
void Base2__Base2(struct Base2* v7, char v8) {
bb9:
  struct Base2* this10;
  char characterData11;
  this10 = v7;
  characterData11 = v8;
  struct Base2* t12 = this10;
  char t13 = characterData11;
  *t12->letter = t13;
  return;
}

// function: _ZN7DerivedC2Eicd
void Derived__Derived(struct Derived* v14, int v15, char v16, double v17) {
bb18:
  struct Derived* this19;
  int integer20;
  char character21;
  double double122;
  this19 = v14;
  integer20 = v15;
  character21 = v16;
  double122 = v17;
  struct Derived* t23 = this19;
