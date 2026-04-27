// Struct definitions (auto-parsed)
struct Time { int hour; int minute; int second; };
struct std::_Setfill<char> { char _M_c; };
struct std::_Setw { int _M_n; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[24] = "Dinner will be held at ";
char _str_4[2];
char _str_1[27] = " universal time,\\0Awhich is ";
char _str_5[4] = " AM";
char _str_6[4] = " PM";
char _str_2[17] = " standard time.\\0A";
char _str_3[28];
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std::basic_ostream<char>* _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(struct std::basic_ostream<char>*, struct std::_Setw);

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St8_SetfillIS3_E
struct std::basic_ostream<char>* _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St8_SetfillIS3_E(struct std::basic_ostream<char>*, struct std::_Setfill<char>);

// function: _ZSt7setfillIcESt8_SetfillIT_ES1_
struct std::_Setfill<char> std___Setfill_char__std__setfill_char_(char v0) {
bb1:
  char __c2;
  struct std::_Setfill<char> __retval3;
  __c2 = v0;
  char t4 = __c2;
  __retval3._M_c = t4;
  struct std::_Setfill<char> t5 = __retval3;
  return t5;
}

// function: _ZSt4setwi
struct std::_Setw std__setw(int v6) {
bb7:
  int __n8;
  struct std::_Setw __retval9;
  __n8 = v6;
  int t10 = __n8;
  __retval9._M_n = t10;
  struct std::_Setw t11 = __retval9;
  return t11;
}

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _Z14printUniversalRK4Time
void printUniversal(struct Time* v12) {
bb13:
  struct Time* t14;
  struct std::_Setfill<char> agg.tmp015;
  struct std::_Setw agg.tmp116;
  struct std::_Setw agg.tmp217;
  struct std::_Setw agg.tmp318;
  t14 = v12;
  struct std::basic_ostream<char>* g19 = &_ZSt4cout;
  char c20 = 48;
  struct std::_Setfill<char> r21 = std___Setfill_char__std__setfill_char_(c20);
  agg.tmp015 = r21;
  struct std::_Setfill<char> t22 = agg.tmp015;
  struct std::basic_ostream<char>* r23 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St8_SetfillIS3_E(g19, t22);
  int c24 = 2;
  struct std::_Setw r25 = std__setw(c24);
  agg.tmp116 = r25;
  struct std::_Setw t26 = agg.tmp116;
  struct std::basic_ostream<char>* r27 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(r23, t26);
  struct Time* t28 = t14;
  int t29 = *t28->hour;
  struct std::basic_ostream<char>* r30 = std__ostream__operator__(r27, t29);
  char* cast31 = (char*)_str_4;
  struct std::basic_ostream<char>* r32 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r30, cast31);
  int c33 = 2;
  struct std::_Setw r34 = std__setw(c33);
  agg.tmp217 = r34;
  struct std::_Setw t35 = agg.tmp217;
  struct std::basic_ostream<char>* r36 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(r32, t35);
  struct Time* t37 = t14;
  int t38 = *t37->minute;
  struct std::basic_ostream<char>* r39 = std__ostream__operator__(r36, t38);
  char* cast40 = (char*)_str_4;
  struct std::basic_ostream<char>* r41 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r39, cast40);
  int c42 = 2;
  struct std::_Setw r43 = std__setw(c42);
  agg.tmp318 = r43;
  struct std::_Setw t44 = agg.tmp318;
  struct std::basic_ostream<char>* r45 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(r41, t44);
  struct Time* t46 = t14;
  int t47 = *t46->second;
  struct std::basic_ostream<char>* r48 = std__ostream__operator__(r45, t47);
  return;
}

