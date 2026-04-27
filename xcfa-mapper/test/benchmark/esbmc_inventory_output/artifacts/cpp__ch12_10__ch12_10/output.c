// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::ios_base { int _M_flags; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[23] = "Before using showpoint";
char _str_1[19];
char _str_2[19];
char _str_3[19];
char _str_4[22] = "After using showpoint";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZNSolsEd
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, double);

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

// function: _ZSt9showpointRSt8ios_base
struct std::ios_base* std__showpoint(struct std::ios_base* v35) {
bb36:
  int __base37[8];
  int __retval38[8];
  __base37 = v35;
  struct std::ios_base* t39 = __base37;
  int c40 = 1024;
  int r41 = std__ios_base__setf(t39, c40);
  struct std::ios_base* t42 = __base37;
  __retval38 = t42;
  struct std::ios_base* t43 = __retval38;
  return t43;
}

// function: main
int main() {
bb44:
  int __retval45;
  struct std::basic_ostream<char>* g46 = &_ZSt4cout;
  char* cast47 = (char*)_str;
  struct std::basic_ostream<char>* r48 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g46, cast47);
  void* g49 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r50 = std__ostream__operator___std__ostream_____(r48, g49);
  char* cast51 = (char*)_str_1;
  struct std::basic_ostream<char>* r52 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r50, cast51);
  double c53 = 9.9900000000000002;
  struct std::basic_ostream<char>* r54 = std__ostream__operator__(r52, c53);
  void* g55 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r56 = std__ostream__operator___std__ostream_____(r54, g55);
  char* cast57 = (char*)_str_2;
  struct std::basic_ostream<char>* r58 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r56, cast57);
  double c59 = 9.9000000000000003;
  struct std::basic_ostream<char>* r60 = std__ostream__operator__(r58, c59);
  void* g61 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r62 = std__ostream__operator___std__ostream_____(r60, g61);
  char* cast63 = (char*)_str_3;
  struct std::basic_ostream<char>* r64 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r62, cast63);
  double c65 = 9;
  struct std::basic_ostream<char>* r66 = std__ostream__operator__(r64, c65);
  void* g67 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r68 = std__ostream__operator___std__ostream_____(r66, g67);
  void* g69 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r70 = std__ostream__operator___std__ostream_____(r68, g69);
  struct std::basic_ostream<char>* g71 = &_ZSt4cout;
  void* g72 = &_ZSt9showpointRSt8ios_base;
  struct std::basic_ostream<char>* r73 = std__ostream__operator___std__ios_base_____(g71, g72);
  char* cast74 = (char*)_str_4;
  struct std::basic_ostream<char>* r75 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r73, cast74);
  void* g76 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r77 = std__ostream__operator___std__ostream_____(r75, g76);
  char* cast78 = (char*)_str_1;
  struct std::basic_ostream<char>* r79 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r77, cast78);
  double c80 = 9.9900000000000002;
  struct std::basic_ostream<char>* r81 = std__ostream__operator__(r79, c80);
  void* g82 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r83 = std__ostream__operator___std__ostream_____(r81, g82);
  char* cast84 = (char*)_str_2;
  struct std::basic_ostream<char>* r85 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r83, cast84);
  double c86 = 9.9000000000000003;
  struct std::basic_ostream<char>* r87 = std__ostream__operator__(r85, c86);
  void* g88 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r89 = std__ostream__operator___std__ostream_____(r87, g88);
  char* cast90 = (char*)_str_3;
  struct std::basic_ostream<char>* r91 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r89, cast90);
  double c92 = 9;
  struct std::basic_ostream<char>* r93 = std__ostream__operator__(r91, c92);
  void* g94 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r95 = std__ostream__operator___std__ostream_____(r93, g94);
  int c96 = 0;
  __retval45 = c96;
  int t97 = __retval45;
  return t97;
}

