// Struct definitions (auto-parsed)
struct std::_Setw { int _M_n; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

int __const_main_n[10];
struct std::basic_ostream<char> _ZSt4cout;
char _str[8] = "Element";
char _str_1[6] = "Value";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

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

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: main
int main() {
bb6:
  int i13;
  struct std::_Setw agg.tmp114;
  struct std::_Setw agg.tmp215;
  int __retval16;
  int n17[10];
  struct std::_Setw agg.tmp018;
  // array copy
  for (int i = 0; i < 10; ++i) { __const_main_n[i] = n17[i]; }
  struct std::basic_ostream<char>* g19 = &_ZSt4cout;
  char* cast20 = (char*)_str;
  struct std::basic_ostream<char>* r21 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g19, cast20);
  int c22 = 13;
  struct std::_Setw r23 = std__setw(c22);
  agg.tmp018 = r23;
  struct std::_Setw t24 = agg.tmp018;
  struct std::basic_ostream<char>* r25 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r21, t24);
  char* cast26 = (char*)_str_1;
  struct std::basic_ostream<char>* r27 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r25, cast26);
  void* g28 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r29 = std__ostream__operator___std__ostream_____(r27, g28);
  goto bb7;
bb7:
  int c30 = 0;
  i13 = c30;
  goto bb8;
bb8:
  int t31 = i13;
  int c32 = 10;
  _Bool c33 = (t31 < c32) ? 1 : 0;
  if (c33) goto bb9; else goto bb11;
bb9:
  struct std::basic_ostream<char>* g34 = &_ZSt4cout;
  int c35 = 7;
  struct std::_Setw r36 = std__setw(c35);
  agg.tmp114 = r36;
  struct std::_Setw t37 = agg.tmp114;
  struct std::basic_ostream<char>* r38 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(g34, t37);
  int t39 = i13;
  struct std::basic_ostream<char>* r40 = std__ostream__operator__(r38, t39);
  int c41 = 13;
  struct std::_Setw r42 = std__setw(c41);
  agg.tmp215 = r42;
  struct std::_Setw t43 = agg.tmp215;
  struct std::basic_ostream<char>* r44 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r40, t43);
  int t45 = i13;
  int t46 = n17[t45];
  struct std::basic_ostream<char>* r47 = std__ostream__operator__(r44, t46);
  void* g48 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r49 = std__ostream__operator___std__ostream_____(r47, g48);
  goto bb10;
bb10:
  int t50 = i13;
  int u51 = ++t50;
  i13 = u51;
  goto bb8;
bb11:
  goto bb12;
bb12:
  int c52 = 0;
  __retval16 = c52;
  int t53 = __retval16;
  return t53;
}

