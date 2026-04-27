// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _Z4cubei
int cube(int v0) {
bb1:
  int y2;
  int __retval3;
  y2 = v0;
  int t4 = y2;
  int t5 = y2;
  int b6 = t4 * t5;
  int t7 = y2;
  int b8 = b6 * t7;
  __retval3 = b8;
  int t9 = __retval3;
  return t9;
}

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb10:
  int __retval17;
  int x18;
  goto bb11;
bb11:
  int c19 = 1;
  x18 = c19;
  goto bb12;
bb12:
  int t20 = x18;
  int c21 = 10;
  _Bool c22 = (t20 <= c21) ? 1 : 0;
  if (c22) goto bb13; else goto bb15;
bb13:
  struct std::basic_ostream<char>* g23 = &_ZSt4cout;
  int t24 = x18;
  int r25 = cube(t24);
  struct std::basic_ostream<char>* r26 = std__ostream__operator__(g23, r25);
  void* g27 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r28 = std__ostream__operator___std__ostream_____(r26, g27);
  goto bb14;
bb14:
  int t29 = x18;
  int u30 = ++t29;
  x18 = u30;
  goto bb12;
bb15:
  goto bb16;
bb16:
  int c31 = 0;
  __retval17 = c31;
  int t32 = __retval17;
  return t32;
}

