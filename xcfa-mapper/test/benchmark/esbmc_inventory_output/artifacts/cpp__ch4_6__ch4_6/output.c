// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[38];
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
  int x2;
  int c3 = 7;
  x2 = c3;
  struct std::basic_ostream<char>* g4 = &_ZSt4cout;
  char* cast5 = (char*)_str;
  struct std::basic_ostream<char>* r6 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g4, cast5);
  int c7 = 7;
  struct std::basic_ostream<char>* r8 = std__ostream__operator__(r6, c7);
  void* g9 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r10 = std__ostream__operator___std__ostream_____(r8, g9);
  int c11 = 0;
  __retval1 = c11;
  int t12 = __retval1;
  return t12;
}

