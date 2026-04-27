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
  t5->value = t6;
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
  t12->letter = t13;
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
  struct Base1* base24 = (struct Base1*)((char *)t23 + 0);
  int t25 = integer20;
  Base1__Base1(base24, t25);
  struct Base2* base26 = (struct Base2*)((char *)t23 + 4);
  char t27 = character21;
  Base2__Base2(base26, t27);
  double t28 = double122;
  t23->real = t28;
  return;
}

// function: _ZNK5Base17getDataEv
int Base1__getData___const(struct Base1* v29) {
bb30:
  struct Base1* this31;
  int __retval32;
  this31 = v29;
  struct Base1* t33 = this31;
  int t34 = t33->value;
  __retval32 = t34;
  int t35 = __retval32;
  return t35;
}

// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: _ZNK5Base27getDataEv
char Base2__getData___const(struct Base2* v36) {
bb37:
  struct Base2* this38;
  char __retval39;
  this38 = v36;
  struct Base2* t40 = this38;
  char t41 = t40->letter;
  __retval39 = t41;
  char t42 = __retval39;
  return t42;
}

// function: _ZNK7Derived7getRealEv
double Derived__getReal___const(struct Derived* v43) {
bb44:
  struct Derived* this45;
  double __retval46;
  this45 = v43;
  struct Derived* t47 = this45;
  double t48 = t47->real;
  __retval46 = t48;
  double t49 = __retval46;
  return t49;
}

// function: main
int main() {
bb50:
  int __retval72;
  struct Base1 base173;
  struct Base1* base1Ptr74;
  struct Base2 base275;
  struct Base2* base2Ptr76;
  struct Derived derived77;
  int c78 = 10;
  Base1__Base1(&base173, c78);
  struct Base1* c79 = NULL;
  base1Ptr74 = c79;
  char c80 = 90;
  Base2__Base2(&base275, c80);
  struct Base2* c81 = NULL;
  base2Ptr76 = c81;
  int c82 = 7;
  char c83 = 65;
  double c84 = 3.5;
  Derived__Derived(&derived77, c82, c83, c84);
  int r85 = Base1__getData___const(&base173);
  int c86 = 10;
  _Bool c87 = (r85 == c86) ? 1 : 0;
  if (c87) goto bb51; else goto bb52;
bb51:
  int c88 = 0;
  goto bb53;
bb52:
  char* cast89 = (char*)_str;
  char* c90 = _str_1;
  unsigned int c91 = 63;
  char* cast92 = (char*)_str_2;
  __assert_fail(cast89, c90, c91, cast92);
  goto bb53;
bb53:
  char r93 = Base2__getData___const(&base275);
  int cast94 = (int)r93;
  char c95 = 90;
  int cast96 = (int)c95;
  _Bool c97 = (cast94 == cast96) ? 1 : 0;
  if (c97) goto bb54; else goto bb55;
bb54:
  int c98 = 0;
  goto bb56;
bb55:
  char* cast99 = (char*)_str_3;
  char* c100 = _str_1;
  unsigned int c101 = 64;
  char* cast102 = (char*)_str_2;
  __assert_fail(cast99, c100, c101, cast102);
  goto bb56;
bb56:
  struct Base1* base103 = (struct Base1*)((char *)&derived77 + 0);
  int r104 = Base1__getData___const(base103);
  int c105 = 7;
  _Bool c106 = (r104 == c105) ? 1 : 0;
  if (c106) goto bb57; else goto bb58;
bb57:
  int c107 = 0;
  goto bb59;
bb58:
  char* cast108 = (char*)_str_4;
  char* c109 = _str_1;
  unsigned int c110 = 66;
  char* cast111 = (char*)_str_2;
  __assert_fail(cast108, c109, c110, cast111);
  goto bb59;
bb59:
  struct Base2* base112 = (struct Base2*)((char *)&derived77 + 4);
  char r113 = Base2__getData___const(base112);
  int cast114 = (int)r113;
  char c115 = 65;
  int cast116 = (int)c115;
  _Bool c117 = (cast114 == cast116) ? 1 : 0;
  if (c117) goto bb60; else goto bb61;
bb60:
  int c118 = 0;
  goto bb62;
bb61:
  char* cast119 = (char*)_str_5;
  char* c120 = _str_1;
  unsigned int c121 = 67;
  char* cast122 = (char*)_str_2;
  __assert_fail(cast119, c120, c121, cast122);
  goto bb62;
bb62:
  double r123 = Derived__getReal___const(&derived77);
  double c124 = 3.5;
  _Bool c125 = (r123 == c124) ? 1 : 0;
  if (c125) goto bb63; else goto bb64;
bb63:
  int c126 = 0;
  goto bb65;
bb64:
  char* cast127 = (char*)_str_6;
  char* c128 = _str_1;
  unsigned int c129 = 68;
  char* cast130 = (char*)_str_2;
  __assert_fail(cast127, c128, c129, cast130);
  goto bb65;
bb65:
  struct Base1* base131 = (struct Base1*)((char *)&derived77 + 0);
  base1Ptr74 = base131;
  struct Base1* t132 = base1Ptr74;
  int r133 = Base1__getData___const(t132);
  int c134 = 7;
  _Bool c135 = (r133 == c134) ? 1 : 0;
  if (c135) goto bb66; else goto bb67;
bb66:
  int c136 = 0;
  goto bb68;
bb67:
  char* cast137 = (char*)_str_7;
  char* c138 = _str_1;
  unsigned int c139 = 71;
  char* cast140 = (char*)_str_2;
  __assert_fail(cast137, c138, c139, cast140);
  goto bb68;
bb68:
  struct Base2* base141 = ((&derived77) ? (struct Base2*)((char *)&derived77 + 4) : (struct Base2*)0);
  base2Ptr76 = base141;
  struct Base2* t142 = base2Ptr76;
  char r143 = Base2__getData___const(t142);
  int cast144 = (int)r143;
  char c145 = 66;
  int cast146 = (int)c145;
  _Bool c147 = (cast144 == cast146) ? 1 : 0;
  if (c147) goto bb69; else goto bb70;
bb69:
  int c148 = 0;
  goto bb71;
bb70:
  char* cast149 = (char*)_str_8;
  char* c150 = _str_1;
  unsigned int c151 = 74;
  char* cast152 = (char*)_str_2;
  __assert_fail(cast149, c150, c151, cast152);
  goto bb71;
bb71:
  int c153 = 0;
  __retval72 = c153;
  int t154 = __retval72;
  return t154;
}

