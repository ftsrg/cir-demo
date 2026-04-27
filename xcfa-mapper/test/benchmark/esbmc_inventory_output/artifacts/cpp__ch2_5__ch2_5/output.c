// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[2] = "<";
char _str_1[2] = ">";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
  char* v0;
bb1:
  int __retval19;
  int row20;
  int column21;
  int c22 = 10;
  row20 = c22;
  goto bb2;
bb2:
  goto bb3;
bb3:
  int t23 = row20;
  int c24 = 1;
  _Bool c25 = (t23 >= c24) ? 1 : 0;
  if (c25) goto bb4; else goto bb17;
bb4:
  goto bb5;
bb5:
  int c26 = 1;
  column21 = c26;
  goto bb6;
bb6:
  goto bb7;
bb7:
  int t27 = column21;
  int c28 = 10;
  _Bool c29 = (t27 <= c28) ? 1 : 0;
  if (c29) goto bb8; else goto bb14;
bb8:
  goto bb9;
bb9:
  struct std::basic_ostream<char>* g30 = &_ZSt4cout;
  int t31 = row20;
  int c32 = 2;
  int b33 = t31 % c32;
  _Bool cast34 = (_Bool)b33;
  if (cast34) goto bb10; else goto bb11;
bb10:
  v0 = _str;
  goto bb12;
bb11:
  v0 = _str_1;
  goto bb12;
bb12:
  char* cast35 = (char*)v0;
  struct std::basic_ostream<char>* r36 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g30, cast35);
  int t37 = column21;
  int u38 = ++t37;
  column21 = u38;
  goto bb13;
bb13:
  goto bb7;
bb14:
  goto bb15;
bb15:
  int t39 = row20;
  int u40 = --t39;
  row20 = u40;
  struct std::basic_ostream<char>* g41 = &_ZSt4cout;
  void* g42 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r43 = std__ostream__operator___std__ostream_____(g41, g42);
  goto bb16;
bb16:
  goto bb3;
bb17:
  goto bb18;
bb18:
  int c44 = 0;
  __retval19 = c44;
  int t45 = __retval19;
  return t45;
}

