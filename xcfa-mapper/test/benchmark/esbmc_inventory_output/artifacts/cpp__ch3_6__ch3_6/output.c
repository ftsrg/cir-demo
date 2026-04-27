// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[3] = "  ";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _Z6squarei
int square(int v0) {
bb1:
  int y2;
  int __retval3;
  y2 = v0;
  int t4 = y2;
  int t5 = y2;
  int b6 = t4 * t5;
  __retval3 = b6;
  int t7 = __retval3;
  return t7;
}

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb8:
  int x15;
  int __retval16;
  goto bb9;
bb9:
  int c17 = 1;
  x15 = c17;
  goto bb10;
bb10:
  int t18 = x15;
  int c19 = 10;
  _Bool c20 = (t18 <= c19) ? 1 : 0;
  if (c20) goto bb11; else goto bb13;
bb11:
  struct std::basic_ostream<char>* g21 = &_ZSt4cout;
  int t22 = x15;
  int r23 = square(t22);
  struct std::basic_ostream<char>* r24 = std__ostream__operator__(g21, r23);
  char* cast25 = (char*)_str;
  struct std::basic_ostream<char>* r26 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r24, cast25);
  goto bb12;
bb12:
  int t27 = x15;
  int u28 = ++t27;
  x15 = u28;
  goto bb10;
bb13:
  goto bb14;
bb14:
  struct std::basic_ostream<char>* g29 = &_ZSt4cout;
  void* g30 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r31 = std__ostream__operator___std__ostream_____(g29, g30);
  int c32 = 0;
  __retval16 = c32;
  int t33 = __retval16;
  return t33;
}

