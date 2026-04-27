// Struct definitions (auto-parsed)
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[39];
struct std::basic_istream<char> _ZSt3cin;
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: _ZNSirsERi
struct std::basic_istream<char>* std__istream__operator__(struct std::basic_istream<char>*, int*);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb0:
  int i15;
  int j16;
  int __retval17;
  int x18;
  int y19;
  struct std::basic_ostream<char>* g20 = &_ZSt4cout;
  char* cast21 = (char*)_str;
  struct std::basic_ostream<char>* r22 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g20, cast21);
  struct std::basic_istream<char>* g23 = &_ZSt3cin;
  struct std::basic_istream<char>* r24 = std__istream__operator__(g23, &x18);
  struct std::basic_istream<char>* r25 = std__istream__operator__(r24, &y19);
  goto bb1;
bb1:
  int c26 = 1;
  i15 = c26;
  goto bb2;
bb2:
  int t27 = i15;
  int t28 = y19;
  _Bool c29 = (t27 <= t28) ? 1 : 0;
  if (c29) goto bb3; else goto bb13;
bb3:
  goto bb4;
bb4:
  goto bb5;
bb5:
  int c30 = 1;
  j16 = c30;
  goto bb6;
bb6:
  int t31 = j16;
  int t32 = x18;
  _Bool c33 = (t31 <= t32) ? 1 : 0;
  if (c33) goto bb7; else goto bb9;
bb7:
  struct std::basic_ostream<char>* g34 = &_ZSt4cout;
  char c35 = 64;
  struct std::basic_ostream<char>* r36 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(g34, c35);
  goto bb8;
bb8:
  int t37 = j16;
  int u38 = ++t37;
  j16 = u38;
  goto bb6;
bb9:
  goto bb10;
bb10:
  struct std::basic_ostream<char>* g39 = &_ZSt4cout;
  void* g40 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r41 = std__ostream__operator___std__ostream_____(g39, g40);
  goto bb11;
bb11:
  goto bb12;
bb12:
  int t42 = i15;
  int u43 = ++t42;
  i15 = u43;
  goto bb2;
bb13:
  goto bb14;
bb14:
  int c44 = 0;
  __retval17 = c44;
  int t45 = __retval17;
  return t45;
}

