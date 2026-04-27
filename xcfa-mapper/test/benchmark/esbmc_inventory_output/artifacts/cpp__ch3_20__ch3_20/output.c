// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[28];
char _str_1[39] = "\\0A\\0AThe volume of a box with length 10,\\0A";
char _str_2[26];
char _str_3[26];
char _str_4[26];
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _Z9boxVolumeiii
int boxVolume(int v0, int v1, int v2) {
bb3:
  int length4;
  int width5;
  int height6;
  int __retval7;
  length4 = v0;
  width5 = v1;
  height6 = v2;
  int t8 = length4;
  int t9 = width5;
  int b10 = t8 * t9;
  int t11 = height6;
  int b12 = b10 * t11;
  __retval7 = b12;
  int t13 = __retval7;
  return t13;
}

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb14:
  int __retval15;
  struct std::basic_ostream<char>* g16 = &_ZSt4cout;
  char* cast17 = (char*)_str;
  struct std::basic_ostream<char>* r18 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g16, cast17);
  int c19 = 1;
  int c20 = 1;
  int c21 = 1;
  int r22 = boxVolume(c19, c20, c21);
  struct std::basic_ostream<char>* r23 = std__ostream__operator__(r18, r22);
  struct std::basic_ostream<char>* g24 = &_ZSt4cout;
  char* cast25 = (char*)_str_1;
  struct std::basic_ostream<char>* r26 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g24, cast25);
  char* cast27 = (char*)_str_2;
  struct std::basic_ostream<char>* r28 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r26, cast27);
  int c29 = 10;
  int c30 = 1;
  int c31 = 1;
  int r32 = boxVolume(c29, c30, c31);
  struct std::basic_ostream<char>* r33 = std__ostream__operator__(r28, r32);
  struct std::basic_ostream<char>* g34 = &_ZSt4cout;
  char* cast35 = (char*)_str_1;
  struct std::basic_ostream<char>* r36 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g34, cast35);
  char* cast37 = (char*)_str_3;
  struct std::basic_ostream<char>* r38 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r36, cast37);
  int c39 = 10;
  int c40 = 5;
  int c41 = 1;
  int r42 = boxVolume(c39, c40, c41);
  struct std::basic_ostream<char>* r43 = std__ostream__operator__(r38, r42);
  struct std::basic_ostream<char>* g44 = &_ZSt4cout;
  char* cast45 = (char*)_str_1;
  struct std::basic_ostream<char>* r46 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g44, cast45);
  char* cast47 = (char*)_str_4;
  struct std::basic_ostream<char>* r48 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r46, cast47);
  int c49 = 10;
  int c50 = 5;
  int c51 = 2;
  int r52 = boxVolume(c49, c50, c51);
  struct std::basic_ostream<char>* r53 = std__ostream__operator__(r48, r52);
  void* g54 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r55 = std__ostream__operator___std__ostream_____(r53, g54);
  int c56 = 0;
  __retval15 = c56;
  int t57 = __retval15;
  return t57;
}

