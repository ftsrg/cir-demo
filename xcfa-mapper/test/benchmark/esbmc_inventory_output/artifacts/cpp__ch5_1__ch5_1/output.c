// Struct definitions (auto-parsed)
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[20];
struct std::basic_istream<char> _ZSt3cin;
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

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

// function: _Z8mystery1PcPKc
void mystery1(char* v20, char* v21) {
bb22:
  char* s134;
  char* s235;
  s134 = v20;
  s235 = v21;
  goto bb23;
bb23:
  goto bb24;
bb24:
  char* t36 = s134;
  char t37 = *t36;
  int cast38 = (int)t37;
  char c39 = 0;
  int cast40 = (int)c39;
  _Bool c41 = (cast38 != cast40) ? 1 : 0;
  if (c41) goto bb25; else goto bb26;
bb25:
  char* t42 = s134;
  int c43 = 1;
  char* ptr44 = t42 + c43;
  s134 = ptr44;
  goto bb24;
bb26:
  goto bb27;
bb27:
  goto bb28;
bb28:
  goto bb29;
bb29:
  char* t45 = s235;
  char t46 = *t45;
  char* t47 = s134;
  *t47 = t46;
  _Bool cast48 = (_Bool)t46;
  if (cast48) goto bb30; else goto bb32;
bb30:
  goto bb31;
bb31:
  char* t49 = s134;
  int c50 = 1;
  char* ptr51 = t49 + c50;
  s134 = ptr51;
  char* t52 = s235;
  int c53 = 1;
  char* ptr54 = t52 + c53;
  s235 = ptr54;
  goto bb29;
bb32:
  goto bb33;
bb33:
  return;
}

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb55:
  int __retval56;
  int string157[80];
  int string258[80];
  struct std::basic_ostream<char>* g59 = &_ZSt4cout;
  char* cast60 = (char*)_str;
  struct std::basic_ostream<char>* r61 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g59, cast60);
  struct std::basic_istream<char>* g62 = &_ZSt3cin;
  char* cast63 = (char*)string157;
  struct std::basic_istream<char>* r64 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(g62, cast63);
  char* cast65 = (char*)string258;
  struct std::basic_istream<char>* r66 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(r64, cast65);
  char* cast67 = (char*)string157;
  char* cast68 = (char*)string258;
  mystery1(cast67, cast68);
  struct std::basic_ostream<char>* g69 = &_ZSt4cout;
  char* cast70 = (char*)string157;
  struct std::basic_ostream<char>* r71 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g69, cast70);
  void* g72 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r73 = std__ostream__operator___std__ostream_____(r71, g72);
  int c74 = 0;
  __retval56 = c74;
  int t75 = __retval56;
  return t75;
}

