// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[29] = "function1 takes no arguments";
char _str_1[34] = "function2 also takes no arguments";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _Z9function1v
void function1() {
bb0:
  struct std::basic_ostream<char>* g1 = &_ZSt4cout;
  char* cast2 = (char*)_str;
  struct std::basic_ostream<char>* r3 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g1, cast2);
  void* g4 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r5 = std__ostream__operator___std__ostream_____(r3, g4);
  return;
}

// function: _Z9function2v
void function2() {
bb6:
  struct std::basic_ostream<char>* g7 = &_ZSt4cout;
  char* cast8 = (char*)_str_1;
  struct std::basic_ostream<char>* r9 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g7, cast8);
  void* g10 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r11 = std__ostream__operator___std__ostream_____(r9, g10);
  return;
}

// function: main
int main() {
bb12:
  int __retval13;
  function1();
  function2();
  int c14 = 0;
  __retval13 = c14;
  int t15 = __retval13;
  return t15;
}

