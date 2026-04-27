// Struct definitions (auto-parsed)
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[21] = "Enter first integer\\0A";
struct std::basic_istream<char> _ZSt3cin;
char _str_1[22] = "Enter second integer\\0A";
char _str_2[8] = "Sum is ";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSirsERi
struct std::basic_istream<char>* std__istream__operator__(struct std::basic_istream<char>*, int*);

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
  int integer12;
  int integer23;
  int sum4;
  struct std::basic_ostream<char>* g5 = &_ZSt4cout;
  char* cast6 = (char*)_str;
  struct std::basic_ostream<char>* r7 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g5, cast6);
  struct std::basic_istream<char>* g8 = &_ZSt3cin;
  struct std::basic_istream<char>* r9 = std__istream__operator__(g8, &integer12);
  struct std::basic_ostream<char>* g10 = &_ZSt4cout;
  char* cast11 = (char*)_str_1;
  struct std::basic_ostream<char>* r12 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g10, cast11);
  struct std::basic_istream<char>* g13 = &_ZSt3cin;
  struct std::basic_istream<char>* r14 = std__istream__operator__(g13, &integer23);
  int t15 = integer12;
  int t16 = integer23;
  int b17 = t15 + t16;
  sum4 = b17;
  struct std::basic_ostream<char>* g18 = &_ZSt4cout;
  char* cast19 = (char*)_str_2;
  struct std::basic_ostream<char>* r20 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g18, cast19);
  int t21 = sum4;
  struct std::basic_ostream<char>* r22 = std__ostream__operator__(r20, t21);
  void* g23 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r24 = std__ostream__operator___std__ostream_____(r22, g23);
  int c25 = 0;
  __retval1 = c25;
  int t26 = __retval1;
  return t26;
}

