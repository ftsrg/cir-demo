// Struct definitions (auto-parsed)
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[21];
struct std::basic_istream<char> _ZSt3cin;
char _str_1[15] = "The result is ";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSirsERi
struct std::basic_istream<char>* std__istream__operator__(struct std::basic_istream<char>*, int*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _Z7mysteryii
int mystery(int v0, int v1) {
bb2:
  int a8;
  int b9;
  int __retval10;
  a8 = v0;
  b9 = v1;
  goto bb3;
bb3:
  int t11 = b9;
  int c12 = 1;
  _Bool c13 = (t11 == c12) ? 1 : 0;
  if (c13) goto bb4; else goto bb5;
bb4:
  int t14 = a8;
  __retval10 = t14;
  int t15 = __retval10;
  return t15;
bb5:
  int t16 = a8;
  int t17 = a8;
  int t18 = b9;
  int c19 = 1;
  int b20 = t18 - c19;
  int r21 = mystery(t17, b20);
  int b22 = t16 + r21;
  __retval10 = b22;
  int t23 = __retval10;
  return t23;
bb6:
  goto bb7;
bb7:
