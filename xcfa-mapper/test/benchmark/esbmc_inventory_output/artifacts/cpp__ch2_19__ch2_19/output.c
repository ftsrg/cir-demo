// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[13];
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
  int sum9;
  int x10;
  int a11[2];
  int c12 = 1;
  x10 = c12;
  int c13 = 0;
  sum9 = c13;
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
  int t18 = sum9;
  int b19 = t18 + t17;
  sum9 = b19;
  int t20 = x10;
  int u21 = ++t20;
  x10 = u21;
  int c22 = 1;
  int c23 = 3;
  a11[c23] = c22;
  goto bb5;
bb5:
  goto bb2;
bb6:
  goto bb7;
bb7:
  struct std::basic_ostream<char>* g24 = &_ZSt4cout;
  char* cast25 = (char*)_str;
  struct std::basic_ostream<char>* r26 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g24, cast25);
  int t27 = sum9;
  struct std::basic_ostream<char>* r28 = std__ostream__operator__(r26, t27);
  void* g29 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r30 = std__ostream__operator___std__ostream_____(r28, g29);
  int c31 = 0;
  __retval8 = c31;
  int t32 = __retval8;
  return t32;
}

