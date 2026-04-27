// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[29];
char _str_1[50];
char _str_2[11] = "..........";
char _str_3[6] = "-----";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: _Z4bellRSo
struct std::basic_ostream<char>* bell(struct std::basic_ostream<char>* v0) {
bb1:
  int output2[8];
  int __retval3[8];
  output2 = v0;
  struct std::basic_ostream<char>* t4 = output2;
  char c5 = 7;
  struct std::basic_ostream<char>* r6 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(t4, c5);
  __retval3 = r6;
  struct std::basic_ostream<char>* t7 = __retval3;
  return t7;
}

// function: _Z14carriageReturnRSo
struct std::basic_ostream<char>* carriageReturn(struct std::basic_ostream<char>* v8) {
bb9:
  int output10[8];
  int __retval11[8];
  output10 = v8;
  struct std::basic_ostream<char>* t12 = output10;
  char c13 = 13;
  struct std::basic_ostream<char>* r14 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(t12, c13);
  __retval11 = r14;
  struct std::basic_ostream<char>* t15 = __retval11;
  return t15;
}

// function: _Z3tabRSo
struct std::basic_ostream<char>* tab(struct std::basic_ostream<char>* v16) {
bb17:
  int output18[8];
  int __retval19[8];
  output18 = v16;
  struct std::basic_ostream<char>* t20 = output18;
  char c21 = 9;
  struct std::basic_ostream<char>* r22 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(t20, c21);
  __retval19 = r22;
  struct std::basic_ostream<char>* t23 = __retval19;
  return t23;
}

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _Z7endLineRSo
struct std::basic_ostream<char>* endLine(struct std::basic_ostream<char>* v24) {
bb25:
  int output26[8];
  int __retval27[8];
  output26 = v24;
  struct std::basic_ostream<char>* t28 = output26;
  char c29 = 10;
  struct std::basic_ostream<char>* r30 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(t28, c29);
  void* g31 = &_ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r32 = std__ostream__operator___std__ostream_____(r30, g31);
  __retval27 = r32;
  struct std::basic_ostream<char>* t33 = __retval27;
  return t33;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: main
int main() {
bb34:
  int __retval35;
  struct std::basic_ostream<char>* g36 = &_ZSt4cout;
  char* cast37 = (char*)_str;
  struct std::basic_ostream<char>* r38 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g36, cast37);
  void* g39 = &_Z7endLineRSo;
  struct std::basic_ostream<char>* r40 = std__ostream__operator___std__ostream_____(r38, g39);
  char c41 = 97;
  struct std::basic_ostream<char>* r42 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r40, c41);
  void* g43 = &_Z3tabRSo;
  struct std::basic_ostream<char>* r44 = std__ostream__operator___std__ostream_____(r42, g43);
  char c45 = 98;
  struct std::basic_ostream<char>* r46 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r44, c45);
  void* g47 = &_Z3tabRSo;
  struct std::basic_ostream<char>* r48 = std__ostream__operator___std__ostream_____(r46, g47);
  char c49 = 99;
  struct std::basic_ostream<char>* r50 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r48, c49);
  void* g51 = &_Z7endLineRSo;
  struct std::basic_ostream<char>* r52 = std__ostream__operator___std__ostream_____(r50, g51);
  struct std::basic_ostream<char>* g53 = &_ZSt4cout;
  char* cast54 = (char*)_str_1;
  struct std::basic_ostream<char>* r55 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g53, cast54);
  void* g56 = &_Z7endLineRSo;
  struct std::basic_ostream<char>* r57 = std__ostream__operator___std__ostream_____(r55, g56);
  char* cast58 = (char*)_str_2;
  struct std::basic_ostream<char>* r59 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r57, cast58);
  struct std::basic_ostream<char>* g60 = &_ZSt4cout;
  void* g61 = &_Z4bellRSo;
  struct std::basic_ostream<char>* r62 = std__ostream__operator___std__ostream_____(g60, g61);
  struct std::basic_ostream<char>* g63 = &_ZSt4cout;
  void* g64 = &_Z14carriageReturnRSo;
  struct std::basic_ostream<char>* r65 = std__ostream__operator___std__ostream_____(g63, g64);
  char* cast66 = (char*)_str_3;
  struct std::basic_ostream<char>* r67 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r65, cast66);
  void* g68 = &_Z7endLineRSo;
  struct std::basic_ostream<char>* r69 = std__ostream__operator___std__ostream_____(r67, g68);
  int c70 = 0;
  __retval35 = c70;
  int t71 = __retval35;
  return t71;
}

