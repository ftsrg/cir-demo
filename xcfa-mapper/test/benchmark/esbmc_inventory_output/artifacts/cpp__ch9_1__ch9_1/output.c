// Struct definitions (auto-parsed)
struct Circle { unsigned char __placeholder; };
struct std::_Setprecision { int _M_n; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::ios_base { int _M_flags; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[17] = "X coordinate is ";
char _str_1[18] = "\\0AY coordinate is ";
char _str_2[12] = "\\0ARadius is ";
char _str_3[45] = "\\0A\\0AThe new location and radius of circle are\\0A";
char _str_4[14] = "\\0ADiameter is ";
char _str_5[19] = "\\0ACircumference is ";
char _str_6[10] = "\\0AArea is ";
// function: _ZN6CircleC1Eiid
void Circle__Circle(struct Circle*, int, int, double);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* _ZNSolsEi(struct std::basic_ostream<char>*, int);

// function: _ZNK6Circle4getXEv
int Circle__getX___const(struct Circle*);

// function: _ZNK6Circle4getYEv
int Circle__getY___const(struct Circle*);

// function: _ZNSolsEd
struct std::basic_ostream<char>* _ZNSolsEd(struct std::basic_ostream<char>*, double);

// function: _ZNK6Circle9getRadiusEv
double Circle__getRadius___const(struct Circle*);

// function: _ZN6Circle4setXEi
void Circle__setX(struct Circle*, int);

// function: _ZN6Circle4setYEi
void Circle__setY(struct Circle*, int);

// function: _ZN6Circle9setRadiusEd
void Circle__setRadius(struct Circle*, double);

// function: _ZNK6Circle5printEv
void Circle__print___const(struct Circle*);

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

// function: _ZNK6Circle11getDiameterEv
double Circle__getDiameter___const(struct Circle*);

// function: _ZNK6Circle16getCircumferenceEv
double Circle__getCircumference___const(struct Circle*);

// function: _ZNK6Circle7getAreaEv
double Circle__getArea___const(struct Circle*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb87:
  int __retval88;
  struct Circle circle89;
  struct std::_Setprecision agg.tmp090;
  int c91 = 37;
  int c92 = 43;
  double c93 = 2.5;
  Circle__Circle(&circle89, c91, c92, c93);
  struct std::basic_ostream<char>* g94 = &_ZSt4cout;
  char* cast95 = (char*)_str;
  struct std::basic_ostream<char>* r96 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g94, cast95);
  int r97 = Circle__getX___const(&circle89);
  struct std::basic_ostream<char>* r98 = _ZNSolsEi(r96, r97);
  char* cast99 = (char*)_str_1;
  struct std::basic_ostream<char>* r100 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r98, cast99);
  int r101 = Circle__getY___const(&circle89);
  struct std::basic_ostream<char>* r102 = _ZNSolsEi(r100, r101);
  char* cast103 = (char*)_str_2;
  struct std::basic_ostream<char>* r104 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r102, cast103);
  double r105 = Circle__getRadius___const(&circle89);
  struct std::basic_ostream<char>* r106 = _ZNSolsEd(r104, r105);
  int c107 = 2;
  Circle__setX(&circle89, c107);
  int c108 = 2;
  Circle__setY(&circle89, c108);
  double c109 = 4.25;
  Circle__setRadius(&circle89, c109);
  struct std::basic_ostream<char>* g110 = &_ZSt4cout;
  char* cast111 = (char*)_str_3;
  struct std::basic_ostream<char>* r112 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g110, cast111);
  Circle__print___const(&circle89);
  struct std::basic_ostream<char>* g113 = &_ZSt4cout;
  void* g114 = &_ZSt5fixedRSt8ios_base;
  struct std::basic_ostream<char>* r115 = std__ostream__operator___std__ios_base_____(g113, g114);
  int c116 = 2;
  struct std::_Setprecision r117 = std__setprecision(c116);
  agg.tmp090 = r117;
  struct std::_Setprecision t118 = agg.tmp090;
  struct std::basic_ostream<char>* r119 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r115, t118);
  struct std::basic_ostream<char>* g120 = &_ZSt4cout;
  char* cast121 = (char*)_str_4;
  struct std::basic_ostream<char>* r122 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g120, cast121);
  double r123 = Circle__getDiameter___const(&circle89);
  struct std::basic_ostream<char>* r124 = _ZNSolsEd(r122, r123);
  struct std::basic_ostream<char>* g125 = &_ZSt4cout;
  char* cast126 = (char*)_str_5;
  struct std::basic_ostream<char>* r127 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g125, cast126);
  double r128 = Circle__getCircumference___const(&circle89);
  struct std::basic_ostream<char>* r129 = _ZNSolsEd(r127, r128);
  struct std::basic_ostream<char>* g130 = &_ZSt4cout;
  char* cast131 = (char*)_str_6;
  struct std::basic_ostream<char>* r132 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g130, cast131);
  double r133 = Circle__getArea___const(&circle89);
  struct std::basic_ostream<char>* r134 = _ZNSolsEd(r132, r133);
  struct std::basic_ostream<char>* g135 = &_ZSt4cout;
  void* g136 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r137 = std__ostream__operator___std__ostream_____(g135, g136);
  int c138 = 0;
  __retval88 = c138;
  int t139 = __retval88;
  return t139;
}

