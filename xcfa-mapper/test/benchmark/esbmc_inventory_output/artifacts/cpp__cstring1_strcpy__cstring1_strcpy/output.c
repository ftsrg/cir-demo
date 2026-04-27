// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char __const_main_str1[14] = "Sample string";
char _str[16] = "copy successful";
struct std::basic_ostream<char> _ZSt4cout;
char _str_1[8];
char _str_2[8];
char _str_3[8];
char _str_4[21] = "strcmp(str1,str2)==0";
char _str_5[94] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring1_strcpy/main.cpp";
char _str_6[11] = "int main()";
char _str_7[34] = "strcmp(str3,\\22copy successful\\22)==0";
// function: strcpy
char* strcpy(char*, char*);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: strcmp
int strcmp(char*, char*);

// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: main
int main() {
bb0:
  int __retval7;
  int str18[14];
  int str29[40];
  int str310[40];
  // array copy
  for (int i = 0; i < 14; ++i) { __const_main_str1[i] = str18[i]; }
  char* cast11 = (char*)str29;
  char* cast12 = (char*)str18;
  char* r13 = strcpy(cast11, cast12);
  char* cast14 = (char*)str310;
  char* cast15 = (char*)_str;
  char* r16 = strcpy(cast14, cast15);
  struct std::basic_ostream<char>* g17 = &_ZSt4cout;
  char* cast18 = (char*)_str_1;
  struct std::basic_ostream<char>* r19 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g17, cast18);
  char* cast20 = (char*)str18;
  struct std::basic_ostream<char>* r21 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r19, cast20);
  char* cast22 = (char*)_str_2;
  struct std::basic_ostream<char>* r23 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r21, cast22);
  char* cast24 = (char*)str29;
  struct std::basic_ostream<char>* r25 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r23, cast24);
  char* cast26 = (char*)_str_3;
  struct std::basic_ostream<char>* r27 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r25, cast26);
  char* cast28 = (char*)str310;
  struct std::basic_ostream<char>* r29 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r27, cast28);
  void* g30 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r31 = std__ostream__operator___std__ostream_____(r29, g30);
  char* cast32 = (char*)str18;
  char* cast33 = (char*)str29;
  int r34 = strcmp(cast32, cast33);
  int c35 = 0;
  _Bool c36 = (r34 == c35) ? 1 : 0;
  if (c36) goto bb1; else goto bb2;
bb1:
  int c37 = 0;
  goto bb3;
bb2:
  char* cast38 = (char*)_str_4;
