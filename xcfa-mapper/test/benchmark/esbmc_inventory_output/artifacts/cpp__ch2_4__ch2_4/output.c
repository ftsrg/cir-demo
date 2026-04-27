// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[5] = "****";
char _str_1[9] = "++++++++";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb0:
  int __retval8;
  int count9;
  int c10 = 1;
  count9 = c10;
  goto bb1;
bb1:
  goto bb2;
bb2:
  int t11 = count9;
  int c12 = 10;
  _Bool c13 = (t11 <= c12) ? 1 : 0;
  if (c13) goto bb3; else goto bb6;
bb3:
  goto bb4;
bb4:
  struct std::basic_ostream<char>* g14 = &_ZSt4cout;
  int t15 = count9;
  int c16 = 2;
  int b17 = t15 % c16;
  _Bool cast18 = (_Bool)b17;
  char* cast19 = (char*)_str;
  char* cast20 = (char*)_str_1;
  char* sel21 = cast18 ? cast19 : cast20;
  struct std::basic_ostream<char>* r22 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g14, sel21);
  void* g23 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r24 = std__ostream__operator___std__ostream_____(r22, g23);
  int t25 = count9;
  int u26 = ++t25;
  count9 = u26;
  goto bb5;
bb5:
  goto bb2;
bb6:
  goto bb7;
bb7:
  int c27 = 0;
  __retval8 = c27;
  int t28 = __retval8;
  return t28;
}

