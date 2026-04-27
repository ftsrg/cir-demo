// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[33] = "The original value of number is ";
char _str_1[29] = "\\0AThe new value of number is ";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _Z11cubeByValuei
int cubeByValue(int v0) {
bb1:
  int n2;
  int __retval3;
  n2 = v0;
  int t4 = n2;
  int t5 = n2;
  int b6 = t4 * t5;
  int t7 = n2;
  int b8 = b6 * t7;
  __retval3 = b8;
  int t9 = __retval3;
  return t9;
}

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb10:
  int __retval11;
  int number12;
  int c13 = 5;
  number12 = c13;
  struct std::basic_ostream<char>* g14 = &_ZSt4cout;
  char* cast15 = (char*)_str;
  struct std::basic_ostream<char>* r16 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g14, cast15);
  int t17 = number12;
  struct std::basic_ostream<char>* r18 = std__ostream__operator__(r16, t17);
  int t19 = number12;
  int r20 = cubeByValue(t19);
  number12 = r20;
  struct std::basic_ostream<char>* g21 = &_ZSt4cout;
  char* cast22 = (char*)_str_1;
  struct std::basic_ostream<char>* r23 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g21, cast22);
  int t24 = number12;
  struct std::basic_ostream<char>* r25 = std__ostream__operator__(r23, t24);
  void* g26 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r27 = std__ostream__operator___std__ostream_____(r25, g26);
  int c28 = 0;
  __retval11 = c28;
  int t29 = __retval11;
  return t29;
}

