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
  int counter7;
  int __retval8;
  goto bb1;
bb1:
  int c9 = 1;
  counter7 = c9;
  goto bb2;
bb2:
  int t10 = counter7;
  int c11 = 10;
  _Bool c12 = (t10 <= c11) ? 1 : 0;
  if (c12) goto bb3; else goto bb5;
bb3:
  struct std::basic_ostream<char>* g13 = &_ZSt4cout;
  int t14 = counter7;
  struct std::basic_ostream<char>* r15 = std__ostream__operator__(g13, t14);
  void* g16 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r17 = std__ostream__operator___std__ostream_____(r15, g16);
  goto bb4;
bb4:
  int t18 = counter7;
  int u19 = ++t18;
  counter7 = u19;
  goto bb2;
bb5:
  goto bb6;
bb6:
  int c20 = 0;
  __retval8 = c20;
  int t21 = __retval8;
  return t21;
}

