// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char _str[8] = "1000000";
struct std::basic_ostream<char> _ZSt4cout;
char _str_1[43] = "The string \\221000000\\22 converted to long is ";
char _str_2[38] = "\\0AThe converted value divided by 2 is ";
// function: atol
long long atol(char*);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEl
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, long long);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb0:
  int __retval1;
  long long x2;
  char* cast3 = (char*)_str;
  long long r4 = atol(cast3);
  x2 = r4;
  struct std::basic_ostream<char>* g5 = &_ZSt4cout;
  char* cast6 = (char*)_str_1;
  struct std::basic_ostream<char>* r7 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g5, cast6);
  long long t8 = x2;
  struct std::basic_ostream<char>* r9 = std__ostream__operator__(r7, t8);
  char* cast10 = (char*)_str_2;
  struct std::basic_ostream<char>* r11 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r9, cast10);
  long long t12 = x2;
  int c13 = 2;
  long long cast14 = (long long)c13;
  long long b15 = t12 / cast14;
  struct std::basic_ostream<char>* r16 = std__ostream__operator__(r11, b15);
  void* g17 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r18 = std__ostream__operator___std__ostream_____(r16, g17);
  int c19 = 0;
  __retval1 = c19;
  int t20 = __retval1;
  return t20;
}

