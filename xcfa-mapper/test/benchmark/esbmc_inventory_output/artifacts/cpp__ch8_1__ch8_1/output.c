// Struct definitions (auto-parsed)
struct PhoneNumber { char areaCode[4]; char exchange[4]; char line[5]; };
struct std::_Setw { int _M_n; };
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

char _str[2] = "(";
char _str_1[3] = ") ";
char _str_2[2] = "-";
struct std::basic_ostream<char> _ZSt4cout;
char _str_3[48];
struct std::basic_istream<char> _ZSt3cin;
char _str_4[31];
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZlsRSoRK11PhoneNumber
struct std::basic_ostream<char>* _ZlsRSoRK11PhoneNumber(struct std::basic_ostream<char>* v0, struct PhoneNumber* v1) {
bb2:
  int output3[8];
  int num4[4];
  int __retval5[8];
  output3 = v0;
  num4 = v1;
  struct std::basic_ostream<char>* t6 = output3;
  char* cast7 = (char*)_str;
  struct std::basic_ostream<char>* r8 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(t6, cast7);
  struct PhoneNumber* t9 = num4;
  char* cast10 = (char*)t9->areaCode;
  struct std::basic_ostream<char>* r11 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r8, cast10);
  char* cast12 = (char*)_str_1;
  struct std::basic_ostream<char>* r13 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r11, cast12);
  struct PhoneNumber* t14 = num4;
  char* cast15 = (char*)t14->exchange;
  struct std::basic_ostream<char>* r16 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r13, cast15);
  char* cast17 = (char*)_str_2;
  struct std::basic_ostream<char>* r18 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r16, cast17);
  struct PhoneNumber* t19 = num4;
  char* cast20 = (char*)t19->line;
  struct std::basic_ostream<char>* r21 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r18, cast20);
  struct std::basic_ostream<char>* t22 = output3;
  __retval5 = t22;
  struct std::basic_ostream<char>* t23 = __retval5;
  return t23;
}

// function: _ZNSi6ignoreEv
struct std::basic_istream<char>* _ZNSi6ignoreEv(struct std::basic_istream<char>*);

// function: _ZSt17__istream_extractRSiPcl
void std____istream_extract(struct std::basic_istream<char>*, char*, long long);

// function: _ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_PS3_
struct std::basic_istream<char>* _ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_PS3_(struct std::basic_istream<char>* v24, char* v25) {
bb26:
  long long __n29;
  int __in30[8];
  char* __s31;
  int __retval32[8];
  __in30 = v24;
  __s31 = v25;
  goto bb27;
bb27:
  long long c33 = 9223372036854775807;
  __n29 = c33;
  unsigned long long c34 = 1;
  long long t35 = __n29;
  unsigned long long cast36 = (unsigned long long)t35;
  unsigned long long b37 = cast36 / c34;
  long long cast38 = (long long)b37;
  __n29 = cast38;
  struct std::basic_istream<char>* t39 = __in30;
  char* t40 = __s31;
  long long t41 = __n29;
  std____istream_extract(t39, t40, t41);
  goto bb28;
bb28:
  struct std::basic_istream<char>* t42 = __in30;
  __retval32 = t42;
  struct std::basic_istream<char>* t43 = __retval32;
  return t43;
}

// function: _ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_St5_Setw
struct std::basic_istream<char>* _ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_St5_Setw(struct std::basic_istream<char>*, struct std::_Setw);

// function: _ZSt4setwi
struct std::_Setw std__setw(int v44) {
bb45:
  int __n46;
  struct std::_Setw __retval47;
  __n46 = v44;
  int t48 = __n46;
  __retval47._M_n = t48;
  struct std::_Setw t49 = __retval47;
  return t49;
}

// function: _ZNSi6ignoreEl
struct std::basic_istream<char>* _ZNSi6ignoreEl(struct std::basic_istream<char>*, long long);

// function: _ZrsRSiR11PhoneNumber
struct std::basic_istream<char>* _ZrsRSiR11PhoneNumber(struct std::basic_istream<char>* v50, struct PhoneNumber* v51) {
bb52:
  int input53[8];
  int num54[4];
  int __retval55[8];
  struct std::_Setw agg.tmp056;
  struct std::_Setw agg.tmp157;
  struct std::_Setw agg.tmp258;
  input53 = v50;
  num54 = v51;
  struct std::basic_istream<char>* t59 = input53;
  struct std::basic_istream<char>* r60 = _ZNSi6ignoreEv(t59);
  struct std::basic_istream<char>* t61 = input53;
  int c62 = 4;
  struct std::_Setw r63 = std__setw(c62);
  agg.tmp056 = r63;
  struct std::_Setw t64 = agg.tmp056;
  struct std::basic_istream<char>* r65 = _ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_St5_Setw(t61, t64);
  struct PhoneNumber* t66 = num54;
  char* cast67 = (char*)t66->areaCode;
  struct std::basic_istream<char>* r68 = _ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_PS3_(r65, cast67);
  struct std::basic_istream<char>* t69 = input53;
  int c70 = 2;
  long long cast71 = (long long)c70;
  struct std::basic_istream<char>* r72 = _ZNSi6ignoreEl(t69, cast71);
  struct std::basic_istream<char>* t73 = input53;
  int c74 = 4;
  struct std::_Setw r75 = std__setw(c74);
  agg.tmp157 = r75;
  struct std::_Setw t76 = agg.tmp157;
  struct std::basic_istream<char>* r77 = _ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_St5_Setw(t73, t76);
  struct PhoneNumber* t78 = num54;
  char* cast79 = (char*)t78->exchange;
  struct std::basic_istream<char>* r80 = _ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_PS3_(r77, cast79);
  struct std::basic_istream<char>* t81 = input53;
  struct std::basic_istream<char>* r82 = _ZNSi6ignoreEv(t81);
  struct std::basic_istream<char>* t83 = input53;
  int c84 = 5;
  struct std::_Setw r85 = std__setw(c84);
  agg.tmp258 = r85;
  struct std::_Setw t86 = agg.tmp258;
  struct std::basic_istream<char>* r87 = _ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_St5_Setw(t83, t86);
  struct PhoneNumber* t88 = num54;
  char* cast89 = (char*)t88->line;
  struct std::basic_istream<char>* r90 = _ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_PS3_(r87, cast89);
  struct std::basic_istream<char>* t91 = input53;
  __retval55 = t91;
  struct std::basic_istream<char>* t92 = __retval55;
  return t92;
}

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb93:
  int __retval94;
  struct PhoneNumber phone95;
  struct std::basic_ostream<char>* g96 = &_ZSt4cout;
  char* cast97 = (char*)_str_3;
  struct std::basic_ostream<char>* r98 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g96, cast97);
  struct std::basic_istream<char>* g99 = &_ZSt3cin;
  struct std::basic_istream<char>* r100 = _ZrsRSiR11PhoneNumber(g99, &phone95);
  struct std::basic_ostream<char>* g101 = &_ZSt4cout;
  char* cast102 = (char*)_str_4;
  struct std::basic_ostream<char>* r103 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g101, cast102);
  struct std::basic_ostream<char>* g104 = &_ZSt4cout;
  struct std::basic_ostream<char>* r105 = _ZlsRSoRK11PhoneNumber(g104, &phone95);
  void* g106 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r107 = std__ostream__operator___std__ostream_____(r105, g106);
  int c108 = 0;
  __retval94 = c108;
  int t109 = __retval94;
  return t109;
}

