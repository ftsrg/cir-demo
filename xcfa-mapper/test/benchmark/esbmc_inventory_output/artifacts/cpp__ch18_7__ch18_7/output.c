// Struct definitions (auto-parsed)
struct BitCard { unsigned char face; unsigned char suit; unsigned char color; };
struct std::_Setw { int _M_n; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[6];
char _str_1[8];
char _str_2[9];
char _str_3[4] = "   ";
// function: _Z8fillDeckP7BitCard
void fillDeck(struct BitCard* v0) {
bb1:
  int i10;
  int wDeck11[3];
  wDeck11 = v0;
  goto bb2;
bb2:
  int c12 = 0;
  i10 = c12;
  goto bb3;
bb3:
  int t13 = i10;
  int c14 = 51;
  _Bool c15 = (t13 <= c14) ? 1 : 0;
  if (c15) goto bb4; else goto bb8;
bb4:
  goto bb5;
bb5:
  int t16 = i10;
  int c17 = 13;
  int b18 = t16 % c17;
  unsigned int cast19 = (unsigned int)b18;
  struct BitCard* t20 = wDeck11;
  int t21 = i10;
  struct BitCard* ptr22 = t20 + t21;
  ptr22->face = cast19; // bitfield set
  int t23 = i10;
  int c24 = 13;
  int b25 = t23 / c24;
  unsigned int cast26 = (unsigned int)b25;
  struct BitCard* t27 = wDeck11;
  int t28 = i10;
  struct BitCard* ptr29 = t27 + t28;
  ptr29->suit = cast26; // bitfield set
  int t30 = i10;
  int c31 = 26;
  int b32 = t30 / c31;
  unsigned int cast33 = (unsigned int)b32;
  struct BitCard* t34 = wDeck11;
  int t35 = i10;
  struct BitCard* ptr36 = t34 + t35;
  ptr36->color = cast33; // bitfield set
  goto bb6;
bb6:
  goto bb7;
bb7:
  int t37 = i10;
  int u38 = ++t37;
  i10 = u38;
  goto bb3;
bb8:
  goto bb9;
bb9:
  return;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std::basic_ostream<char>*, struct std::_Setw);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZSt4setwi
struct std::_Setw std__setw(int v39) {
bb40:
  int __n41;
  struct std::_Setw __retval42;
  __n41 = v39;
  int t43 = __n41;
  __retval42._M_n = t43;
  struct std::_Setw t44 = __retval42;
  return t44;
}

// function: _ZNSolsEj
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, unsigned int);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _Z4dealPK7BitCard
void deal(struct BitCard* v45) {
bb46:
  int k155;
  int k256;
  struct std::_Setw agg.tmp057;
  struct std::_Setw agg.tmp158;
  struct std::_Setw agg.tmp259;
  struct std::_Setw agg.tmp360;
  struct std::_Setw agg.tmp461;
  struct std::_Setw agg.tmp562;
  int wDeck63[3];
  wDeck63 = v45;
  goto bb47;
bb47:
  int c64 = 0;
  k155 = c64;
  int t65 = k155;
  int c66 = 26;
  int b67 = t65 + c66;
  k256 = b67;
  goto bb48;
bb48:
  int t68 = k155;
  int c69 = 25;
  _Bool c70 = (t68 <= c69) ? 1 : 0;
  if (c70) goto bb49; else goto bb53;
bb49:
  goto bb50;
bb50:
  struct std::basic_ostream<char>* g71 = &_ZSt4cout;
  char* cast72 = (char*)_str;
  struct std::basic_ostream<char>* r73 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g71, cast72);
  int c74 = 3;
  struct std::_Setw r75 = std__setw(c74);
  agg.tmp057 = r75;
  struct std::_Setw t76 = agg.tmp057;
  struct std::basic_ostream<char>* r77 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r73, t76);
  struct BitCard* t78 = wDeck63;
  int t79 = k155;
  struct BitCard* ptr80 = t78 + t79;
  unsigned int bf81 = ptr80->face; // bitfield get
  struct std::basic_ostream<char>* r82 = std__ostream__operator__(r77, bf81);
  char* cast83 = (char*)_str_1;
  struct std::basic_ostream<char>* r84 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r82, cast83);
  int c85 = 2;
  struct std::_Setw r86 = std__setw(c85);
  agg.tmp158 = r86;
  struct std::_Setw t87 = agg.tmp158;
  struct std::basic_ostream<char>* r88 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r84, t87);
  struct BitCard* t89 = wDeck63;
  int t90 = k155;
  struct BitCard* ptr91 = t89 + t90;
  unsigned int bf92 = ptr91->suit; // bitfield get
  struct std::basic_ostream<char>* r93 = std__ostream__operator__(r88, bf92);
  char* cast94 = (char*)_str_2;
  struct std::basic_ostream<char>* r95 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r93, cast94);
  int c96 = 2;
  struct std::_Setw r97 = std__setw(c96);
  agg.tmp259 = r97;
  struct std::_Setw t98 = agg.tmp259;
  struct std::basic_ostream<char>* r99 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r95, t98);
  struct BitCard* t100 = wDeck63;
  int t101 = k155;
  struct BitCard* ptr102 = t100 + t101;
  unsigned int bf103 = ptr102->color; // bitfield get
  struct std::basic_ostream<char>* r104 = std__ostream__operator__(r99, bf103);
  char* cast105 = (char*)_str_3;
  struct std::basic_ostream<char>* r106 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r104, cast105);
  char* cast107 = (char*)_str;
  struct std::basic_ostream<char>* r108 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r106, cast107);
  int c109 = 3;
  struct std::_Setw r110 = std__setw(c109);
  agg.tmp360 = r110;
  struct std::_Setw t111 = agg.tmp360;
  struct std::basic_ostream<char>* r112 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r108, t111);
  struct BitCard* t113 = wDeck63;
  int t114 = k256;
  struct BitCard* ptr115 = t113 + t114;
  unsigned int bf116 = ptr115->face; // bitfield get
  struct std::basic_ostream<char>* r117 = std__ostream__operator__(r112, bf116);
  char* cast118 = (char*)_str_1;
  struct std::basic_ostream<char>* r119 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r117, cast118);
  int c120 = 2;
  struct std::_Setw r121 = std__setw(c120);
  agg.tmp461 = r121;
  struct std::_Setw t122 = agg.tmp461;
  struct std::basic_ostream<char>* r123 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r119, t122);
  struct BitCard* t124 = wDeck63;
  int t125 = k256;
  struct BitCard* ptr126 = t124 + t125;
  unsigned int bf127 = ptr126->suit; // bitfield get
  struct std::basic_ostream<char>* r128 = std__ostream__operator__(r123, bf127);
  char* cast129 = (char*)_str_2;
  struct std::basic_ostream<char>* r130 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r128, cast129);
  int c131 = 2;
  struct std::_Setw r132 = std__setw(c131);
  agg.tmp562 = r132;
  struct std::_Setw t133 = agg.tmp562;
  struct std::basic_ostream<char>* r134 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r130, t133);
  struct BitCard* t135 = wDeck63;
  int t136 = k256;
  struct BitCard* ptr137 = t135 + t136;
  unsigned int bf138 = ptr137->color; // bitfield get
  struct std::basic_ostream<char>* r139 = std__ostream__operator__(r134, bf138);
  void* g140 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r141 = std__ostream__operator___std__ostream_____(r139, g140);
  goto bb51;
bb51:
  goto bb52;
bb52:
  int t142 = k155;
  int u143 = ++t142;
  k155 = u143;
  int t144 = k256;
  int u145 = ++t144;
  k256 = u145;
  goto bb48;
bb53:
  goto bb54;
bb54:
  return;
}

// function: main
int main() {
bb146:
  int __retval147;
  int deck148[3];
  struct BitCard* cast149 = (struct BitCard*)deck148;
  fillDeck(cast149);
  struct BitCard* cast150 = (struct BitCard*)deck148;
  deal(cast150);
  int c151 = 0;
  __retval147 = c151;
  int t152 = __retval147;
  return t152;
}

