// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char __const_main_str1[14] = "Sample string";
char _str[16] = "copy successful";
struct std::basic_ostream<char> _ZSt4cout;
char _str_1[8];
char _str_2[8];
char _str_3[8];
// function: strncpy
char* strncpy(char*, char*, unsigned long long);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb0:
  int __retval1;
  int str12[14];
  int str23[40];
  int str34[40];
  // array copy
  for (int i = 0; i < 14; ++i) { __const_main_str1[i] = str12[i]; }
  char* cast5 = (char*)str23;
  char* cast6 = (char*)str12;
  int c7 = 6;
  unsigned long long cast8 = (unsigned long long)c7;
  char* r9 = strncpy(cast5, cast6, cast8);
  char* cast10 = (char*)str34;
  char* cast11 = (char*)_str;
  int c12 = 15;
  unsigned long long cast13 = (unsigned long long)c12;
  char* r14 = strncpy(cast10, cast11, cast13);
  struct std::basic_ostream<char>* g15 = &_ZSt4cout;
  char* cast16 = (char*)_str_1;
  struct std::basic_ostream<char>* r17 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g15, cast16);
  char* cast18 = (char*)str12;
  struct std::basic_ostream<char>* r19 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r17, cast18);
  char* cast20 = (char*)_str_2;
  struct std::basic_ostream<char>* r21 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r19, cast20);
  char* cast22 = (char*)str23;
  struct std::basic_ostream<char>* r23 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r21, cast22);
  char* cast24 = (char*)_str_3;
  struct std::basic_ostream<char>* r25 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r23, cast24);
  char* cast26 = (char*)str34;
  struct std::basic_ostream<char>* r27 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r25, cast26);
  void* g28 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r29 = std__ostream__operator___std__ostream_____(r27, g28);
  int c30 = 0;
  __retval1 = c30;
  int t31 = __retval1;
  return t31;
}

