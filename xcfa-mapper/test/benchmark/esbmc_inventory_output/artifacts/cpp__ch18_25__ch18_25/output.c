// Struct definitions (auto-parsed)
struct std::_Setw { int _M_n; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

char __const_main_s2[8] = "ABCDXYZ";
char __const_main_s1[8] = "ABCDEFG";
struct std::basic_ostream<char> _ZSt4cout;
char _str[6] = "s1 = ";
char _str_1[7] = "\\0As2 = ";
char _str_2[22] = "\\0Amemcmp(s1, s2, 4) = ";
char _str_3[22] = "\\0Amemcmp(s1, s2, 7) = ";
char _str_4[22] = "\\0Amemcmp(s2, s1, 7) = ";
// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std::basic_ostream<char>*, struct std::_Setw);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZSt4setwi
struct std::_Setw std__setw(int v0) {
bb1:
  int __n2;
  struct std::_Setw __retval3;
  __n2 = v0;
  int t4 = __n2;
  __retval3._M_n = t4;
  struct std::_Setw t5 = __retval3;
  return t5;
}

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: memcmp
int memcmp(void*, void*, unsigned long long);

// function: main
int main() {
bb6:
  int __retval7;
  int s18[8];
  int s29[8];
  struct std::_Setw agg.tmp010;
  struct std::_Setw agg.tmp111;
  struct std::_Setw agg.tmp212;
  // array copy
  for (int i = 0; i < 8; ++i) { __const_main_s1[i] = s18[i]; }
  // array copy
  for (int i = 0; i < 8; ++i) { __const_main_s2[i] = s29[i]; }
  struct std::basic_ostream<char>* g13 = &_ZSt4cout;
  char* cast14 = (char*)_str;
  struct std::basic_ostream<char>* r15 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g13, cast14);
  char* cast16 = (char*)s18;
  struct std::basic_ostream<char>* r17 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r15, cast16);
  char* cast18 = (char*)_str_1;
  struct std::basic_ostream<char>* r19 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r17, cast18);
  char* cast20 = (char*)s29;
  struct std::basic_ostream<char>* r21 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r19, cast20);
  void* g22 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r23 = std__ostream__operator___std__ostream_____(r21, g22);
  char* cast24 = (char*)_str_2;
  struct std::basic_ostream<char>* r25 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r23, cast24);
  int c26 = 3;
  struct std::_Setw r27 = std__setw(c26);
  agg.tmp010 = r27;
  struct std::_Setw t28 = agg.tmp010;
  struct std::basic_ostream<char>* r29 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r25, t28);
  char* cast30 = (char*)s18;
  void* cast31 = (void*)cast30;
  char* cast32 = (char*)s29;
  void* cast33 = (void*)cast32;
  int c34 = 4;
  unsigned long long cast35 = (unsigned long long)c34;
  int r36 = memcmp(cast31, cast33, cast35);
  struct std::basic_ostream<char>* r37 = std__ostream__operator__(r29, r36);
  char* cast38 = (char*)_str_3;
  struct std::basic_ostream<char>* r39 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r37, cast38);
  int c40 = 3;
  struct std::_Setw r41 = std__setw(c40);
  agg.tmp111 = r41;
  struct std::_Setw t42 = agg.tmp111;
  struct std::basic_ostream<char>* r43 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r39, t42);
  char* cast44 = (char*)s18;
  void* cast45 = (void*)cast44;
  char* cast46 = (char*)s29;
  void* cast47 = (void*)cast46;
  int c48 = 7;
  unsigned long long cast49 = (unsigned long long)c48;
  int r50 = memcmp(cast45, cast47, cast49);
  struct std::basic_ostream<char>* r51 = std__ostream__operator__(r43, r50);
  char* cast52 = (char*)_str_4;
  struct std::basic_ostream<char>* r53 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r51, cast52);
  int c54 = 3;
  struct std::_Setw r55 = std__setw(c54);
  agg.tmp212 = r55;
  struct std::_Setw t56 = agg.tmp212;
  struct std::basic_ostream<char>* r57 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r53, t56);
  char* cast58 = (char*)s29;
  void* cast59 = (void*)cast58;
  char* cast60 = (char*)s18;
  void* cast61 = (void*)cast60;
  int c62 = 7;
  unsigned long long cast63 = (unsigned long long)c62;
  int r64 = memcmp(cast59, cast61, cast63);
  struct std::basic_ostream<char>* r65 = std__ostream__operator__(r57, r64);
  void* g66 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r67 = std__ostream__operator___std__ostream_____(r65, g66);
  int c68 = 0;
  __retval7 = c68;
  int t69 = __retval7;
  return t69;
}

