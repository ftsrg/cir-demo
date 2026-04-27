// Struct definitions (auto-parsed)
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[14];
struct std::basic_istream<char> _ZSt3cin;
char _str_1[18] = "Class average is ";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSirsERi
struct std::basic_istream<char>* std__istream__operator__(struct std::basic_istream<char>*, int*);

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
  int total9;
  int gradeCounter10;
  int grade11;
  int average12;
  int c13 = 0;
  total9 = c13;
  int c14 = 1;
  gradeCounter10 = c14;
  goto bb1;
bb1:
  goto bb2;
bb2:
  int t15 = gradeCounter10;
  int c16 = 10;
  _Bool c17 = (t15 <= c16) ? 1 : 0;
  if (c17) goto bb3; else goto bb6;
bb3:
  goto bb4;
bb4:
  struct std::basic_ostream<char>* g18 = &_ZSt4cout;
  char* cast19 = (char*)_str;
  struct std::basic_ostream<char>* r20 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g18, cast19);
  struct std::basic_istream<char>* g21 = &_ZSt3cin;
  struct std::basic_istream<char>* r22 = std__istream__operator__(g21, &grade11);
  int t23 = total9;
  int t24 = grade11;
  int b25 = t23 + t24;
  total9 = b25;
  int t26 = gradeCounter10;
  int c27 = 1;
  int b28 = t26 + c27;
  gradeCounter10 = b28;
  goto bb5;
bb5:
  goto bb2;
bb6:
  goto bb7;
bb7:
  int t29 = total9;
  int c30 = 10;
  int b31 = t29 / c30;
  average12 = b31;
  struct std::basic_ostream<char>* g32 = &_ZSt4cout;
  char* cast33 = (char*)_str_1;
  struct std::basic_ostream<char>* r34 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g32, cast33);
  int t35 = average12;
  struct std::basic_ostream<char>* r36 = std__ostream__operator__(r34, t35);
  void* g37 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r38 = std__ostream__operator___std__ostream_____(r36, g37);
  int c39 = 0;
  __retval8 = c39;
  int t40 = __retval8;
  return t40;
}

