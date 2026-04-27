// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char _str[27] = "abcdefghijklmnopqrstuvwxyz";
char _str_1[5] = "four";
char _str_2[7] = "Boston";
struct std::basic_ostream<char> _ZSt4cout;
char _str_3[16] = "The length of \\22";
char _str_4[6] = "\\22 is ";
char _str_5[17] = "\\0AThe length of \\22";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEm
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, unsigned long long);

// function: strlen
unsigned long long strlen(char*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb0:
  int __retval1;
  char* string12;
  char* string23;
  char* string34;
  char* cast5 = (char*)_str;
  string12 = cast5;
  char* cast6 = (char*)_str_1;
  string23 = cast6;
  char* cast7 = (char*)_str_2;
  string34 = cast7;
  struct std::basic_ostream<char>* g8 = &_ZSt4cout;
  char* cast9 = (char*)_str_3;
  struct std::basic_ostream<char>* r10 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g8, cast9);
  char* t11 = string12;
  struct std::basic_ostream<char>* r12 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r10, t11);
  char* cast13 = (char*)_str_4;
  struct std::basic_ostream<char>* r14 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r12, cast13);
  char* t15 = string12;
  unsigned long long r16 = strlen(t15);
  struct std::basic_ostream<char>* r17 = std__ostream__operator__(r14, r16);
  char* cast18 = (char*)_str_5;
  struct std::basic_ostream<char>* r19 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r17, cast18);
  char* t20 = string23;
  struct std::basic_ostream<char>* r21 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r19, t20);
  char* cast22 = (char*)_str_4;
  struct std::basic_ostream<char>* r23 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r21, cast22);
  char* t24 = string23;
  unsigned long long r25 = strlen(t24);
  struct std::basic_ostream<char>* r26 = std__ostream__operator__(r23, r25);
  char* cast27 = (char*)_str_5;
  struct std::basic_ostream<char>* r28 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r26, cast27);
  char* t29 = string34;
  struct std::basic_ostream<char>* r30 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r28, t29);
  char* cast31 = (char*)_str_4;
  struct std::basic_ostream<char>* r32 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r30, cast31);
  char* t33 = string34;
  unsigned long long r34 = strlen(t33);
  struct std::basic_ostream<char>* r35 = std__ostream__operator__(r32, r34);
  void* g36 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r37 = std__ostream__operator___std__ostream_____(r35, g36);
  int c38 = 0;
  __retval1 = c38;
  int t39 = __retval1;
  return t39;
}

