// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb0:
  int __retval8;
  int counter9;
  int c10 = 1;
  counter9 = c10;
  goto bb1;
bb1:
  goto bb2;
bb2:
  int t11 = counter9;
  int c12 = 10;
  _Bool c13 = (t11 <= c12) ? 1 : 0;
  if (c13) goto bb3; else goto bb6;
bb3:
  goto bb4;
bb4:
  struct std::basic_ostream<char>* g14 = &_ZSt4cout;
  int t15 = counter9;
  struct std::basic_ostream<char>* r16 = std__ostream__operator__(g14, t15);
  void* g17 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r18 = std__ostream__operator___std__ostream_____(r16, g17);
  int t19 = counter9;
  int u20 = ++t19;
  counter9 = u20;
  goto bb5;
bb5:
  goto bb2;
bb6:
  goto bb7;
bb7:
  int c21 = 0;
  __retval8 = c21;
  int t22 = __retval8;
  return t22;
}

