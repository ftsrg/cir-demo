// Struct definitions (auto-parsed)
struct Time { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[27];
char _str_1[27];
char _str_2[37] = "\\0A\\0A*********************************\\0A";
char _str_3[35] = "POOR PROGRAMMING PRACTICE!!!!!!!!\\0A";
char _str_4[32];
char _str_5[35] = "\\0A*********************************";
// function: _ZN4TimeC1Eiii
void Time__Time(struct Time*, int, int, int);

// function: _ZN4Time10badSetHourEi
int* Time__badSetHour(struct Time*, int);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZN4Time7getHourEv
int Time__getHour(struct Time*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb0:
  int __retval1;
  struct Time t2;
  int* hourRef3;
  int c4 = 0;
  int c5 = 0;
  int c6 = 0;
  Time__Time(&t2, c4, c5, c6);
  int c7 = 20;
  int* r8 = Time__badSetHour(&t2, c7);
  hourRef3 = r8;
  struct std::basic_ostream<char>* g9 = &_ZSt4cout;
  char* cast10 = (char*)_str;
  struct std::basic_ostream<char>* r11 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g9, cast10);
  int* t12 = hourRef3;
  int t13 = *t12;
  struct std::basic_ostream<char>* r14 = std__ostream__operator__(r11, t13);
  int c15 = 30;
  int* t16 = hourRef3;
  *t16 = c15;
  struct std::basic_ostream<char>* g17 = &_ZSt4cout;
  char* cast18 = (char*)_str_1;
  struct std::basic_ostream<char>* r19 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g17, cast18);
  int r20 = Time__getHour(&t2);
  struct std::basic_ostream<char>* r21 = std__ostream__operator__(r19, r20);
  int c22 = 74;
  int c23 = 12;
  int* r24 = Time__badSetHour(&t2, c23);
  *r24 = c22;
  struct std::basic_ostream<char>* g25 = &_ZSt4cout;
  char* cast26 = (char*)_str_2;
  struct std::basic_ostream<char>* r27 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g25, cast26);
  char* cast28 = (char*)_str_3;
  struct std::basic_ostream<char>* r29 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r27, cast28);
  char* cast30 = (char*)_str_4;
  struct std::basic_ostream<char>* r31 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r29, cast30);
  int r32 = Time__getHour(&t2);
  struct std::basic_ostream<char>* r33 = std__ostream__operator__(r31, r32);
  char* cast34 = (char*)_str_5;
  struct std::basic_ostream<char>* r35 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r33, cast34);
  void* g36 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r37 = std__ostream__operator___std__ostream_____(r35, g36);
  int c38 = 0;
  __retval1 = c38;
  int t39 = __retval1;
  return t39;
}

