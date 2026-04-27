// Struct definitions (auto-parsed)
struct std::_Setprecision { int _M_n; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[29] = "  Local float value of PI = ";
char _str_1[30] = "\\0AGlobal double value of PI = ";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std::basic_ostream<char>*, struct std::_Setprecision);

// function: _ZSt12setprecisioni
struct std::_Setprecision std__setprecision(int v0) {
bb1:
  int __n2;
  struct std::_Setprecision __retval3;
  __n2 = v0;
  int t4 = __n2;
  __retval3._M_n = t4;
  struct std::_Setprecision t5 = __retval3;
  return t5;
}

// function: _ZNSolsEf
struct std::basic_ostream<char>* _ZNSolsEf(struct std::basic_ostream<char>*, float);

// function: _ZNSolsEd
struct std::basic_ostream<char>* _ZNSolsEd(struct std::basic_ostream<char>*, double);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb6:
  int __retval7;
  float PI8;
  struct std::_Setprecision agg.tmp09;
  double c10 = 3.14159265358979;
  float cast11 = (float)c10;
  PI8 = cast11;
  struct std::basic_ostream<char>* g12 = &_ZSt4cout;
  int c13 = 20;
  struct std::_Setprecision r14 = std__setprecision(c13);
  agg.tmp09 = r14;
  struct std::_Setprecision t15 = agg.tmp09;
  struct std::basic_ostream<char>* r16 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(g12, t15);
  char* cast17 = (char*)_str;
  struct std::basic_ostream<char>* r18 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r16, cast17);
  float c19 = 3.14159274;
  struct std::basic_ostream<char>* r20 = _ZNSolsEf(r18, c19);
  char* cast21 = (char*)_str_1;
  struct std::basic_ostream<char>* r22 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r20, cast21);
  double c23 = 3.14159265358979;
  struct std::basic_ostream<char>* r24 = _ZNSolsEd(r22, c23);
  void* g25 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r26 = std__ostream__operator___std__ostream_____(r24, g25);
  int c27 = 0;
  __retval7 = c27;
  int t28 = __retval7;
  return t28;
}

