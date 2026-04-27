// Struct definitions (auto-parsed)
struct std::_Setprecision { int _M_n; };
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::ios_base { int _M_flags; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[25];
struct std::basic_istream<char> _ZSt3cin;
char _str_1[18] = "Class average is ";
char _str_2[23] = "No grades were entered";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSirsERi
struct std::basic_istream<char>* std__istream__operator__(struct std::basic_istream<char>*, int*);

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std::basic_ostream<char>*, struct std::_Setprecision);

// function: _ZSt12setprecisioni
struct std::_Setprecision std__setprecision(int v0) {
bb1:
  int __n2;
  struct std::_Setprecision __retval3;
  __n2 = v0;
  int t4 = __n2;
  __retval3._M_n = t4;
  struct std::_Setprecision t5 = __retval3;
  return t5;
}

// function: _ZNSolsEPFRSt8ios_baseS0_E
struct std::basic_ostream<char>* std__ostream__operator___std__ios_base_____(struct std::basic_ostream<char>*, void*);

// function: _ZStaNRSt13_Ios_FmtflagsS_
int* _ZStaNRSt13_Ios_FmtflagsS_(int* v6, int v7) {
bb8:
  int* __a9;
  int __b10;
  int* __retval11;
  __a9 = v6;
  __b10 = v7;
  int* t12 = __a9;
  int t13 = *t12;
  int t14 = __b10;
  int r15 = _ZStanSt13_Ios_FmtflagsS_(t13, t14);
  int* t16 = __a9;
  *t16 = r15;
  __retval11 = t16;
  int* t17 = __retval11;
  return t17;
}

// function: _ZStcoSt13_Ios_Fmtflags
int _ZStcoSt13_Ios_Fmtflags(int v18) {
bb19:
  int __a20;
  int __retval21;
  __a20 = v18;
  int t22 = __a20;
  int u23 = ~t22;
  __retval21 = u23;
  int t24 = __retval21;
  return t24;
}

// function: _ZStorSt13_Ios_FmtflagsS_
int _ZStorSt13_Ios_FmtflagsS_(int v25, int v26) {
bb27:
  int __a28;
  int __b29;
  int __retval30;
  __a28 = v25;
  __b29 = v26;
  int t31 = __a28;
  int t32 = __b29;
  int b33 = t31 | t32;
  __retval30 = b33;
  int t34 = __retval30;
  return t34;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* _ZStoRRSt13_Ios_FmtflagsS_(int* v35, int v36) {
bb37:
  int* __a38;
  int __b39;
  int* __retval40;
  __a38 = v35;
  __b39 = v36;
  int* t41 = __a38;
  int t42 = *t41;
  int t43 = __b39;
  int r44 = _ZStorSt13_Ios_FmtflagsS_(t42, t43);
  int* t45 = __a38;
  *t45 = r44;
  __retval40 = t45;
  int* t46 = __retval40;
  return t46;
}

// function: _ZStanSt13_Ios_FmtflagsS_
int _ZStanSt13_Ios_FmtflagsS_(int v47, int v48) {
bb49:
  int __a50;
  int __b51;
  int __retval52;
  __a50 = v47;
  __b51 = v48;
  int t53 = __a50;
  int t54 = __b51;
  int b55 = t53 & t54;
  __retval52 = b55;
  int t56 = __retval52;
  return t56;
}

// function: _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
int std__ios_base__setf(struct std::ios_base* v57, int v58, int v59) {
bb60:
  int this61[8];
  int __fmtfl62;
  int __mask63;
  int __retval64;
  int __old65;
  this61 = v57;
  __fmtfl62 = v58;
  __mask63 = v59;
  struct std::ios_base* t66 = this61;
  int t67 = *t66->_M_flags;
  __old65 = t67;
  int t68 = __mask63;
  int r69 = _ZStcoSt13_Ios_Fmtflags(t68);
  int* r70 = _ZStaNRSt13_Ios_FmtflagsS_(t66->_M_flags, r69);
  int t71 = __fmtfl62;
  int t72 = __mask63;
  int r73 = _ZStanSt13_Ios_FmtflagsS_(t71, t72);
  int* r74 = _ZStoRRSt13_Ios_FmtflagsS_(t66->_M_flags, r73);
  int t75 = __old65;
  __retval64 = t75;
  int t76 = __retval64;
  return t76;
}

// function: _ZSt5fixedRSt8ios_base
struct std::ios_base* std__fixed(struct std::ios_base* v77) {
bb78:
  int __base79[8];
  int __retval80[8];
  __base79 = v77;
  struct std::ios_base* t81 = __base79;
  int c82 = 4;
  int c83 = 260;
  int r84 = std__ios_base__setf(t81, c82, c83);
  struct std::ios_base* t85 = __base79;
  __retval80 = t85;
  struct std::ios_base* t86 = __retval80;
  return t86;
}

// function: _ZNSolsEd
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, double);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb87:
  struct std::_Setprecision agg.tmp0100;
  int __retval101;
  int total102;
  int gradeCounter103;
  int grade104;
  double average105;
  int c106 = 0;
  total102 = c106;
  int c107 = 0;
  gradeCounter103 = c107;
  struct std::basic_ostream<char>* g108 = &_ZSt4cout;
  char* cast109 = (char*)_str;
  struct std::basic_ostream<char>* r110 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g108, cast109);
  struct std::basic_istream<char>* g111 = &_ZSt3cin;
  struct std::basic_istream<char>* r112 = std__istream__operator__(g111, &grade104);
  goto bb88;
