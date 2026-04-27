// Struct definitions (auto-parsed)
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[20];
struct std::basic_istream<char> _ZSt3cin;
char _str_1[15] = "The result is ";
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

// function: _ZNSolsEb
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, _Bool);

// function: _Z8mystery3PKcS0_
_Bool mystery3(char* v20, char* v21) {
  _Bool v22;
  _Bool v23;
bb24:
  char* s141;
  char* s242;
  _Bool __retval43;
  s141 = v20;
  s242 = v21;
  goto bb25;
bb25:
  goto bb26;
bb26:
  char* t44 = s141;
  char t45 = *t44;
  int cast46 = (int)t45;
  char c47 = 0;
  int cast48 = (int)c47;
  _Bool c49 = (cast46 != cast48) ? 1 : 0;
  if (c49) goto bb27; else goto bb31;
bb27:
  char* t50 = s242;
  char t51 = *t50;
  int cast52 = (int)t51;
  char c53 = 0;
  int cast54 = (int)c53;
  _Bool c55 = (cast52 != cast54) ? 1 : 0;
  if (c55) goto bb28; else goto bb29;
bb28:
  _Bool c56 = 1;
  v22 = c56;
  goto bb30;
bb29:
  _Bool c57 = 0;
  v22 = c57;
  goto bb30;
bb30:
  v23 = v22;
  goto bb32;
bb31:
  _Bool c58 = 0;
  v23 = c58;
  goto bb32;
bb32:
  if (v23) goto bb33; else goto bb39;
bb33:
  goto bb34;
bb34:
  char* t59 = s141;
  char t60 = *t59;
  int cast61 = (int)t60;
  char* t62 = s242;
  char t63 = *t62;
  int cast64 = (int)t63;
  _Bool c65 = (cast61 != cast64) ? 1 : 0;
  if (c65) goto bb35; else goto bb36;
bb35:
  _Bool c66 = 0;
  __retval43 = c66;
  _Bool t67 = __retval43;
  return t67;
bb36:
  goto bb37;
bb37:
  goto bb38;
bb38:
  char* t68 = s141;
  int c69 = 1;
  char* ptr70 = t68 + c69;
  s141 = ptr70;
  char* t71 = s242;
  int c72 = 1;
  char* ptr73 = t71 + c72;
  s242 = ptr73;
  goto bb26;
bb39:
  goto bb40;
bb40:
  _Bool c74 = 1;
  __retval43 = c74;
  _Bool t75 = __retval43;
  return t75;
}

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb76:
  int __retval77;
  int string178[80];
  int string279[80];
  struct std::basic_ostream<char>* g80 = &_ZSt4cout;
  char* cast81 = (char*)_str;
  struct std::basic_ostream<char>* r82 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g80, cast81);
  struct std::basic_istream<char>* g83 = &_ZSt3cin;
  char* cast84 = (char*)string178;
  struct std::basic_istream<char>* r85 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(g83, cast84);
  char* cast86 = (char*)string279;
  struct std::basic_istream<char>* r87 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(r85, cast86);
  struct std::basic_ostream<char>* g88 = &_ZSt4cout;
  char* cast89 = (char*)_str_1;
  struct std::basic_ostream<char>* r90 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g88, cast89);
  char* cast91 = (char*)string178;
  char* cast92 = (char*)string279;
  _Bool r93 = mystery3(cast91, cast92);
  struct std::basic_ostream<char>* r94 = std__ostream__operator__(r90, r93);
  void* g95 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r96 = std__ostream__operator___std__ostream_____(r94, g95);
  int c97 = 0;
  __retval77 = c97;
  int t98 = __retval77;
  return t98;
}

