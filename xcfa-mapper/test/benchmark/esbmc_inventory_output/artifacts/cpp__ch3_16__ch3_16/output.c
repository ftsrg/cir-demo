// Struct definitions (auto-parsed)
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[37];
struct std::basic_istream<char> _ZSt3cin;
char _str_1[26] = "Volume of cube with side ";
char _str_2[5] = " is ";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSirsERd
struct std::basic_istream<char>* std__istream__operator__(struct std::basic_istream<char>*, double*);

// function: _ZNSolsEd
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, double);

// function: _Z4cubed
double cube(double v0) {
bb1:
  double side2;
  double __retval3;
  side2 = v0;
  double t4 = side2;
  double t5 = side2;
  double b6 = t4 * t5;
  double t7 = side2;
  double b8 = b6 * t7;
  __retval3 = b8;
  double t9 = __retval3;
  return t9;
}

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb10:
  int __retval11;
  double sideValue12;
  struct std::basic_ostream<char>* g13 = &_ZSt4cout;
  char* cast14 = (char*)_str;
  struct std::basic_ostream<char>* r15 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g13, cast14);
  struct std::basic_istream<char>* g16 = &_ZSt3cin;
  struct std::basic_istream<char>* r17 = std__istream__operator__(g16, &sideValue12);
  struct std::basic_ostream<char>* g18 = &_ZSt4cout;
  char* cast19 = (char*)_str_1;
  struct std::basic_ostream<char>* r20 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g18, cast19);
  double t21 = sideValue12;
  struct std::basic_ostream<char>* r22 = std__ostream__operator__(r20, t21);
  char* cast23 = (char*)_str_2;
  struct std::basic_ostream<char>* r24 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r22, cast23);
  double t25 = sideValue12;
  double r26 = cube(t25);
  struct std::basic_ostream<char>* r27 = std__ostream__operator__(r24, r26);
  void* g28 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r29 = std__ostream__operator___std__ostream_____(r27, g28);
  int c30 = 0;
  __retval11 = c30;
  int t31 = __retval11;
  return t31;
}

