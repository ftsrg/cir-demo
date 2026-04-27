// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::ios_base { int _M_flags; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[13];
char _str_1[14];
char _str_2[14];
char _str_3[14];
char _str_4[14];
char _str_5[14];
char _str_6[14];
char _str_7[14];
char _str_8[14];
char _str_9[14];
char _str_10[14];
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEPFRSt8ios_baseS0_E
struct std::basic_ostream<char>* std__ostream__operator___std__ios_base_____(struct std::basic_ostream<char>*, void*);

// function: _ZStorSt13_Ios_FmtflagsS_
int std__operator_(int v0, int v1) {
bb2:
  int __a3;
  int __b4;
  int __retval5;
  __a3 = v0;
  __b4 = v1;
  int t6 = __a3;
  int t7 = __b4;
  int b8 = t6 | t7;
  __retval5 = b8;
  int t9 = __retval5;
  return t9;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* std__operator__(int* v10, int v11) {
bb12:
  int* __a13;
  int __b14;
  int* __retval15;
  __a13 = v10;
  __b14 = v11;
  int* t16 = __a13;
  int t17 = *t16;
  int t18 = __b14;
  int r19 = std__operator_(t17, t18);
  int* t20 = __a13;
  *t20 = r19;
  __retval15 = t20;
  int* t21 = __retval15;
  return t21;
}

// function: _ZNSt8ios_base4setfESt13_Ios_Fmtflags
int std__ios_base__setf(struct std::ios_base* v22, int v23) {
bb24:
  int this25[8];
  int __fmtfl26;
  int __retval27;
  int __old28;
  this25 = v22;
  __fmtfl26 = v23;
  struct std::ios_base* t29 = this25;
  int t30 = *t29->_M_flags;
  __old28 = t30;
  int t31 = __fmtfl26;
  int* r32 = std__operator__(t29->_M_flags, t31);
  int t33 = __old28;
  __retval27 = t33;
  int t34 = __retval27;
  return t34;
}

// function: _ZSt9boolalphaRSt8ios_base
struct std::ios_base* std__boolalpha(struct std::ios_base* v35) {
bb36:
  int __base37[8];
  int __retval38[8];
  __base37 = v35;
  struct std::ios_base* t39 = __base37;
  int c40 = 1;
  int r41 = std__ios_base__setf(t39, c40);
  struct std::ios_base* t42 = __base37;
  __retval38 = t42;
  struct std::ios_base* t43 = __retval38;
  return t43;
}

// function: _ZNSolsEb
struct std::basic_ostream<char>* _ZNSolsEb(struct std::basic_ostream<char>*, _Bool);

// function: _ZNSolsEi
struct std::basic_ostream<char>* _ZNSolsEi(struct std::basic_ostream<char>*, int);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
  _Bool v44;
  _Bool v45;
  _Bool v46;
  _Bool v47;
bb48:
  int __retval61;
  int a62;
  int b63;
  int c64 = 2;
  a62 = c64;
  int c65 = 3;
  b63 = c65;
  struct std::basic_ostream<char>* g66 = &_ZSt4cout;
  void* g67 = &_ZSt9boolalphaRSt8ios_base;
  struct std::basic_ostream<char>* r68 = std__ostream__operator___std__ios_base_____(g66, g67);
  char* cast69 = (char*)_str;
  struct std::basic_ostream<char>* r70 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r68, cast69);
  int t71 = a62;
  _Bool cast72 = (_Bool)t71;
  if (cast72) goto bb49; else goto bb53;
bb49:
  int t73 = b63;
  _Bool cast74 = (_Bool)t73;
  if (cast74) goto bb50; else goto bb51;
bb50:
  _Bool c75 = 1;
  v44 = c75;
  goto bb52;
bb51:
  _Bool c76 = 0;
  v44 = c76;
  goto bb52;
bb52:
  v45 = v44;
  goto bb54;
