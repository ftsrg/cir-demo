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
  int arraySize24;
  int s25[10];
  struct std::_Setw agg.tmp026;
  int c27 = 10;
  arraySize24 = c27;
  goto bb7;
bb7:
  int c28 = 0;
  i19 = c28;
  goto bb8;
bb8:
  int t29 = i19;
  int c30 = 10;
  _Bool c31 = (t29 < c30) ? 1 : 0;
  if (c31) goto bb9; else goto bb11;
bb9:
  int c32 = 2;
  int c33 = 2;
  int t34 = i19;
  int b35 = c33 * t34;
  int b36 = c32 + b35;
  int t37 = i19;
  s25[t37] = b36;
  goto bb10;
bb10:
  int t38 = i19;
  int u39 = ++t38;
  i19 = u39;
  goto bb8;
bb11:
  goto bb12;
bb12:
  struct std::basic_ostream<char>* g40 = &_ZSt4cout;
  char* cast41 = (char*)_str;
  struct std::basic_ostream<char>* r42 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g40, cast41);
  int c43 = 13;
  struct std::_Setw r44 = std__setw(c43);
  agg.tmp026 = r44;
  struct std::_Setw t45 = agg.tmp026;
  struct std::basic_ostream<char>* r46 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r42, t45);
  char* cast47 = (char*)_str_1;
  struct std::basic_ostream<char>* r48 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r46, cast47);
  void* g49 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r50 = std__ostream__operator___std__ostream_____(r48, g49);
  goto bb13;
bb13:
  int c51 = 0;
  j20 = c51;
  goto bb14;
bb14:
  int t52 = j20;
  int c53 = 10;
  _Bool c54 = (t52 < c53) ? 1 : 0;
  if (c54) goto bb15; else goto bb17;
bb15:
  struct std::basic_ostream<char>* g55 = &_ZSt4cout;
  int c56 = 7;
  struct std::_Setw r57 = std__setw(c56);
  agg.tmp121 = r57;
  struct std::_Setw t58 = agg.tmp121;
  struct std::basic_ostream<char>* r59 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(g55, t58);
  int t60 = j20;
  struct std::basic_ostream<char>* r61 = std__ostream__operator__(r59, t60);
  int c62 = 13;
  struct std::_Setw r63 = std__setw(c62);
  agg.tmp222 = r63;
  struct std::_Setw t64 = agg.tmp222;
  struct std::basic_ostream<char>* r65 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r61, t64);
  int t66 = j20;
  int t67 = s25[t66];
  struct std::basic_ostream<char>* r68 = std__ostream__operator__(r65, t67);
  void* g69 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r70 = std__ostream__operator___std__ostream_____(r68, g69);
  goto bb16;
bb16:
  int t71 = j20;
  int u72 = ++t71;
  j20 = u72;
  goto bb14;
bb17:
  goto bb18;
bb18:
  int c73 = 0;
  __retval23 = c73;
  int t74 = __retval23;
  return t74;
}

