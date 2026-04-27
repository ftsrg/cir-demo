// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[34];
char _str_1[37];
char _str_2[29] = "\\0AThe square of integer 7 is ";
char _str_3[30] = "\\0AThe square of double 7.5 is ";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* _ZNSolsEi(struct std::basic_ostream<char>*, int);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _Z6squarei
int _Z6squarei(int v0) {
bb1:
  int x2;
  int __retval3;
  x2 = v0;
  struct std::basic_ostream<char>* g4 = &_ZSt4cout;
  char* cast5 = (char*)_str;
  struct std::basic_ostream<char>* r6 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g4, cast5);
  int t7 = x2;
  struct std::basic_ostream<char>* r8 = _ZNSolsEi(r6, t7);
  void* g9 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r10 = std__ostream__operator___std__ostream_____(r8, g9);
  int t11 = x2;
  int t12 = x2;
  int b13 = t11 * t12;
  __retval3 = b13;
  int t14 = __retval3;
  return t14;
}

// function: _ZNSolsEd
struct std::basic_ostream<char>* _ZNSolsEd(struct std::basic_ostream<char>*, double);

// function: _Z6squared
double _Z6squared(double v15) {
bb16:
  double y17;
  double __retval18;
  y17 = v15;
  struct std::basic_ostream<char>* g19 = &_ZSt4cout;
  char* cast20 = (char*)_str_1;
  struct std::basic_ostream<char>* r21 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g19, cast20);
  double t22 = y17;
  struct std::basic_ostream<char>* r23 = _ZNSolsEd(r21, t22);
  void* g24 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r25 = std__ostream__operator___std__ostream_____(r23, g24);
  double t26 = y17;
  double t27 = y17;
  double b28 = t26 * t27;
  __retval18 = b28;
  double t29 = __retval18;
  return t29;
}

// function: main
int main() {
bb30:
  int __retval31;
  int intResult32;
  double doubleResult33;
  int c34 = 7;
  int r35 = _Z6squarei(c34);
  intResult32 = r35;
  double c36 = 7.5;
  double r37 = _Z6squared(c36);
  doubleResult33 = r37;
  struct std::basic_ostream<char>* g38 = &_ZSt4cout;
  char* cast39 = (char*)_str_2;
  struct std::basic_ostream<char>* r40 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g38, cast39);
  int t41 = intResult32;
  struct std::basic_ostream<char>* r42 = _ZNSolsEi(r40, t41);
  char* cast43 = (char*)_str_3;
  struct std::basic_ostream<char>* r44 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r42, cast43);
  double t45 = doubleResult33;
  struct std::basic_ostream<char>* r46 = _ZNSolsEd(r44, t45);
  void* g47 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r48 = std__ostream__operator___std__ostream_____(r46, g47);
  int c49 = 0;
  __retval31 = c49;
  int t50 = __retval31;
  return t50;
}

