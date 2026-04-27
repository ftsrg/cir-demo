// Struct definitions (auto-parsed)
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[25] = "Enter the letter grades.";
char _str_1[38] = "Enter the EOF character to end input.";
struct std::basic_istream<char> _ZSt3cin;
char _str_2[32] = "Incorrect letter grade entered.";
char _str_3[20] = " Enter a new grade.";
char _str_4[36];
char _str_5[5];
char _str_6[5];
char _str_7[5];
char _str_8[5];
char _str_9[5];
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZNSi3getEv
int std__istream__get(struct std::basic_istream<char>*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: main
int main() {
bb0:
  int __retval20;
  int grade21;
  int aCount22;
  int bCount23;
  int cCount24;
  int dCount25;
  int fCount26;
  int c27 = 0;
  aCount22 = c27;
  int c28 = 0;
  bCount23 = c28;
  int c29 = 0;
  cCount24 = c29;
  int c30 = 0;
  dCount25 = c30;
  int c31 = 0;
  fCount26 = c31;
  struct std::basic_ostream<char>* g32 = &_ZSt4cout;
  char* cast33 = (char*)_str;
  struct std::basic_ostream<char>* r34 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g32, cast33);
  void* g35 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r36 = std__ostream__operator___std__ostream_____(r34, g35);
  char* cast37 = (char*)_str_1;
  struct std::basic_ostream<char>* r38 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r36, cast37);
  void* g39 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r40 = std__ostream__operator___std__ostream_____(r38, g39);
  goto bb1;
bb1:
  goto bb2;
bb2:
  struct std::basic_istream<char>* g41 = &_ZSt3cin;
  int r42 = std__istream__get(g41);
  grade21 = r42;
  int c43 = 1;
  int u44 = -c43;
  _Bool c45 = (r42 != u44) ? 1 : 0;
  if (c45) goto bb3; else goto bb18;
bb3:
  goto bb4;
bb4:
  goto bb5;
bb5:
  int t46 = grade21;
  goto bb6;
bb6:
  switch (t46) {
    default: goto bb14;
  }
bb7:
  goto bb8;
bb8:
  int t47 = aCount22;
  int u48 = ++t47;
  aCount22 = u48;
  goto bb15;
bb9:
  int t49 = bCount23;
  int u50 = ++t49;
  bCount23 = u50;
  goto bb15;
bb10:
  int t51 = cCount24;
  int u52 = ++t51;
  cCount24 = u52;
  goto bb15;
bb11:
  int t53 = dCount25;
  int u54 = ++t53;
  dCount25 = u54;
  goto bb15;
bb12:
  int t55 = fCount26;
  int u56 = ++t55;
  fCount26 = u56;
  goto bb15;
bb13:
  goto bb15;
bb14:
  struct std::basic_ostream<char>* g57 = &_ZSt4cout;
  char* cast58 = (char*)_str_2;
  struct std::basic_ostream<char>* r59 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g57, cast58);
  char* cast60 = (char*)_str_3;
  struct std::basic_ostream<char>* r61 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r59, cast60);
  void* g62 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r63 = std__ostream__operator___std__ostream_____(r61, g62);
  goto bb15;
bb15:
  goto bb16;
bb16:
  goto bb17;
bb17:
  goto bb2;
bb18:
  goto bb19;
bb19:
  struct std::basic_ostream<char>* g64 = &_ZSt4cout;
  char* cast65 = (char*)_str_4;
  struct std::basic_ostream<char>* r66 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g64, cast65);
  char* cast67 = (char*)_str_5;
  struct std::basic_ostream<char>* r68 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r66, cast67);
  int t69 = aCount22;
  struct std::basic_ostream<char>* r70 = std__ostream__operator__(r68, t69);
  char* cast71 = (char*)_str_6;
  struct std::basic_ostream<char>* r72 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r70, cast71);
  int t73 = bCount23;
  struct std::basic_ostream<char>* r74 = std__ostream__operator__(r72, t73);
  char* cast75 = (char*)_str_7;
  struct std::basic_ostream<char>* r76 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r74, cast75);
  int t77 = cCount24;
  struct std::basic_ostream<char>* r78 = std__ostream__operator__(r76, t77);
  char* cast79 = (char*)_str_8;
  struct std::basic_ostream<char>* r80 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r78, cast79);
  int t81 = dCount25;
  struct std::basic_ostream<char>* r82 = std__ostream__operator__(r80, t81);
  char* cast83 = (char*)_str_9;
  struct std::basic_ostream<char>* r84 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r82, cast83);
  int t85 = fCount26;
  struct std::basic_ostream<char>* r86 = std__ostream__operator__(r84, t85);
  void* g87 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r88 = std__ostream__operator___std__ostream_____(r86, g87);
  int c89 = 0;
  __retval20 = c89;
  int t90 = __retval20;
  return t90;
}

