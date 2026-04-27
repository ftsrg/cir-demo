// Struct definitions (auto-parsed)
struct std::_Setw { int _M_n; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

int __const_main_a[10];
struct std::basic_ostream<char> _ZSt4cout;
char _str[30] = "Data items in original order\\0A";
char _str_1[32] = "\\0AData items in ascending order\\0A";
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

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb6:
  int i35;
  struct std::_Setw agg.tmp036;
  int pass37;
  int j38;
  int k39;
  struct std::_Setw agg.tmp140;
  int __retval41;
  int arraySize42;
  int a43[10];
  int hold44;
  int c45 = 10;
  arraySize42 = c45;
  // array copy
  for (int i = 0; i < 10; ++i) { __const_main_a[i] = a43[i]; }
  struct std::basic_ostream<char>* g46 = &_ZSt4cout;
  char* cast47 = (char*)_str;
  struct std::basic_ostream<char>* r48 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g46, cast47);
  goto bb7;
bb7:
  int c49 = 0;
  i35 = c49;
  goto bb8;
bb8:
  int t50 = i35;
  int c51 = 10;
  _Bool c52 = (t50 < c51) ? 1 : 0;
  if (c52) goto bb9; else goto bb11;
bb9:
  struct std::basic_ostream<char>* g53 = &_ZSt4cout;
  int c54 = 4;
  struct std::_Setw r55 = std__setw(c54);
  agg.tmp036 = r55;
  struct std::_Setw t56 = agg.tmp036;
  struct std::basic_ostream<char>* r57 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(g53, t56);
  int t58 = i35;
  int t59 = a43[t58];
  struct std::basic_ostream<char>* r60 = std__ostream__operator__(r57, t59);
  goto bb10;
bb10:
  int t61 = i35;
  int u62 = ++t61;
  i35 = u62;
  goto bb8;
bb11:
  goto bb12;
bb12:
  goto bb13;
bb13:
  int c63 = 0;
  pass37 = c63;
  goto bb14;
bb14:
  int t64 = pass37;
  int c65 = 10;
  int c66 = 1;
  int b67 = c65 - c66;
  _Bool c68 = (t64 < b67) ? 1 : 0;
  if (c68) goto bb15; else goto bb27;
bb15:
  goto bb16;
bb16:
  int c69 = 0;
  j38 = c69;
  goto bb17;
bb17:
  int t70 = j38;
  int c71 = 10;
  int c72 = 1;
  int b73 = c71 - c72;
  _Bool c74 = (t70 < b73) ? 1 : 0;
  if (c74) goto bb18; else goto bb24;
bb18:
  goto bb19;
bb19:
  int t75 = j38;
  int t76 = a43[t75];
  int t77 = j38;
  int c78 = 1;
  int b79 = t77 + c78;
  int t80 = a43[b79];
  _Bool c81 = (t76 > t80) ? 1 : 0;
  if (c81) goto bb20; else goto bb21;
bb20:
  int t82 = j38;
  int t83 = a43[t82];
  hold44 = t83;
  int t84 = j38;
  int c85 = 1;
  int b86 = t84 + c85;
  int t87 = a43[b86];
  int t88 = j38;
  a43[t88] = t87;
  int t89 = hold44;
  int t90 = j38;
  int c91 = 1;
  int b92 = t90 + c91;
  a43[b92] = t89;
  goto bb21;
bb21:
  goto bb22;
bb22:
  goto bb23;
bb23:
  int t93 = j38;
  int u94 = ++t93;
  j38 = u94;
  goto bb17;
bb24:
  goto bb25;
bb25:
  goto bb26;
bb26:
  int t95 = pass37;
  int u96 = ++t95;
  pass37 = u96;
  goto bb14;
bb27:
  goto bb28;
bb28:
  struct std::basic_ostream<char>* g97 = &_ZSt4cout;
  char* cast98 = (char*)_str_1;
  struct std::basic_ostream<char>* r99 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g97, cast98);
  goto bb29;
bb29:
  int c100 = 0;
  k39 = c100;
  goto bb30;
bb30:
  int t101 = k39;
  int c102 = 10;
  _Bool c103 = (t101 < c102) ? 1 : 0;
  if (c103) goto bb31; else goto bb33;
bb31:
  struct std::basic_ostream<char>* g104 = &_ZSt4cout;
  int c105 = 4;
  struct std::_Setw r106 = std__setw(c105);
  agg.tmp140 = r106;
  struct std::_Setw t107 = agg.tmp140;
  struct std::basic_ostream<char>* r108 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(g104, t107);
  int t109 = k39;
  int t110 = a43[t109];
  struct std::basic_ostream<char>* r111 = std__ostream__operator__(r108, t110);
  goto bb32;
bb32:
  int t112 = k39;
  int u113 = ++t112;
  k39 = u113;
  goto bb30;
bb33:
  goto bb34;
bb34:
  struct std::basic_ostream<char>* g114 = &_ZSt4cout;
  void* g115 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r116 = std__ostream__operator___std__ostream_____(g114, g115);
  int c117 = 0;
  __retval41 = c117;
  int t118 = __retval41;
  return t118;
}