bb88:
  goto bb89;
bb89:
  int t113 = grade104;
  int c114 = 1;
  int u115 = -c114;
  _Bool c116 = (t113 != u115) ? 1 : 0;
  if (c116) goto bb90; else goto bb93;
bb90:
  goto bb91;
bb91:
  int t117 = total102;
  int t118 = grade104;
  int b119 = t117 + t118;
  total102 = b119;
  int t120 = gradeCounter103;
  int c121 = 1;
  int b122 = t120 + c121;
  gradeCounter103 = b122;
  struct std::basic_ostream<char>* g123 = &_ZSt4cout;
  char* cast124 = (char*)_str;
  struct std::basic_ostream<char>* r125 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g123, cast124);
  struct std::basic_istream<char>* g126 = &_ZSt3cin;
  struct std::basic_istream<char>* r127 = std__istream__operator__(g126, &grade104);
  goto bb92;
bb92:
  goto bb89;
bb93:
  goto bb94;
bb94:
  goto bb95;
bb95:
  int t128 = gradeCounter103;
  int c129 = 0;
  _Bool c130 = (t128 != c129) ? 1 : 0;
  if (c130) goto bb96; else goto bb97;
bb96:
  int t131 = total102;
  double cast132 = (double)t131;
  int t133 = gradeCounter103;
  double cast134 = (double)t133;
  double b135 = cast132 / cast134;
  average105 = b135;
  struct std::basic_ostream<char>* g136 = &_ZSt4cout;
  char* cast137 = (char*)_str_1;
  struct std::basic_ostream<char>* r138 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g136, cast137);
  int c139 = 2;
  struct std::_Setprecision r140 = std__setprecision(c139);
  agg.tmp0100 = r140;
  struct std::_Setprecision t141 = agg.tmp0100;
  struct std::basic_ostream<char>* r142 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r138, t141);
  void* g143 = &_ZSt5fixedRSt8ios_base;
  struct std::basic_ostream<char>* r144 = std__ostream__operator___std__ios_base_____(r142, g143);
  double t145 = average105;
  struct std::basic_ostream<char>* r146 = std__ostream__operator__(r144, t145);
  void* g147 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r148 = std__ostream__operator___std__ostream_____(r146, g147);
  goto bb98;
bb97:
  struct std::basic_ostream<char>* g149 = &_ZSt4cout;
  char* cast150 = (char*)_str_2;
  struct std::basic_ostream<char>* r151 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g149, cast150);
  void* g152 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r153 = std__ostream__operator___std__ostream_____(r151, g152);
  goto bb98;
bb98:
  goto bb99;
bb99:
  int c154 = 0;
  __retval101 = c154;
  int t155 = __retval101;
  return t155;
}

