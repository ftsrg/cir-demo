// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

int integer1 = 98;
int _ZN7Example8integer1E = 8;
struct std::basic_ostream<char> _ZSt4cout;
char _str[19] = "doubleInUnnamed = ";
double _ZN12_GLOBAL__N_115doubleInUnnamedE;
char _str_1[22] = "\\0A(global) integer1 = ";
char _str_2[7] = "\\0API = ";
char _str_3[6] = "\\0AE = ";
char _str_4[13] = "\\0Ainteger1 = ";
char _str_5[12] = "\\0AFISCAL3 = ";
char _str_6[29];
char _str_7[20] = "\\0AdoubleInUnnamed = ";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEd
struct std::basic_ostream<char>* _ZNSolsEd(struct std::basic_ostream<char>*, double);

// function: _ZNSolsEi
struct std::basic_ostream<char>* _ZNSolsEi(struct std::basic_ostream<char>*, int);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZN7Example11printValuesEv
void Example__printValues() {
bb0:
  struct std::basic_ostream<char>* g1 = &_ZSt4cout;
  char* cast2 = (char*)_str_6;
  struct std::basic_ostream<char>* r3 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g1, cast2);
  int* g4 = &_ZN7Example8integer1E;
  int t5 = *g4;
  struct std::basic_ostream<char>* r6 = _ZNSolsEi(r3, t5);
  char* cast7 = (char*)_str_2;
  struct std::basic_ostream<char>* r8 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r6, cast7);
  double c9 = 3.1415899999999999;
  struct std::basic_ostream<char>* r10 = _ZNSolsEd(r8, c9);
  char* cast11 = (char*)_str_3;
  struct std::basic_ostream<char>* r12 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r10, cast11);
  double c13 = 2.71828;
  struct std::basic_ostream<char>* r14 = _ZNSolsEd(r12, c13);
  char* cast15 = (char*)_str_7;
  struct std::basic_ostream<char>* r16 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r14, cast15);
  double* g17 = &_ZN12_GLOBAL__N_115doubleInUnnamedE;
  double t18 = *g17;
  struct std::basic_ostream<char>* r19 = _ZNSolsEd(r16, t18);
  char* cast20 = (char*)_str_1;
  struct std::basic_ostream<char>* r21 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r19, cast20);
  int* g22 = &integer1;
  int t23 = *g22;
  struct std::basic_ostream<char>* r24 = _ZNSolsEi(r21, t23);
  char* cast25 = (char*)_str_5;
  struct std::basic_ostream<char>* r26 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r24, cast25);
  unsigned int c27 = 1992;
  int cast28 = (int)c27;
  struct std::basic_ostream<char>* r29 = _ZNSolsEi(r26, cast28);
  void* g30 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r31 = std__ostream__operator___std__ostream_____(r29, g30);
  return;
}

// function: main
int main() {
bb32:
  int __retval33;
  struct std::basic_ostream<char>* g34 = &_ZSt4cout;
  char* cast35 = (char*)_str;
  struct std::basic_ostream<char>* r36 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g34, cast35);
  double* g37 = &_ZN12_GLOBAL__N_115doubleInUnnamedE;
  double t38 = *g37;
  struct std::basic_ostream<char>* r39 = _ZNSolsEd(r36, t38);
  struct std::basic_ostream<char>* g40 = &_ZSt4cout;
  char* cast41 = (char*)_str_1;
  struct std::basic_ostream<char>* r42 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g40, cast41);
  int* g43 = &integer1;
  int t44 = *g43;
  struct std::basic_ostream<char>* r45 = _ZNSolsEi(r42, t44);
  struct std::basic_ostream<char>* g46 = &_ZSt4cout;
  char* cast47 = (char*)_str_2;
  struct std::basic_ostream<char>* r48 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g46, cast47);
  double c49 = 3.1415899999999999;
  struct std::basic_ostream<char>* r50 = _ZNSolsEd(r48, c49);
  char* cast51 = (char*)_str_3;
  struct std::basic_ostream<char>* r52 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r50, cast51);
  double c53 = 2.71828;
  struct std::basic_ostream<char>* r54 = _ZNSolsEd(r52, c53);
  char* cast55 = (char*)_str_4;
  struct std::basic_ostream<char>* r56 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r54, cast55);
  int* g57 = &_ZN7Example8integer1E;
  int t58 = *g57;
  struct std::basic_ostream<char>* r59 = _ZNSolsEi(r56, t58);
  char* cast60 = (char*)_str_5;
  struct std::basic_ostream<char>* r61 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r59, cast60);
  unsigned int c62 = 1992;
  int cast63 = (int)c62;
  struct std::basic_ostream<char>* r64 = _ZNSolsEi(r61, cast63);
  void* g65 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r66 = std__ostream__operator___std__ostream_____(r64, g65);
  Example__printValues();
  int c67 = 0;
  __retval33 = c67;
  int t68 = __retval33;
  return t68;
}

