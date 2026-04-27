// Struct definitions (auto-parsed)
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[37];
struct std::basic_istream<char> _ZSt3cin;
char _str_1[13];
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZNSirsERd
struct std::basic_istream<char>* std__istream__operator__(struct std::basic_istream<char>*, double*);

// function: _ZNSolsEd
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, double);

// function: _Z7maximumddd
double maximum(double v0, double v1, double v2) {
bb3:
  double x12;
  double y13;
  double z14;
  double __retval15;
  double max16;
  x12 = v0;
  y13 = v1;
  z14 = v2;
  double t17 = x12;
  max16 = t17;
  goto bb4;
bb4:
  double t18 = y13;
  double t19 = max16;
  _Bool c20 = (t18 > t19) ? 1 : 0;
  if (c20) goto bb5; else goto bb6;
bb5:
  double t21 = y13;
  max16 = t21;
  goto bb6;
bb6:
  goto bb7;
bb7:
  goto bb8;
bb8:
  double t22 = z14;
  double t23 = max16;
  _Bool c24 = (t22 > t23) ? 1 : 0;
  if (c24) goto bb9; else goto bb10;
bb9:
  double t25 = z14;
  max16 = t25;
  goto bb10;
bb10:
  goto bb11;
bb11:
  double t26 = max16;
  __retval15 = t26;
  double t27 = __retval15;
  return t27;
}

// function: main
int main() {
bb28:
  int __retval29;
  double number130;
  double number231;
  double number332;
  struct std::basic_ostream<char>* g33 = &_ZSt4cout;
  char* cast34 = (char*)_str;
  struct std::basic_ostream<char>* r35 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g33, cast34);
  void* g36 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r37 = std__ostream__operator___std__ostream_____(r35, g36);
  struct std::basic_istream<char>* g38 = &_ZSt3cin;
  struct std::basic_istream<char>* r39 = std__istream__operator__(g38, &number130);
  struct std::basic_istream<char>* r40 = std__istream__operator__(r39, &number231);
  struct std::basic_istream<char>* r41 = std__istream__operator__(r40, &number332);
  struct std::basic_ostream<char>* g42 = &_ZSt4cout;
  char* cast43 = (char*)_str_1;
  struct std::basic_ostream<char>* r44 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g42, cast43);
  double t45 = number130;
  double t46 = number231;
  double t47 = number332;
  double r48 = maximum(t45, t46, t47);
  struct std::basic_ostream<char>* r49 = std__ostream__operator__(r44, r48);
  void* g50 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r51 = std__ostream__operator___std__ostream_____(r49, g50);
  int c52 = 0;
  __retval29 = c52;
  int t53 = __retval29;
  return t53;
}

