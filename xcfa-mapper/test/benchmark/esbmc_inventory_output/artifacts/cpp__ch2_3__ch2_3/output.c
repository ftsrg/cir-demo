// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[10] = "Total is ";
// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: main
int main() {
bb0:
  int __retval8;
  int y9;
  int x10;
  int total11;
  int c12 = 1;
  x10 = c12;
  int c13 = 0;
  total11 = c13;
  goto bb1;
bb1:
  goto bb2;
bb2:
  int t14 = x10;
  int c15 = 10;
  _Bool c16 = (t14 <= c15) ? 1 : 0;
  if (c16) goto bb3; else goto bb6;
bb3:
  goto bb4;
bb4:
  int t17 = x10;
  int t18 = x10;
  int b19 = t17 * t18;
  y9 = b19;
  struct std::basic_ostream<char>* g20 = &_ZSt4cout;
  int t21 = y9;
  struct std::basic_ostream<char>* r22 = std__ostream__operator__(g20, t21);
  void* g23 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r24 = std__ostream__operator___std__ostream_____(r22, g23);
  int t25 = y9;
  int t26 = total11;
  int b27 = t26 + t25;
  total11 = b27;
  int t28 = x10;
  int u29 = ++t28;
  x10 = u29;
  goto bb5;
bb5:
  goto bb2;
bb6:
  goto bb7;
bb7:
  struct std::basic_ostream<char>* g30 = &_ZSt4cout;
  char* cast31 = (char*)_str;
  struct std::basic_ostream<char>* r32 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g30, cast31);
  int t33 = total11;
  struct std::basic_ostream<char>* r34 = std__ostream__operator__(r32, t33);
  void* g35 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r36 = std__ostream__operator___std__ostream_____(r34, g35);
  int c37 = 0;
  __retval8 = c37;
  int t38 = __retval8;
  return t38;
}

