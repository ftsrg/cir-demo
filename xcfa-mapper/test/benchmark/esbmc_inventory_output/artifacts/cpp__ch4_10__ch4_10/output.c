// Struct definitions (auto-parsed)
struct std::_Setw { int _M_n; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[5] = "Face";
char _str_1[10] = "Frequency";
// function: srand
void srand(unsigned int);

// function: time
long long time(long long*);

// function: rand
int rand();

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std::basic_ostream<char>*, struct std::_Setw);

// function: _ZSt4setwi
struct std::_Setw std__setw(int v0) {
bb1:
  int __n2;
  struct std::_Setw __retval3;
  __n2 = v0;
  int t4 = __n2;
  __retval3._M_n = t4;
  struct std::_Setw t5 = __retval3;
  return t5;
}

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: main
int main() {
bb6:
  int roll19;
  int face20;
  struct std::_Setw agg.tmp121;
  struct std::_Setw agg.tmp222;
  int __retval23;
  int arraySize24;
  int frequency25[7];
  struct std::_Setw agg.tmp026;
  int c27 = 7;
  arraySize24 = c27;
  int c28 = {0};
  frequency25 = c28;
  long long* c29 = NULL;
  long long r30 = time(c29);
  unsigned int cast31 = (unsigned int)r30;
  srand(cast31);
  goto bb7;
bb7:
  int c32 = 1;
  roll19 = c32;
  goto bb8;
bb8:
  int t33 = roll19;
  int c34 = 60;
  _Bool c35 = (t33 <= c34) ? 1 : 0;
  if (c35) goto bb9; else goto bb11;
bb9:
  int c36 = 1;
  int r37 = rand();
  int c38 = 6;
  int b39 = r37 % c38;
  int b40 = c36 + b39;
  int t41 = frequency25[b40];
  int u42 = ++t41;
  frequency25[b40] = u42;
  goto bb10;
bb10:
  int t43 = roll19;
  int u44 = ++t43;
  roll19 = u44;
  goto bb8;
bb11:
  goto bb12;
bb12:
  struct std::basic_ostream<char>* g45 = &_ZSt4cout;
  char* cast46 = (char*)_str;
  struct std::basic_ostream<char>* r47 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g45, cast46);
  int c48 = 13;
  struct std::_Setw r49 = std__setw(c48);
  agg.tmp026 = r49;
  struct std::_Setw t50 = agg.tmp026;
  struct std::basic_ostream<char>* r51 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r47, t50);
  char* cast52 = (char*)_str_1;
  struct std::basic_ostream<char>* r53 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r51, cast52);
  void* g54 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r55 = std__ostream__operator___std__ostream_____(r53, g54);
  goto bb13;
bb13:
  int c56 = 1;
  face20 = c56;
  goto bb14;
bb14:
  int t57 = face20;
  int c58 = 7;
  _Bool c59 = (t57 < c58) ? 1 : 0;
  if (c59) goto bb15; else goto bb17;
bb15:
  struct std::basic_ostream<char>* g60 = &_ZSt4cout;
  int c61 = 4;
  struct std::_Setw r62 = std__setw(c61);
  agg.tmp121 = r62;
  struct std::_Setw t63 = agg.tmp121;
  struct std::basic_ostream<char>* r64 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(g60, t63);
  int t65 = face20;
  struct std::basic_ostream<char>* r66 = std__ostream__operator__(r64, t65);
  int c67 = 13;
  struct std::_Setw r68 = std__setw(c67);
  agg.tmp222 = r68;
  struct std::_Setw t69 = agg.tmp222;
  struct std::basic_ostream<char>* r70 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r66, t69);
  int t71 = face20;
  int t72 = frequency25[t71];
  struct std::basic_ostream<char>* r73 = std__ostream__operator__(r70, t72);
  void* g74 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r75 = std__ostream__operator___std__ostream_____(r73, g74);
  goto bb16;
bb16:
  int t76 = face20;
  int u77 = ++t76;
  face20 = u77;
  goto bb14;
bb17:
  goto bb18;
bb18:
  int c78 = 0;
  __retval23 = c78;
  int t79 = __retval23;
  return t79;
}

