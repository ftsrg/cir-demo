// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char __const_main_keys[11] = "1234567890";
char __const_main_str[7] = "fcba73";
struct std::basic_ostream<char> _ZSt4cout;
char _str[39] = "The first number in str is at position";
// function: strcspn
unsigned long long strcspn(char*, char*);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb0:
  int __retval1;
  int str2[7];
  int keys3[11];
  int i4;
  // array copy
  for (int i = 0; i < 7; ++i) { __const_main_str[i] = str2[i]; }
  // array copy
  for (int i = 0; i < 11; ++i) { __const_main_keys[i] = keys3[i]; }
  char* cast5 = (char*)str2;
  char* cast6 = (char*)keys3;
  unsigned long long r7 = strcspn(cast5, cast6);
  int cast8 = (int)r7;
  i4 = cast8;
  struct std::basic_ostream<char>* g9 = &_ZSt4cout;
  char* cast10 = (char*)_str;
  struct std::basic_ostream<char>* r11 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g9, cast10);
  int t12 = i4;
  int c13 = 1;
  int b14 = t12 + c13;
  struct std::basic_ostream<char>* r15 = std__ostream__operator__(r11, b14);
  void* g16 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r17 = std__ostream__operator___std__ostream_____(r15, g16);
  int c18 = 0;
  __retval1 = c18;
  int t19 = __retval1;
  return t19;
}

