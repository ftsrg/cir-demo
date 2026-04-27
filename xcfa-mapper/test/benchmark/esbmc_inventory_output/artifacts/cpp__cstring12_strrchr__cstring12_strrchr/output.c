// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char __const_main_str[24] = "This is a sample string";
struct std::basic_ostream<char> _ZSt4cout;
char _str[32] = "Last occurence of 's' found at ";
// function: strrchr
char* strrchr(char*, int);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEl
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, long long);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb0:
  int __retval1;
  int str2[24];
  char* pch3;
  // array copy
  for (int i = 0; i < 24; ++i) { __const_main_str[i] = str2[i]; }
  char* cast4 = (char*)str2;
  char c5 = 115;
  int cast6 = (int)c5;
  char* r7 = strrchr(cast4, cast6);
  pch3 = r7;
  struct std::basic_ostream<char>* g8 = &_ZSt4cout;
  char* cast9 = (char*)_str;
  struct std::basic_ostream<char>* r10 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g8, cast9);
  char* t11 = pch3;
  char* cast12 = (char*)str2;
  long long diff13 = t11 - cast12;
  int c14 = 1;
  long long cast15 = (long long)c14;
  long long b16 = diff13 + cast15;
  struct std::basic_ostream<char>* r17 = std__ostream__operator__(r10, b16);
  void* g18 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r19 = std__ostream__operator___std__ostream_____(r17, g18);
  int c20 = 0;
  __retval1 = c20;
  int t21 = __retval1;
  return t21;
}

