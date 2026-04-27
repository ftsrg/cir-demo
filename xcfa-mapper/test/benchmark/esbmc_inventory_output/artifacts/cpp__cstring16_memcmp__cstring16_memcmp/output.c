// Struct definitions (auto-parsed)
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[19];
struct std::basic_istream<char> _ZSt3cin;
char _str_1[25];
char _str_2[2] = "'";
char _str_3[20] = "' is greater than '";
char _str_4[3] = "'.";
char _str_5[17] = "' is less than '";
char _str_6[19] = "' is the same as '";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

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

// function: memcmp
int memcmp(void*, void*, unsigned long long);

// function: main
int main() {
bb20:
  int __retval31;
  int str132[256];
  int str233[256];
  int n34;
  struct std::basic_ostream<char>* g35 = &_ZSt4cout;
  char* cast36 = (char*)_str;
  struct std::basic_ostream<char>* r37 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g35, cast36);
  void* g38 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r39 = std__ostream__operator___std__ostream_____(r37, g38);
  struct std::basic_istream<char>* g40 = &_ZSt3cin;
  char* cast41 = (char*)str132;
  struct std::basic_istream<char>* r42 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(g40, cast41);
  struct std::basic_ostream<char>* g43 = &_ZSt4cout;
  char* cast44 = (char*)_str_1;
  struct std::basic_ostream<char>* r45 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g43, cast44);
  void* g46 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r47 = std__ostream__operator___std__ostream_____(r45, g46);
  struct std::basic_istream<char>* g48 = &_ZSt3cin;
  char* cast49 = (char*)str233;
  struct std::basic_istream<char>* r50 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(g48, cast49);
  char* cast51 = (char*)str132;
  void* cast52 = (void*)cast51;
  char* cast53 = (char*)str233;
  void* cast54 = (void*)cast53;
  int c55 = 256;
  unsigned long long cast56 = (unsigned long long)c55;
  int r57 = memcmp(cast52, cast54, cast56);
  n34 = r57;
  goto bb21;
bb21:
  int t58 = n34;
  int c59 = 0;
  _Bool c60 = (t58 > c59) ? 1 : 0;
  if (c60) goto bb22; else goto bb23;
bb22:
  struct std::basic_ostream<char>* g61 = &_ZSt4cout;
  char* cast62 = (char*)_str_2;
  struct std::basic_ostream<char>* r63 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g61, cast62);
  char* cast64 = (char*)str132;
  struct std::basic_ostream<char>* r65 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r63, cast64);
  char* cast66 = (char*)_str_3;
  struct std::basic_ostream<char>* r67 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r65, cast66);
  char* cast68 = (char*)str233;
  struct std::basic_ostream<char>* r69 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r67, cast68);
  char* cast70 = (char*)_str_4;
  struct std::basic_ostream<char>* r71 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r69, cast70);
  void* g72 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r73 = std__ostream__operator___std__ostream_____(r71, g72);
  goto bb29;
bb23:
  goto bb24;
bb24:
  int t74 = n34;
  int c75 = 0;
  _Bool c76 = (t74 < c75) ? 1 : 0;
  if (c76) goto bb25; else goto bb26;
bb25:
  struct std::basic_ostream<char>* g77 = &_ZSt4cout;
  char* cast78 = (char*)_str_2;
  struct std::basic_ostream<char>* r79 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g77, cast78);
  char* cast80 = (char*)str132;
  struct std::basic_ostream<char>* r81 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r79, cast80);
  char* cast82 = (char*)_str_5;
  struct std::basic_ostream<char>* r83 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r81, cast82);
  char* cast84 = (char*)str233;
  struct std::basic_ostream<char>* r85 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r83, cast84);
  char* cast86 = (char*)_str_4;
  struct std::basic_ostream<char>* r87 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r85, cast86);
  void* g88 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r89 = std__ostream__operator___std__ostream_____(r87, g88);
  goto bb27;
bb26:
  struct std::basic_ostream<char>* g90 = &_ZSt4cout;
  char* cast91 = (char*)_str_2;
  struct std::basic_ostream<char>* r92 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g90, cast91);
  char* cast93 = (char*)str132;
  struct std::basic_ostream<char>* r94 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r92, cast93);
  char* cast95 = (char*)_str_6;
  struct std::basic_ostream<char>* r96 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r94, cast95);
  char* cast97 = (char*)str233;
  struct std::basic_ostream<char>* r98 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r96, cast97);
  char* cast99 = (char*)_str_4;
  struct std::basic_ostream<char>* r100 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r98, cast99);
  void* g101 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r102 = std__ostream__operator___std__ostream_____(r100, g101);
  goto bb27;
bb27:
  goto bb28;
bb28:
  goto bb29;
bb29:
  goto bb30;
bb30:
  int c103 = 0;
  __retval31 = c103;
  int t104 = __retval31;
  return t104;
}

