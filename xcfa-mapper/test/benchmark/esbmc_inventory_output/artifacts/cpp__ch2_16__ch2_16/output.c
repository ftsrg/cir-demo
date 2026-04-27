// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[3] = "  ";
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
  int __retval8;
  int counter9;
  int c10 = 1;
  counter9 = c10;
  goto bb1;
bb1:
  goto bb3;
bb2:
  int t11 = counter9;
  int u12 = ++t11;
  counter9 = u12;
  int c13 = 10;
  _Bool c14 = (u12 <= c13) ? 1 : 0;
  if (c14) goto bb3; else goto bb6;
bb3:
  goto bb4;
bb4:
  struct std::basic_ostream<char>* g15 = &_ZSt4cout;
  int t16 = counter9;
  struct std::basic_ostream<char>* r17 = std__ostream__operator__(g15, t16);
  char* cast18 = (char*)_str;
  struct std::basic_ostream<char>* r19 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r17, cast18);
  goto bb5;
bb5:
  goto bb2;
bb6:
  goto bb7;
bb7:
  struct std::basic_ostream<char>* g20 = &_ZSt4cout;
  void* g21 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r22 = std__ostream__operator___std__ostream_____(g20, g21);
  int c23 = 0;
  __retval8 = c23;
  int t24 = __retval8;
  return t24;
}

