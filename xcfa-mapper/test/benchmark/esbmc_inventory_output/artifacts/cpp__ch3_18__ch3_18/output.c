// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[5] = "x = ";
char _str_1[5] = "y = ";
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
  int* y3;
  int c4 = 3;
  x2 = c4;
  y3 = &x2;
  struct std::basic_ostream<char>* g5 = &_ZSt4cout;
  char* cast6 = (char*)_str;
  struct std::basic_ostream<char>* r7 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g5, cast6);
  int t8 = x2;
  struct std::basic_ostream<char>* r9 = std__ostream__operator__(r7, t8);
  void* g10 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r11 = std__ostream__operator___std__ostream_____(r9, g10);
  char* cast12 = (char*)_str_1;
  struct std::basic_ostream<char>* r13 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r11, cast12);
  int* t14 = y3;
  int t15 = *t14;
  struct std::basic_ostream<char>* r16 = std__ostream__operator__(r13, t15);
  void* g17 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r18 = std__ostream__operator___std__ostream_____(r16, g17);
  int c19 = 7;
  int* t20 = y3;
  *t20 = c19;
  struct std::basic_ostream<char>* g21 = &_ZSt4cout;
  char* cast22 = (char*)_str;
  struct std::basic_ostream<char>* r23 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g21, cast22);
  int t24 = x2;
  struct std::basic_ostream<char>* r25 = std__ostream__operator__(r23, t24);
  void* g26 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r27 = std__ostream__operator___std__ostream_____(r25, g26);
  char* cast28 = (char*)_str_1;
  struct std::basic_ostream<char>* r29 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r27, cast28);
  int* t30 = y3;
  int t31 = *t30;
  struct std::basic_ostream<char>* r32 = std__ostream__operator__(r29, t31);
  void* g33 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r34 = std__ostream__operator___std__ostream_____(r32, g33);
  int c35 = 0;
  __retval1 = c35;
  int t36 = __retval1;
  return t36;
}

