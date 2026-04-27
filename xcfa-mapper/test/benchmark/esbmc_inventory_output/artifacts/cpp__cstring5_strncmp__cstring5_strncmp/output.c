// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char __const_main_str2[5] = "R2PO";
char __const_main_str[5] = "R2D2";
struct std::basic_ostream<char> _ZSt4cout;
char _str[35] = "Looking for R2 astromech droids...";
char _str_1[5] = "R2xx";
char _str_2[6] = "found";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: strncmp
int strncmp(char*, char*, unsigned long long);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb0:
  int __retval11;
  int str12[5];
  int str213[5];
  int n14;
  // array copy
  for (int i = 0; i < 5; ++i) { __const_main_str[i] = str12[i]; }
  // array copy
  for (int i = 0; i < 5; ++i) { __const_main_str2[i] = str213[i]; }
  struct std::basic_ostream<char>* g15 = &_ZSt4cout;
  char* cast16 = (char*)_str;
  struct std::basic_ostream<char>* r17 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g15, cast16);
  goto bb1;
bb1:
  int c18 = 0;
  n14 = c18;
  goto bb2;
bb2:
  int t19 = n14;
  int c20 = 3;
  _Bool c21 = (t19 < c20) ? 1 : 0;
  if (c21) goto bb3; else goto bb9;
bb3:
  goto bb4;
bb4:
  char* cast22 = (char*)str213;
  char* cast23 = (char*)_str_1;
  int c24 = 2;
  unsigned long long cast25 = (unsigned long long)c24;
  int r26 = strncmp(cast22, cast23, cast25);
  int c27 = 0;
  _Bool c28 = (r26 == c27) ? 1 : 0;
  if (c28) goto bb5; else goto bb6;
bb5:
  struct std::basic_ostream<char>* g29 = &_ZSt4cout;
  char* cast30 = (char*)_str_2;
  struct std::basic_ostream<char>* r31 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g29, cast30);
  int t32 = n14;
  char t33 = str12[t32];
  struct std::basic_ostream<char>* r34 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r31, t33);
  void* g35 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r36 = std__ostream__operator___std__ostream_____(r34, g35);
  goto bb6;
bb6:
  goto bb7;
bb7:
  goto bb8;
bb8:
  int t37 = n14;
  int u38 = ++t37;
  n14 = u38;
  goto bb2;
bb9:
  goto bb10;
bb10:
  int c39 = 0;
  __retval11 = c39;
  int t40 = __retval11;
  return t40;
}

