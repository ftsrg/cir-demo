// Struct definitions (auto-parsed)
struct std::_Setw { int _M_n; };
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[13];
struct std::basic_istream<char> _ZSt3cin;
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSirsERj
struct std::basic_istream<char>* std__istream__operator__(struct std::basic_istream<char>*, unsigned int*);

// function: srand
void srand(unsigned int);

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std::basic_ostream<char>*, struct std::_Setw);

// function: _ZSt4setwi
struct std::_Setw std__setw(int v0) {
bb1:
  int __n2;
  struct std::_Setw __retval3;
  __n2 = v0;
  int t4 = __n2;
  __retval3._M_n = t4;
  struct std::_Setw t5 = __retval3;
  return t5;
}

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: rand
int rand();

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb6:
  int counter19;
  struct std::_Setw agg.tmp020;
  int __retval21;
  unsigned int seed22;
  struct std::basic_ostream<char>* g23 = &_ZSt4cout;
  char* cast24 = (char*)_str;
  struct std::basic_ostream<char>* r25 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g23, cast24);
  struct std::basic_istream<char>* g26 = &_ZSt3cin;
  struct std::basic_istream<char>* r27 = std__istream__operator__(g26, &seed22);
  unsigned int t28 = seed22;
  srand(t28);
  goto bb7;
bb7:
  int c29 = 1;
  counter19 = c29;
  goto bb8;
bb8:
  int t30 = counter19;
  int c31 = 10;
  _Bool c32 = (t30 <= c31) ? 1 : 0;
  if (c32) goto bb9; else goto bb17;
bb9:
  goto bb10;
bb10:
  struct std::basic_ostream<char>* g33 = &_ZSt4cout;
  int c34 = 10;
  struct std::_Setw r35 = std__setw(c34);
  agg.tmp020 = r35;
  struct std::_Setw t36 = agg.tmp020;
  struct std::basic_ostream<char>* r37 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(g33, t36);
  int c38 = 1;
  int r39 = rand();
  int c40 = 6;
  int b41 = r39 % c40;
  int b42 = c38 + b41;
  struct std::basic_ostream<char>* r43 = std__ostream__operator__(r37, b42);
  goto bb11;
bb11:
  int t44 = counter19;
  int c45 = 5;
  int b46 = t44 % c45;
  int c47 = 0;
  _Bool c48 = (b46 == c47) ? 1 : 0;
  if (c48) goto bb12; else goto bb13;
bb12:
  struct std::basic_ostream<char>* g49 = &_ZSt4cout;
  void* g50 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r51 = std__ostream__operator___std__ostream_____(g49, g50);
  goto bb13;
bb13:
  goto bb14;
bb14:
  goto bb15;
bb15:
  goto bb16;
bb16:
  int t52 = counter19;
  int u53 = ++t52;
  counter19 = u53;
  goto bb8;
bb17:
  goto bb18;
bb18:
  int c54 = 0;
  __retval21 = c54;
  int t55 = __retval21;
  return t55;
}

