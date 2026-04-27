// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char __const_main_str[15] = "Example string";
struct std::basic_ostream<char> _ZSt4cout;
char _str[23] = "'p' found at position ";
char _str_1[2] = ".";
char _str_2[15] = "'p' not found.";
// function: memchr
void* memchr(void*, int, unsigned long long);

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
  int __retval6;
  char* pch7;
  int str8[15];
  // array copy
  for (int i = 0; i < 15; ++i) { __const_main_str[i] = str8[i]; }
  char* cast9 = (char*)str8;
  void* cast10 = (void*)cast9;
  char c11 = 112;
  int cast12 = (int)c11;
  int c13 = 14;
  unsigned long long cast14 = (unsigned long long)c13;
  void* r15 = memchr(cast10, cast12, cast14);
  char* cast16 = (char*)r15;
  pch7 = cast16;
  goto bb1;
bb1:
  char* t17 = pch7;
  char* c18 = NULL;
  _Bool c19 = (t17 != c18) ? 1 : 0;
  if (c19) goto bb2; else goto bb3;
bb2:
  struct std::basic_ostream<char>* g20 = &_ZSt4cout;
  char* cast21 = (char*)_str;
  struct std::basic_ostream<char>* r22 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g20, cast21);
  char* t23 = pch7;
  char* cast24 = (char*)str8;
  long long diff25 = t23 - cast24;
  int c26 = 1;
  long long cast27 = (long long)c26;
  long long b28 = diff25 + cast27;
  struct std::basic_ostream<char>* r29 = std__ostream__operator__(r22, b28);
  char* cast30 = (char*)_str_1;
  struct std::basic_ostream<char>* r31 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r29, cast30);
  void* g32 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r33 = std__ostream__operator___std__ostream_____(r31, g32);
  goto bb4;
bb3:
  struct std::basic_ostream<char>* g34 = &_ZSt4cout;
  char* cast35 = (char*)_str_2;
  struct std::basic_ostream<char>* r36 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g34, cast35);
  void* g37 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r38 = std__ostream__operator___std__ostream_____(r36, g37);
  goto bb4;
bb4:
  goto bb5;
bb5:
  int c39 = 0;
  __retval6 = c39;
  int t40 = __retval6;
  return t40;
}

