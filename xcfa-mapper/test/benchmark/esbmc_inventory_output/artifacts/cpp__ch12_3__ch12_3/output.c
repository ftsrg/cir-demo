// Struct definitions (auto-parsed)
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[18];
struct std::basic_istream<char> _ZSt3cin;
char _str_1[31];
char _str_2[34];
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZSt17__istream_extractRSiPcl
void std____istream_extract(struct std::basic_istream<char>*, char*, long long);

// function: _ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_PS3_
struct std::basic_istream<char>* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(struct std::basic_istream<char>* v0, char* v1) {
bb2:
  long long __n5;
  int __in6[8];
  char* __s7;
  int __retval8[8];
  __in6 = v0;
  __s7 = v1;
  goto bb3;
bb3:
  long long c9 = 9223372036854775807;
  __n5 = c9;
  unsigned long long c10 = 1;
  long long t11 = __n5;
  unsigned long long cast12 = (unsigned long long)t11;
  unsigned long long b13 = cast12 / c10;
  long long cast14 = (long long)b13;
  __n5 = cast14;
  struct std::basic_istream<char>* t15 = __in6;
  char* t16 = __s7;
  long long t17 = __n5;
  std____istream_extract(t15, t16, t17);
  goto bb4;
bb4:
  struct std::basic_istream<char>* t18 = __in6;
  __retval8 = t18;
  struct std::basic_istream<char>* t19 = __retval8;
  return t19;
}

// function: _ZNSi3getEPcl
struct std::basic_istream<char>* std__istream__get(struct std::basic_istream<char>*, char*, long long);

// function: main
int main() {
bb20:
  int __retval21;
  int SIZE22;
  int buffer123[80];
  int buffer224[80];
  int c25 = 80;
  SIZE22 = c25;
  struct std::basic_ostream<char>* g26 = &_ZSt4cout;
  char* cast27 = (char*)_str;
  struct std::basic_ostream<char>* r28 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g26, cast27);
  void* g29 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r30 = std__ostream__operator___std__ostream_____(r28, g29);
  struct std::basic_istream<char>* g31 = &_ZSt3cin;
  char* cast32 = (char*)buffer123;
  struct std::basic_istream<char>* r33 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(g31, cast32);
  struct std::basic_ostream<char>* g34 = &_ZSt4cout;
  char* cast35 = (char*)_str_1;
  struct std::basic_ostream<char>* r36 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g34, cast35);
  void* g37 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r38 = std__ostream__operator___std__ostream_____(r36, g37);
  char* cast39 = (char*)buffer123;
  struct std::basic_ostream<char>* r40 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r38, cast39);
  void* g41 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r42 = std__ostream__operator___std__ostream_____(r40, g41);
  void* g43 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r44 = std__ostream__operator___std__ostream_____(r42, g43);
  struct std::basic_istream<char>* g45 = &_ZSt3cin;
  char* cast46 = (char*)buffer224;
  int c47 = 80;
  long long cast48 = (long long)c47;
  struct std::basic_istream<char>* r49 = std__istream__get(g45, cast46, cast48);
  struct std::basic_ostream<char>* g50 = &_ZSt4cout;
  char* cast51 = (char*)_str_2;
  struct std::basic_ostream<char>* r52 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g50, cast51);
  void* g53 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r54 = std__ostream__operator___std__ostream_____(r52, g53);
  char* cast55 = (char*)buffer224;
  struct std::basic_ostream<char>* r56 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r54, cast55);
  void* g57 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r58 = std__ostream__operator___std__ostream_____(r56, g57);
  int c59 = 0;
  __retval21 = c59;
  int t60 = __retval21;
  return t60;
}

