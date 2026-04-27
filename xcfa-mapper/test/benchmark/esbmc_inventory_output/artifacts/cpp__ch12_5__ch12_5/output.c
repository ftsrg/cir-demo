// Struct definitions (auto-parsed)
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[18];
struct std::basic_istream<char> _ZSt3cin;
char _str_1[26];
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZNSi4readEPcl
struct std::basic_istream<char>* std__istream__read(struct std::basic_istream<char>*, char*, long long);

// function: _ZNSo5writeEPKcl
struct std::basic_ostream<char>* std__ostream__write(struct std::basic_ostream<char>*, char*, long long);

// function: _ZNKSi6gcountEv
long long std__istream__gcount___const(struct std::basic_istream<char>*);

// function: main
int main() {
bb0:
  int __retval1;
  int SIZE2;
  int buffer3[80];
  int c4 = 80;
  SIZE2 = c4;
  struct std::basic_ostream<char>* g5 = &_ZSt4cout;
  char* cast6 = (char*)_str;
  struct std::basic_ostream<char>* r7 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g5, cast6);
  void* g8 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r9 = std__ostream__operator___std__ostream_____(r7, g8);
  struct std::basic_istream<char>* g10 = &_ZSt3cin;
  char* cast11 = (char*)buffer3;
  int c12 = 20;
  long long cast13 = (long long)c12;
  struct std::basic_istream<char>* r14 = std__istream__read(g10, cast11, cast13);
  struct std::basic_ostream<char>* g15 = &_ZSt4cout;
  void* g16 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r17 = std__ostream__operator___std__ostream_____(g15, g16);
  char* cast18 = (char*)_str_1;
  struct std::basic_ostream<char>* r19 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r17, cast18);
  void* g20 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r21 = std__ostream__operator___std__ostream_____(r19, g20);
  struct std::basic_ostream<char>* g22 = &_ZSt4cout;
  char* cast23 = (char*)buffer3;
  struct std::basic_istream<char>* g24 = &_ZSt3cin;
  long long r25 = std__istream__gcount___const(g24);
  struct std::basic_ostream<char>* r26 = std__ostream__write(g22, cast23, r25);
  struct std::basic_ostream<char>* g27 = &_ZSt4cout;
  void* g28 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r29 = std__ostream__operator___std__ostream_____(g27, g28);
  int c30 = 0;
  __retval1 = c30;
  int t31 = __retval1;
  return t31;
}

