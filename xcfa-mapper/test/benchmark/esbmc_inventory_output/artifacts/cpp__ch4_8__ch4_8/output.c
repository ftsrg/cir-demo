// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

int __const_main_a[10];
struct std::basic_ostream<char> _ZSt4cout;
char _str[34] = "Total of array element values is ";
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
  int i7;
  int __retval8;
  int arraySize9;
  int a10[10];
  int total11;
  int c12 = 10;
  arraySize9 = c12;
  // array copy
  for (int i = 0; i < 10; ++i) { __const_main_a[i] = a10[i]; }
  int c13 = 0;
  total11 = c13;
  goto bb1;
bb1:
  int c14 = 0;
  i7 = c14;
  goto bb2;
bb2:
  int t15 = i7;
  int c16 = 10;
  _Bool c17 = (t15 < c16) ? 1 : 0;
  if (c17) goto bb3; else goto bb5;
bb3:
  int t18 = i7;
  int t19 = a10[t18];
  int t20 = total11;
  int b21 = t20 + t19;
  total11 = b21;
  goto bb4;
bb4:
  int t22 = i7;
  int u23 = ++t22;
  i7 = u23;
  goto bb2;
bb5:
  goto bb6;
bb6:
  struct std::basic_ostream<char>* g24 = &_ZSt4cout;
  char* cast25 = (char*)_str;
  struct std::basic_ostream<char>* r26 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g24, cast25);
  int t27 = total11;
  struct std::basic_ostream<char>* r28 = std__ostream__operator__(r26, t27);
  void* g29 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r30 = std__ostream__operator___std__ostream_____(r28, g29);
  int c31 = 0;
  __retval8 = c31;
  int t32 = __retval8;
  return t32;
}

