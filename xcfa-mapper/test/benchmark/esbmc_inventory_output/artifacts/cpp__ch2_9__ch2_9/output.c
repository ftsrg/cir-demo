// Struct definitions (auto-parsed)
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[36];
struct std::basic_istream<char> _ZSt3cin;
char _str_1[8] = "Passed ";
char _str_2[8] = "Failed ";
char _str_3[15] = "Raise tuition ";
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
  int __retval17;
  int passes18;
  int failures19;
  int studentCounter20;
  int result21;
  int c22 = 0;
  passes18 = c22;
  int c23 = 0;
  failures19 = c23;
  int c24 = 1;
  studentCounter20 = c24;
  goto bb1;
bb1:
  goto bb2;
bb2:
  int t25 = studentCounter20;
  int c26 = 10;
  _Bool c27 = (t25 <= c26) ? 1 : 0;
  if (c27) goto bb3; else goto bb11;
bb3:
  goto bb4;
bb4:
  struct std::basic_ostream<char>* g28 = &_ZSt4cout;
  char* cast29 = (char*)_str;
  struct std::basic_ostream<char>* r30 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g28, cast29);
  struct std::basic_istream<char>* g31 = &_ZSt3cin;
  struct std::basic_istream<char>* r32 = std__istream__operator__(g31, &result21);
  goto bb5;
bb5:
  int t33 = result21;
  int c34 = 1;
  _Bool c35 = (t33 == c34) ? 1 : 0;
  if (c35) goto bb6; else goto bb7;
bb6:
  int t36 = passes18;
  int c37 = 1;
  int b38 = t36 + c37;
  passes18 = b38;
  goto bb8;
bb7:
  int t39 = failures19;
  int c40 = 1;
  int b41 = t39 + c40;
  failures19 = b41;
  goto bb8;
bb8:
  goto bb9;
bb9:
  int t42 = studentCounter20;
  int c43 = 1;
  int b44 = t42 + c43;
  studentCounter20 = b44;
  goto bb10;
bb10:
  goto bb2;
bb11:
  goto bb12;
bb12:
  struct std::basic_ostream<char>* g45 = &_ZSt4cout;
  char* cast46 = (char*)_str_1;
  struct std::basic_ostream<char>* r47 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g45, cast46);
  int t48 = passes18;
  struct std::basic_ostream<char>* r49 = std__ostream__operator__(r47, t48);
  void* g50 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r51 = std__ostream__operator___std__ostream_____(r49, g50);
  struct std::basic_ostream<char>* g52 = &_ZSt4cout;
  char* cast53 = (char*)_str_2;
  struct std::basic_ostream<char>* r54 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g52, cast53);
  int t55 = failures19;
  struct std::basic_ostream<char>* r56 = std__ostream__operator__(r54, t55);
  void* g57 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r58 = std__ostream__operator___std__ostream_____(r56, g57);
  goto bb13;
bb13:
  int t59 = passes18;
  int c60 = 8;
  _Bool c61 = (t59 > c60) ? 1 : 0;
  if (c61) goto bb14; else goto bb15;
bb14:
  struct std::basic_ostream<char>* g62 = &_ZSt4cout;
  char* cast63 = (char*)_str_3;
  struct std::basic_ostream<char>* r64 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g62, cast63);
  void* g65 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r66 = std__ostream__operator___std__ostream_____(r64, g65);
  goto bb15;
bb15:
  goto bb16;
bb16:
  int c67 = 0;
  __retval17 = c67;
  int t68 = __retval17;
  return t68;
}

