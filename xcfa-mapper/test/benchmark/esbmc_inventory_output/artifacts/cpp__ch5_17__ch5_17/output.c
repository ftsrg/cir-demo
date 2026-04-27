// Struct definitions (auto-parsed)
struct std::_Setw { int _M_n; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::ios_base { int _M_flags; };

char* __const_main_face[13];
char* __const_main_suit[4];
char _str[7] = "Hearts";
char _str_1[9] = "Diamonds";
char _str_2[6] = "Clubs";
char _str_3[7] = "Spades";
char _str_4[4] = "Ace";
char _str_5[6] = "Deuce";
char _str_6[6] = "Three";
char _str_7[5] = "Four";
char _str_8[5] = "Five";
char _str_9[4] = "Six";
char _str_10[6] = "Seven";
char _str_11[6] = "Eight";
char _str_12[5] = "Nine";
char _str_13[4] = "Ten";
char _str_14[5] = "Jack";
char _str_15[6] = "Queen";
char _str_16[5] = "King";
struct std::basic_ostream<char> _ZSt4cout;
char _str_17[5] = " of ";
// function: srand
void srand(unsigned int);

// function: time
long long time(long long*);

// function: rand
int rand();

// function: _Z7shufflePA13_i
void shuffle_int_(int* v0) {
bb1:
  int card17;
  int wDeck18[13];
  int row19;
  int column20;
  wDeck18 = v0;
  goto bb2;
bb2:
  int c21 = 1;
  card17 = c21;
  goto bb3;
bb3:
  int t22 = card17;
  int c23 = 52;
  _Bool c24 = (t22 <= c23) ? 1 : 0;
  if (c24) goto bb4; else goto bb15;
bb4:
  goto bb5;
bb5:
  goto bb6;
bb6:
  goto bb8;
bb7:
  int* t25 = wDeck18;
  int t26 = row19;
  int* ptr27 = t25 + t26;
  int t28 = column20;
  int t29 = *ptr27[t28];
  int c30 = 0;
  _Bool c31 = (t29 != c30) ? 1 : 0;
  if (c31) goto bb8; else goto bb11;
bb8:
  goto bb9;
bb9:
  int r32 = rand();
  int c33 = 4;
  int b34 = r32 % c33;
  row19 = b34;
  int r35 = rand();
  int c36 = 13;
  int b37 = r35 % c36;
  column20 = b37;
  goto bb10;
bb10:
  goto bb7;
bb11:
  goto bb12;
bb12:
  int t38 = card17;
  int* t39 = wDeck18;
  int t40 = row19;
  int* ptr41 = t39 + t40;
  int t42 = column20;
  *ptr41[t42] = t38;
  goto bb13;
bb13:
  goto bb14;
bb14:
  int t43 = card17;
  int u44 = ++t43;
  card17 = u44;
  goto bb3;
bb15:
  goto bb16;
bb16:
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std::basic_ostream<char>*, struct std::_Setw);

// function: _ZSt4setwi
struct std::_Setw std__setw(int v45) {
bb46:
  int __n47;
  struct std::_Setw __retval48;
  __n47 = v45;
  int t49 = __n47;
  __retval48._M_n = t49;
  struct std::_Setw t50 = __retval48;
  return t50;
}

// function: _ZNSolsEPFRSt8ios_baseS0_E
struct std::basic_ostream<char>* std__ostream__operator___std__ios_base_____(struct std::basic_ostream<char>*, void*);

// function: _ZStaNRSt13_Ios_FmtflagsS_
int* _ZStaNRSt13_Ios_FmtflagsS_(int* v51, int v52) {
bb53:
  int* __a54;
  int __b55;
  int* __retval56;
  __a54 = v51;
  __b55 = v52;
  int* t57 = __a54;
  int t58 = *t57;
  int t59 = __b55;
  int r60 = _ZStanSt13_Ios_FmtflagsS_(t58, t59);
  int* t61 = __a54;
  *t61 = r60;
  __retval56 = t61;
  int* t62 = __retval56;
  return t62;
}

// function: _ZStcoSt13_Ios_Fmtflags
int _ZStcoSt13_Ios_Fmtflags(int v63) {
bb64:
  int __a65;
  int __retval66;
  __a65 = v63;
  int t67 = __a65;
  int u68 = ~t67;
  __retval66 = u68;
  int t69 = __retval66;
  return t69;
}

// function: _ZStorSt13_Ios_FmtflagsS_
int _ZStorSt13_Ios_FmtflagsS_(int v70, int v71) {
bb72:
  int __a73;
  int __b74;
  int __retval75;
  __a73 = v70;
  __b74 = v71;
  int t76 = __a73;
  int t77 = __b74;
  int b78 = t76 | t77;
  __retval75 = b78;
  int t79 = __retval75;
  return t79;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* _ZStoRRSt13_Ios_FmtflagsS_(int* v80, int v81) {
bb82:
  int* __a83;
  int __b84;
  int* __retval85;
  __a83 = v80;
  __b84 = v81;
  int* t86 = __a83;
  int t87 = *t86;
  int t88 = __b84;
  int r89 = _ZStorSt13_Ios_FmtflagsS_(t87, t88);
  int* t90 = __a83;
  *t90 = r89;
  __retval85 = t90;
  int* t91 = __retval85;
  return t91;
}

// function: _ZStanSt13_Ios_FmtflagsS_
int _ZStanSt13_Ios_FmtflagsS_(int v92, int v93) {
bb94:
  int __a95;
  int __b96;
  int __retval97;
  __a95 = v92;
  __b96 = v93;
  int t98 = __a95;
  int t99 = __b96;
  int b100 = t98 & t99;
  __retval97 = b100;
  int t101 = __retval97;
  return t101;
}

// function: _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
int std__ios_base__setf(struct std::ios_base* v102, int v103, int v104) {
bb105:
  int this106[8];
  int __fmtfl107;
  int __mask108;
  int __retval109;
  int __old110;
  this106 = v102;
  __fmtfl107 = v103;
  __mask108 = v104;
  struct std::ios_base* t111 = this106;
  int t112 = *t111->_M_flags;
  __old110 = t112;
  int t113 = __mask108;
  int r114 = _ZStcoSt13_Ios_Fmtflags(t113);
  int* r115 = _ZStaNRSt13_Ios_FmtflagsS_(t111->_M_flags, r114);
  int t116 = __fmtfl107;
  int t117 = __mask108;
  int r118 = _ZStanSt13_Ios_FmtflagsS_(t116, t117);
  int* r119 = _ZStoRRSt13_Ios_FmtflagsS_(t111->_M_flags, r118);
  int t120 = __old110;
  __retval109 = t120;
  int t121 = __retval109;
  return t121;
}

// function: _ZSt5rightRSt8ios_base
struct std::ios_base* std__right(struct std::ios_base* v122) {
bb123:
  int __base124[8];
  int __retval125[8];
  __base124 = v122;
  struct std::ios_base* t126 = __base124;
  int c127 = 128;
  int c128 = 176;
  int r129 = std__ios_base__setf(t126, c127, c128);
  struct std::ios_base* t130 = __base124;
  __retval125 = t130;
  struct std::ios_base* t131 = __retval125;
  return t131;
}

// function: _ZSt4leftRSt8ios_base
struct std::ios_base* std__left(struct std::ios_base* v132) {
bb133:
  int __base134[8];
  int __retval135[8];
  __base134 = v132;
  struct std::ios_base* t136 = __base134;
  int c137 = 32;
  int c138 = 176;
  int r139 = std__ios_base__setf(t136, c137, c138);
  struct std::ios_base* t140 = __base134;
  __retval135 = t140;
  struct std::ios_base* t141 = __retval135;
  return t141;
}

// function: _Z4dealPA13_KiPPKcS4_
void deal_int_const_(int* v142, char** v143, char** v144) {
bb145:
  int card168;
  int row169;
  int column170;
  struct std::_Setw agg.tmp0171;
  struct std::_Setw agg.tmp1172;
  int wDeck173[13];
  char** wFace174;
  char** wSuit175;
  wDeck173 = v142;
  wFace174 = v143;
  wSuit175 = v144;
  goto bb146;
bb146:
  int c176 = 1;
  card168 = c176;
  goto bb147;
bb147:
  int t177 = card168;
  int c178 = 52;
  _Bool c179 = (t177 <= c178) ? 1 : 0;
  if (c179) goto bb148; else goto bb166;
bb148:
  goto bb149;
bb149:
  int c180 = 0;
  row169 = c180;
  goto bb150;
bb150:
  int t181 = row169;
  int c182 = 3;
  _Bool c183 = (t181 <= c182) ? 1 : 0;
  if (c183) goto bb151; else goto bb163;
bb151:
  goto bb152;
bb152:
  int c184 = 0;
  column170 = c184;
  goto bb153;
bb153:
  int t185 = column170;
  int c186 = 12;
  _Bool c187 = (t185 <= c186) ? 1 : 0;
  if (c187) goto bb154; else goto bb160;
bb154:
  goto bb155;
bb155:
  int* t188 = wDeck173;
  int t189 = row169;
  int* ptr190 = t188 + t189;
  int t191 = column170;
  int t192 = *ptr190[t191];
  int t193 = card168;
  _Bool c194 = (t192 == t193) ? 1 : 0;
  if (c194) goto bb156; else goto bb157;
bb156:
  struct std::basic_ostream<char>* g195 = &_ZSt4cout;
  int c196 = 5;
  struct std::_Setw r197 = std__setw(c196);
  agg.tmp0171 = r197;
  struct std::_Setw t198 = agg.tmp0171;
  struct std::basic_ostream<char>* r199 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(g195, t198);
  void* g200 = &_ZSt5rightRSt8ios_base;
  struct std::basic_ostream<char>* r201 = std__ostream__operator___std__ios_base_____(r199, g200);
  char** t202 = wFace174;
  int t203 = column170;
  char** ptr204 = t202 + t203;
  char* t205 = *ptr204;
  struct std::basic_ostream<char>* r206 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r201, t205);
  char* cast207 = (char*)_str_17;
  struct std::basic_ostream<char>* r208 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r206, cast207);
  int c209 = 8;
  struct std::_Setw r210 = std__setw(c209);
  agg.tmp1172 = r210;
  struct std::_Setw t211 = agg.tmp1172;
  struct std::basic_ostream<char>* r212 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r208, t211);
  void* g213 = &_ZSt4leftRSt8ios_base;
  struct std::basic_ostream<char>* r214 = std__ostream__operator___std__ios_base_____(r212, g213);
  char** t215 = wSuit175;
  int t216 = row169;
  char** ptr217 = t215 + t216;
  char* t218 = *ptr217;
  struct std::basic_ostream<char>* r219 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r214, t218);
  int t220 = card168;
  int c221 = 2;
  int b222 = t220 % c221;
  int c223 = 0;
  _Bool c224 = (b222 == c223) ? 1 : 0;
  char c225 = 10;
  char c226 = 9;
  char sel227 = c224 ? c225 : c226;
  struct std::basic_ostream<char>* r228 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r219, sel227);
  goto bb157;
