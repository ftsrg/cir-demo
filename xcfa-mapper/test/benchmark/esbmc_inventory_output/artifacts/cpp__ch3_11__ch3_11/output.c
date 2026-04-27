// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char _str_3[15] = "Player rolled ";
char _str_4[4] = " + ";
char _str_5[4] = " = ";
struct std::basic_ostream<char> _ZSt4cout;
char _str[10] = "Point is ";
char _str_1[12] = "Player wins";
char _str_2[13] = "Player loses";
// function: srand
void srand(unsigned int);

// function: time
long long time(long long*);

// function: rand
int rand();

// function: _Z8rollDicev
int rollDice() {
bb0:
  int __retval1;
  int die12;
  int die23;
  int workSum4;
  int c5 = 1;
  int r6 = rand();
  int c7 = 6;
  int b8 = r6 % c7;
  int b9 = c5 + b8;
  die12 = b9;
  int c10 = 1;
  int r11 = rand();
  int c12 = 6;
  int b13 = r11 % c12;
  int b14 = c10 + b13;
  die23 = b14;
  int t15 = die12;
  int t16 = die23;
  int b17 = t15 + t16;
  workSum4 = b17;
  struct std::basic_ostream<char>* g18 = &_ZSt4cout;
  char* cast19 = (char*)_str_3;
  struct std::basic_ostream<char>* r20 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g18, cast19);
  int t21 = die12;
  struct std::basic_ostream<char>* r22 = std__ostream__operator__(r20, t21);
  char* cast23 = (char*)_str_4;
  struct std::basic_ostream<char>* r24 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r22, cast23);
  int t25 = die23;
  struct std::basic_ostream<char>* r26 = std__ostream__operator__(r24, t25);
  char* cast27 = (char*)_str_5;
  struct std::basic_ostream<char>* r28 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r26, cast27);
  int t29 = workSum4;
  struct std::basic_ostream<char>* r30 = std__ostream__operator__(r28, t29);
  void* g31 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r32 = std__ostream__operator___std__ostream_____(r30, g31);
  int t33 = workSum4;
  __retval1 = t33;
  int t34 = __retval1;
  return t34;
}

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
bb35:
  int __retval65;
  int sum66;
  int myPoint67;
  unsigned int gameStatus68;
  long long* c69 = NULL;
  long long r70 = time(c69);
  unsigned int cast71 = (unsigned int)r70;
  srand(cast71);
  int r72 = rollDice();
  sum66 = r72;
  goto bb36;
bb36:
  int t73 = sum66;
  goto bb37;
bb37:
  switch (t73) {
    default: goto bb41;
  }
bb38:
  goto bb39;
bb39:
  unsigned int c74 = 1;
  gameStatus68 = c74;
  goto bb42;
bb40:
  unsigned int c75 = 2;
  gameStatus68 = c75;
  goto bb42;
bb41:
  unsigned int c76 = 0;
  gameStatus68 = c76;
  int t77 = sum66;
  myPoint67 = t77;
  struct std::basic_ostream<char>* g78 = &_ZSt4cout;
  char* cast79 = (char*)_str;
  struct std::basic_ostream<char>* r80 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g78, cast79);
  int t81 = myPoint67;
  struct std::basic_ostream<char>* r82 = std__ostream__operator__(r80, t81);
  void* g83 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r84 = std__ostream__operator___std__ostream_____(r82, g83);
  goto bb42;
bb42:
  goto bb43;
bb43:
  goto bb44;
bb44:
  goto bb45;
bb45:
  unsigned int t85 = gameStatus68;
  int cast86 = (int)t85;
  unsigned int c87 = 0;
  int cast88 = (int)c87;
  _Bool c89 = (cast86 == cast88) ? 1 : 0;
  if (c89) goto bb46; else goto bb58;
bb46:
  goto bb47;
bb47:
  int r90 = rollDice();
  sum66 = r90;
  goto bb48;
bb48:
  int t91 = sum66;
  int t92 = myPoint67;
  _Bool c93 = (t91 == t92) ? 1 : 0;
  if (c93) goto bb49; else goto bb50;
bb49:
  unsigned int c94 = 1;
  gameStatus68 = c94;
  goto bb55;
bb50:
  goto bb51;
bb51:
  int t95 = sum66;
  int c96 = 7;
  _Bool c97 = (t95 == c96) ? 1 : 0;
  if (c97) goto bb52; else goto bb53;
bb52:
  unsigned int c98 = 2;
  gameStatus68 = c98;
  goto bb53;
bb53:
  goto bb54;
bb54:
  goto bb55;
bb55:
  goto bb56;
bb56:
  goto bb57;
bb57:
  goto bb45;
bb58:
  goto bb59;
bb59:
  goto bb60;
bb60:
  unsigned int t99 = gameStatus68;
  int cast100 = (int)t99;
  unsigned int c101 = 1;
  int cast102 = (int)c101;
  _Bool c103 = (cast100 == cast102) ? 1 : 0;
  if (c103) goto bb61; else goto bb62;
bb61:
  struct std::basic_ostream<char>* g104 = &_ZSt4cout;
  char* cast105 = (char*)_str_1;
  struct std::basic_ostream<char>* r106 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g104, cast105);
  void* g107 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r108 = std__ostream__operator___std__ostream_____(r106, g107);
  goto bb63;
bb62:
  struct std::basic_ostream<char>* g109 = &_ZSt4cout;
  char* cast110 = (char*)_str_2;
  struct std::basic_ostream<char>* r111 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g109, cast110);
  void* g112 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r113 = std__ostream__operator___std__ostream_____(r111, g112);
  goto bb63;
bb63:
  goto bb64;
bb64:
  int c114 = 0;
  __retval65 = c114;
  int t115 = __retval65;
  return t115;
}

