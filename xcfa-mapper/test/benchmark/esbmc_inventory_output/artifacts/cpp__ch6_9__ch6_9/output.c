// Struct definitions (auto-parsed)
struct Time { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[37];
char _str_1[9];
char _str_2[11];
char _str_3[11];
char _str_4[47] = "\\0A\\0AResult of attempting to set invalid hour and";
char _str_5[18];
char _str_6[3] = "\\0A\\0A";
char _str_7[21] = "Incrementing minute ";
char _str_8[21];
char _str_9[14];
// function: _ZN4TimeC1Eiii
void Time__Time(struct Time*, int, int, int);

// function: _ZN4Time7setHourEi
void Time__setHour(struct Time*, int);

// function: _ZN4Time9setMinuteEi
void Time__setMinute(struct Time*, int);

// function: _ZN4Time9setSecondEi
void Time__setSecond(struct Time*, int);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZN4Time7getHourEv
int Time__getHour(struct Time*);

// function: _ZN4Time9getMinuteEv
int Time__getMinute(struct Time*);

// function: _ZN4Time9getSecondEv
int Time__getSecond(struct Time*);

// function: _ZN4Time7setTimeEiii
void Time__setTime(struct Time*, int, int, int);

// function: _ZN4Time13printStandardEv
void Time__printStandard(struct Time*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _Z16incrementMinutesR4Timei
void incrementMinutes(struct Time* v0, int v1) {
bb2:
  int i15;
  struct Time* tt16;
  int count17;
  tt16 = v0;
  count17 = v1;
  struct std::basic_ostream<char>* g18 = &_ZSt4cout;
  char* cast19 = (char*)_str_7;
  struct std::basic_ostream<char>* r20 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g18, cast19);
  int t21 = count17;
  struct std::basic_ostream<char>* r22 = std__ostream__operator__(r20, t21);
  char* cast23 = (char*)_str_8;
  struct std::basic_ostream<char>* r24 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r22, cast23);
  struct Time* t25 = tt16;
  Time__printStandard(t25);
  goto bb3;
bb3:
  int c26 = 0;
  i15 = c26;
  goto bb4;
bb4:
  int t27 = i15;
  int t28 = count17;
  _Bool c29 = (t27 < t28) ? 1 : 0;
  if (c29) goto bb5; else goto bb13;
bb5:
  goto bb6;
bb6:
  struct Time* t30 = tt16;
  struct Time* t31 = tt16;
  int r32 = Time__getMinute(t31);
  int c33 = 1;
  int b34 = r32 + c33;
  int c35 = 60;
  int b36 = b34 % c35;
  Time__setMinute(t30, b36);
  goto bb7;
bb7:
  struct Time* t37 = tt16;
  int r38 = Time__getMinute(t37);
  int c39 = 0;
  _Bool c40 = (r38 == c39) ? 1 : 0;
  if (c40) goto bb8; else goto bb9;
bb8:
  struct Time* t41 = tt16;
  struct Time* t42 = tt16;
  int r43 = Time__getHour(t42);
  int c44 = 1;
  int b45 = r43 + c44;
  int c46 = 24;
  int b47 = b45 % c46;
  Time__setHour(t41, b47);
  goto bb9;
bb9:
  goto bb10;
bb10:
  struct std::basic_ostream<char>* g48 = &_ZSt4cout;
  char* cast49 = (char*)_str_9;
  struct std::basic_ostream<char>* r50 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g48, cast49);
  struct Time* t51 = tt16;
  Time__printStandard(t51);
  goto bb11;
bb11:
  goto bb12;
bb12:
  int t52 = i15;
  int u53 = ++t52;
  i15 = u53;
  goto bb4;
bb13:
  goto bb14;
bb14:
  struct std::basic_ostream<char>* g54 = &_ZSt4cout;
  void* g55 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r56 = std__ostream__operator___std__ostream_____(g54, g55);
  return;
}

// function: main
int main() {
bb57:
  int __retval58;
  struct Time t59;
  int c60 = 0;
  int c61 = 0;
  int c62 = 0;
  Time__Time(&t59, c60, c61, c62);
  int c63 = 17;
  Time__setHour(&t59, c63);
  int c64 = 34;
  Time__setMinute(&t59, c64);
  int c65 = 25;
  Time__setSecond(&t59, c65);
  struct std::basic_ostream<char>* g66 = &_ZSt4cout;
  char* cast67 = (char*)_str;
  struct std::basic_ostream<char>* r68 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g66, cast67);
  char* cast69 = (char*)_str_1;
  struct std::basic_ostream<char>* r70 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r68, cast69);
  int r71 = Time__getHour(&t59);
  struct std::basic_ostream<char>* r72 = std__ostream__operator__(r70, r71);
  char* cast73 = (char*)_str_2;
  struct std::basic_ostream<char>* r74 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r72, cast73);
  int r75 = Time__getMinute(&t59);
  struct std::basic_ostream<char>* r76 = std__ostream__operator__(r74, r75);
  char* cast77 = (char*)_str_3;
  struct std::basic_ostream<char>* r78 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r76, cast77);
  int r79 = Time__getSecond(&t59);
  struct std::basic_ostream<char>* r80 = std__ostream__operator__(r78, r79);
  int c81 = 234;
  Time__setHour(&t59, c81);
  int c82 = 43;
  Time__setMinute(&t59, c82);
  int c83 = 6373;
  Time__setSecond(&t59, c83);
  struct std::basic_ostream<char>* g84 = &_ZSt4cout;
  char* cast85 = (char*)_str_4;
  struct std::basic_ostream<char>* r86 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g84, cast85);
  char* cast87 = (char*)_str_5;
  struct std::basic_ostream<char>* r88 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r86, cast87);
  int r89 = Time__getHour(&t59);
  struct std::basic_ostream<char>* r90 = std__ostream__operator__(r88, r89);
  char* cast91 = (char*)_str_2;
  struct std::basic_ostream<char>* r92 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r90, cast91);
  int r93 = Time__getMinute(&t59);
  struct std::basic_ostream<char>* r94 = std__ostream__operator__(r92, r93);
  char* cast95 = (char*)_str_3;
  struct std::basic_ostream<char>* r96 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r94, cast95);
  int r97 = Time__getSecond(&t59);
  struct std::basic_ostream<char>* r98 = std__ostream__operator__(r96, r97);
  char* cast99 = (char*)_str_6;
  struct std::basic_ostream<char>* r100 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r98, cast99);
  int c101 = 11;
  int c102 = 58;
  int c103 = 0;
  Time__setTime(&t59, c101, c102, c103);
  int c104 = 3;
  incrementMinutes(&t59, c104);
  int c105 = 0;
  __retval58 = c105;
  int t106 = __retval58;
  return t106;
}

