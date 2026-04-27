// Struct definitions (auto-parsed)
struct Time { int second; int minute; int hour; };
struct std::_Setfill<char> { char _M_c; };
struct std::_Setw { int _M_n; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[2];
char _str_1[4] = " AM";
char _str_2[4] = " PM";
char _str_3[31] = "The initial universal time is ";
char _str_4[31] = "\\0AThe initial standard time is ";
char _str_5[35] = "\\0A\\0AUniversal time after setTime is ";
char _str_6[33] = "\\0AStandard time after setTime is ";
char _str_7[37];
char _str_8[18];
char _str_9[17];
// function: _ZN4TimeC2Ev
void _ZN4TimeC2Ev(struct Time* v0) {
bb1:
  struct Time* this2;
  this2 = v0;
  struct Time* t3 = this2;
  int c4 = 0;
  *t3->second = c4;
  *t3->minute = c4;
  *t3->hour = c4;
  return;
}

// function: _ZN4TimeC1Ev
void _ZN4TimeC1Ev(struct Time*);

// function: _ZN4Time7setTimeEiii
void Time__setTime(struct Time* v5, int v6, int v7, int v8) {
  _Bool v9;
  _Bool v10;
  int v11;
  _Bool v12;
  _Bool v13;
  int v14;
  _Bool v15;
  _Bool v16;
  int v17;
bb18:
  struct Time* this46;
  int h47;
  int m48;
  int s49;
  this46 = v5;
  h47 = v6;
  m48 = v7;
  s49 = v8;
  struct Time* t50 = this46;
  int t51 = h47;
  int c52 = 0;
  _Bool c53 = (t51 >= c52) ? 1 : 0;
  if (c53) goto bb19; else goto bb23;
bb19:
  int t54 = h47;
  int c55 = 24;
  _Bool c56 = (t54 < c55) ? 1 : 0;
  if (c56) goto bb20; else goto bb21;
bb20:
  _Bool c57 = 1;
  v9 = c57;
  goto bb22;
bb21:
  _Bool c58 = 0;
  v9 = c58;
  goto bb22;
bb22:
  v10 = v9;
  goto bb24;
bb23:
  _Bool c59 = 0;
  v10 = c59;
  goto bb24;
bb24:
  if (v10) goto bb25; else goto bb26;
bb25:
  int t60 = h47;
  v11 = t60;
  goto bb27;
bb26:
  int c61 = 0;
  v11 = c61;
  goto bb27;
bb27:
  *t50->hour = v11;
  int t62 = m48;
  int c63 = 0;
  _Bool c64 = (t62 >= c63) ? 1 : 0;
  if (c64) goto bb28; else goto bb32;
bb28:
  int t65 = m48;
  int c66 = 60;
  _Bool c67 = (t65 < c66) ? 1 : 0;
  if (c67) goto bb29; else goto bb30;
bb29:
  _Bool c68 = 1;
  v12 = c68;
  goto bb31;
bb30:
  _Bool c69 = 0;
  v12 = c69;
  goto bb31;
bb31:
  v13 = v12;
  goto bb33;
bb32:
  _Bool c70 = 0;
  v13 = c70;
  goto bb33;
bb33:
  if (v13) goto bb34; else goto bb35;
bb34:
  int t71 = m48;
  v14 = t71;
  goto bb36;
bb35:
  int c72 = 0;
  v14 = c72;
  goto bb36;
bb36:
  *t50->minute = v14;
  int t73 = s49;
  int c74 = 0;
  _Bool c75 = (t73 >= c74) ? 1 : 0;
  if (c75) goto bb37; else goto bb41;
bb37:
  int t76 = s49;
  int c77 = 60;
  _Bool c78 = (t76 < c77) ? 1 : 0;
  if (c78) goto bb38; else goto bb39;
bb38:
  _Bool c79 = 1;
  v15 = c79;
  goto bb40;
bb39:
  _Bool c80 = 0;
  v15 = c80;
  goto bb40;
bb40:
  v16 = v15;
  goto bb42;
bb41:
  _Bool c81 = 0;
  v16 = c81;
  goto bb42;
bb42:
  if (v16) goto bb43; else goto bb44;
bb43:
  int t82 = s49;
  v17 = t82;
  goto bb45;
bb44:
  int c83 = 0;
  v17 = c83;
  goto bb45;
bb45:
  *t50->second = v17;
  return;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std::basic_ostream<char>* _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(struct std::basic_ostream<char>*, struct std::_Setw);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St8_SetfillIS3_E
struct std::basic_ostream<char>* _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St8_SetfillIS3_E(struct std::basic_ostream<char>*, struct std::_Setfill<char>);

// function: _ZSt7setfillIcESt8_SetfillIT_ES1_
struct std::_Setfill<char> std___Setfill_char__std__setfill_char_(char v84) {
bb85:
  char __c86;
  struct std::_Setfill<char> __retval87;
  __c86 = v84;
  char t88 = __c86;
  __retval87._M_c = t88;
  struct std::_Setfill<char> t89 = __retval87;
  return t89;
}

// function: _ZSt4setwi
struct std::_Setw std__setw(int v90) {
bb91:
  int __n92;
  struct std::_Setw __retval93;
  __n92 = v90;
  int t94 = __n92;
  __retval93._M_n = t94;
  struct std::_Setw t95 = __retval93;
  return t95;
}

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZN4Time14printUniversalEv
void Time__printUniversal(struct Time* v96) {
bb97:
  struct Time* this98;
  struct std::_Setfill<char> agg.tmp099;
  struct std::_Setw agg.tmp1100;
  struct std::_Setw agg.tmp2101;
  struct std::_Setw agg.tmp3102;
  this98 = v96;
  struct Time* t103 = this98;
  struct std::basic_ostream<char>* g104 = &_ZSt4cout;
  char c105 = 48;
  struct std::_Setfill<char> r106 = std___Setfill_char__std__setfill_char_(c105);
  agg.tmp099 = r106;
  struct std::_Setfill<char> t107 = agg.tmp099;
  struct std::basic_ostream<char>* r108 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St8_SetfillIS3_E(g104, t107);
  int c109 = 2;
  struct std::_Setw r110 = std__setw(c109);
  agg.tmp1100 = r110;
  struct std::_Setw t111 = agg.tmp1100;
  struct std::basic_ostream<char>* r112 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(r108, t111);
  int t113 = *t103->hour;
  struct std::basic_ostream<char>* r114 = std__ostream__operator__(r112, t113);
  char* cast115 = (char*)_str;
  struct std::basic_ostream<char>* r116 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r114, cast115);
  int c117 = 2;
  struct std::_Setw r118 = std__setw(c117);
  agg.tmp2101 = r118;
  struct std::_Setw t119 = agg.tmp2101;
  struct std::basic_ostream<char>* r120 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(r116, t119);
  int t121 = *t103->minute;
  struct std::basic_ostream<char>* r122 = std__ostream__operator__(r120, t121);
  char* cast123 = (char*)_str;
  struct std::basic_ostream<char>* r124 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r122, cast123);
  int c125 = 2;
  struct std::_Setw r126 = std__setw(c125);
  agg.tmp3102 = r126;
  struct std::_Setw t127 = agg.tmp3102;
  struct std::basic_ostream<char>* r128 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(r124, t127);
  int t129 = *t103->second;
  struct std::basic_ostream<char>* r130 = std__ostream__operator__(r128, t129);
  return;
}

