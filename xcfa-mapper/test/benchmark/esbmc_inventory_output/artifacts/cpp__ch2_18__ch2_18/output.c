// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[2] = " ";
char _str_1[44] = "\\0AUsed continue to skip printing the value 5";
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
  int x13;
  int __retval14;
  goto bb1;
bb1:
  int c15 = 1;
  x13 = c15;
  goto bb2;
bb2:
  int t16 = x13;
  int c17 = 10;
  _Bool c18 = (t16 <= c17) ? 1 : 0;
  if (c18) goto bb3; else goto bb11;
bb3:
  goto bb4;
bb4:
  goto bb5;
bb5:
  int t19 = x13;
  int c20 = 5;
  _Bool c21 = (t19 == c20) ? 1 : 0;
  if (c21) goto bb6; else goto bb7;
bb6:
  goto bb10;
bb7:
  goto bb8;
bb8:
  struct std::basic_ostream<char>* g22 = &_ZSt4cout;
  int t23 = x13;
  struct std::basic_ostream<char>* r24 = std__ostream__operator__(g22, t23);
  char* cast25 = (char*)_str;
  struct std::basic_ostream<char>* r26 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r24, cast25);
  goto bb9;
bb9:
  goto bb10;
bb10:
  int t27 = x13;
  int u28 = ++t27;
  x13 = u28;
  goto bb2;
bb11:
  goto bb12;
bb12:
  struct std::basic_ostream<char>* g29 = &_ZSt4cout;
  char* cast30 = (char*)_str_1;
  struct std::basic_ostream<char>* r31 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g29, cast30);
  void* g32 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r33 = std__ostream__operator___std__ostream_____(r31, g32);
  int c34 = 0;
  __retval14 = c34;
  int t35 = __retval14;
  return t35;
}

