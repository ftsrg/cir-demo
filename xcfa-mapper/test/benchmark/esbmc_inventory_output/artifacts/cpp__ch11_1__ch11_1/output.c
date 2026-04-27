// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char __const_main_c[6] = "HELLO";
double __const_main_b[7];
int __const_main_a[5];
struct std::basic_ostream<char> _ZSt4cout;
char _str[18];
char _str_3[2] = " ";
char _str_1[18];
char _str_2[18];
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* _ZNSolsEi(struct std::basic_ostream<char>*, int);

// function: _Z10printArrayIiEvPKT_i
void void_printArray_int_(int* v0, int v1) {
bb2:
  int i9;
  int* array10;
  int count11;
  array10 = v0;
  count11 = v1;
  goto bb3;
bb3:
  int c12 = 0;
  i9 = c12;
  goto bb4;
bb4:
  int t13 = i9;
  int t14 = count11;
  _Bool c15 = (t13 < t14) ? 1 : 0;
  if (c15) goto bb5; else goto bb7;
bb5:
  struct std::basic_ostream<char>* g16 = &_ZSt4cout;
  int* t17 = array10;
  int t18 = i9;
  int* ptr19 = t17 + t18;
  int t20 = *ptr19;
  struct std::basic_ostream<char>* r21 = _ZNSolsEi(g16, t20);
  char* cast22 = (char*)_str_3;
  struct std::basic_ostream<char>* r23 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r21, cast22);
  goto bb6;
bb6:
  int t24 = i9;
  int u25 = ++t24;
  i9 = u25;
  goto bb4;
bb7:
  goto bb8;
bb8:
  struct std::basic_ostream<char>* g26 = &_ZSt4cout;
  void* g27 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r28 = std__ostream__operator___std__ostream_____(g26, g27);
  return;
}

// function: _ZNSolsEd
struct std::basic_ostream<char>* _ZNSolsEd(struct std::basic_ostream<char>*, double);

// function: _Z10printArrayIdEvPKT_i
void void_printArray_double_(double* v29, int v30) {
bb31:
  int i38;
  double* array39;
  int count40;
  array39 = v29;
  count40 = v30;
  goto bb32;
bb32:
  int c41 = 0;
  i38 = c41;
  goto bb33;
bb33:
  int t42 = i38;
  int t43 = count40;
  _Bool c44 = (t42 < t43) ? 1 : 0;
  if (c44) goto bb34; else goto bb36;
bb34:
  struct std::basic_ostream<char>* g45 = &_ZSt4cout;
  double* t46 = array39;
  int t47 = i38;
  double* ptr48 = t46 + t47;
  double t49 = *ptr48;
  struct std::basic_ostream<char>* r50 = _ZNSolsEd(g45, t49);
  char* cast51 = (char*)_str_3;
  struct std::basic_ostream<char>* r52 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r50, cast51);
  goto bb35;
bb35:
  int t53 = i38;
  int u54 = ++t53;
  i38 = u54;
  goto bb33;
bb36:
  goto bb37;
bb37:
  struct std::basic_ostream<char>* g55 = &_ZSt4cout;
  void* g56 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r57 = std__ostream__operator___std__ostream_____(g55, g56);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: _Z10printArrayIcEvPKT_i
void void_printArray_char_(char* v58, int v59) {
bb60:
  int i67;
  char* array68;
  int count69;
  array68 = v58;
  count69 = v59;
  goto bb61;
bb61:
  int c70 = 0;
  i67 = c70;
  goto bb62;
bb62:
  int t71 = i67;
  int t72 = count69;
  _Bool c73 = (t71 < t72) ? 1 : 0;
  if (c73) goto bb63; else goto bb65;
bb63:
  struct std::basic_ostream<char>* g74 = &_ZSt4cout;
  char* t75 = array68;
  int t76 = i67;
  char* ptr77 = t75 + t76;
  char t78 = *ptr77;
  struct std::basic_ostream<char>* r79 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(g74, t78);
  char* cast80 = (char*)_str_3;
  struct std::basic_ostream<char>* r81 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r79, cast80);
  goto bb64;
bb64:
  int t82 = i67;
  int u83 = ++t82;
  i67 = u83;
  goto bb62;
bb65:
  goto bb66;
bb66:
  struct std::basic_ostream<char>* g84 = &_ZSt4cout;
  void* g85 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r86 = std__ostream__operator___std__ostream_____(g84, g85);
  return;
}

// function: main
int main() {
bb87:
  int __retval88;
  int aCount89;
  int bCount90;
  int cCount91;
  int a92[5];
  double b93[7];
  int c94[6];
  int c95 = 5;
  aCount89 = c95;
  int c96 = 7;
  bCount90 = c96;
  int c97 = 6;
  cCount91 = c97;
  // array copy
  for (int i = 0; i < 5; ++i) { __const_main_a[i] = a92[i]; }
  // array copy
  for (int i = 0; i < 7; ++i) { __const_main_b[i] = b93[i]; }
  // array copy
  for (int i = 0; i < 6; ++i) { __const_main_c[i] = c94[i]; }
  struct std::basic_ostream<char>* g98 = &_ZSt4cout;
  char* cast99 = (char*)_str;
  struct std::basic_ostream<char>* r100 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g98, cast99);
  void* g101 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r102 = std__ostream__operator___std__ostream_____(r100, g101);
  int* cast103 = (int*)a92;
  int c104 = 5;
  void_printArray_int_(cast103, c104);
  struct std::basic_ostream<char>* g105 = &_ZSt4cout;
  char* cast106 = (char*)_str_1;
  struct std::basic_ostream<char>* r107 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g105, cast106);
  void* g108 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r109 = std__ostream__operator___std__ostream_____(r107, g108);
  double* cast110 = (double*)b93;
  int c111 = 7;
  void_printArray_double_(cast110, c111);
  struct std::basic_ostream<char>* g112 = &_ZSt4cout;
  char* cast113 = (char*)_str_2;
  struct std::basic_ostream<char>* r114 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g112, cast113);
  void* g115 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r116 = std__ostream__operator___std__ostream_____(r114, g115);
  char* cast117 = (char*)c94;
  int c118 = 6;
  void_printArray_char_(cast117, c118);
  int c119 = 0;
  __retval88 = c119;
  int t120 = __retval88;
  return t120;
}

