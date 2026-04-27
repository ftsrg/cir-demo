// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[11] = "max(1,2)==";
char _str_1[11] = "max(2,1)==";
char _str_2[15] = "max('a','z')==";
char _str_3[17] = "max(3.14,2.73)==";
char _str_4[23] = "max(3.14,2.73) != 3.14";
char _str_5[97] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm119/main.cpp";
char _str_6[11] = "int main()";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* _ZNSolsEi(struct std::basic_ostream<char>*, int);

// function: _ZSt3maxIiERKT_S2_S2_
int* int_const__std__max_int_(int* v0, int* v1) {
bb2:
  int* __a7;
  int* __b8;
  int* __retval9;
  __a7 = v0;
  __b8 = v1;
  goto bb3;
bb3:
  int* t10 = __a7;
  int t11 = *t10;
  int* t12 = __b8;
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

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: _ZSt3maxIcERKT_S2_S2_
char* char_const__std__max_char_(char* v19, char* v20) {
bb21:
  char* __a26;
  char* __b27;
  char* __retval28;
  __a26 = v19;
  __b27 = v20;
  goto bb22;
bb22:
  char* t29 = __a26;
  char t30 = *t29;
  int cast31 = (int)t30;
  char* t32 = __b27;
  char t33 = *t32;
  int cast34 = (int)t33;
  _Bool c35 = (cast31 < cast34) ? 1 : 0;
  if (c35) goto bb23; else goto bb24;
bb23:
  char* t36 = __b27;
  __retval28 = t36;
  char* t37 = __retval28;
  return t37;
bb24:
  goto bb25;
bb25:
  char* t38 = __a26;
  __retval28 = t38;
  char* t39 = __retval28;
  return t39;
}

// function: _ZNSolsEd
struct std::basic_ostream<char>* _ZNSolsEd(struct std::basic_ostream<char>*, double);

// function: _ZSt3maxIdERKT_S2_S2_
double* double_const__std__max_double_(double* v40, double* v41) {
bb42:
  double* __a47;
  double* __b48;
  double* __retval49;
  __a47 = v40;
  __b48 = v41;
  goto bb43;
bb43:
  double* t50 = __a47;
  double t51 = *t50;
  double* t52 = __b48;
  double t53 = *t52;
  _Bool c54 = (t51 < t53) ? 1 : 0;
  if (c54) goto bb44; else goto bb45;
bb44:
  double* t55 = __b48;
  __retval49 = t55;
  double* t56 = __retval49;
  return t56;
bb45:
  goto bb46;
bb46:
  double* t57 = __a47;
  __retval49 = t57;
  double* t58 = __retval49;
  return t58;
}

// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: main
int main() {
bb59:
  int ref.tmp074;
  int ref.tmp175;
  int ref.tmp276;
  int ref.tmp377;
  char ref.tmp478;
  char ref.tmp579;
  double ref.tmp680;
  double ref.tmp781;
  int __retval82;
  goto bb60;
bb60:
  struct std::basic_ostream<char>* g83 = &_ZSt4cout;
  char* cast84 = (char*)_str;
  struct std::basic_ostream<char>* r85 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g83, cast84);
  int c86 = 1;
  ref.tmp074 = c86;
  int c87 = 2;
  ref.tmp175 = c87;
  int* r88 = int_const__std__max_int_(&ref.tmp074, &ref.tmp175);
  int t89 = *r88;
  struct std::basic_ostream<char>* r90 = _ZNSolsEi(r85, t89);
  void* g91 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r92 = std__ostream__operator___std__ostream_____(r90, g91);
  goto bb61;
bb61:
  goto bb62;
bb62:
  int c93 = 0;
  goto bb63;
bb63:
  goto bb64;
bb64:
  struct std::basic_ostream<char>* g94 = &_ZSt4cout;
  char* cast95 = (char*)_str_1;
  struct std::basic_ostream<char>* r96 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g94, cast95);
  int c97 = 2;
  ref.tmp276 = c97;
  int c98 = 1;
  ref.tmp377 = c98;
  int* r99 = int_const__std__max_int_(&ref.tmp276, &ref.tmp377);
  int t100 = *r99;
  struct std::basic_ostream<char>* r101 = _ZNSolsEi(r96, t100);
  void* g102 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r103 = std__ostream__operator___std__ostream_____(r101, g102);
  goto bb65;
bb65:
  goto bb66;
bb66:
  struct std::basic_ostream<char>* g104 = &_ZSt4cout;
  char* cast105 = (char*)_str_2;
  struct std::basic_ostream<char>* r106 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g104, cast105);
  char c107 = 97;
  ref.tmp478 = c107;
  char c108 = 122;
  ref.tmp579 = c108;
  char* r109 = char_const__std__max_char_(&ref.tmp478, &ref.tmp579);
  char t110 = *r109;
  struct std::basic_ostream<char>* r111 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r106, t110);
  void* g112 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r113 = std__ostream__operator___std__ostream_____(r111, g112);
  goto bb67;
bb67:
  goto bb68;
bb68:
  int c114 = 0;
  goto bb69;
bb69:
  goto bb70;
bb70:
  struct std::basic_ostream<char>* g115 = &_ZSt4cout;
  char* cast116 = (char*)_str_3;
  struct std::basic_ostream<char>* r117 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g115, cast116);
  double c118 = 3.1400000000000001;
  ref.tmp680 = c118;
  double c119 = 2.73;
  ref.tmp781 = c119;
  double* r120 = double_const__std__max_double_(&ref.tmp680, &ref.tmp781);
  double t121 = *r120;
  struct std::basic_ostream<char>* r122 = _ZNSolsEd(r117, t121);
  void* g123 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r124 = std__ostream__operator___std__ostream_____(r122, g123);
  goto bb71;
bb71:
  goto bb72;
bb72:
  char* cast125 = (char*)_str_4;
