// Struct definitions (auto-parsed)
struct std::_Setw { int _M_n; };
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[28];
struct std::basic_istream<char> _ZSt3cin;
char _str_1[4] = " = ";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: _ZNSirsERj
struct std::basic_istream<char>* std__istream__operator__(struct std::basic_istream<char>*, unsigned int*);

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

// function: _ZNSolsEj
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, unsigned int);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _Z11displayBitsj
void displayBits(unsigned int v6) {
bb7:
  unsigned int i20;
  unsigned int value21;
  int SHIFT22;
  unsigned int MASK23;
  struct std::_Setw agg.tmp024;
  value21 = v6;
  int c25 = 31;
  SHIFT22 = c25;
  unsigned int c26 = -2147483648;
  MASK23 = c26;
  struct std::basic_ostream<char>* g27 = &_ZSt4cout;
  int c28 = 10;
  struct std::_Setw r29 = std__setw(c28);
  agg.tmp024 = r29;
  struct std::_Setw t30 = agg.tmp024;
  struct std::basic_ostream<char>* r31 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(g27, t30);
  unsigned int t32 = value21;
  struct std::basic_ostream<char>* r33 = std__ostream__operator__(r31, t32);
  char* cast34 = (char*)_str_1;
  struct std::basic_ostream<char>* r35 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r33, cast34);
  goto bb8;
bb8:
  int c36 = 1;
  unsigned int cast37 = (unsigned int)c36;
  i20 = cast37;
  goto bb9;
bb9:
  unsigned int t38 = i20;
  int c39 = 31;
  int c40 = 1;
  int b41 = c39 + c40;
  unsigned int cast42 = (unsigned int)b41;
  _Bool c43 = (t38 <= cast42) ? 1 : 0;
  if (c43) goto bb10; else goto bb18;
bb10:
  goto bb11;
bb11:
  struct std::basic_ostream<char>* g44 = &_ZSt4cout;
  unsigned int t45 = value21;
  unsigned int c46 = -2147483648;
  unsigned int b47 = t45 & c46;
  _Bool cast48 = (_Bool)b47;
  char c49 = 49;
  char c50 = 48;
  char sel51 = cast48 ? c49 : c50;
  struct std::basic_ostream<char>* r52 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(g44, sel51);
  int c53 = 1;
  unsigned int t54 = value21;
  unsigned int s55 = t54 << c53;
  value21 = s55;
  goto bb12;
bb12:
  unsigned int t56 = i20;
  int c57 = 8;
  unsigned int cast58 = (unsigned int)c57;
  unsigned int b59 = t56 % cast58;
  int c60 = 0;
  unsigned int cast61 = (unsigned int)c60;
  _Bool c62 = (b59 == cast61) ? 1 : 0;
  if (c62) goto bb13; else goto bb14;
bb13:
  struct std::basic_ostream<char>* g63 = &_ZSt4cout;
  char c64 = 32;
  struct std::basic_ostream<char>* r65 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(g63, c64);
  goto bb14;
bb14:
  goto bb15;
bb15:
  goto bb16;
bb16:
  goto bb17;
bb17:
  unsigned int t66 = i20;
  unsigned int u67 = ++t66;
  i20 = u67;
  goto bb9;
bb18:
  goto bb19;
bb19:
  struct std::basic_ostream<char>* g68 = &_ZSt4cout;
  void* g69 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r70 = std__ostream__operator___std__ostream_____(g68, g69);
  return;
}

// function: main
int main() {
bb71:
  int __retval72;
  unsigned int inputValue73;
  struct std::basic_ostream<char>* g74 = &_ZSt4cout;
  char* cast75 = (char*)_str;
  struct std::basic_ostream<char>* r76 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g74, cast75);
  struct std::basic_istream<char>* g77 = &_ZSt3cin;
  struct std::basic_istream<char>* r78 = std__istream__operator__(g77, &inputValue73);
  unsigned int t79 = inputValue73;
  displayBits(t79);
  int c80 = 0;
  __retval72 = c80;
  int t81 = __retval72;
  return t81;
}

