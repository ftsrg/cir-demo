// Struct definitions (auto-parsed)
struct std::_Setw { int _M_n; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

char _str[15] = "Happy New Year";
char _str_1[15] = "Happy Holidays";
struct std::basic_ostream<char> _ZSt4cout;
char _str_2[6] = "s1 = ";
char _str_3[7] = "\\0As2 = ";
char _str_4[7] = "\\0As3 = ";
char _str_5[20] = "\\0A\\0Astrcmp(s1, s2) = ";
char _str_6[19] = "\\0Astrcmp(s1, s3) = ";
char _str_7[19] = "\\0Astrcmp(s3, s1) = ";
char _str_8[24] = "\\0A\\0Astrncmp(s1, s3, 6) = ";
char _str_9[23] = "\\0Astrncmp(s1, s3, 7) = ";
char _str_10[23] = "\\0Astrncmp(s3, s1, 7) = ";
// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std::basic_ostream<char>*, struct std::_Setw);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

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

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: strcmp
int strcmp(char*, char*);

// function: strncmp
int strncmp(char*, char*, unsigned long long);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb6:
  int __retval7;
  char* s18;
  char* s29;
  char* s310;
  struct std::_Setw agg.tmp011;
  struct std::_Setw agg.tmp112;
  struct std::_Setw agg.tmp213;
  struct std::_Setw agg.tmp314;
  struct std::_Setw agg.tmp415;
  struct std::_Setw agg.tmp516;
  char* cast17 = (char*)_str;
  s18 = cast17;
  char* cast18 = (char*)_str;
  s29 = cast18;
  char* cast19 = (char*)_str_1;
  s310 = cast19;
  struct std::basic_ostream<char>* g20 = &_ZSt4cout;
  char* cast21 = (char*)_str_2;
  struct std::basic_ostream<char>* r22 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g20, cast21);
  char* t23 = s18;
  struct std::basic_ostream<char>* r24 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r22, t23);
  char* cast25 = (char*)_str_3;
  struct std::basic_ostream<char>* r26 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r24, cast25);
  char* t27 = s29;
  struct std::basic_ostream<char>* r28 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r26, t27);
  char* cast29 = (char*)_str_4;
  struct std::basic_ostream<char>* r30 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r28, cast29);
  char* t31 = s310;
  struct std::basic_ostream<char>* r32 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r30, t31);
  char* cast33 = (char*)_str_5;
  struct std::basic_ostream<char>* r34 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r32, cast33);
  int c35 = 2;
  struct std::_Setw r36 = std__setw(c35);
  agg.tmp011 = r36;
  struct std::_Setw t37 = agg.tmp011;
  struct std::basic_ostream<char>* r38 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r34, t37);
  char* t39 = s18;
  char* t40 = s29;
  int r41 = strcmp(t39, t40);
  struct std::basic_ostream<char>* r42 = std__ostream__operator__(r38, r41);
  char* cast43 = (char*)_str_6;
  struct std::basic_ostream<char>* r44 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r42, cast43);
  int c45 = 2;
  struct std::_Setw r46 = std__setw(c45);
  agg.tmp112 = r46;
  struct std::_Setw t47 = agg.tmp112;
  struct std::basic_ostream<char>* r48 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r44, t47);
  char* t49 = s18;
  char* t50 = s310;
  int r51 = strcmp(t49, t50);
  struct std::basic_ostream<char>* r52 = std__ostream__operator__(r48, r51);
  char* cast53 = (char*)_str_7;
  struct std::basic_ostream<char>* r54 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r52, cast53);
  int c55 = 2;
  struct std::_Setw r56 = std__setw(c55);
  agg.tmp213 = r56;
  struct std::_Setw t57 = agg.tmp213;
  struct std::basic_ostream<char>* r58 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r54, t57);
  char* t59 = s310;
  char* t60 = s18;
  int r61 = strcmp(t59, t60);
  struct std::basic_ostream<char>* r62 = std__ostream__operator__(r58, r61);
  struct std::basic_ostream<char>* g63 = &_ZSt4cout;
  char* cast64 = (char*)_str_8;
  struct std::basic_ostream<char>* r65 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g63, cast64);
  int c66 = 2;
  struct std::_Setw r67 = std__setw(c66);
  agg.tmp314 = r67;
  struct std::_Setw t68 = agg.tmp314;
  struct std::basic_ostream<char>* r69 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r65, t68);
  char* t70 = s18;
  char* t71 = s310;
  int c72 = 6;
  unsigned long long cast73 = (unsigned long long)c72;
  int r74 = strncmp(t70, t71, cast73);
  struct std::basic_ostream<char>* r75 = std__ostream__operator__(r69, r74);
  char* cast76 = (char*)_str_9;
  struct std::basic_ostream<char>* r77 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r75, cast76);
  int c78 = 2;
  struct std::_Setw r79 = std__setw(c78);
  agg.tmp415 = r79;
  struct std::_Setw t80 = agg.tmp415;
  struct std::basic_ostream<char>* r81 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r77, t80);
  char* t82 = s18;
  char* t83 = s310;
  int c84 = 7;
  unsigned long long cast85 = (unsigned long long)c84;
  int r86 = strncmp(t82, t83, cast85);
  struct std::basic_ostream<char>* r87 = std__ostream__operator__(r81, r86);
  char* cast88 = (char*)_str_10;
  struct std::basic_ostream<char>* r89 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r87, cast88);
  int c90 = 2;
  struct std::_Setw r91 = std__setw(c90);
  agg.tmp516 = r91;
  struct std::_Setw t92 = agg.tmp516;
  struct std::basic_ostream<char>* r93 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r89, t92);
  char* t94 = s310;
  char* t95 = s18;
  int c96 = 7;
  unsigned long long cast97 = (unsigned long long)c96;
  int r98 = strncmp(t94, t95, cast97);
  struct std::basic_ostream<char>* r99 = std__ostream__operator__(r93, r98);
  void* g100 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r101 = std__ostream__operator___std__ostream_____(r99, g100);
  int c102 = 0;
  __retval7 = c102;
  int t103 = __retval7;
  return t103;
}

