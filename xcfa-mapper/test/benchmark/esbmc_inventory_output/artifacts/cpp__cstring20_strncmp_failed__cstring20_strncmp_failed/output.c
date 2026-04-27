// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char __const_main_str2[5] = "R2PO";
char __const_main_str[5] = "R2D2";
struct std::basic_ostream<char> _ZSt4cout;
char _str[35] = "Looking for R2 astromech droids...";
char _str_1[5] = "R2xx";
char _str_2[6] = "found";
char _str_3[27] = "strncmp(str, str2, 4) == 0";
char _str_4[103] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp";
char _str_5[11] = "int main()";
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

// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: main
int main() {
bb0:
  int __retval14;
  int str15[5];
  int str216[5];
  int n17;
  // array copy
  for (int i = 0; i < 5; ++i) { __const_main_str[i] = str15[i]; }
  // array copy
  for (int i = 0; i < 5; ++i) { __const_main_str2[i] = str216[i]; }
  struct std::basic_ostream<char>* g18 = &_ZSt4cout;
  char* cast19 = (char*)_str;
  struct std::basic_ostream<char>* r20 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g18, cast19);
  goto bb1;
bb1:
  int c21 = 0;
  n17 = c21;
  goto bb2;
bb2:
  int t22 = n17;
  int c23 = 3;
  _Bool c24 = (t22 < c23) ? 1 : 0;
  if (c24) goto bb3; else goto bb9;
bb3:
  goto bb4;
bb4:
  char* cast25 = (char*)str216;
  char* cast26 = (char*)_str_1;
  int c27 = 2;
  unsigned long long cast28 = (unsigned long long)c27;
  int r29 = strncmp(cast25, cast26, cast28);
  int c30 = 0;
  _Bool c31 = (r29 == c30) ? 1 : 0;
  if (c31) goto bb5; else goto bb6;
bb5:
  struct std::basic_ostream<char>* g32 = &_ZSt4cout;
  char* cast33 = (char*)_str_2;
  struct std::basic_ostream<char>* r34 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g32, cast33);
  int t35 = n17;
  char t36 = str15[t35];
  struct std::basic_ostream<char>* r37 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r34, t36);
  void* g38 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r39 = std__ostream__operator___std__ostream_____(r37, g38);
  goto bb6;
bb6:
  goto bb7;
bb7:
  goto bb8;
bb8:
  int t40 = n17;
  int u41 = ++t40;
  n17 = u41;
  goto bb2;
bb9:
  goto bb10;
bb10:
  char* cast42 = (char*)str15;
  char* cast43 = (char*)str216;
  int c44 = 4;
  unsigned long long cast45 = (unsigned long long)c44;
  int r46 = strncmp(cast42, cast43, cast45);
  int c47 = 0;
  _Bool c48 = (r46 == c47) ? 1 : 0;
  if (c48) goto bb11; else goto bb12;
bb11:
  int c49 = 0;
  goto bb13;
bb12:
  char* cast50 = (char*)_str_3;
