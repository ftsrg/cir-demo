// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char _str[5] = "2593";
struct std::basic_ostream<char> _ZSt4cout;
char _str_1[39] = "The string \\222593\\22 converted to int is ";
char _str_2[35] = "\\0AThe converted value minus 593 is ";
// function: atoi
int atoi(char*);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb0:
  int __retval1;
  int i2;
  char* cast3 = (char*)_str;
  int r4 = atoi(cast3);
  i2 = r4;
  struct std::basic_ostream<char>* g5 = &_ZSt4cout;
  char* cast6 = (char*)_str_1;
  struct std::basic_ostream<char>* r7 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g5, cast6);
  int t8 = i2;
  struct std::basic_ostream<char>* r9 = std__ostream__operator__(r7, t8);
  char* cast10 = (char*)_str_2;
  struct std::basic_ostream<char>* r11 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r9, cast10);
  int t12 = i2;
  int c13 = 593;
  int b14 = t12 - c13;
  struct std::basic_ostream<char>* r15 = std__ostream__operator__(r11, b14);
  void* g16 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r17 = std__ostream__operator___std__ostream_____(r15, g16);
  int c18 = 0;
  __retval1 = c18;
  int t19 = __retval1;
  return t19;
}

