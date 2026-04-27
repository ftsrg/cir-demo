// Struct definitions (auto-parsed)
struct std::_Setw { int _M_n; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[5] = "! = ";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

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
struct std::basic_ostream<char>* _ZNSolsEi(struct std::basic_ostream<char>*, int);

// function: _ZNSolsEm
struct std::basic_ostream<char>* _ZNSolsEm(struct std::basic_ostream<char>*, unsigned long long);

// function: _Z9factorialm
unsigned long long factorial(unsigned long long v6) {
bb7:
  unsigned long long number13;
  unsigned long long __retval14;
  number13 = v6;
  goto bb8;
bb8:
  unsigned long long t15 = number13;
  int c16 = 1;
  unsigned long long cast17 = (unsigned long long)c16;
  _Bool c18 = (t15 <= cast17) ? 1 : 0;
  if (c18) goto bb9; else goto bb10;
bb9:
  int c19 = 1;
  unsigned long long cast20 = (unsigned long long)c19;
  __retval14 = cast20;
  unsigned long long t21 = __retval14;
  return t21;
bb10:
  unsigned long long t22 = number13;
  unsigned long long t23 = number13;
  int c24 = 1;
  unsigned long long cast25 = (unsigned long long)c24;
  unsigned long long b26 = t23 - cast25;
  unsigned long long r27 = factorial(b26);
  unsigned long long b28 = t22 * r27;
  __retval14 = b28;
  unsigned long long t29 = __retval14;
  return t29;
bb11:
  goto bb12;
bb12:
