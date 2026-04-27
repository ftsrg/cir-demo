// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char __const_main_x[22] = "Happy Birthday to You";
struct std::basic_ostream<char> _ZSt4cout;
char _str[27];
char _str_1[28];
char _str_2[27];
// function: strcpy
char* strcpy(char*, char*);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: strncpy
char* strncpy(char*, char*, unsigned long long);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb0:
  int __retval1;
  int x2[22];
  int y3[25];
  int z4[15];
  // array copy
  for (int i = 0; i < 22; ++i) { __const_main_x[i] = x2[i]; }
  char* cast5 = (char*)y3;
  char* cast6 = (char*)x2;
  char* r7 = strcpy(cast5, cast6);
  struct std::basic_ostream<char>* g8 = &_ZSt4cout;
  char* cast9 = (char*)_str;
  struct std::basic_ostream<char>* r10 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g8, cast9);
  char* cast11 = (char*)x2;
  struct std::basic_ostream<char>* r12 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r10, cast11);
  char* cast13 = (char*)_str_1;
  struct std::basic_ostream<char>* r14 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r12, cast13);
  char* cast15 = (char*)y3;
  struct std::basic_ostream<char>* r16 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r14, cast15);
  char c17 = 10;
  struct std::basic_ostream<char>* r18 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r16, c17);
  char* cast19 = (char*)z4;
  char* cast20 = (char*)x2;
  int c21 = 14;
  unsigned long long cast22 = (unsigned long long)c21;
  char* r23 = strncpy(cast19, cast20, cast22);
  char c24 = 0;
  int c25 = 14;
  z4[c25] = c24;
  struct std::basic_ostream<char>* g26 = &_ZSt4cout;
  char* cast27 = (char*)_str_2;
  struct std::basic_ostream<char>* r28 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g26, cast27);
  char* cast29 = (char*)z4;
  struct std::basic_ostream<char>* r30 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r28, cast29);
  void* g31 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r32 = std__ostream__operator___std__ostream_____(r30, g31);
  int c33 = 0;
  __retval1 = c33;
  int t34 = __retval1;
  return t34;
}

