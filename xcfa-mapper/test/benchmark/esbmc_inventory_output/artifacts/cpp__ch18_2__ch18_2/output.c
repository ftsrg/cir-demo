// Struct definitions (auto-parsed)
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::ios_base { int _M_flags; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[19];
struct std::basic_istream<char> _ZSt3cin;
char _str_1[15] = "The result is ";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSirsERj
struct std::basic_istream<char>* std__istream__operator__(struct std::basic_istream<char>*, unsigned int*);

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
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, _Bool);

// function: _Z7mysteryj
_Bool mystery(unsigned int v44) {
bb45:
  int i56;
  unsigned int bits57;
  _Bool __retval58;
  int SHIFT59;
  unsigned int MASK60;
  unsigned int total61;
  bits57 = v44;
  int c62 = 31;
  SHIFT59 = c62;
  unsigned int c63 = -2147483648;
  MASK60 = c63;
  int c64 = 0;
  unsigned int cast65 = (unsigned int)c64;
  total61 = cast65;
  goto bb46;
bb46:
  int c66 = 0;
  i56 = c66;
  goto bb47;
bb47:
  int t67 = i56;
  int c68 = 31;
  int c69 = 1;
  int b70 = c68 + c69;
  _Bool c71 = (t67 < b70) ? 1 : 0;
  if (c71) goto bb48; else goto bb54;
bb48:
  goto bb49;
bb49:
  unsigned int t72 = bits57;
  unsigned int c73 = -2147483648;
  unsigned int b74 = t72 & c73;
  unsigned int c75 = -2147483648;
  _Bool c76 = (b74 == c75) ? 1 : 0;
  if (c76) goto bb50; else goto bb51;
bb50:
  unsigned int t77 = total61;
  unsigned int u78 = ++t77;
  total61 = u78;
  goto bb51;
bb51:
  goto bb52;
bb52:
  goto bb53;
bb53:
  int t79 = i56;
  int u80 = ++t79;
  i56 = u80;
  int c81 = 1;
  unsigned int t82 = bits57;
  unsigned int s83 = t82 << c81;
  bits57 = s83;
  goto bb47;
bb54:
  goto bb55;
bb55:
  unsigned int t84 = total61;
  int c85 = 2;
  unsigned int cast86 = (unsigned int)c85;
  unsigned int b87 = t84 % cast86;
  _Bool cast88 = (_Bool)b87;
  _Bool u89 = !cast88;
  __retval58 = u89;
  _Bool t90 = __retval58;
  return t90;
}

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb91:
  int __retval92;
  unsigned int x93;
  struct std::basic_ostream<char>* g94 = &_ZSt4cout;
  char* cast95 = (char*)_str;
  struct std::basic_ostream<char>* r96 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g94, cast95);
  struct std::basic_istream<char>* g97 = &_ZSt3cin;
  struct std::basic_istream<char>* r98 = std__istream__operator__(g97, &x93);
  struct std::basic_ostream<char>* g99 = &_ZSt4cout;
  void* g100 = &_ZSt9boolalphaRSt8ios_base;
  struct std::basic_ostream<char>* r101 = std__ostream__operator___std__ios_base_____(g99, g100);
  char* cast102 = (char*)_str_1;
  struct std::basic_ostream<char>* r103 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r101, cast102);
  unsigned int t104 = x93;
  _Bool r105 = mystery(t104);
  struct std::basic_ostream<char>* r106 = std__ostream__operator__(r103, r105);
  void* g107 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r108 = std__ostream__operator___std__ostream_____(r106, g107);
  int c109 = 0;
  __retval92 = c109;
  int t110 = __retval92;
  return t110;
}

