// Struct definitions (auto-parsed)
struct Circle { unsigned char __placeholder; };
struct Point { unsigned char __placeholder; };
struct std::_Setprecision { int _M_n; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::ios_base { int _M_flags; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[32];
char _str_1[9];
char _str_2[10];
char _str_3[44] = "\\0A\\0ACalling print with base-class pointer to ";
char _str_4[45] = "\\0Abase-class object invokes base-class print ";
char _str_5[11];
char _str_6[47] = "\\0A\\0ACalling print with derived-class pointer to ";
char _str_7[45] = "\\0Aderived-class object invokes derived-class ";
char _str_8[17];
char _str_9[47] = "derived-class object\\0Ainvokes base-class print ";
char _str_10[39] = "function on that derived-class object\\0A";
// function: _ZN5PointC1Eii
void Point__Point(struct Point*, int, int);

// function: _ZN6CircleC1Eiid
void Circle__Circle(struct Circle*, int, int, double);

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

// function: _ZNK5Point5printEv
void Point__print___const(struct Point*);

// function: _ZNK6Circle5printEv
void Circle__print___const(struct Circle*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb87:
  int __retval88;
  struct Point point89;
  struct Point* pointPtr90;
  struct Circle circle91;
  struct Circle* circlePtr92;
  struct std::_Setprecision agg.tmp093;
  int c94 = 30;
  int c95 = 50;
  Point__Point(&point89, c94, c95);
  struct Point* c96 = NULL;
  pointPtr90 = c96;
  int c97 = 120;
  int c98 = 89;
  double c99 = 2.7000000000000002;
  Circle__Circle(&circle91, c97, c98, c99);
  struct Circle* c100 = NULL;
  circlePtr92 = c100;
  struct std::basic_ostream<char>* g101 = &_ZSt4cout;
  void* g102 = &_ZSt5fixedRSt8ios_base;
  struct std::basic_ostream<char>* r103 = std__ostream__operator___std__ios_base_____(g101, g102);
  int c104 = 2;
  struct std::_Setprecision r105 = std__setprecision(c104);
  agg.tmp093 = r105;
  struct std::_Setprecision t106 = agg.tmp093;
  struct std::basic_ostream<char>* r107 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r103, t106);
  struct std::basic_ostream<char>* g108 = &_ZSt4cout;
  char* cast109 = (char*)_str;
  struct std::basic_ostream<char>* r110 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g108, cast109);
  char* cast111 = (char*)_str_1;
  struct std::basic_ostream<char>* r112 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r110, cast111);
  Point__print___const(&point89);
  struct std::basic_ostream<char>* g113 = &_ZSt4cout;
  char* cast114 = (char*)_str_2;
  struct std::basic_ostream<char>* r115 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g113, cast114);
  Circle__print___const(&circle91);
  pointPtr90 = &point89;
  struct std::basic_ostream<char>* g116 = &_ZSt4cout;
  char* cast117 = (char*)_str_3;
  struct std::basic_ostream<char>* r118 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g116, cast117);
  char* cast119 = (char*)_str_4;
  struct std::basic_ostream<char>* r120 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r118, cast119);
  char* cast121 = (char*)_str_5;
  struct std::basic_ostream<char>* r122 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r120, cast121);
  struct Point* t123 = pointPtr90;
  Point__print___const(t123);
  circlePtr92 = &circle91;
  struct std::basic_ostream<char>* g124 = &_ZSt4cout;
  char* cast125 = (char*)_str_6;
  struct std::basic_ostream<char>* r126 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g124, cast125);
  char* cast127 = (char*)_str_7;
  struct std::basic_ostream<char>* r128 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r126, cast127);
  char* cast129 = (char*)_str_8;
  struct std::basic_ostream<char>* r130 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r128, cast129);
  struct Circle* t131 = circlePtr92;
  Circle__print___const(t131);
