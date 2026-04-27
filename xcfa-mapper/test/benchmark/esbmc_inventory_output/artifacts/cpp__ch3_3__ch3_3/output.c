// Struct definitions (auto-parsed)
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[48];
struct std::basic_istream<char> _ZSt3cin;
char _str_1[30] = "Volume of sphere with radius ";
char _str_2[5] = " is ";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSirsERd
struct std::basic_istream<char>* std__istream__operator__(struct std::basic_istream<char>*, double*);

// function: _ZNSolsEd
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, double);

// function: pow
double pow(double, double);

// function: _Z12sphereVolumed
double sphereVolume(double v0) {
bb1:
  double radius2;
  double __retval3;
  radius2 = v0;
  double c4 = 4;
  double c5 = 3;
  double b6 = c4 / c5;
  double c7 = 3.1415899999999999;
  double b8 = b6 * c7;
  double t9 = radius2;
  int c10 = 3;
  double cast11 = (double)c10;
  double r12 = pow(t9, cast11);
  double b13 = b8 * r12;
  __retval3 = b13;
  double t14 = __retval3;
  return t14;
}

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb15:
  int __retval16;
  double radiusValue17;
  struct std::basic_ostream<char>* g18 = &_ZSt4cout;
  char* cast19 = (char*)_str;
  struct std::basic_ostream<char>* r20 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g18, cast19);
  struct std::basic_istream<char>* g21 = &_ZSt3cin;
  struct std::basic_istream<char>* r22 = std__istream__operator__(g21, &radiusValue17);
  struct std::basic_ostream<char>* g23 = &_ZSt4cout;
  char* cast24 = (char*)_str_1;
  struct std::basic_ostream<char>* r25 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g23, cast24);
  double t26 = radiusValue17;
  struct std::basic_ostream<char>* r27 = std__ostream__operator__(r25, t26);
  char* cast28 = (char*)_str_2;
  struct std::basic_ostream<char>* r29 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r27, cast28);
  double t30 = radiusValue17;
  double r31 = sphereVolume(t30);
  struct std::basic_ostream<char>* r32 = std__ostream__operator__(r29, r31);
  void* g33 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r34 = std__ostream__operator___std__ostream_____(r32, g33);
  int c35 = 0;
  __retval16 = c35;
  int t36 = __retval16;
  return t36;
}

