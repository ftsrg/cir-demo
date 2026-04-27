// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[11] = "min(1,2)==";
char _str_1[11] = "min(2,1)==";
char _str_2[15] = "min('a','z')==";
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

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: _ZSt3minIcERKT_S2_S2_
char* char_const__std__min_char_(char* v19, char* v20) {
bb21:
  char* __a26;
  char* __b27;
  char* __retval28;
  __a26 = v19;
  __b27 = v20;
  goto bb22;
bb22:
  char* t29 = __b27;
  char t30 = *t29;
  int cast31 = (int)t30;
  char* t32 = __a26;
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

// function: main
int main() {
bb40:
  int ref.tmp049;
  int ref.tmp150;
  int ref.tmp251;
  int ref.tmp352;
  char ref.tmp453;
  char ref.tmp554;
  int __retval55;
  goto bb41;
bb41:
  struct std::basic_ostream<char>* g56 = &_ZSt4cout;
  char* cast57 = (char*)_str;
  struct std::basic_ostream<char>* r58 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g56, cast57);
  int c59 = 1;
  ref.tmp049 = c59;
  int c60 = 2;
  ref.tmp150 = c60;
  int* r61 = int_const__std__min_int_(&ref.tmp049, &ref.tmp150);
  int t62 = *r61;
  struct std::basic_ostream<char>* r63 = std__ostream__operator__(r58, t62);
  void* g64 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r65 = std__ostream__operator___std__ostream_____(r63, g64);
  goto bb42;
bb42:
  goto bb43;
bb43:
  struct std::basic_ostream<char>* g66 = &_ZSt4cout;
  char* cast67 = (char*)_str_1;
  struct std::basic_ostream<char>* r68 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g66, cast67);
  int c69 = 2;
  ref.tmp251 = c69;
  int c70 = 1;
  ref.tmp352 = c70;
  int* r71 = int_const__std__min_int_(&ref.tmp251, &ref.tmp352);
  int t72 = *r71;
  struct std::basic_ostream<char>* r73 = std__ostream__operator__(r68, t72);
  void* g74 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r75 = std__ostream__operator___std__ostream_____(r73, g74);
  goto bb44;
bb44:
  goto bb45;
bb45:
  struct std::basic_ostream<char>* g76 = &_ZSt4cout;
  char* cast77 = (char*)_str_2;
  struct std::basic_ostream<char>* r78 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g76, cast77);
  char c79 = 97;
  ref.tmp453 = c79;
  char c80 = 122;
  ref.tmp554 = c80;
  char* r81 = char_const__std__min_char_(&ref.tmp453, &ref.tmp554);
  char t82 = *r81;
  struct std::basic_ostream<char>* r83 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r78, t82);
  void* g84 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r85 = std__ostream__operator___std__ostream_____(r83, g84);
  goto bb46;
bb46:
  goto bb47;
bb47:
  int c86 = 0;
  goto bb48;
bb48:
  int c87 = 0;
  __retval55 = c87;
  int t88 = __retval55;
  return t88;
}

