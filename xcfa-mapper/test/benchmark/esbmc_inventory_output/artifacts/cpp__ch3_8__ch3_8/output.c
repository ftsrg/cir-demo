// Struct definitions (auto-parsed)
struct std::_Setw { int _M_n; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std::basic_ostream<char>*, struct std::_Setw);

// function: _ZSt4setwi
struct std::_Setw std__setw(int v0) {
bb1:
  int __n2;
  struct std::_Setw __retval3;
  __n2 = v0;
  int t4 = __n2;
  __retval3._M_n = t4;
  struct std::_Setw t5 = __retval3;
  return t5;
}

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: rand
int rand();

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb6:
  int counter19;
  struct std::_Setw agg.tmp020;
  int __retval21;
  goto bb7;
bb7:
  int c22 = 1;
  counter19 = c22;
  goto bb8;
bb8:
  int t23 = counter19;
  int c24 = 20;
  _Bool c25 = (t23 <= c24) ? 1 : 0;
  if (c25) goto bb9; else goto bb17;
bb9:
  goto bb10;
bb10:
  struct std::basic_ostream<char>* g26 = &_ZSt4cout;
  int c27 = 10;
  struct std::_Setw r28 = std__setw(c27);
  agg.tmp020 = r28;
  struct std::_Setw t29 = agg.tmp020;
  struct std::basic_ostream<char>* r30 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(g26, t29);
  int c31 = 1;
  int r32 = rand();
  int c33 = 6;
  int b34 = r32 % c33;
  int b35 = c31 + b34;
  struct std::basic_ostream<char>* r36 = std__ostream__operator__(r30, b35);
  goto bb11;
bb11:
  int t37 = counter19;
  int c38 = 5;
  int b39 = t37 % c38;
  int c40 = 0;
  _Bool c41 = (b39 == c40) ? 1 : 0;
  if (c41) goto bb12; else goto bb13;
bb12:
  struct std::basic_ostream<char>* g42 = &_ZSt4cout;
  void* g43 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r44 = std__ostream__operator___std__ostream_____(g42, g43);
  goto bb13;
bb13:
  goto bb14;
bb14:
  goto bb15;
bb15:
  goto bb16;
bb16:
  int t45 = counter19;
  int u46 = ++t45;
  counter19 = u46;
  goto bb8;
bb17:
  goto bb18;
bb18:
  int c47 = 0;
  __retval21 = c47;
  int t48 = __retval21;
  return t48;
}

