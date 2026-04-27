// Struct definitions (auto-parsed)
struct std::_Setw { int _M_n; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

int __const_main_n[10];
struct std::basic_ostream<char> _ZSt4cout;
char _str[8] = "Element";
char _str_1[6] = "Value";
char _str_2[10] = "Histogram";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

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

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: main
int main() {
bb6:
  int i21;
  struct std::_Setw agg.tmp222;
  struct std::_Setw agg.tmp323;
  struct std::_Setw agg.tmp424;
  int j25;
  int __retval26;
  int arraySize27;
  int n28[10];
  struct std::_Setw agg.tmp029;
  struct std::_Setw agg.tmp130;
  int c31 = 10;
  arraySize27 = c31;
  // array copy
  for (int i = 0; i < 10; ++i) { __const_main_n[i] = n28[i]; }
  struct std::basic_ostream<char>* g32 = &_ZSt4cout;
  char* cast33 = (char*)_str;
  struct std::basic_ostream<char>* r34 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g32, cast33);
  int c35 = 13;
  struct std::_Setw r36 = std__setw(c35);
  agg.tmp029 = r36;
  struct std::_Setw t37 = agg.tmp029;
  struct std::basic_ostream<char>* r38 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r34, t37);
  char* cast39 = (char*)_str_1;
  struct std::basic_ostream<char>* r40 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r38, cast39);
  int c41 = 17;
  struct std::_Setw r42 = std__setw(c41);
  agg.tmp130 = r42;
  struct std::_Setw t43 = agg.tmp130;
  struct std::basic_ostream<char>* r44 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r40, t43);
  char* cast45 = (char*)_str_2;
  struct std::basic_ostream<char>* r46 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r44, cast45);
  void* g47 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r48 = std__ostream__operator___std__ostream_____(r46, g47);
  goto bb7;
bb7:
  int c49 = 0;
  i21 = c49;
  goto bb8;
bb8:
  int t50 = i21;
  int c51 = 10;
  _Bool c52 = (t50 < c51) ? 1 : 0;
  if (c52) goto bb9; else goto bb19;
bb9:
  goto bb10;
bb10:
  struct std::basic_ostream<char>* g53 = &_ZSt4cout;
  int c54 = 7;
  struct std::_Setw r55 = std__setw(c54);
  agg.tmp222 = r55;
  struct std::_Setw t56 = agg.tmp222;
  struct std::basic_ostream<char>* r57 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(g53, t56);
  int t58 = i21;
  struct std::basic_ostream<char>* r59 = std__ostream__operator__(r57, t58);
  int c60 = 13;
  struct std::_Setw r61 = std__setw(c60);
  agg.tmp323 = r61;
  struct std::_Setw t62 = agg.tmp323;
  struct std::basic_ostream<char>* r63 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r59, t62);
  int t64 = i21;
  int t65 = n28[t64];
  struct std::basic_ostream<char>* r66 = std__ostream__operator__(r63, t65);
  int c67 = 9;
  struct std::_Setw r68 = std__setw(c67);
  agg.tmp424 = r68;
  struct std::_Setw t69 = agg.tmp424;
  struct std::basic_ostream<char>* r70 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r66, t69);
  goto bb11;
bb11:
  int c71 = 0;
  j25 = c71;
  goto bb12;
bb12:
  int t72 = j25;
  int t73 = i21;
  int t74 = n28[t73];
  _Bool c75 = (t72 < t74) ? 1 : 0;
  if (c75) goto bb13; else goto bb15;
bb13:
  struct std::basic_ostream<char>* g76 = &_ZSt4cout;
  char c77 = 42;
  struct std::basic_ostream<char>* r78 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(g76, c77);
  goto bb14;
bb14:
  int t79 = j25;
  int u80 = ++t79;
  j25 = u80;
  goto bb12;
bb15:
  goto bb16;
bb16:
  struct std::basic_ostream<char>* g81 = &_ZSt4cout;
  void* g82 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r83 = std__ostream__operator___std__ostream_____(g81, g82);
  goto bb17;
bb17:
  goto bb18;
bb18:
  int t84 = i21;
  int u85 = ++t84;
  i21 = u85;
  goto bb8;
bb19:
  goto bb20;
bb20:
  int c86 = 0;
  __retval26 = c86;
  int t87 = __retval26;
  return t87;
}

