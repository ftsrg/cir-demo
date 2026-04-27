// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char __const_main_s[17] = "This is a string";
struct std::basic_ostream<char> _ZSt4cout;
char _str[40] = "The remainder of s after character 'r' ";
char _str_1[14] = "is found is \\22";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: memchr
void* memchr(void*, int, unsigned long long);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb0:
  int __retval1;
  int s2[17];
  // array copy
  for (int i = 0; i < 17; ++i) { __const_main_s[i] = s2[i]; }
  struct std::basic_ostream<char>* g3 = &_ZSt4cout;
  char* cast4 = (char*)_str;
  struct std::basic_ostream<char>* r5 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g3, cast4);
  char* cast6 = (char*)_str_1;
  struct std::basic_ostream<char>* r7 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r5, cast6);
  char* cast8 = (char*)s2;
  void* cast9 = (void*)cast8;
  char c10 = 114;
  int cast11 = (int)c10;
  int c12 = 16;
  unsigned long long cast13 = (unsigned long long)c12;
  void* r14 = memchr(cast9, cast11, cast13);
  char* cast15 = (char*)r14;
  struct std::basic_ostream<char>* r16 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r7, cast15);
  char c17 = 34;
  struct std::basic_ostream<char>* r18 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r16, c17);
  void* g19 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r20 = std__ostream__operator___std__ostream_____(r18, g19);
  int c21 = 0;
  __retval1 = c21;
  int t22 = __retval1;
  return t22;
}

