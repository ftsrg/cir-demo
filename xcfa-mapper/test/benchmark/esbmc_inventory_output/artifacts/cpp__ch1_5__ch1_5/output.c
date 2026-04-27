// Struct definitions (auto-parsed)
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[41] = "Enter two integers, and I will tell you\\0A";
char _str_1[33];
struct std::basic_istream<char> _ZSt3cin;
char _str_2[14] = " is equal to ";
char _str_3[18] = " is not equal to ";
char _str_4[15] = " is less than ";
char _str_5[18] = " is greater than ";
char _str_6[27] = " is less than or equal to ";
char _str_7[30] = " is greater than or equal to ";
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
  int __retval25;
  int num126;
  int num227;
  struct std::basic_ostream<char>* g28 = &_ZSt4cout;
  char* cast29 = (char*)_str;
  struct std::basic_ostream<char>* r30 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g28, cast29);
  char* cast31 = (char*)_str_1;
  struct std::basic_ostream<char>* r32 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r30, cast31);
  struct std::basic_istream<char>* g33 = &_ZSt3cin;
  struct std::basic_istream<char>* r34 = std__istream__operator__(g33, &num126);
  struct std::basic_istream<char>* r35 = std__istream__operator__(r34, &num227);
  goto bb1;
bb1:
  int t36 = num126;
  int t37 = num227;
  _Bool c38 = (t36 == t37) ? 1 : 0;
  if (c38) goto bb2; else goto bb3;
bb2:
  struct std::basic_ostream<char>* g39 = &_ZSt4cout;
  int t40 = num126;
  struct std::basic_ostream<char>* r41 = std__ostream__operator__(g39, t40);
  char* cast42 = (char*)_str_2;
  struct std::basic_ostream<char>* r43 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r41, cast42);
  int t44 = num227;
  struct std::basic_ostream<char>* r45 = std__ostream__operator__(r43, t44);
  void* g46 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r47 = std__ostream__operator___std__ostream_____(r45, g46);
  goto bb3;
bb3:
  goto bb4;
bb4:
  goto bb5;
bb5:
  int t48 = num126;
  int t49 = num227;
  _Bool c50 = (t48 != t49) ? 1 : 0;
  if (c50) goto bb6; else goto bb7;
bb6:
  struct std::basic_ostream<char>* g51 = &_ZSt4cout;
  int t52 = num126;
  struct std::basic_ostream<char>* r53 = std__ostream__operator__(g51, t52);
  char* cast54 = (char*)_str_3;
  struct std::basic_ostream<char>* r55 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r53, cast54);
  int t56 = num227;
  struct std::basic_ostream<char>* r57 = std__ostream__operator__(r55, t56);
  void* g58 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r59 = std__ostream__operator___std__ostream_____(r57, g58);
  goto bb7;
bb7:
  goto bb8;
bb8:
  goto bb9;
bb9:
  int t60 = num126;
  int t61 = num227;
  _Bool c62 = (t60 < t61) ? 1 : 0;
  if (c62) goto bb10; else goto bb11;
bb10:
  struct std::basic_ostream<char>* g63 = &_ZSt4cout;
  int t64 = num126;
  struct std::basic_ostream<char>* r65 = std__ostream__operator__(g63, t64);
  char* cast66 = (char*)_str_4;
  struct std::basic_ostream<char>* r67 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r65, cast66);
  int t68 = num227;
  struct std::basic_ostream<char>* r69 = std__ostream__operator__(r67, t68);
  void* g70 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r71 = std__ostream__operator___std__ostream_____(r69, g70);
  goto bb11;
bb11:
  goto bb12;
bb12:
  goto bb13;
bb13:
  int t72 = num126;
  int t73 = num227;
  _Bool c74 = (t72 > t73) ? 1 : 0;
  if (c74) goto bb14; else goto bb15;
bb14:
  struct std::basic_ostream<char>* g75 = &_ZSt4cout;
  int t76 = num126;
  struct std::basic_ostream<char>* r77 = std__ostream__operator__(g75, t76);
  char* cast78 = (char*)_str_5;
  struct std::basic_ostream<char>* r79 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r77, cast78);
  int t80 = num227;
  struct std::basic_ostream<char>* r81 = std__ostream__operator__(r79, t80);
  void* g82 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r83 = std__ostream__operator___std__ostream_____(r81, g82);
  goto bb15;
bb15:
  goto bb16;
bb16:
  goto bb17;
bb17:
  int t84 = num126;
  int t85 = num227;
  _Bool c86 = (t84 <= t85) ? 1 : 0;
  if (c86) goto bb18; else goto bb19;
bb18:
  struct std::basic_ostream<char>* g87 = &_ZSt4cout;
  int t88 = num126;
  struct std::basic_ostream<char>* r89 = std__ostream__operator__(g87, t88);
  char* cast90 = (char*)_str_6;
  struct std::basic_ostream<char>* r91 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r89, cast90);
  int t92 = num227;
  struct std::basic_ostream<char>* r93 = std__ostream__operator__(r91, t92);
  void* g94 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r95 = std__ostream__operator___std__ostream_____(r93, g94);
  goto bb19;
bb19:
  goto bb20;
bb20:
  goto bb21;
bb21:
  int t96 = num126;
  int t97 = num227;
  _Bool c98 = (t96 >= t97) ? 1 : 0;
  if (c98) goto bb22; else goto bb23;
bb22:
  struct std::basic_ostream<char>* g99 = &_ZSt4cout;
  int t100 = num126;
  struct std::basic_ostream<char>* r101 = std__ostream__operator__(g99, t100);
  char* cast102 = (char*)_str_7;
  struct std::basic_ostream<char>* r103 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r101, cast102);
  int t104 = num227;
  struct std::basic_ostream<char>* r105 = std__ostream__operator__(r103, t104);
  void* g106 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r107 = std__ostream__operator___std__ostream_____(r105, g106);
  goto bb23;
bb23:
  goto bb24;
bb24:
  int c108 = 0;
  __retval25 = c108;
  int t109 = __retval25;
  return t109;
}

