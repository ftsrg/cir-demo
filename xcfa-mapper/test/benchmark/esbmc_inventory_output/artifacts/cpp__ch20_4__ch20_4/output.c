// Struct definitions (auto-parsed)
struct std::_Setw { int _M_n; };
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

char _str[20] = "\\0AInterrupt signal (";
char _str_1[13] = ") received.\\0A";
char _str_2[46] = "Do you wish to continue (1 = yes or 2 = no)? ";
struct std::basic_istream<char> _ZSt3cin;
char _str_3[22] = "(1 = yes or 2 = no)? ";
struct std::basic_ostream<char> _ZSt4cout;
// function: signal
void* signal(int, void*);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSirsERi
struct std::basic_istream<char>* std__istream__operator__(struct std::basic_istream<char>*, int*);

// function: exit
void exit(int);

// function: _Z13signalHandleri
void signalHandler(int v0) {
  _Bool v1;
  _Bool v2;
bb3:
  int signalValue21;
  int response22;
  signalValue21 = v0;
  struct std::basic_ostream<char>* g23 = &_ZSt4cout;
  char* cast24 = (char*)_str;
  struct std::basic_ostream<char>* r25 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g23, cast24);
  int t26 = signalValue21;
  struct std::basic_ostream<char>* r27 = std__ostream__operator__(r25, t26);
  char* cast28 = (char*)_str_1;
  struct std::basic_ostream<char>* r29 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r27, cast28);
  char* cast30 = (char*)_str_2;
  struct std::basic_ostream<char>* r31 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r29, cast30);
  struct std::basic_istream<char>* g32 = &_ZSt3cin;
  struct std::basic_istream<char>* r33 = std__istream__operator__(g32, &response22);
  goto bb4;
bb4:
  goto bb5;
bb5:
  int t34 = response22;
  int c35 = 1;
  _Bool c36 = (t34 != c35) ? 1 : 0;
  if (c36) goto bb6; else goto bb10;
bb6:
  int t37 = response22;
  int c38 = 2;
  _Bool c39 = (t37 != c38) ? 1 : 0;
  if (c39) goto bb7; else goto bb8;
bb7:
  _Bool c40 = 1;
  v1 = c40;
  goto bb9;
bb8:
  _Bool c41 = 0;
  v1 = c41;
  goto bb9;
bb9:
  v2 = v1;
  goto bb11;
bb10:
  _Bool c42 = 0;
  v2 = c42;
  goto bb11;
bb11:
  if (v2) goto bb12; else goto bb15;
bb12:
  goto bb13;
bb13:
  struct std::basic_ostream<char>* g43 = &_ZSt4cout;
  char* cast44 = (char*)_str_3;
  struct std::basic_ostream<char>* r45 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g43, cast44);
  struct std::basic_istream<char>* g46 = &_ZSt3cin;
  struct std::basic_istream<char>* r47 = std__istream__operator__(g46, &response22);
  goto bb14;
bb14:
  goto bb5;
bb15:
  goto bb16;
bb16:
  goto bb17;
bb17:
  int t48 = response22;
  int c49 = 1;
  _Bool c50 = (t48 != c49) ? 1 : 0;
  if (c50) goto bb18; else goto bb19;
bb18:
  int c51 = 0;
  exit(c51);
  goto bb19;
bb19:
  goto bb20;
bb20:
  int c52 = 2;
  void* g53 = &_Z13signalHandleri;
  void* r54 = signal(c52, g53);
  struct std::basic_ostream<char>* g55 = &_ZSt4cout;
  int c56 = 2;
  struct std::basic_ostream<char>* r57 = std__ostream__operator__(g55, c56);
  void* g58 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r59 = std__ostream__operator___std__ostream_____(r57, g58);
  return;
}

// function: srand
void srand(unsigned int);

// function: time
long long time(long long*);

// function: rand
int rand();

// function: raise
int raise(int);

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std::basic_ostream<char>*, struct std::_Setw);

// function: _ZSt4setwi
struct std::_Setw std__setw(int v60) {
bb61:
  int __n62;
  struct std::_Setw __retval63;
  __n62 = v60;
  int t64 = __n62;
  __retval63._M_n = t64;
  struct std::_Setw t65 = __retval63;
  return t65;
}

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb66:
  int i83;
  int x84;
  struct std::_Setw agg.tmp085;
  int __retval86;
  int c87 = 2;
  void* g88 = &_Z13signalHandleri;
  void* r89 = signal(c87, g88);
  long long* c90 = NULL;
  long long r91 = time(c90);
  unsigned int cast92 = (unsigned int)r91;
  srand(cast92);
  goto bb67;
bb67:
  int c93 = 1;
  i83 = c93;
  goto bb68;
bb68:
  int t94 = i83;
  int c95 = 100;
  _Bool c96 = (t94 <= c95) ? 1 : 0;
  if (c96) goto bb69; else goto bb81;
bb69:
  goto bb70;
bb70:
  int c97 = 1;
  int r98 = rand();
  int c99 = 50;
  int b100 = r98 % c99;
  int b101 = c97 + b100;
  x84 = b101;
  goto bb71;
bb71:
  int t102 = x84;
  int c103 = 25;
  _Bool c104 = (t102 == c103) ? 1 : 0;
  if (c104) goto bb72; else goto bb73;
bb72:
  int c105 = 2;
  int r106 = raise(c105);
  goto bb73;
bb73:
  goto bb74;
bb74:
  struct std::basic_ostream<char>* g107 = &_ZSt4cout;
  int c108 = 4;
  struct std::_Setw r109 = std__setw(c108);
  agg.tmp085 = r109;
  struct std::_Setw t110 = agg.tmp085;
  struct std::basic_ostream<char>* r111 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(g107, t110);
  int t112 = i83;
  struct std::basic_ostream<char>* r113 = std__ostream__operator__(r111, t112);
  goto bb75;
bb75:
  int t114 = i83;
  int c115 = 10;
  int b116 = t114 % c115;
  int c117 = 0;
  _Bool c118 = (b116 == c117) ? 1 : 0;
  if (c118) goto bb76; else goto bb77;
bb76:
  struct std::basic_ostream<char>* g119 = &_ZSt4cout;
  void* g120 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r121 = std__ostream__operator___std__ostream_____(g119, g120);
  goto bb77;
bb77:
  goto bb78;
bb78:
  goto bb79;
bb79:
  goto bb80;
bb80:
  int t122 = i83;
  int u123 = ++t122;
  i83 = u123;
  goto bb68;
bb81:
  goto bb82;
bb82:
  int c124 = 0;
  __retval86 = c124;
  int t125 = __retval86;
  return t125;
}

