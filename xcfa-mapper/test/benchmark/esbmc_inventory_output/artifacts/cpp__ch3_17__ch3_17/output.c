// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[5] = "x = ";
char _str_1[23] = " before squareByValue\\0A";
char _str_2[34];
char _str_3[22] = " after squareByValue\\0A";
char _str_4[5] = "z = ";
char _str_5[26] = " before squareByReference";
char _str_6[25] = " after squareByReference";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _Z13squareByValuei
int squareByValue(int v0) {
bb1:
  int number2;
  int __retval3;
  number2 = v0;
  int t4 = number2;
  int t5 = number2;
  int b6 = t5 * t4;
  number2 = b6;
  __retval3 = b6;
  int t7 = __retval3;
  return t7;
}

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _Z17squareByReferenceRi
void squareByReference(int* v8) {
bb9:
  int* numberRef10;
  numberRef10 = v8;
  int* t11 = numberRef10;
  int t12 = *t11;
  int* t13 = numberRef10;
  int t14 = *t13;
  int b15 = t14 * t12;
  *t13 = b15;
  return;
}

// function: main
int main() {
bb16:
  int __retval17;
  int x18;
  int z19;
  int c20 = 2;
  x18 = c20;
  int c21 = 4;
  z19 = c21;
  struct std::basic_ostream<char>* g22 = &_ZSt4cout;
  char* cast23 = (char*)_str;
  struct std::basic_ostream<char>* r24 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g22, cast23);
  int t25 = x18;
  struct std::basic_ostream<char>* r26 = std__ostream__operator__(r24, t25);
  char* cast27 = (char*)_str_1;
  struct std::basic_ostream<char>* r28 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r26, cast27);
  struct std::basic_ostream<char>* g29 = &_ZSt4cout;
  char* cast30 = (char*)_str_2;
  struct std::basic_ostream<char>* r31 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g29, cast30);
  int t32 = x18;
  int r33 = squareByValue(t32);
  struct std::basic_ostream<char>* r34 = std__ostream__operator__(r31, r33);
  void* g35 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r36 = std__ostream__operator___std__ostream_____(r34, g35);
  struct std::basic_ostream<char>* g37 = &_ZSt4cout;
  char* cast38 = (char*)_str;
  struct std::basic_ostream<char>* r39 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g37, cast38);
  int t40 = x18;
  struct std::basic_ostream<char>* r41 = std__ostream__operator__(r39, t40);
  char* cast42 = (char*)_str_3;
  struct std::basic_ostream<char>* r43 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r41, cast42);
  void* g44 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r45 = std__ostream__operator___std__ostream_____(r43, g44);
  struct std::basic_ostream<char>* g46 = &_ZSt4cout;
  char* cast47 = (char*)_str_4;
  struct std::basic_ostream<char>* r48 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g46, cast47);
  int t49 = z19;
  struct std::basic_ostream<char>* r50 = std__ostream__operator__(r48, t49);
  char* cast51 = (char*)_str_5;
  struct std::basic_ostream<char>* r52 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r50, cast51);
  void* g53 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r54 = std__ostream__operator___std__ostream_____(r52, g53);
  squareByReference(&z19);
  struct std::basic_ostream<char>* g55 = &_ZSt4cout;
  char* cast56 = (char*)_str_4;
  struct std::basic_ostream<char>* r57 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g55, cast56);
  int t58 = z19;
  struct std::basic_ostream<char>* r59 = std__ostream__operator__(r57, t58);
  char* cast60 = (char*)_str_6;
  struct std::basic_ostream<char>* r61 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r59, cast60);
  void* g62 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r63 = std__ostream__operator___std__ostream_____(r61, g62);
  int c64 = 0;
  __retval17 = c64;
  int t65 = __retval17;
  return t65;
}

