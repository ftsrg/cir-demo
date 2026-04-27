// Struct definitions (auto-parsed)
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

char __const_main_string2[15] = "string literal";
struct std::basic_ostream<char> _ZSt4cout;
char _str[33];
struct std::basic_istream<char> _ZSt3cin;
char _str_1[13];
char _str_2[14];
char _str_3[45];
char _str_4[14];
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: _ZSt17__istream_extractRSiPcl
void std____istream_extract(struct std::basic_istream<char>*, char*, long long);

// function: _ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_PS3_
struct std::basic_istream<char>* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(struct std::basic_istream<char>* v0, char* v1) {
bb2:
  long long __n5;
  int __in6[8];
  char* __s7;
  int __retval8[8];
  __in6 = v0;
  __s7 = v1;
  goto bb3;
bb3:
  long long c9 = 9223372036854775807;
  __n5 = c9;
  unsigned long long c10 = 1;
  long long t11 = __n5;
  unsigned long long cast12 = (unsigned long long)t11;
  unsigned long long b13 = cast12 / c10;
  long long cast14 = (long long)b13;
  __n5 = cast14;
  struct std::basic_istream<char>* t15 = __in6;
  char* t16 = __s7;
  long long t17 = __n5;
  std____istream_extract(t15, t16, t17);
  goto bb4;
bb4:
  struct std::basic_istream<char>* t18 = __in6;
  __retval8 = t18;
  struct std::basic_istream<char>* t19 = __retval8;
  return t19;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb20:
  int i27;
  int __retval28;
  int string129[20];
  int string230[15];
  // array copy
  for (int i = 0; i < 15; ++i) { __const_main_string2[i] = string230[i]; }
  struct std::basic_ostream<char>* g31 = &_ZSt4cout;
  char* cast32 = (char*)_str;
  struct std::basic_ostream<char>* r33 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g31, cast32);
  struct std::basic_istream<char>* g34 = &_ZSt3cin;
  char* cast35 = (char*)string129;
  struct std::basic_istream<char>* r36 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(g34, cast35);
  struct std::basic_ostream<char>* g37 = &_ZSt4cout;
  char* cast38 = (char*)_str_1;
  struct std::basic_ostream<char>* r39 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g37, cast38);
  char* cast40 = (char*)string129;
  struct std::basic_ostream<char>* r41 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r39, cast40);
  char* cast42 = (char*)_str_2;
  struct std::basic_ostream<char>* r43 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r41, cast42);
  char* cast44 = (char*)string230;
  struct std::basic_ostream<char>* r45 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r43, cast44);
  struct std::basic_ostream<char>* g46 = &_ZSt4cout;
  char* cast47 = (char*)_str_3;
  struct std::basic_ostream<char>* r48 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g46, cast47);
  goto bb21;
bb21:
  int c49 = 0;
  i27 = c49;
  goto bb22;
bb22:
  int t50 = i27;
  char t51 = string129[t50];
  int cast52 = (int)t51;
  char c53 = 0;
  int cast54 = (int)c53;
  _Bool c55 = (cast52 != cast54) ? 1 : 0;
  if (c55) goto bb23; else goto bb25;
bb23:
  struct std::basic_ostream<char>* g56 = &_ZSt4cout;
  int t57 = i27;
  char t58 = string129[t57];
  struct std::basic_ostream<char>* r59 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(g56, t58);
  char c60 = 32;
  struct std::basic_ostream<char>* r61 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r59, c60);
  goto bb24;
bb24:
  int t62 = i27;
  int u63 = ++t62;
  i27 = u63;
  goto bb22;
bb25:
  goto bb26;
bb26:
  struct std::basic_istream<char>* g64 = &_ZSt3cin;
  char* cast65 = (char*)string129;
  struct std::basic_istream<char>* r66 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(g64, cast65);
  struct std::basic_ostream<char>* g67 = &_ZSt4cout;
  char* cast68 = (char*)_str_4;
  struct std::basic_ostream<char>* r69 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g67, cast68);
  char* cast70 = (char*)string129;
  struct std::basic_ostream<char>* r71 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r69, cast70);
  void* g72 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r73 = std__ostream__operator___std__ostream_____(r71, g72);
  int c74 = 0;
  __retval28 = c74;
  int t75 = __retval28;
  return t75;
}

