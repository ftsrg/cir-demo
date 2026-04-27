// Struct definitions (auto-parsed)
struct std::_Setw { int _M_n; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

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
  int i19;
  int j20;
  struct std::_Setw agg.tmp121;
  struct std::_Setw agg.tmp222;
  int __retval23;
  int n24[10];
  struct std::_Setw agg.tmp025;
  goto bb7;
bb7:
  int c26 = 0;
  i19 = c26;
  goto bb8;
bb8:
  int t27 = i19;
  int c28 = 10;
  _Bool c29 = (t27 < c28) ? 1 : 0;
  if (c29) goto bb9; else goto bb11;
bb9:
  int c30 = 0;
  int t31 = i19;
  n24[t31] = c30;
  goto bb10;
bb10:
  int t32 = i19;
  int u33 = ++t32;
  i19 = u33;
  goto bb8;
bb11:
  goto bb12;
bb12:
  struct std::basic_ostream<char>* g34 = &_ZSt4cout;
  char* cast35 = (char*)_str;
  struct std::basic_ostream<char>* r36 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g34, cast35);
  int c37 = 13;
  struct std::_Setw r38 = std__setw(c37);
  agg.tmp025 = r38;
  struct std::_Setw t39 = agg.tmp025;
  struct std::basic_ostream<char>* r40 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r36, t39);
  char* cast41 = (char*)_str_1;
  struct std::basic_ostream<char>* r42 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r40, cast41);
  void* g43 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r44 = std__ostream__operator___std__ostream_____(r42, g43);
  goto bb13;
bb13:
  int c45 = 0;
  j20 = c45;
  goto bb14;
bb14:
  int t46 = j20;
  int c47 = 10;
  _Bool c48 = (t46 < c47) ? 1 : 0;
  if (c48) goto bb15; else goto bb17;
bb15:
  struct std::basic_ostream<char>* g49 = &_ZSt4cout;
  int c50 = 7;
  struct std::_Setw r51 = std__setw(c50);
  agg.tmp121 = r51;
  struct std::_Setw t52 = agg.tmp121;
  struct std::basic_ostream<char>* r53 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(g49, t52);
  int t54 = j20;
  struct std::basic_ostream<char>* r55 = std__ostream__operator__(r53, t54);
  int c56 = 13;
  struct std::_Setw r57 = std__setw(c56);
  agg.tmp222 = r57;
  struct std::_Setw t58 = agg.tmp222;
  struct std::basic_ostream<char>* r59 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r55, t58);
  int t60 = j20;
  int t61 = n24[t60];
  struct std::basic_ostream<char>* r62 = std__ostream__operator__(r59, t61);
  void* g63 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r64 = std__ostream__operator___std__ostream_____(r62, g63);
  goto bb16;
bb16:
  int t65 = j20;
  int u66 = ++t65;
  j20 = u66;
  goto bb14;
bb17:
  goto bb18;
bb18:
  int c67 = 0;
  __retval23 = c67;
  int t68 = __retval23;
  return t68;
}

