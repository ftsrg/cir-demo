// Struct definitions (auto-parsed)
struct ConstCastTest { int number; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[29];
char _str_1[26];
// function: _ZN13ConstCastTest9setNumberEi
void ConstCastTest__setNumber(struct ConstCastTest* v0, int v1) {
bb2:
  struct ConstCastTest* this3;
  int num4;
  this3 = v0;
  num4 = v1;
  struct ConstCastTest* t5 = this3;
  int t6 = num4;
  *t5->number = t6;
  return;
}

// function: _ZNK13ConstCastTest9getNumberEv
int ConstCastTest__getNumber___const(struct ConstCastTest* v7) {
bb8:
  struct ConstCastTest* this9;
  int __retval10;
  this9 = v7;
  struct ConstCastTest* t11 = this9;
  int t12 = *t11->number;
  __retval10 = t12;
  int t13 = __retval10;
  return t13;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZNK13ConstCastTest11printNumberEv
void ConstCastTest__printNumber___const(struct ConstCastTest* v14) {
bb15:
  struct ConstCastTest* this16;
  this16 = v14;
  struct ConstCastTest* t17 = this16;
  struct std::basic_ostream<char>* g18 = &_ZSt4cout;
  char* cast19 = (char*)_str;
  struct std::basic_ostream<char>* r20 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g18, cast19);
  int t21 = *t17->number;
  int u22 = --t21;
  *t17->number = u22;
  struct std::basic_ostream<char>* g23 = &_ZSt4cout;
  int t24 = *t17->number;
  struct std::basic_ostream<char>* r25 = std__ostream__operator__(g23, t24);
  void* g26 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r27 = std__ostream__operator___std__ostream_____(r25, g26);
  return;
}

// function: main
int main() {
bb28:
  int __retval29;
  struct ConstCastTest test30;
  int c31 = 8;
  ConstCastTest__setNumber(&test30, c31);
  struct std::basic_ostream<char>* g32 = &_ZSt4cout;
  char* cast33 = (char*)_str_1;
  struct std::basic_ostream<char>* r34 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g32, cast33);
  int r35 = ConstCastTest__getNumber___const(&test30);
  struct std::basic_ostream<char>* r36 = std__ostream__operator__(r34, r35);
  ConstCastTest__printNumber___const(&test30);
  int c37 = 0;
  __retval29 = c37;
  int t38 = __retval29;
  return t38;
}

