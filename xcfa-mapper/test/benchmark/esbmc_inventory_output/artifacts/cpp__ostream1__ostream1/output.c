// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char __const_main_cstr[25];
struct std::basic_ostream<char> _ZSt4cout;
char _str[18];
char _str_1[11];
char _str_2[16];
char _str_3[23];
char _str_4[15];
char _str_5[16];
char _str_6[5] = "true";
char _str_7[6] = "false";
char _str_8[18];
char _str_9[22];
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* _ZNSolsEi(struct std::basic_ostream<char>*, int);

// function: _ZNSolsEf
struct std::basic_ostream<char>* _ZNSolsEf(struct std::basic_ostream<char>*, float);

// function: _ZNSolsEd
struct std::basic_ostream<char>* _ZNSolsEd(struct std::basic_ostream<char>*, double);

// function: sprintf
int sprintf(char*, char*);

// function: main
int main() {
bb0:
  int __retval1;
  char val2;
  int cstr3[25];
  int i4;
  float f5;
  double d6;
  _Bool b7;
  int buffer8[100];
  int c9 = 65;
  char cast10 = (char)c9;
  val2 = cast10;
  struct std::basic_ostream<char>* g11 = &_ZSt4cout;
  char* cast12 = (char*)_str;
  struct std::basic_ostream<char>* r13 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g11, cast12);
  char t14 = val2;
  struct std::basic_ostream<char>* r15 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r13, t14);
  void* g16 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r17 = std__ostream__operator___std__ostream_____(r15, g16);
  // array copy
  for (int i = 0; i < 25; ++i) { __const_main_cstr[i] = cstr3[i]; }
  struct std::basic_ostream<char>* g18 = &_ZSt4cout;
  char* cast19 = (char*)_str_1;
  struct std::basic_ostream<char>* r20 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g18, cast19);
  char* cast21 = (char*)cstr3;
  struct std::basic_ostream<char>* r22 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r20, cast21);
  void* g23 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r24 = std__ostream__operator___std__ostream_____(r22, g23);
  int c25 = 10;
  i4 = c25;
  struct std::basic_ostream<char>* g26 = &_ZSt4cout;
  char* cast27 = (char*)_str_2;
  struct std::basic_ostream<char>* r28 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g26, cast27);
  int t29 = i4;
  struct std::basic_ostream<char>* r30 = _ZNSolsEi(r28, t29);
  void* g31 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r32 = std__ostream__operator___std__ostream_____(r30, g31);
  float c33 = 3.1400001;
  f5 = c33;
  struct std::basic_ostream<char>* g34 = &_ZSt4cout;
  char* cast35 = (char*)_str_3;
  struct std::basic_ostream<char>* r36 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g34, cast35);
  float t37 = f5;
  struct std::basic_ostream<char>* r38 = _ZNSolsEf(r36, t37);
  void* g39 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r40 = std__ostream__operator___std__ostream_____(r38, g39);
  double c41 = 2.71828;
  d6 = c41;
  struct std::basic_ostream<char>* g42 = &_ZSt4cout;
  char* cast43 = (char*)_str_4;
  struct std::basic_ostream<char>* r44 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g42, cast43);
  double t45 = d6;
  struct std::basic_ostream<char>* r46 = _ZNSolsEd(r44, t45);
  void* g47 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r48 = std__ostream__operator___std__ostream_____(r46, g47);
  _Bool c49 = 1;
  b7 = c49;
  struct std::basic_ostream<char>* g50 = &_ZSt4cout;
  char* cast51 = (char*)_str_5;
  struct std::basic_ostream<char>* r52 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g50, cast51);
  _Bool t53 = b7;
  char* cast54 = (char*)_str_6;
  char* cast55 = (char*)_str_7;
  char* sel56 = t53 ? cast54 : cast55;
  struct std::basic_ostream<char>* r57 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r52, sel56);
  void* g58 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r59 = std__ostream__operator___std__ostream_____(r57, g58);
  char* cast60 = (char*)buffer8;
  char* cast61 = (char*)_str_8;
  int t62 = i4;
  int r63 = sprintf(cast60, cast61, t62);
  struct std::basic_ostream<char>* g64 = &_ZSt4cout;
  char* cast65 = (char*)_str_9;
  struct std::basic_ostream<char>* r66 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g64, cast65);
  char* cast67 = (char*)buffer8;
  struct std::basic_ostream<char>* r68 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r66, cast67);
  void* g69 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r70 = std__ostream__operator___std__ostream_____(r68, g69);
  int c71 = 0;
  __retval1 = c71;
  int t72 = __retval1;
  return t72;
}