// function: _ZN4Time13printStandardEv
void Time__printStandard(struct Time* v131) {
  _Bool v132;
  _Bool v133;
  int v134;
  char* v135;
bb136:
  struct Time* this149;
  struct std::_Setfill<char> agg.tmp0150;
  struct std::_Setw agg.tmp1151;
  struct std::_Setw agg.tmp2152;
  this149 = v131;
  struct Time* t153 = this149;
  struct std::basic_ostream<char>* g154 = &_ZSt4cout;
  int t155 = *t153->hour;
  int c156 = 0;
  _Bool c157 = (t155 == c156) ? 1 : 0;
  if (c157) goto bb137; else goto bb138;
bb137:
  _Bool c158 = 1;
  v133 = c158;
  goto bb142;
bb138:
  int t159 = *t153->hour;
  int c160 = 12;
  _Bool c161 = (t159 == c160) ? 1 : 0;
  if (c161) goto bb139; else goto bb140;
bb139:
  _Bool c162 = 1;
  v132 = c162;
  goto bb141;
bb140:
  _Bool c163 = 0;
  v132 = c163;
  goto bb141;
bb141:
  v133 = v132;
  goto bb142;
bb142:
  if (v133) goto bb143; else goto bb144;
bb143:
  int c164 = 12;
  v134 = c164;
  goto bb145;
bb144:
  int t165 = *t153->hour;
  int c166 = 12;
  int b167 = t165 % c166;
  v134 = b167;
  goto bb145;
bb145:
  struct std::basic_ostream<char>* r168 = std__ostream__operator__(g154, v134);
  char* cast169 = (char*)_str;
  struct std::basic_ostream<char>* r170 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r168, cast169);
  char c171 = 48;
  struct std::_Setfill<char> r172 = std___Setfill_char__std__setfill_char_(c171);
  agg.tmp0150 = r172;
  struct std::_Setfill<char> t173 = agg.tmp0150;
  struct std::basic_ostream<char>* r174 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St8_SetfillIS3_E(r170, t173);
  int c175 = 2;
  struct std::_Setw r176 = std__setw(c175);
  agg.tmp1151 = r176;
  struct std::_Setw t177 = agg.tmp1151;
  struct std::basic_ostream<char>* r178 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(r174, t177);
  int t179 = *t153->minute;
  struct std::basic_ostream<char>* r180 = std__ostream__operator__(r178, t179);
  char* cast181 = (char*)_str;
  struct std::basic_ostream<char>* r182 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r180, cast181);
  int c183 = 2;
  struct std::_Setw r184 = std__setw(c183);
  agg.tmp2152 = r184;
  struct std::_Setw t185 = agg.tmp2152;
  struct std::basic_ostream<char>* r186 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(r182, t185);
  int t187 = *t153->second;
  struct std::basic_ostream<char>* r188 = std__ostream__operator__(r186, t187);
  int t189 = *t153->hour;
  int c190 = 12;
  _Bool c191 = (t189 < c190) ? 1 : 0;
  if (c191) goto bb146; else goto bb147;
