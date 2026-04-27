// Struct definitions (auto-parsed)
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[39];
struct std::basic_istream<char> _ZSt3cin;
char _str_1[20] = " is a multiple of X";
char _str_2[24] = " is not a multiple of X";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSirsERi
struct std::basic_istream<char>* std__istream__operator__(struct std::basic_istream<char>*, int*);

// function: _Z8multiplei
_Bool multiple(int v0) {
bb1:
  int i12;
  int mask13;
  int num14;
  _Bool __retval15;
  _Bool mult16;
  num14 = v0;
  _Bool c17 = 1;
  mult16 = c17;
  goto bb2;
bb2:
  int c18 = 0;
  i12 = c18;
  int c19 = 1;
  mask13 = c19;
  goto bb3;
bb3:
  int t20 = i12;
  int c21 = 10;
  _Bool c22 = (t20 < c21) ? 1 : 0;
  if (c22) goto bb4; else goto bb10;
bb4:
  goto bb5;
bb5:
  int t23 = num14;
  int t24 = mask13;
  int b25 = t23 & t24;
  int c26 = 0;
  _Bool c27 = (b25 != c26) ? 1 : 0;
  if (c27) goto bb6; else goto bb7;
bb6:
  _Bool c28 = 0;
  mult16 = c28;
  goto bb10;
bb7:
  goto bb8;
bb8:
  goto bb9;
bb9:
  int t29 = i12;
  int u30 = ++t29;
  i12 = u30;
  int c31 = 1;
  int t32 = mask13;
  int s33 = t32 << c31;
  mask13 = s33;
  goto bb3;
bb10:
  goto bb11;
bb11:
  _Bool t34 = mult16;
  __retval15 = t34;
  _Bool t35 = __retval15;
  return t35;
}

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb36:
  int __retval42;
  int y43;
  struct std::basic_ostream<char>* g44 = &_ZSt4cout;
  char* cast45 = (char*)_str;
  struct std::basic_ostream<char>* r46 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g44, cast45);
  struct std::basic_istream<char>* g47 = &_ZSt3cin;
  struct std::basic_istream<char>* r48 = std__istream__operator__(g47, &y43);
  goto bb37;
bb37:
  int t49 = y43;
  _Bool r50 = multiple(t49);
  if (r50) goto bb38; else goto bb39;
bb38:
  struct std::basic_ostream<char>* g51 = &_ZSt4cout;
  int t52 = y43;
  struct std::basic_ostream<char>* r53 = std__ostream__operator__(g51, t52);
  char* cast54 = (char*)_str_1;
  struct std::basic_ostream<char>* r55 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r53, cast54);
  void* g56 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r57 = std__ostream__operator___std__ostream_____(r55, g56);
  goto bb40;
bb39:
  struct std::basic_ostream<char>* g58 = &_ZSt4cout;
  int t59 = y43;
  struct std::basic_ostream<char>* r60 = std__ostream__operator__(g58, t59);
  char* cast61 = (char*)_str_2;
  struct std::basic_ostream<char>* r62 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r60, cast61);
  void* g63 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r64 = std__ostream__operator___std__ostream_____(r62, g63);
  goto bb40;
bb40:
  goto bb41;
bb41:
  int c65 = 0;
  __retval42 = c65;
  int t66 = __retval42;
  return t66;
}