bb157:
  goto bb158;
bb158:
  goto bb159;
bb159:
  int t229 = column170;
  int u230 = ++t229;
  column170 = u230;
  goto bb153;
bb160:
  goto bb161;
bb161:
  goto bb162;
bb162:
  int t231 = row169;
  int u232 = ++t231;
  row169 = u232;
  goto bb150;
bb163:
  goto bb164;
bb164:
  goto bb165;
bb165:
  int t233 = card168;
  int u234 = ++t233;
  card168 = u234;
  goto bb147;
bb166:
  goto bb167;
bb167:
  return;
}

// function: main
int main() {
bb235:
  int __retval236;
  int suit237[4];
  int face238[13];
  int deck239[13];
  // array copy
  for (int i = 0; i < 4; ++i) { __const_main_suit[i] = suit237[i]; }
  // array copy
  for (int i = 0; i < 13; ++i) { __const_main_face[i] = face238[i]; }
  int c240 = {0};
  deck239 = c240;
  long long* c241 = NULL;
  long long r242 = time(c241);
  unsigned int cast243 = (unsigned int)r242;
  srand(cast243);
  int* cast244 = (int*)deck239;
  shuffle_int_(cast244);
  int* cast245 = (int*)deck239;
  char** cast246 = (char**)face238;
  char** cast247 = (char**)suit237;
  deal_int_const_(cast245, cast246, cast247);
  int c248 = 0;
  __retval236 = c248;
  int t249 = __retval236;
  return t249;
}