bb146:
  v135 = _str_1;
  goto bb148;
bb147:
  v135 = _str_2;
  goto bb148;
bb148:
  char* cast192 = (char*)v135;
  struct std::basic_ostream<char>* r193 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r188, cast192);
  return;
}

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb194:
  int __retval195;
  struct Time t196;
  _ZN4TimeC1Ev(&t196);
  struct std::basic_ostream<char>* g197 = &_ZSt4cout;
  char* cast198 = (char*)_str_3;
  struct std::basic_ostream<char>* r199 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g197, cast198);
  Time__printUniversal(&t196);
  struct std::basic_ostream<char>* g200 = &_ZSt4cout;
  char* cast201 = (char*)_str_4;
  struct std::basic_ostream<char>* r202 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g200, cast201);
  Time__printStandard(&t196);
  int c203 = 13;
  int c204 = 27;
  int c205 = 6;
  Time__setTime(&t196, c203, c204, c205);
  struct std::basic_ostream<char>* g206 = &_ZSt4cout;
  char* cast207 = (char*)_str_5;
  struct std::basic_ostream<char>* r208 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g206, cast207);
  Time__printUniversal(&t196);
  struct std::basic_ostream<char>* g209 = &_ZSt4cout;
  char* cast210 = (char*)_str_6;
  struct std::basic_ostream<char>* r211 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g209, cast210);
  Time__printStandard(&t196);
  int c212 = 99;
  int c213 = 99;
  int c214 = 99;
  Time__setTime(&t196, c212, c213, c214);
  struct std::basic_ostream<char>* g215 = &_ZSt4cout;
  char* cast216 = (char*)_str_7;
  struct std::basic_ostream<char>* r217 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g215, cast216);
  char* cast218 = (char*)_str_8;
  struct std::basic_ostream<char>* r219 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r217, cast218);
  Time__printUniversal(&t196);
  struct std::basic_ostream<char>* g220 = &_ZSt4cout;
  char* cast221 = (char*)_str_9;
  struct std::basic_ostream<char>* r222 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g220, cast221);
  Time__printStandard(&t196);
  struct std::basic_ostream<char>* g223 = &_ZSt4cout;
  void* g224 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r225 = std__ostream__operator___std__ostream_____(g223, g224);
  int c226 = 0;
  __retval195 = c226;
  int t227 = __retval195;
  return t227;
}

