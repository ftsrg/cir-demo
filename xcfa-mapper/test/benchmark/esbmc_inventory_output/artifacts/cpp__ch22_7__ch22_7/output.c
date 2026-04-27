// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb0:
  int __retval1;
  int x2;
  int* ptr3;
  int c4 = 120;
  x2 = c4;
  ptr3 = &x2;
  struct std::basic_ostream<char>* g5 = &_ZSt4cout;
  int* t6 = ptr3;
  char* cast7 = (char*)t6;
  char t8 = *cast7;
  struct std::basic_ostream<char>* r9 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g5, t8);
  void* g10 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r11 = std__ostream__operator___std__ostream_____(r9, g10);
  int c12 = 0;
  __retval1 = c12;
  int t13 = __retval1;
  return t13;
}

