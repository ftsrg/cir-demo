// Struct definitions (auto-parsed)
struct Increment { int increment; int count; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[9] = "count = ";
char _str_1[15] = ", increment = ";
char _str_2[22];
char _str_3[17] = "After increment ";
char _str_4[3];
// function: _ZN9IncrementC2Eii
void _ZN9IncrementC2Eii(struct Increment* v0, int v1, int v2) {
bb3:
  struct Increment* this4;
  int c5;
  int i6;
  this4 = v0;
  c5 = v1;
  i6 = v2;
  struct Increment* t7 = this4;
  int t8 = i6;
  *t7->increment = t8;
  int t9 = c5;
  *t7->count = t9;
  return;
}

// function: _ZN9IncrementC1Eii
void _ZN9IncrementC1Eii(struct Increment*, int, int);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZNK9Increment5printEv
void Increment__print___const(struct Increment* v10) {
bb11:
  struct Increment* this12;
  this12 = v10;
  struct Increment* t13 = this12;
  struct std::basic_ostream<char>* g14 = &_ZSt4cout;
  char* cast15 = (char*)_str;
  struct std::basic_ostream<char>* r16 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g14, cast15);
  int t17 = *t13->count;
  struct std::basic_ostream<char>* r18 = std__ostream__operator__(r16, t17);
  char* cast19 = (char*)_str_1;
  struct std::basic_ostream<char>* r20 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r18, cast19);
  int t21 = *t13->increment;
  struct std::basic_ostream<char>* r22 = std__ostream__operator__(r20, t21);
  void* g23 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r24 = std__ostream__operator___std__ostream_____(r22, g23);
  return;
}

// function: _ZN9Increment12addIncrementEv
void Increment__addIncrement(struct Increment* v25) {
bb26:
  struct Increment* this27;
  this27 = v25;
  struct Increment* t28 = this27;
  int t29 = *t28->increment;
  int t30 = *t28->count;
  int b31 = t30 + t29;
  *t28->count = b31;
  return;
}

// function: main
int main() {
bb32:
  int j41;
  int __retval42;
  struct Increment value43;
  int c44 = 10;
  int c45 = 5;
  _ZN9IncrementC1Eii(&value43, c44, c45);
  struct std::basic_ostream<char>* g46 = &_ZSt4cout;
  char* cast47 = (char*)_str_2;
  struct std::basic_ostream<char>* r48 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g46, cast47);
  Increment__print___const(&value43);
  goto bb33;
bb33:
  int c49 = 0;
  j41 = c49;
  goto bb34;
bb34:
  int t50 = j41;
  int c51 = 3;
  _Bool c52 = (t50 < c51) ? 1 : 0;
  if (c52) goto bb35; else goto bb39;
bb35:
  goto bb36;
bb36:
  Increment__addIncrement(&value43);
  struct std::basic_ostream<char>* g53 = &_ZSt4cout;
  char* cast54 = (char*)_str_3;
  struct std::basic_ostream<char>* r55 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g53, cast54);
  int t56 = j41;
  int c57 = 1;
  int b58 = t56 + c57;
  struct std::basic_ostream<char>* r59 = std__ostream__operator__(r55, b58);
  char* cast60 = (char*)_str_4;
  struct std::basic_ostream<char>* r61 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r59, cast60);
  Increment__print___const(&value43);
  goto bb37;
bb37:
  goto bb38;
bb38:
  int t62 = j41;
  int u63 = ++t62;
  j41 = u63;
  goto bb34;
bb39:
  goto bb40;
bb40:
  int c64 = 0;
  __retval42 = c64;
  int t65 = __retval42;
  return t65;
}

