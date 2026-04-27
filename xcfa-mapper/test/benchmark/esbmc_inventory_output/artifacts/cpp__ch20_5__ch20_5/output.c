// Struct definitions (auto-parsed)
struct std::_Setw { int _M_n; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::ios_base { int _M_flags; };

struct std::basic_ostream<char> _ZSt4cout;
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

// function: _ZSt4leftRSt8ios_base
struct std::ios_base* std__left(struct std::ios_base* v77) {
bb78:
  int __base79[8];
  int __retval80[8];
  __base79 = v77;
  struct std::ios_base* t81 = __base79;
  int c82 = 32;
  int c83 = 176;
  int r84 = std__ios_base__setf(t81, c82, c83);
  struct std::ios_base* t85 = __base79;
  __retval80 = t85;
  struct std::ios_base* t86 = __retval80;
  return t86;
}

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb87:
  int __retval94;
  int count95;
  struct std::_Setw agg.tmp096;
  int c97 = 1;
  count95 = c97;
  goto bb88;
bb88:
  goto bb89;
bb89:
  int t98 = count95;
  int c99 = 10;
  _Bool c100 = (t98 > c99) ? 1 : 0;
  if (c100) goto bb90; else goto bb91;
bb90:
  goto bb93;
bb91:
  goto bb92;
bb92:
  struct std::basic_ostream<char>* g101 = &_ZSt4cout;
  int c102 = 2;
  struct std::_Setw r103 = std__setw(c102);
  agg.tmp096 = r103;
  struct std::_Setw t104 = agg.tmp096;
  struct std::basic_ostream<char>* r105 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(g101, t104);
  void* g106 = &_ZSt4leftRSt8ios_base;
  struct std::basic_ostream<char>* r107 = std__ostream__operator___std__ios_base_____(r105, g106);
  int t108 = count95;
  struct std::basic_ostream<char>* r109 = std__ostream__operator__(r107, t108);
  int t110 = count95;
  int u111 = ++t110;
  count95 = u111;
  goto bb88;
bb93:
  struct std::basic_ostream<char>* g112 = &_ZSt4cout;
  void* g113 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r114 = std__ostream__operator___std__ostream_____(g112, g113);
  int c115 = 0;
  __retval94 = c115;
  int t116 = __retval94;
  return t116;
}

