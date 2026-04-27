// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[11] = "max(1,2)==";
char _str_1[11] = "max(2,1)==";
char _str_2[15] = "max('a','z')==";
char _str_3[17] = "max(3.14,2.73)==";
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

// function: main
int main() {
bb59:
  int ref.tmp072;
  int ref.tmp173;
  int ref.tmp274;
  int ref.tmp375;
  char ref.tmp476;
  char ref.tmp577;
  double ref.tmp678;
  double ref.tmp779;
  int __retval80;
  goto bb60;
bb60:
  struct std::basic_ostream<char>* g81 = &_ZSt4cout;
  char* cast82 = (char*)_str;
  struct std::basic_ostream<char>* r83 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g81, cast82);
  int c84 = 1;
  ref.tmp072 = c84;
  int c85 = 2;
  ref.tmp173 = c85;
  int* r86 = int_const__std__max_int_(&ref.tmp072, &ref.tmp173);
  int t87 = *r86;
  struct std::basic_ostream<char>* r88 = _ZNSolsEi(r83, t87);
  void* g89 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r90 = std__ostream__operator___std__ostream_____(r88, g89);
  goto bb61;
bb61:
  goto bb62;
bb62:
  struct std::basic_ostream<char>* g91 = &_ZSt4cout;
  char* cast92 = (char*)_str_1;
  struct std::basic_ostream<char>* r93 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g91, cast92);
  int c94 = 2;
  ref.tmp274 = c94;
  int c95 = 1;
  ref.tmp375 = c95;
  int* r96 = int_const__std__max_int_(&ref.tmp274, &ref.tmp375);
  int t97 = *r96;
  struct std::basic_ostream<char>* r98 = _ZNSolsEi(r93, t97);
  void* g99 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r100 = std__ostream__operator___std__ostream_____(r98, g99);
  goto bb63;
bb63:
  goto bb64;
bb64:
  struct std::basic_ostream<char>* g101 = &_ZSt4cout;
  char* cast102 = (char*)_str_2;
  struct std::basic_ostream<char>* r103 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g101, cast102);
  char c104 = 97;
  ref.tmp476 = c104;
  char c105 = 122;
  ref.tmp577 = c105;
  char* r106 = char_const__std__max_char_(&ref.tmp476, &ref.tmp577);
  char t107 = *r106;
  struct std::basic_ostream<char>* r108 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r103, t107);
  void* g109 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r110 = std__ostream__operator___std__ostream_____(r108, g109);
  goto bb65;
bb65:
  goto bb66;
bb66:
  int c111 = 0;
  goto bb67;
bb67:
  goto bb68;
bb68:
  struct std::basic_ostream<char>* g112 = &_ZSt4cout;
  char* cast113 = (char*)_str_3;
  struct std::basic_ostream<char>* r114 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g112, cast113);
  double c115 = 3.1400000000000001;
  ref.tmp678 = c115;
  double c116 = 2.73;
  ref.tmp779 = c116;
  double* r117 = double_const__std__max_double_(&ref.tmp678, &ref.tmp779);
  double t118 = *r117;
  struct std::basic_ostream<char>* r119 = _ZNSolsEd(r114, t118);
  void* g120 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r121 = std__ostream__operator___std__ostream_____(r119, g120);
  goto bb69;
bb69:
  goto bb70;
bb70:
  int c122 = 0;
  goto bb71;
bb71:
  int c123 = 0;
  __retval80 = c123;
  int t124 = __retval80;
  return t124;
}

