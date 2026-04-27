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
  int ref.tmp089;
  int ref.tmp190;
  int ref.tmp291;
  int ref.tmp392;
  char ref.tmp493;
  char ref.tmp594;
  char ref.tmp695;
  char ref.tmp796;
  int __retval97;
  goto bb81;
bb81:
  struct std::basic_ostream<char>* g98 = &_ZSt4cout;
  char* cast99 = (char*)_str;
  struct std::basic_ostream<char>* r100 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g98, cast99);
  int c101 = 12;
  ref.tmp089 = c101;
  int c102 = 7;
  ref.tmp190 = c102;
  int* r103 = int_const__std__min_int_(&ref.tmp089, &ref.tmp190);
  int t104 = *r103;
  struct std::basic_ostream<char>* r105 = std__ostream__operator__(r100, t104);
  goto bb82;
bb82:
  goto bb83;
bb83:
  struct std::basic_ostream<char>* g106 = &_ZSt4cout;
  char* cast107 = (char*)_str_1;
  struct std::basic_ostream<char>* r108 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g106, cast107);
  int c109 = 12;
  ref.tmp291 = c109;
  int c110 = 7;
  ref.tmp392 = c110;
  int* r111 = int_const__std__max_int_(&ref.tmp291, &ref.tmp392);
  int t112 = *r111;
  struct std::basic_ostream<char>* r113 = std__ostream__operator__(r108, t112);
  goto bb84;
bb84:
  goto bb85;
bb85:
  struct std::basic_ostream<char>* g114 = &_ZSt4cout;
  char* cast115 = (char*)_str_2;
  struct std::basic_ostream<char>* r116 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g114, cast115);
  char c117 = 71;
  ref.tmp493 = c117;
  char c118 = 90;
  ref.tmp594 = c118;
  char* r119 = char_const__std__min_char_(&ref.tmp493, &ref.tmp594);
  char t120 = *r119;
  struct std::basic_ostream<char>* r121 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r116, t120);
  goto bb86;
bb86:
  goto bb87;
bb87:
  struct std::basic_ostream<char>* g122 = &_ZSt4cout;
  char* cast123 = (char*)_str_3;
  struct std::basic_ostream<char>* r124 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g122, cast123);
  char c125 = 71;
  ref.tmp695 = c125;
  char c126 = 90;
  ref.tmp796 = c126;
  char* r127 = char_const__std__max_char_(&ref.tmp695, &ref.tmp796);
  char t128 = *r127;
  struct std::basic_ostream<char>* r129 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r124, t128);
  void* g130 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r131 = std__ostream__operator___std__ostream_____(r129, g130);
  goto bb88;
bb88:
  int c132 = 0;
  __retval97 = c132;
  int t133 = __retval97;
  return t133;
}

