// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[12] = "__LINE__ = ";
char _str_1[12] = "__FILE__ = ";
char _str_2[85] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch19_1/main.cpp";
char _str_3[12] = "__DATE__ = ";
char _str_4[12] = "Apr 27 2026";
char _str_5[12] = "__TIME__ = ";
char _str_6[9];
char _str_7[17] = "__TIMESTAMP__ = ";
char _str_8[25];
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
  struct std::basic_ostream<char>* g2 = &_ZSt4cout;
  char* cast3 = (char*)_str;
  struct std::basic_ostream<char>* r4 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g2, cast3);
  int c5 = 16;
  struct std::basic_ostream<char>* r6 = std__ostream__operator__(r4, c5);
  void* g7 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r8 = std__ostream__operator___std__ostream_____(r6, g7);
  char* cast9 = (char*)_str_1;
  struct std::basic_ostream<char>* r10 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r8, cast9);
  char* cast11 = (char*)_str_2;
  struct std::basic_ostream<char>* r12 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r10, cast11);
  void* g13 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r14 = std__ostream__operator___std__ostream_____(r12, g13);
  char* cast15 = (char*)_str_3;
  struct std::basic_ostream<char>* r16 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r14, cast15);
  char* cast17 = (char*)_str_4;
  struct std::basic_ostream<char>* r18 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r16, cast17);
  void* g19 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r20 = std__ostream__operator___std__ostream_____(r18, g19);
  char* cast21 = (char*)_str_5;
  struct std::basic_ostream<char>* r22 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r20, cast21);
  char* cast23 = (char*)_str_6;
  struct std::basic_ostream<char>* r24 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r22, cast23);
  void* g25 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r26 = std__ostream__operator___std__ostream_____(r24, g25);
  char* cast27 = (char*)_str_7;
  struct std::basic_ostream<char>* r28 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r26, cast27);
  char* cast29 = (char*)_str_8;
  struct std::basic_ostream<char>* r30 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r28, cast29);
  void* g31 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r32 = std__ostream__operator___std__ostream_____(r30, g31);
  int c33 = 0;
  __retval1 = c33;
  int t34 = __retval1;
  return t34;
}

