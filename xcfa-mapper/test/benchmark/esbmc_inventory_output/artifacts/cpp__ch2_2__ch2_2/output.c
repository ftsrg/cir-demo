// Struct definitions (auto-parsed)
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[27];
struct std::basic_istream<char> _ZSt3cin;
char _str_1[31];
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
  int __retval8;
  int x9;
  int y10;
  int i11;
  int power12;
  int c13 = 1;
  i11 = c13;
  int c14 = 1;
  power12 = c14;
  struct std::basic_ostream<char>* g15 = &_ZSt4cout;
  char* cast16 = (char*)_str;
  struct std::basic_ostream<char>* r17 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g15, cast16);
  struct std::basic_istream<char>* g18 = &_ZSt3cin;
  struct std::basic_istream<char>* r19 = std__istream__operator__(g18, &x9);
  struct std::basic_ostream<char>* g20 = &_ZSt4cout;
  char* cast21 = (char*)_str_1;
  struct std::basic_ostream<char>* r22 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g20, cast21);
  struct std::basic_istream<char>* g23 = &_ZSt3cin;
  struct std::basic_istream<char>* r24 = std__istream__operator__(g23, &y10);
  goto bb1;
bb1:
  goto bb2;
bb2:
  int t25 = i11;
  int t26 = y10;
  _Bool c27 = (t25 <= t26) ? 1 : 0;
  if (c27) goto bb3; else goto bb6;
bb3:
  goto bb4;
bb4:
  int t28 = x9;
  int t29 = power12;
  int b30 = t29 * t28;
  power12 = b30;
  int t31 = i11;
  int u32 = ++t31;
  i11 = u32;
  goto bb5;
bb5:
  goto bb2;
bb6:
  goto bb7;
bb7:
  struct std::basic_ostream<char>* g33 = &_ZSt4cout;
  int t34 = power12;
  struct std::basic_ostream<char>* r35 = std__ostream__operator__(g33, t34);
  void* g36 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r37 = std__ostream__operator___std__ostream_____(r35, g36);
  int c38 = 0;
  __retval8 = c38;
  int t39 = __retval8;
  return t39;
}

