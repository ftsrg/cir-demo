// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[29];
char _str_1[30];
char _str_2[33];
char _str_3[33];
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZSt3minIiERKT_S2_S2_
int* int_const__std__min_int_(int* v0, int* v1) {
bb2:
  int* __a7;
  int* __b8;
  int* __retval9;
  __a7 = v0;
  __b8 = v1;
  goto bb3;
bb3:
  int* t10 = __b8;
  int t11 = *t10;
  int* t12 = __a7;
  int t13 = *t12;
  _Bool c14 = (t11 < t13) ? 1 : 0;
  if (c14) goto bb4; else goto bb5;
bb4:
  int* t15 = __b8;
  __retval9 = t15;
  int* t16 = __retval9;
  return t16;
bb5:
  goto bb6;
bb6:
  int* t17 = __a7;
  __retval9 = t17;
  int* t18 = __retval9;
  return t18;
}

// function: _ZSt3maxIiERKT_S2_S2_
int* int_const__std__max_int_(int* v19, int* v20) {
bb21:
  int* __a26;
  int* __b27;
  int* __retval28;
  __a26 = v19;
  __b27 = v20;
  goto bb22;
bb22:
  int* t29 = __a26;
  int t30 = *t29;
  int* t31 = __b27;
  int t32 = *t31;
  _Bool c33 = (t30 < t32) ? 1 : 0;
  if (c33) goto bb23; else goto bb24;
bb23:
  int* t34 = __b27;
  __retval28 = t34;
  int* t35 = __retval28;
  return t35;
bb24:
  goto bb25;
bb25:
  int* t36 = __a26;
  __retval28 = t36;
  int* t37 = __retval28;
  return t37;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: _ZSt3minIcERKT_S2_S2_
char* char_const__std__min_char_(char* v38, char* v39) {
bb40:
  char* __a45;
  char* __b46;
  char* __retval47;
  __a45 = v38;
  __b46 = v39;
  goto bb41;
bb41:
  char* t48 = __b46;
  char t49 = *t48;
  int cast50 = (int)t49;
  char* t51 = __a45;
  char t52 = *t51;
  int cast53 = (int)t52;
  _Bool c54 = (cast50 < cast53) ? 1 : 0;
  if (c54) goto bb42; else goto bb43;
bb42:
  char* t55 = __b46;
  __retval47 = t55;
  char* t56 = __retval47;
  return t56;
bb43:
  goto bb44;
bb44:
  char* t57 = __a45;
  __retval47 = t57;
  char* t58 = __retval47;
  return t58;
}

// function: _ZSt3maxIcERKT_S2_S2_
char* char_const__std__max_char_(char* v59, char* v60) {
bb61:
  char* __a66;
  char* __b67;
  char* __retval68;
  __a66 = v59;
  __b67 = v60;
  goto bb62;
bb62:
  char* t69 = __a66;
  char t70 = *t69;
  int cast71 = (int)t70;
  char* t72 = __b67;
  char t73 = *t72;
  int cast74 = (int)t73;
  _Bool c75 = (cast71 < cast74) ? 1 : 0;
  if (c75) goto bb63; else goto bb64;
bb63:
  char* t76 = __b67;
  __retval68 = t76;
  char* t77 = __retval68;
  return t77;
bb64:
  goto bb65;
bb65:
  char* t78 = __a66;
  __retval68 = t78;
  char* t79 = __retval68;
  return t79;
}

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb80:
  int ref.tmp093;
  int ref.tmp194;
  int ref.tmp295;
  int ref.tmp396;
  char ref.tmp497;
  char ref.tmp598;
  char ref.tmp699;
  char ref.tmp7100;
  int __retval101;
  goto bb81;
bb81:
  struct std::basic_ostream<char>* g102 = &_ZSt4cout;
  char* cast103 = (char*)_str;
  struct std::basic_ostream<char>* r104 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g102, cast103);
  int c105 = 12;
  ref.tmp093 = c105;
  int c106 = 7;
  ref.tmp194 = c106;
  int* r107 = int_const__std__min_int_(&ref.tmp093, &ref.tmp194);
  int t108 = *r107;
  struct std::basic_ostream<char>* r109 = std__ostream__operator__(r104, t108);
  goto bb82;
bb82:
  goto bb83;
bb83:
  struct std::basic_ostream<char>* g110 = &_ZSt4cout;
  char* cast111 = (char*)_str_1;
  struct std::basic_ostream<char>* r112 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g110, cast111);
  int c113 = 12;
  ref.tmp295 = c113;
  int c114 = 7;
  ref.tmp396 = c114;
  int* r115 = int_const__std__max_int_(&ref.tmp295, &ref.tmp396);
  int t116 = *r115;
  struct std::basic_ostream<char>* r117 = std__ostream__operator__(r112, t116);
  goto bb84;
bb84:
  goto bb85;
bb85:
  struct std::basic_ostream<char>* g118 = &_ZSt4cout;
  char* cast119 = (char*)_str_2;
  struct std::basic_ostream<char>* r120 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g118, cast119);
  char c121 = 71;
  ref.tmp497 = c121;
  char c122 = 90;
  ref.tmp598 = c122;
  char* r123 = char_const__std__min_char_(&ref.tmp497, &ref.tmp598);
  char t124 = *r123;
  struct std::basic_ostream<char>* r125 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r120, t124);
  goto bb86;
bb86:
  goto bb87;
bb87:
  struct std::basic_ostream<char>* g126 = &_ZSt4cout;
  char* cast127 = (char*)_str_3;
  struct std::basic_ostream<char>* r128 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g126, cast127);
  char c129 = 71;
  ref.tmp699 = c129;
  char c130 = 90;
  ref.tmp7100 = c130;
  char* r131 = char_const__std__max_char_(&ref.tmp699, &ref.tmp7100);
  char t132 = *r131;
  struct std::basic_ostream<char>* r133 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r128, t132);
  void* g134 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r135 = std__ostream__operator___std__ostream_____(r133, g134);
  goto bb88;
bb88:
  goto bb89;
bb89:
  int c136 = 0;
  goto bb90;
bb90:
  goto bb91;
bb91:
  int c137 = 0;
  goto bb92;
bb92:
  int c138 = 0;
  __retval101 = c138;
  int t139 = __retval101;
  return t139;
}

