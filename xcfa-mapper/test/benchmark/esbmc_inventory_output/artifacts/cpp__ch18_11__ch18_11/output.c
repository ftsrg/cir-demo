// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char _str[5] = "99.0";
struct std::basic_ostream<char> _ZSt4cout;
char _str_1[42] = "The string \\2299.0\\22 converted to double is ";
char _str_2[38] = "\\0AThe converted value divided by 2 is ";
// function: atof
double atof(char*);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEd
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, double);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb0:
  int __retval1;
  double d2;
  char* cast3 = (char*)_str;
  double r4 = atof(cast3);
  d2 = r4;
  struct std::basic_ostream<char>* g5 = &_ZSt4cout;
  char* cast6 = (char*)_str_1;
  struct std::basic_ostream<char>* r7 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g5, cast6);
  double t8 = d2;
  struct std::basic_ostream<char>* r9 = std__ostream__operator__(r7, t8);
  char* cast10 = (char*)_str_2;
  struct std::basic_ostream<char>* r11 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r9, cast10);
  double t12 = d2;
  double c13 = 2;
  double b14 = t12 / c13;
  struct std::basic_ostream<char>* r15 = std__ostream__operator__(r11, b14);
  void* g16 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r17 = std__ostream__operator___std__ostream_____(r15, g16);
  int c18 = 0;
  __retval1 = c18;
  int t19 = __retval1;
  return t19;
}