bb53:
  _Bool c77 = 0;
  v45 = c77;
  goto bb54;
bb54:
  struct std::basic_ostream<char>* r78 = _ZNSolsEb(r70, v45);
  char* cast79 = (char*)_str_1;
  struct std::basic_ostream<char>* r80 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r78, cast79);
  int t81 = a62;
  _Bool cast82 = (_Bool)t81;
  if (cast82) goto bb55; else goto bb56;
bb55:
  _Bool c83 = 1;
  v47 = c83;
  goto bb60;
bb56:
  int t84 = b63;
  _Bool cast85 = (_Bool)t84;
  if (cast85) goto bb57; else goto bb58;
bb57:
  _Bool c86 = 1;
  v46 = c86;
  goto bb59;
bb58:
  _Bool c87 = 0;
  v46 = c87;
  goto bb59;
bb59:
  v47 = v46;
  goto bb60;
bb60:
  struct std::basic_ostream<char>* r88 = _ZNSolsEb(r80, v47);
  char* cast89 = (char*)_str_2;
  struct std::basic_ostream<char>* r90 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r88, cast89);
  int t91 = a62;
  _Bool cast92 = (_Bool)t91;
  _Bool u93 = !cast92;
  struct std::basic_ostream<char>* r94 = _ZNSolsEb(r90, u93);
  char* cast95 = (char*)_str_3;
  struct std::basic_ostream<char>* r96 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r94, cast95);
  int t97 = a62;
  int t98 = b63;
  _Bool c99 = (t97 != t98) ? 1 : 0;
  struct std::basic_ostream<char>* r100 = _ZNSolsEb(r96, c99);
  char* cast101 = (char*)_str_4;
  struct std::basic_ostream<char>* r102 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r100, cast101);
  int t103 = a62;
  int t104 = b63;
  int b105 = t103 & t104;
  struct std::basic_ostream<char>* r106 = _ZNSolsEi(r102, b105);
  char* cast107 = (char*)_str_5;
  struct std::basic_ostream<char>* r108 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r106, cast107);
  int t109 = a62;
  int t110 = b63;
  int b111 = t109 | t110;
  struct std::basic_ostream<char>* r112 = _ZNSolsEi(r108, b111);
  char* cast113 = (char*)_str_6;
  struct std::basic_ostream<char>* r114 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r112, cast113);
  int t115 = a62;
  int t116 = b63;
  int b117 = t115 ^ t116;
  struct std::basic_ostream<char>* r118 = _ZNSolsEi(r114, b117);
  char* cast119 = (char*)_str_7;
  struct std::basic_ostream<char>* r120 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r118, cast119);
  int t121 = a62;
  int u122 = ~t121;
  struct std::basic_ostream<char>* r123 = _ZNSolsEi(r120, u122);
  char* cast124 = (char*)_str_8;
  struct std::basic_ostream<char>* r125 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r123, cast124);
  int t126 = b63;
  int t127 = a62;
  int b128 = t127 & t126;
  a62 = b128;
  struct std::basic_ostream<char>* r129 = _ZNSolsEi(r125, b128);
  char* cast130 = (char*)_str_9;
  struct std::basic_ostream<char>* r131 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r129, cast130);
  int t132 = b63;
  int t133 = a62;
  int b134 = t133 | t132;
  a62 = b134;
  struct std::basic_ostream<char>* r135 = _ZNSolsEi(r131, b134);
  char* cast136 = (char*)_str_10;
  struct std::basic_ostream<char>* r137 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r135, cast136);
  int t138 = b63;
  int t139 = a62;
  int b140 = t139 ^ t138;
  a62 = b140;
  struct std::basic_ostream<char>* r141 = _ZNSolsEi(r137, b140);
  void* g142 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r143 = std__ostream__operator___std__ostream_____(r141, g142);
  int c144 = 0;
  __retval61 = c144;
  int t145 = __retval61;
  return t145;
}

