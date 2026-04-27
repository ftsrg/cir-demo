// Struct definitions (auto-parsed)
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

char _str_4[49] = "Executing function print at program termination\\0A";
char _str_5[19] = "Program terminated";
struct std::basic_ostream<char> _ZSt4cout;
char _str[48] = "Enter 1 to terminate program with function exit";
char _str_1[40] = "\\0AEnter 2 to terminate program normally\\0A";
struct std::basic_istream<char> _ZSt3cin;
char _str_2[41] = "\\0ATerminating program with function exit\\0A";
char _str_3[49] = "\\0ATerminating program by reaching the end of main";
// function: atexit
int atexit(void*);

// function: _Z5printv
void print() {
bb0:
  struct std::basic_ostream<char>* g1 = &_ZSt4cout;
  char* cast2 = (char*)_str_4;
  struct std::basic_ostream<char>* r3 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g1, cast2);
  char* cast4 = (char*)_str_5;
  struct std::basic_ostream<char>* r5 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r3, cast4);
  void* g6 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r7 = std__ostream__operator___std__ostream_____(r5, g6);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSirsERi
struct std::basic_istream<char>* std__istream__operator__(struct std::basic_istream<char>*, int*);

// function: exit
void exit(int);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb8:
  int __retval13;
  int answer14;
  void* g15 = &_Z5printv;
  int r16 = atexit(g15);
  struct std::basic_ostream<char>* g17 = &_ZSt4cout;
  char* cast18 = (char*)_str;
  struct std::basic_ostream<char>* r19 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g17, cast18);
  char* cast20 = (char*)_str_1;
  struct std::basic_ostream<char>* r21 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r19, cast20);
  struct std::basic_istream<char>* g22 = &_ZSt3cin;
  struct std::basic_istream<char>* r23 = std__istream__operator__(g22, &answer14);
  goto bb9;
bb9:
  int t24 = answer14;
  int c25 = 1;
  _Bool c26 = (t24 == c25) ? 1 : 0;
  if (c26) goto bb10; else goto bb11;
bb10:
  struct std::basic_ostream<char>* g27 = &_ZSt4cout;
  char* cast28 = (char*)_str_2;
  struct std::basic_ostream<char>* r29 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g27, cast28);
  int c30 = 0;
  exit(c30);
  goto bb11;
bb11:
  goto bb12;
bb12:
  struct std::basic_ostream<char>* g31 = &_ZSt4cout;
  char* cast32 = (char*)_str_3;
  struct std::basic_ostream<char>* r33 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g31, cast32);
  void* g34 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r35 = std__ostream__operator___std__ostream_____(r33, g34);
  int c36 = 0;
  __retval13 = c36;
  int t37 = __retval13;
  return t37;
}

