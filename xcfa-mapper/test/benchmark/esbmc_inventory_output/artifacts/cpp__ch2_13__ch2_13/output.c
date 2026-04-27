// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[8] = "Sum is ";
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
  int number7;
  int __retval8;
  int sum9;
  int c10 = 0;
  sum9 = c10;
  goto bb1;
bb1:
  int c11 = 2;
  number7 = c11;
  goto bb2;
bb2:
  int t12 = number7;
  int c13 = 100;
  _Bool c14 = (t12 <= c13) ? 1 : 0;
  if (c14) goto bb3; else goto bb5;
bb3:
  int t15 = number7;
  int t16 = sum9;
  int b17 = t16 + t15;
  sum9 = b17;
  goto bb4;
bb4:
  int c18 = 2;
  int t19 = number7;
  int b20 = t19 + c18;
  number7 = b20;
  goto bb2;
bb5:
  goto bb6;
bb6:
  struct std::basic_ostream<char>* g21 = &_ZSt4cout;
  char* cast22 = (char*)_str;
  struct std::basic_ostream<char>* r23 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g21, cast22);
  int t24 = sum9;
  struct std::basic_ostream<char>* r25 = std__ostream__operator__(r23, t24);
  void* g26 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r27 = std__ostream__operator___std__ostream_____(r25, g26);
  int c28 = 0;
  __retval8 = c28;
  int t29 = __retval8;
  return t29;
}

