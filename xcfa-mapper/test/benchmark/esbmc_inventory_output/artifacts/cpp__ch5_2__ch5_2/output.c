// Struct definitions (auto-parsed)
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[17];
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

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _Z8mystery2PKc
int mystery2(char* v20) {
bb21:
  char* s28;
  int __retval29;
  int x30;
  s28 = v20;
  goto bb22;
bb22:
  int c31 = 0;
  x30 = c31;
  goto bb23;
bb23:
  char* t32 = s28;
  char t33 = *t32;
  int cast34 = (int)t33;
  char c35 = 0;
  int cast36 = (int)c35;
  _Bool c37 = (cast34 != cast36) ? 1 : 0;
  if (c37) goto bb24; else goto bb26;
bb24:
  int t38 = x30;
  int u39 = ++t38;
  x30 = u39;
  goto bb25;
bb25:
  char* t40 = s28;
  int c41 = 1;
  char* ptr42 = t40 + c41;
  s28 = ptr42;
  goto bb23;
bb26:
  goto bb27;
bb27:
  int t43 = x30;
  __retval29 = t43;
  int t44 = __retval29;
  return t44;
}

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb45:
  int __retval46;
  int string147[80];
  struct std::basic_ostream<char>* g48 = &_ZSt4cout;
  char* cast49 = (char*)_str;
  struct std::basic_ostream<char>* r50 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g48, cast49);
  struct std::basic_istream<char>* g51 = &_ZSt3cin;
  char* cast52 = (char*)string147;
  struct std::basic_istream<char>* r53 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(g51, cast52);
  struct std::basic_ostream<char>* g54 = &_ZSt4cout;
  char* cast55 = (char*)string147;
  int r56 = mystery2(cast55);
  struct std::basic_ostream<char>* r57 = std__ostream__operator__(g54, r56);
  void* g58 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r59 = std__ostream__operator___std__ostream_____(r57, g58);
  int c60 = 0;
  __retval46 = c60;
  int t61 = __retval46;
  return t61;
}

