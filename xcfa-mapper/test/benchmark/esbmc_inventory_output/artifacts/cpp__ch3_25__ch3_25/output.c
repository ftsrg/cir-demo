// Struct definitions (auto-parsed)
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

char _str[22] = "maximum( 2, 3, 4 )==2";
char _str_1[85] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_25/main.cpp";
char _str_2[11] = "int main()";
struct std::basic_ostream<char> _ZSt4cout;
char _str_3[29];
struct std::basic_istream<char> _ZSt3cin;
char _str_4[31];
char _str_5[30];
char _str_6[30];
char _str_7[27];
char _str_8[33];
// function: _Z7maximumIiET_S0_S0_S0_
int int_maximum_int_(int v0, int v1, int v2) {
bb3:
  int value112;
  int value213;
  int value314;
  int __retval15;
  int max16;
  value112 = v0;
  value213 = v1;
  value314 = v2;
  int t17 = value112;
  max16 = t17;
  goto bb4;
bb4:
  int t18 = value213;
  int t19 = max16;
  _Bool c20 = (t18 > t19) ? 1 : 0;
  if (c20) goto bb5; else goto bb6;
bb5:
  int t21 = value213;
  max16 = t21;
  goto bb6;
bb6:
  goto bb7;
bb7:
  goto bb8;
bb8:
  int t22 = value314;
  int t23 = max16;
  _Bool c24 = (t22 > t23) ? 1 : 0;
  if (c24) goto bb9; else goto bb10;
bb9:
  int t25 = value314;
  max16 = t25;
  goto bb10;
bb10:
  goto bb11;
bb11:
  int t26 = max16;
  __retval15 = t26;
  int t27 = __retval15;
  return t27;
}

// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: _ZNSirsERi
struct std::basic_istream<char>* _ZNSirsERi(struct std::basic_istream<char>*, int*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* _ZNSolsEi(struct std::basic_ostream<char>*, int);

// function: _ZNSirsERd
struct std::basic_istream<char>* _ZNSirsERd(struct std::basic_istream<char>*, double*);

// function: _ZNSolsEd
struct std::basic_ostream<char>* _ZNSolsEd(struct std::basic_ostream<char>*, double);

// function: _Z7maximumIdET_S0_S0_S0_
double double_maximum_double_(double v28, double v29, double v30) {
bb31:
  double value140;
  double value241;
  double value342;
  double __retval43;
  double max44;
  value140 = v28;
  value241 = v29;
  value342 = v30;
  double t45 = value140;
  max44 = t45;
  goto bb32;
bb32:
  double t46 = value241;
  double t47 = max44;
  _Bool c48 = (t46 > t47) ? 1 : 0;
  if (c48) goto bb33; else goto bb34;
bb33:
  double t49 = value241;
  max44 = t49;
  goto bb34;
bb34:
  goto bb35;
bb35:
  goto bb36;
bb36:
  double t50 = value342;
  double t51 = max44;
  _Bool c52 = (t50 > t51) ? 1 : 0;
  if (c52) goto bb37; else goto bb38;
bb37:
  double t53 = value342;
  max44 = t53;
  goto bb38;
bb38:
  goto bb39;
bb39:
  double t54 = max44;
  __retval43 = t54;
  double t55 = __retval43;
  return t55;
}

// function: _ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_RS3_
struct std::basic_istream<char>* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(struct std::basic_istream<char>*, char*);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: _Z7maximumIcET_S0_S0_S0_
char char_maximum_char_(char v56, char v57, char v58) {
bb59:
  char value168;
  char value269;
  char value370;
  char __retval71;
  char max72;
  value168 = v56;
  value269 = v57;
  value370 = v58;
  char t73 = value168;
  max72 = t73;
  goto bb60;
bb60:
  char t74 = value269;
  int cast75 = (int)t74;
  char t76 = max72;
  int cast77 = (int)t76;
  _Bool c78 = (cast75 > cast77) ? 1 : 0;
  if (c78) goto bb61; else goto bb62;
bb61:
  char t79 = value269;
  max72 = t79;
  goto bb62;
bb62:
  goto bb63;
bb63:
  goto bb64;
bb64:
  char t80 = value370;
  int cast81 = (int)t80;
  char t82 = max72;
  int cast83 = (int)t82;
  _Bool c84 = (cast81 > cast83) ? 1 : 0;
  if (c84) goto bb65; else goto bb66;
bb65:
  char t85 = value370;
  max72 = t85;
  goto bb66;
bb66:
  goto bb67;
bb67:
  char t86 = max72;
  __retval71 = t86;
  char t87 = __retval71;
  return t87;
}

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb88:
  int __retval92;
  int int193;
  int int294;
  int int395;
  double double196;
  double double297;
  double double398;
  char char199;
  char char2100;
  char char3101;
  int c102 = 2;
  int c103 = 3;
  int c104 = 4;
  int r105 = int_maximum_int_(c102, c103, c104);
  int c106 = 2;
  _Bool c107 = (r105 == c106) ? 1 : 0;
  if (c107) goto bb89; else goto bb90;
bb89:
  int c108 = 0;
  goto bb91;
bb90:
  char* cast109 = (char*)_str;
