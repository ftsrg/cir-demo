// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

int __const_main_a[10];
struct std::basic_ostream<char> _ZSt4cout;
char _str[29];
char _str_1[3] = "  ";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _Z12someFunctionPiii
void someFunction(int* v0, int v1, int v2) {
bb3:
  int* b8;
  int current9;
  int size10;
  b8 = v0;
  current9 = v1;
  size10 = v2;
  goto bb4;
bb4:
  int t11 = current9;
  int t12 = size10;
  _Bool c13 = (t11 < t12) ? 1 : 0;
  if (c13) goto bb5; else goto bb6;
bb5:
  int* t14 = b8;
  int t15 = current9;
  int c16 = 1;
  int b17 = t15 + c16;
  int t18 = size10;
  someFunction(t14, b17, t18);
  struct std::basic_ostream<char>* g19 = &_ZSt4cout;
  int* t20 = b8;
  int t21 = current9;
  int* ptr22 = t20 + t21;
  int t23 = *ptr22;
  struct std::basic_ostream<char>* r24 = std__ostream__operator__(g19, t23);
  char* cast25 = (char*)_str_1;
  struct std::basic_ostream<char>* r26 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r24, cast25);
  goto bb6;
bb6:
  goto bb7;
bb7:
  return;
}

// function: main
int main() {
bb27:
  int __retval28;
  int arraySize29;
  int a30[10];
  int c31 = 10;
  arraySize29 = c31;
  // array copy
  for (int i = 0; i < 10; ++i) { __const_main_a[i] = a30[i]; }
  struct std::basic_ostream<char>* g32 = &_ZSt4cout;
  char* cast33 = (char*)_str;
  struct std::basic_ostream<char>* r34 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g32, cast33);
  void* g35 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r36 = std__ostream__operator___std__ostream_____(r34, g35);
  int* cast37 = (int*)a30;
  int c38 = 0;
  int c39 = 10;
  someFunction(cast37, c38, c39);
  struct std::basic_ostream<char>* g40 = &_ZSt4cout;
  void* g41 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r42 = std__ostream__operator___std__ostream_____(g40, g41);
  int c43 = 0;
  __retval28 = c43;
  int t44 = __retval28;
  return t44;
}

