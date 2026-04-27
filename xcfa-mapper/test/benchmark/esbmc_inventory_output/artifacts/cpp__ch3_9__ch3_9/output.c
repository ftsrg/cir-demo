// Struct definitions (auto-parsed)
struct std::_Setw { int _M_n; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[31] = "Program should never get here!";
char _str_1[5] = "Face";
char _str_2[10] = "Frequency";
char _str_3[6] = "\\0A   1";
char _str_4[6] = "\\0A   2";
char _str_5[6] = "\\0A   3";
char _str_6[6] = "\\0A   4";
char _str_7[6] = "\\0A   5";
char _str_8[6] = "\\0A   6";
// function: rand
int rand();

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
  int roll28;
  int __retval29;
  int frequency130;
  int frequency231;
  int frequency332;
  int frequency433;
  int frequency534;
  int frequency635;
  int face36;
  struct std::_Setw agg.tmp037;
  struct std::_Setw agg.tmp138;
  struct std::_Setw agg.tmp239;
  struct std::_Setw agg.tmp340;
  struct std::_Setw agg.tmp441;
  struct std::_Setw agg.tmp542;
  struct std::_Setw agg.tmp643;
  int c44 = 0;
  frequency130 = c44;
  int c45 = 0;
  frequency231 = c45;
  int c46 = 0;
  frequency332 = c46;
  int c47 = 0;
  frequency433 = c47;
  int c48 = 0;
  frequency534 = c48;
  int c49 = 0;
  frequency635 = c49;
  goto bb7;
bb7:
  int c50 = 1;
  roll28 = c50;
  goto bb8;
bb8:
  int t51 = roll28;
  int c52 = 60;
  _Bool c53 = (t51 <= c52) ? 1 : 0;
  if (c53) goto bb9; else goto bb26;
bb9:
  goto bb10;
bb10:
  int c54 = 1;
  int r55 = rand();
  int c56 = 6;
  int b57 = r55 % c56;
  int b58 = c54 + b57;
  face36 = b58;
  goto bb11;
bb11:
  int t59 = face36;
  goto bb12;
bb12:
  switch (t59) {
    default: goto bb20;
  }
bb13:
  goto bb14;
bb14:
  int t60 = frequency130;
  int u61 = ++t60;
  frequency130 = u61;
  goto bb22;
bb15:
  int t62 = frequency231;
  int u63 = ++t62;
  frequency231 = u63;
  goto bb22;
bb16:
  int t64 = frequency332;
  int u65 = ++t64;
  frequency332 = u65;
  goto bb22;
bb17:
  int t66 = frequency433;
  int u67 = ++t66;
  frequency433 = u67;
  goto bb22;
bb18:
  int t68 = frequency534;
  int u69 = ++t68;
  frequency534 = u69;
  goto bb22;
bb19:
  int t70 = frequency635;
  int u71 = ++t70;
  frequency635 = u71;
  goto bb22;
bb20:
  struct std::basic_ostream<char>* g72 = &_ZSt4cout;
  char* cast73 = (char*)_str;
  struct std::basic_ostream<char>* r74 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g72, cast73);
  goto bb21;
bb21:
  goto bb22;
bb22:
  goto bb23;
bb23:
  goto bb24;
bb24:
  goto bb25;
bb25:
  int t75 = roll28;
  int u76 = ++t75;
  roll28 = u76;
  goto bb8;
bb26:
  goto bb27;
bb27:
  struct std::basic_ostream<char>* g77 = &_ZSt4cout;
  char* cast78 = (char*)_str_1;
  struct std::basic_ostream<char>* r79 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g77, cast78);
  int c80 = 13;
  struct std::_Setw r81 = std__setw(c80);
  agg.tmp037 = r81;
  struct std::_Setw t82 = agg.tmp037;
  struct std::basic_ostream<char>* r83 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r79, t82);
  char* cast84 = (char*)_str_2;
  struct std::basic_ostream<char>* r85 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r83, cast84);
  char* cast86 = (char*)_str_3;
  struct std::basic_ostream<char>* r87 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r85, cast86);
  int c88 = 13;
  struct std::_Setw r89 = std__setw(c88);
  agg.tmp138 = r89;
  struct std::_Setw t90 = agg.tmp138;
  struct std::basic_ostream<char>* r91 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r87, t90);
  int t92 = frequency130;
  struct std::basic_ostream<char>* r93 = std__ostream__operator__(r91, t92);
  char* cast94 = (char*)_str_4;
  struct std::basic_ostream<char>* r95 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r93, cast94);
  int c96 = 13;
  struct std::_Setw r97 = std__setw(c96);
  agg.tmp239 = r97;
  struct std::_Setw t98 = agg.tmp239;
  struct std::basic_ostream<char>* r99 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r95, t98);
  int t100 = frequency231;
  struct std::basic_ostream<char>* r101 = std__ostream__operator__(r99, t100);
  char* cast102 = (char*)_str_5;
  struct std::basic_ostream<char>* r103 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r101, cast102);
  int c104 = 13;
  struct std::_Setw r105 = std__setw(c104);
  agg.tmp340 = r105;
  struct std::_Setw t106 = agg.tmp340;
  struct std::basic_ostream<char>* r107 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r103, t106);
  int t108 = frequency332;
  struct std::basic_ostream<char>* r109 = std__ostream__operator__(r107, t108);
  char* cast110 = (char*)_str_6;
  struct std::basic_ostream<char>* r111 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r109, cast110);
  int c112 = 13;
  struct std::_Setw r113 = std__setw(c112);
  agg.tmp441 = r113;
  struct std::_Setw t114 = agg.tmp441;
  struct std::basic_ostream<char>* r115 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r111, t114);
  int t116 = frequency433;
  struct std::basic_ostream<char>* r117 = std__ostream__operator__(r115, t116);
  char* cast118 = (char*)_str_7;
  struct std::basic_ostream<char>* r119 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r117, cast118);
  int c120 = 13;
  struct std::_Setw r121 = std__setw(c120);
  agg.tmp542 = r121;
  struct std::_Setw t122 = agg.tmp542;
  struct std::basic_ostream<char>* r123 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r119, t122);
  int t124 = frequency534;
  struct std::basic_ostream<char>* r125 = std__ostream__operator__(r123, t124);
  char* cast126 = (char*)_str_8;
  struct std::basic_ostream<char>* r127 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r125, cast126);
  int c128 = 13;
  struct std::_Setw r129 = std__setw(c128);
  agg.tmp643 = r129;
  struct std::_Setw t130 = agg.tmp643;
  struct std::basic_ostream<char>* r131 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r127, t130);
  int t132 = frequency635;
  struct std::basic_ostream<char>* r133 = std__ostream__operator__(r131, t132);
  void* g134 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r135 = std__ostream__operator___std__ostream_____(r133, g134);
  int c136 = 0;
  __retval29 = c136;
  int t137 = __retval29;
  return t137;
}

