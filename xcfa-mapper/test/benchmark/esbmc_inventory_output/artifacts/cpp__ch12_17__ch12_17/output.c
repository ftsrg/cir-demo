// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::ios_base { int _M_flags; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[17] = "booleanValue is ";
char _str_1[41] = "booleanValue (after using boolalpha) is ";
char _str_2[40] = "switch booleanValue and use noboolalpha";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEb
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, _Bool);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZNSolsEPFRSt8ios_baseS0_E
struct std::basic_ostream<char>* std__ostream__operator___std__ios_base_____(struct std::basic_ostream<char>*, void*);

// function: _ZStorSt13_Ios_FmtflagsS_
int _ZStorSt13_Ios_FmtflagsS_(int v0, int v1) {
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
int* _ZStoRRSt13_Ios_FmtflagsS_(int* v10, int v11) {
bb12:
  int* __a13;
  int __b14;
  int* __retval15;
  __a13 = v10;
  __b14 = v11;
  int* t16 = __a13;
  int t17 = *t16;
  int t18 = __b14;
  int r19 = _ZStorSt13_Ios_FmtflagsS_(t17, t18);
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
  int* r32 = _ZStoRRSt13_Ios_FmtflagsS_(t29->_M_flags, t31);
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

// function: _ZStanSt13_Ios_FmtflagsS_
int _ZStanSt13_Ios_FmtflagsS_(int v44, int v45) {
bb46:
  int __a47;
  int __b48;
  int __retval49;
  __a47 = v44;
  __b48 = v45;
  int t50 = __a47;
  int t51 = __b48;
  int b52 = t50 & t51;
  __retval49 = b52;
  int t53 = __retval49;
  return t53;
}

// function: _ZStaNRSt13_Ios_FmtflagsS_
int* _ZStaNRSt13_Ios_FmtflagsS_(int* v54, int v55) {
bb56:
  int* __a57;
  int __b58;
  int* __retval59;
  __a57 = v54;
  __b58 = v55;
  int* t60 = __a57;
  int t61 = *t60;
  int t62 = __b58;
  int r63 = _ZStanSt13_Ios_FmtflagsS_(t61, t62);
  int* t64 = __a57;
  *t64 = r63;
  __retval59 = t64;
  int* t65 = __retval59;
  return t65;
}

// function: _ZStcoSt13_Ios_Fmtflags
int _ZStcoSt13_Ios_Fmtflags(int v66) {
bb67:
  int __a68;
  int __retval69;
  __a68 = v66;
  int t70 = __a68;
  int u71 = ~t70;
  __retval69 = u71;
  int t72 = __retval69;
  return t72;
}

// function: _ZNSt8ios_base6unsetfESt13_Ios_Fmtflags
void std__ios_base__unsetf(struct std::ios_base* v73, int v74) {
bb75:
  int this76[8];
  int __mask77;
  this76 = v73;
  __mask77 = v74;
  struct std::ios_base* t78 = this76;
  int t79 = __mask77;
  int r80 = _ZStcoSt13_Ios_Fmtflags(t79);
  int* r81 = _ZStaNRSt13_Ios_FmtflagsS_(t78->_M_flags, r80);
  return;
}

// function: _ZSt11noboolalphaRSt8ios_base
struct std::ios_base* std__noboolalpha(struct std::ios_base* v82) {
bb83:
  int __base84[8];
  int __retval85[8];
  __base84 = v82;
  struct std::ios_base* t86 = __base84;
  int c87 = 1;
  std__ios_base__unsetf(t86, c87);
  struct std::ios_base* t88 = __base84;
  __retval85 = t88;
  struct std::ios_base* t89 = __retval85;
  return t89;
}

// function: main
int main() {
bb90:
  int __retval91;
  _Bool booleanValue92;
  _Bool c93 = 1;
  booleanValue92 = c93;
  struct std::basic_ostream<char>* g94 = &_ZSt4cout;
  char* cast95 = (char*)_str;
  struct std::basic_ostream<char>* r96 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g94, cast95);
  _Bool t97 = booleanValue92;
  struct std::basic_ostream<char>* r98 = std__ostream__operator__(r96, t97);
  void* g99 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r100 = std__ostream__operator___std__ostream_____(r98, g99);
  struct std::basic_ostream<char>* g101 = &_ZSt4cout;
  char* cast102 = (char*)_str_1;
  struct std::basic_ostream<char>* r103 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g101, cast102);
  void* g104 = &_ZSt9boolalphaRSt8ios_base;
  struct std::basic_ostream<char>* r105 = std__ostream__operator___std__ios_base_____(r103, g104);
  _Bool t106 = booleanValue92;
  struct std::basic_ostream<char>* r107 = std__ostream__operator__(r105, t106);
  void* g108 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r109 = std__ostream__operator___std__ostream_____(r107, g108);
  void* g110 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r111 = std__ostream__operator___std__ostream_____(r109, g110);
  struct std::basic_ostream<char>* g112 = &_ZSt4cout;
  char* cast113 = (char*)_str_2;
  struct std::basic_ostream<char>* r114 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g112, cast113);
  void* g115 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r116 = std__ostream__operator___std__ostream_____(r114, g115);
  _Bool c117 = 0;
  booleanValue92 = c117;
  struct std::basic_ostream<char>* g118 = &_ZSt4cout;
  void* g119 = &_ZSt11noboolalphaRSt8ios_base;
  struct std::basic_ostream<char>* r120 = std__ostream__operator___std__ios_base_____(g118, g119);
  void* g121 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r122 = std__ostream__operator___std__ostream_____(r120, g121);
  struct std::basic_ostream<char>* g123 = &_ZSt4cout;
  char* cast124 = (char*)_str;
  struct std::basic_ostream<char>* r125 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g123, cast124);
  _Bool t126 = booleanValue92;
  struct std::basic_ostream<char>* r127 = std__ostream__operator__(r125, t126);
  void* g128 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r129 = std__ostream__operator___std__ostream_____(r127, g128);
  struct std::basic_ostream<char>* g130 = &_ZSt4cout;
  char* cast131 = (char*)_str_1;
  struct std::basic_ostream<char>* r132 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g130, cast131);
  void* g133 = &_ZSt9boolalphaRSt8ios_base;
  struct std::basic_ostream<char>* r134 = std__ostream__operator___std__ios_base_____(r132, g133);
  _Bool t135 = booleanValue92;
  struct std::basic_ostream<char>* r136 = std__ostream__operator__(r134, t135);
  void* g137 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r138 = std__ostream__operator___std__ostream_____(r136, g137);
  int c139 = 0;
  __retval91 = c139;
  int t140 = __retval91;
  return t140;
}

