// Struct definitions (auto-parsed)
struct Base1 { int value; };
struct Base2 { char letter; };
struct Derived { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[31] = "Object base1 contains integer ";
char _str_1[34] = "\\0AObject base2 contains character ";
char _str_2[27];
char _str_3[3] = "\\0A\\0A";
char _str_4[31] = "Data members of Derived can be";
char _str_5[24];
char _str_6[15];
char _str_7[15];
char _str_8[15];
char _str_9[30] = "Derived can be treated as an ";
char _str_10[30];
char _str_11[28] = "base1Ptr->getData() yields ";
char _str_12[28] = "base2Ptr->getData() yields ";
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

// function: _ZN7DerivedC1Eicd
void Derived__Derived(struct Derived*, int, char, double);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: _ZlsRSoRK7Derived
struct std::basic_ostream<char>* operator__(struct std::basic_ostream<char>*, struct Derived*);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: _ZNSolsEi
struct std::basic_ostream<char>* _ZNSolsEi(struct std::basic_ostream<char>*, int);

// function: _ZNK5Base17getDataEv
int Base1__getData___const(struct Base1* v14) {
bb15:
  struct Base1* this16;
  int __retval17;
  this16 = v14;
  struct Base1* t18 = this16;
  int t19 = *t18->value;
  __retval17 = t19;
  int t20 = __retval17;
  return t20;
}

// function: _ZNK5Base27getDataEv
char Base2__getData___const(struct Base2* v21) {
bb22:
  struct Base2* this23;
  char __retval24;
  this23 = v21;
  struct Base2* t25 = this23;
  char t26 = *t25->letter;
  __retval24 = t26;
  char t27 = __retval24;
  return t27;
}

// function: _ZNSolsEd
struct std::basic_ostream<char>* _ZNSolsEd(struct std::basic_ostream<char>*, double);

// function: _ZNK7Derived7getRealEv
double Derived__getReal___const(struct Derived*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb28:
  int __retval29;
  struct Base1 base130;
  struct Base1* base1Ptr31;
  struct Base2 base232;
  struct Base2* base2Ptr33;
  struct Derived derived34;
  int c35 = 10;
  Base1__Base1(&base130, c35);
  struct Base1* c36 = NULL;
  base1Ptr31 = c36;
  char c37 = 90;
  Base2__Base2(&base232, c37);
  struct Base2* c38 = NULL;
  base2Ptr33 = c38;
  int c39 = 7;
  char c40 = 65;
  double c41 = 3.5;
  Derived__Derived(&derived34, c39, c40, c41);
  struct std::basic_ostream<char>* g42 = &_ZSt4cout;
  char* cast43 = (char*)_str;
  struct std::basic_ostream<char>* r44 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g42, cast43);
  int r45 = Base1__getData___const(&base130);
  struct std::basic_ostream<char>* r46 = _ZNSolsEi(r44, r45);
  char* cast47 = (char*)_str_1;
  struct std::basic_ostream<char>* r48 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r46, cast47);
  char r49 = Base2__getData___const(&base232);
  struct std::basic_ostream<char>* r50 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r48, r49);
  char* cast51 = (char*)_str_2;
  struct std::basic_ostream<char>* r52 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r50, cast51);
  struct std::basic_ostream<char>* r53 = operator__(r52, &derived34);
  char* cast54 = (char*)_str_3;
  struct std::basic_ostream<char>* r55 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r53, cast54);
  struct std::basic_ostream<char>* g56 = &_ZSt4cout;
  char* cast57 = (char*)_str_4;
  struct std::basic_ostream<char>* r58 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g56, cast57);
  char* cast59 = (char*)_str_5;
  struct std::basic_ostream<char>* r60 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r58, cast59);
  char* cast61 = (char*)_str_6;
  struct std::basic_ostream<char>* r62 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r60, cast61);
