// Struct definitions (auto-parsed)
struct std::_Setw { int _M_n; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

int __const_main_responses[40];
struct std::basic_ostream<char> _ZSt4cout;
char _str[7] = "Rating";
char _str_1[10] = "Frequency";
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
  int answer19;
  int rating20;
  struct std::_Setw agg.tmp121;
  struct std::_Setw agg.tmp222;
  int __retval23;
  int responseSize24;
  int frequencySize25;
  int responses26[40];
  int frequency27[11];
  struct std::_Setw agg.tmp028;
  int c29 = 40;
  responseSize24 = c29;
  int c30 = 11;
  frequencySize25 = c30;
  // array copy
  for (int i = 0; i < 40; ++i) { __const_main_responses[i] = responses26[i]; }
  int c31 = {0};
  frequency27 = c31;
  goto bb7;
bb7:
  int c32 = 0;
  answer19 = c32;
  goto bb8;
bb8:
  int t33 = answer19;
  int c34 = 40;
  _Bool c35 = (t33 < c34) ? 1 : 0;
  if (c35) goto bb9; else goto bb11;
bb9:
  int t36 = answer19;
  int t37 = responses26[t36];
  int t38 = frequency27[t37];
  int u39 = ++t38;
  frequency27[t37] = u39;
  goto bb10;
bb10:
  int t40 = answer19;
  int u41 = ++t40;
  answer19 = u41;
  goto bb8;
bb11:
  goto bb12;
bb12:
  struct std::basic_ostream<char>* g42 = &_ZSt4cout;
  char* cast43 = (char*)_str;
  struct std::basic_ostream<char>* r44 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g42, cast43);
  int c45 = 17;
  struct std::_Setw r46 = std__setw(c45);
  agg.tmp028 = r46;
  struct std::_Setw t47 = agg.tmp028;
  struct std::basic_ostream<char>* r48 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r44, t47);
  char* cast49 = (char*)_str_1;
  struct std::basic_ostream<char>* r50 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r48, cast49);
  void* g51 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r52 = std__ostream__operator___std__ostream_____(r50, g51);
  goto bb13;
bb13:
  int c53 = 1;
  rating20 = c53;
  goto bb14;
bb14:
  int t54 = rating20;
  int c55 = 11;
  _Bool c56 = (t54 < c55) ? 1 : 0;
  if (c56) goto bb15; else goto bb17;
bb15:
  struct std::basic_ostream<char>* g57 = &_ZSt4cout;
  int c58 = 6;
  struct std::_Setw r59 = std__setw(c58);
  agg.tmp121 = r59;
  struct std::_Setw t60 = agg.tmp121;
  struct std::basic_ostream<char>* r61 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(g57, t60);
  int t62 = rating20;
  struct std::basic_ostream<char>* r63 = std__ostream__operator__(r61, t62);
  int c64 = 17;
  struct std::_Setw r65 = std__setw(c64);
  agg.tmp222 = r65;
  struct std::_Setw t66 = agg.tmp222;
  struct std::basic_ostream<char>* r67 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r63, t66);
  int t68 = rating20;
  int t69 = frequency27[t68];
  struct std::basic_ostream<char>* r70 = std__ostream__operator__(r67, t69);
  void* g71 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r72 = std__ostream__operator___std__ostream_____(r70, g71);
  goto bb16;
bb16:
  int t73 = rating20;
  int u74 = ++t73;
  rating20 = u74;
  goto bb14;
bb17:
  goto bb18;
bb18:
  int c75 = 0;
  __retval23 = c75;
  int t76 = __retval23;
  return t76;
}