// function: _Z13printStandardRK4Time
void printStandard(struct Time* v49) {
  _Bool v50;
  _Bool v51;
  int v52;
  char* v53;
bb54:
  struct Time* t67;
  struct std::_Setfill<char> agg.tmp068;
  struct std::_Setw agg.tmp169;
  struct std::_Setw agg.tmp270;
  t67 = v49;
  struct std::basic_ostream<char>* g71 = &_ZSt4cout;
  struct Time* t72 = t67;
  int t73 = *t72->hour;
  int c74 = 0;
  _Bool c75 = (t73 == c74) ? 1 : 0;
  if (c75) goto bb55; else goto bb56;
bb55:
  _Bool c76 = 1;
  v51 = c76;
  goto bb60;
bb56:
  struct Time* t77 = t67;
  int t78 = *t77->hour;
  int c79 = 12;
  _Bool c80 = (t78 == c79) ? 1 : 0;
  if (c80) goto bb57; else goto bb58;
bb57:
  _Bool c81 = 1;
  v50 = c81;
  goto bb59;
bb58:
  _Bool c82 = 0;
  v50 = c82;
  goto bb59;
bb59:
  v51 = v50;
  goto bb60;
bb60:
  if (v51) goto bb61; else goto bb62;
bb61:
  int c83 = 12;
  v52 = c83;
  goto bb63;
bb62:
  struct Time* t84 = t67;
  int t85 = *t84->hour;
  int c86 = 12;
  int b87 = t85 % c86;
  v52 = b87;
  goto bb63;
bb63:
  struct std::basic_ostream<char>* r88 = std__ostream__operator__(g71, v52);
  char* cast89 = (char*)_str_4;
  struct std::basic_ostream<char>* r90 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r88, cast89);
  char c91 = 48;
  struct std::_Setfill<char> r92 = std___Setfill_char__std__setfill_char_(c91);
  agg.tmp068 = r92;
  struct std::_Setfill<char> t93 = agg.tmp068;
  struct std::basic_ostream<char>* r94 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St8_SetfillIS3_E(r90, t93);
  int c95 = 2;
  struct std::_Setw r96 = std__setw(c95);
  agg.tmp169 = r96;
  struct std::_Setw t97 = agg.tmp169;
  struct std::basic_ostream<char>* r98 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(r94, t97);
  struct Time* t99 = t67;
  int t100 = *t99->minute;
  struct std::basic_ostream<char>* r101 = std__ostream__operator__(r98, t100);
  char* cast102 = (char*)_str_4;
  struct std::basic_ostream<char>* r103 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r101, cast102);
  int c104 = 2;
  struct std::_Setw r105 = std__setw(c104);
  agg.tmp270 = r105;
  struct std::_Setw t106 = agg.tmp270;
  struct std::basic_ostream<char>* r107 = _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(r103, t106);
  struct Time* t108 = t67;
  int t109 = *t108->second;
  struct std::basic_ostream<char>* r110 = std__ostream__operator__(r107, t109);
  struct Time* t111 = t67;
  int t112 = *t111->hour;
  int c113 = 12;
  _Bool c114 = (t112 < c113) ? 1 : 0;
  if (c114) goto bb64; else goto bb65;
bb64:
  v53 = _str_5;
  goto bb66;
bb65:
  v53 = _str_6;
  goto bb66;
bb66:
  char* cast115 = (char*)v53;
  struct std::basic_ostream<char>* r116 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r110, cast115);
  return;
}

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb117:
  int __retval118;
  struct Time dinnerTime119;
  int c120 = 18;
  dinnerTime119.hour = c120;
  int c121 = 30;
  dinnerTime119.minute = c121;
  int c122 = 0;
  dinnerTime119.second = c122;
  struct std::basic_ostream<char>* g123 = &_ZSt4cout;
  char* cast124 = (char*)_str;
  struct std::basic_ostream<char>* r125 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g123, cast124);
  printUniversal(&dinnerTime119);
  struct std::basic_ostream<char>* g126 = &_ZSt4cout;
  char* cast127 = (char*)_str_1;
  struct std::basic_ostream<char>* r128 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g126, cast127);
  printStandard(&dinnerTime119);
  struct std::basic_ostream<char>* g129 = &_ZSt4cout;
  char* cast130 = (char*)_str_2;
  struct std::basic_ostream<char>* r131 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g129, cast130);
  int c132 = 10;
  dinnerTime119.hour = c132;
  int c133 = 73;
  dinnerTime119.minute = c133;
  struct std::basic_ostream<char>* g134 = &_ZSt4cout;
  char* cast135 = (char*)_str_3;
  struct std::basic_ostream<char>* r136 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g134, cast135);
  printUniversal(&dinnerTime119);
  struct std::basic_ostream<char>* g137 = &_ZSt4cout;
  void* g138 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r139 = std__ostream__operator___std__ostream_____(g137, g138);
  int c140 = 0;
  __retval118 = c140;
  int t141 = __retval118;
  return t141;
}

