// Struct definitions (auto-parsed)
struct std::_Setprecision { int _M_n; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::ios_base { int _M_flags; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[6] = "sqrt(";
char _str_1[5] = ") = ";
char _str_2[7] = "\\0Asqrt(";
char _str_3[6] = "\\0Aexp(";
char _str_4[6] = "\\0Alog(";
char _str_5[8] = "\\0Alog10(";
char _str_6[7] = "\\0Afabs(";
char _str_7[7] = "\\0Aceil(";
char _str_8[8] = "\\0Afloor(";
char _str_9[6] = "\\0Apow(";
char _str_10[3] = ", ";
char _str_11[7] = "\\0Afmod(";
char _str_12[6] = "\\0Asin(";
char _str_13[6] = "\\0Acos(";
char _str_14[6] = "\\0Atan(";
// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std::basic_ostream<char>*, struct std::_Setprecision);

// function: _ZNSolsEPFRSt8ios_baseS0_E
struct std::basic_ostream<char>* std__ostream__operator___std__ios_base_____(struct std::basic_ostream<char>*, void*);

// function: _ZStaNRSt13_Ios_FmtflagsS_
int* _ZStaNRSt13_Ios_FmtflagsS_(int* v0, int v1) {
bb2:
  int* __a3;
  int __b4;
  int* __retval5;
  __a3 = v0;
  __b4 = v1;
  int* t6 = __a3;
  int t7 = *t6;
  int t8 = __b4;
  int r9 = _ZStanSt13_Ios_FmtflagsS_(t7, t8);
  int* t10 = __a3;
  *t10 = r9;
  __retval5 = t10;
  int* t11 = __retval5;
  return t11;
}

// function: _ZStcoSt13_Ios_Fmtflags
int _ZStcoSt13_Ios_Fmtflags(int v12) {
bb13:
  int __a14;
  int __retval15;
  __a14 = v12;
  int t16 = __a14;
  int u17 = ~t16;
  __retval15 = u17;
  int t18 = __retval15;
  return t18;
}

// function: _ZStorSt13_Ios_FmtflagsS_
int _ZStorSt13_Ios_FmtflagsS_(int v19, int v20) {
bb21:
  int __a22;
  int __b23;
  int __retval24;
  __a22 = v19;
  __b23 = v20;
  int t25 = __a22;
  int t26 = __b23;
  int b27 = t25 | t26;
  __retval24 = b27;
  int t28 = __retval24;
  return t28;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* _ZStoRRSt13_Ios_FmtflagsS_(int* v29, int v30) {
bb31:
  int* __a32;
  int __b33;
  int* __retval34;
  __a32 = v29;
  __b33 = v30;
  int* t35 = __a32;
  int t36 = *t35;
  int t37 = __b33;
  int r38 = _ZStorSt13_Ios_FmtflagsS_(t36, t37);
  int* t39 = __a32;
  *t39 = r38;
  __retval34 = t39;
  int* t40 = __retval34;
  return t40;
}

// function: _ZStanSt13_Ios_FmtflagsS_
int _ZStanSt13_Ios_FmtflagsS_(int v41, int v42) {
bb43:
  int __a44;
  int __b45;
  int __retval46;
  __a44 = v41;
  __b45 = v42;
  int t47 = __a44;
  int t48 = __b45;
  int b49 = t47 & t48;
  __retval46 = b49;
  int t50 = __retval46;
  return t50;
}

// function: _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
int std__ios_base__setf(struct std::ios_base* v51, int v52, int v53) {
bb54:
  int this55[8];
  int __fmtfl56;
  int __mask57;
  int __retval58;
  int __old59;
  this55 = v51;
  __fmtfl56 = v52;
  __mask57 = v53;
  struct std::ios_base* t60 = this55;
  int t61 = *t60->_M_flags;
  __old59 = t61;
  int t62 = __mask57;
  int r63 = _ZStcoSt13_Ios_Fmtflags(t62);
  int* r64 = _ZStaNRSt13_Ios_FmtflagsS_(t60->_M_flags, r63);
  int t65 = __fmtfl56;
  int t66 = __mask57;
  int r67 = _ZStanSt13_Ios_FmtflagsS_(t65, t66);
  int* r68 = _ZStoRRSt13_Ios_FmtflagsS_(t60->_M_flags, r67);
  int t69 = __old59;
  __retval58 = t69;
  int t70 = __retval58;
  return t70;
}

// function: _ZSt5fixedRSt8ios_base
struct std::ios_base* std__fixed(struct std::ios_base* v71) {
bb72:
  int __base73[8];
  int __retval74[8];
  __base73 = v71;
  struct std::ios_base* t75 = __base73;
  int c76 = 4;
  int c77 = 260;
  int r78 = std__ios_base__setf(t75, c76, c77);
  struct std::ios_base* t79 = __base73;
  __retval74 = t79;
  struct std::ios_base* t80 = __retval74;
  return t80;
}

// function: _ZSt12setprecisioni
struct std::_Setprecision std__setprecision(int v81) {
bb82:
  int __n83;
  struct std::_Setprecision __retval84;
  __n83 = v81;
  int t85 = __n83;
  __retval84._M_n = t85;
  struct std::_Setprecision t86 = __retval84;
  return t86;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEd
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, double);

// function: sqrt
double sqrt(double);

// function: exp
double exp(double);

// function: log
double log(double);

// function: log10
double log10(double);

// function: pow
double pow(double, double);

// function: fmod
double fmod(double, double);

// function: sin
double sin(double);

// function: cos
double cos(double);

// function: tan
double tan(double);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb87:
  int __retval88;
  struct std::_Setprecision agg.tmp089;
  struct std::_Setprecision agg.tmp190;
  struct std::_Setprecision agg.tmp291;
  struct std::_Setprecision agg.tmp392;
  struct std::_Setprecision agg.tmp493;
  struct std::_Setprecision agg.tmp594;
  struct std::_Setprecision agg.tmp695;
  struct std::_Setprecision agg.tmp796;
  struct std::_Setprecision agg.tmp897;
  struct std::basic_ostream<char>* g98 = &_ZSt4cout;
  void* g99 = &_ZSt5fixedRSt8ios_base;
  struct std::basic_ostream<char>* r100 = std__ostream__operator___std__ios_base_____(g98, g99);
  int c101 = 1;
  struct std::_Setprecision r102 = std__setprecision(c101);
  agg.tmp089 = r102;
  struct std::_Setprecision t103 = agg.tmp089;
  struct std::basic_ostream<char>* r104 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r100, t103);
  struct std::basic_ostream<char>* g105 = &_ZSt4cout;
  char* cast106 = (char*)_str;
  struct std::basic_ostream<char>* r107 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g105, cast106);
  double c108 = 900;
  struct std::basic_ostream<char>* r109 = std__ostream__operator__(r107, c108);
  char* cast110 = (char*)_str_1;
  struct std::basic_ostream<char>* r111 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r109, cast110);
  double c112 = 900;
  double r113 = sqrt(c112);
  struct std::basic_ostream<char>* r114 = std__ostream__operator__(r111, r113);
  char* cast115 = (char*)_str_2;
  struct std::basic_ostream<char>* r116 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r114, cast115);
  double c117 = 9;
  struct std::basic_ostream<char>* r118 = std__ostream__operator__(r116, c117);
  char* cast119 = (char*)_str_1;
  struct std::basic_ostream<char>* r120 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r118, cast119);
  double c121 = 9;
  double r122 = sqrt(c121);
  struct std::basic_ostream<char>* r123 = std__ostream__operator__(r120, r122);
  struct std::basic_ostream<char>* g124 = &_ZSt4cout;
  char* cast125 = (char*)_str_3;
  struct std::basic_ostream<char>* r126 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g124, cast125);
  double c127 = 1;
  struct std::basic_ostream<char>* r128 = std__ostream__operator__(r126, c127);
  char* cast129 = (char*)_str_1;
  struct std::basic_ostream<char>* r130 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r128, cast129);
  int c131 = 6;
  struct std::_Setprecision r132 = std__setprecision(c131);
  agg.tmp190 = r132;
  struct std::_Setprecision t133 = agg.tmp190;
  struct std::basic_ostream<char>* r134 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r130, t133);
  double c135 = 1;
  double r136 = exp(c135);
  struct std::basic_ostream<char>* r137 = std__ostream__operator__(r134, r136);
  char* cast138 = (char*)_str_3;
  struct std::basic_ostream<char>* r139 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r137, cast138);
  int c140 = 1;
  struct std::_Setprecision r141 = std__setprecision(c140);
  agg.tmp291 = r141;
  struct std::_Setprecision t142 = agg.tmp291;
  struct std::basic_ostream<char>* r143 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r139, t142);
  double c144 = 2;
  struct std::basic_ostream<char>* r145 = std__ostream__operator__(r143, c144);
  char* cast146 = (char*)_str_1;
  struct std::basic_ostream<char>* r147 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r145, cast146);
  int c148 = 6;
  struct std::_Setprecision r149 = std__setprecision(c148);
  agg.tmp392 = r149;
  struct std::_Setprecision t150 = agg.tmp392;
  struct std::basic_ostream<char>* r151 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r147, t150);
  double c152 = 2;
  double r153 = exp(c152);
  struct std::basic_ostream<char>* r154 = std__ostream__operator__(r151, r153);
  struct std::basic_ostream<char>* g155 = &_ZSt4cout;
  char* cast156 = (char*)_str_4;
  struct std::basic_ostream<char>* r157 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g155, cast156);
  double c158 = 2.7182819999999999;
  struct std::basic_ostream<char>* r159 = std__ostream__operator__(r157, c158);
  char* cast160 = (char*)_str_1;
  struct std::basic_ostream<char>* r161 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r159, cast160);
  int c162 = 1;
  struct std::_Setprecision r163 = std__setprecision(c162);
  agg.tmp493 = r163;
  struct std::_Setprecision t164 = agg.tmp493;
  struct std::basic_ostream<char>* r165 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r161, t164);
  double c166 = 2.7182819999999999;
  double r167 = log(c166);
  struct std::basic_ostream<char>* r168 = std__ostream__operator__(r165, r167);
  char* cast169 = (char*)_str_4;
  struct std::basic_ostream<char>* r170 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r168, cast169);
  int c171 = 6;
  struct std::_Setprecision r172 = std__setprecision(c171);
  agg.tmp594 = r172;
  struct std::_Setprecision t173 = agg.tmp594;
  struct std::basic_ostream<char>* r174 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r170, t173);
  double c175 = 7.3890560000000001;
  struct std::basic_ostream<char>* r176 = std__ostream__operator__(r174, c175);
  char* cast177 = (char*)_str_1;
  struct std::basic_ostream<char>* r178 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r176, cast177);
  int c179 = 1;
  struct std::_Setprecision r180 = std__setprecision(c179);
  agg.tmp695 = r180;
  struct std::_Setprecision t181 = agg.tmp695;
  struct std::basic_ostream<char>* r182 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r178, t181);
  double c183 = 7.3890560000000001;
  double r184 = log(c183);
  struct std::basic_ostream<char>* r185 = std__ostream__operator__(r182, r184);
  struct std::basic_ostream<char>* g186 = &_ZSt4cout;
  char* cast187 = (char*)_str_5;
  struct std::basic_ostream<char>* r188 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g186, cast187);
  double c189 = 1;
  struct std::basic_ostream<char>* r190 = std__ostream__operator__(r188, c189);
  char* cast191 = (char*)_str_1;
  struct std::basic_ostream<char>* r192 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r190, cast191);
  double c193 = 1;
  double r194 = log10(c193);
  struct std::basic_ostream<char>* r195 = std__ostream__operator__(r192, r194);
  char* cast196 = (char*)_str_5;
  struct std::basic_ostream<char>* r197 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r195, cast196);
  double c198 = 10;
  struct std::basic_ostream<char>* r199 = std__ostream__operator__(r197, c198);
  char* cast200 = (char*)_str_1;
  struct std::basic_ostream<char>* r201 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r199, cast200);
  double c202 = 10;
  double r203 = log10(c202);
  struct std::basic_ostream<char>* r204 = std__ostream__operator__(r201, r203);
  char* cast205 = (char*)_str_5;
  struct std::basic_ostream<char>* r206 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r204, cast205);
  double c207 = 100;
  struct std::basic_ostream<char>* r208 = std__ostream__operator__(r206, c207);
  char* cast209 = (char*)_str_1;
  struct std::basic_ostream<char>* r210 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r208, cast209);
  double c211 = 100;
  double r212 = log10(c211);
  struct std::basic_ostream<char>* r213 = std__ostream__operator__(r210, r212);
  struct std::basic_ostream<char>* g214 = &_ZSt4cout;
  char* cast215 = (char*)_str_6;
  struct std::basic_ostream<char>* r216 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g214, cast215);
  double c217 = 13.5;
  struct std::basic_ostream<char>* r218 = std__ostream__operator__(r216, c217);
  char* cast219 = (char*)_str_1;
  struct std::basic_ostream<char>* r220 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r218, cast219);
  double c221 = 13.5;
