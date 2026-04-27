// Struct definitions (auto-parsed)
struct Count { int x; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[50];
char _str_1[44];
char _str_2[42];
// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZN5Count5printEv
void Count__print(struct Count* v0) {
bb1:
  struct Count* this2;
  this2 = v0;
  struct Count* t3 = this2;
  struct std::basic_ostream<char>* g4 = &_ZSt4cout;
  int t5 = *t3->x;
  struct std::basic_ostream<char>* r6 = std__ostream__operator__(g4, t5);
  void* g7 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r8 = std__ostream__operator___std__ostream_____(r6, g7);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: main
int main() {
bb9:
  int __retval10;
  struct Count counter11;
  struct Count* counterPtr12;
  struct Count* counterRef13;
  counterPtr12 = &counter11;
  counterRef13 = &counter11;
  struct std::basic_ostream<char>* g14 = &_ZSt4cout;
  char* cast15 = (char*)_str;
  struct std::basic_ostream<char>* r16 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g14, cast15);
  int c17 = 1;
  counter11.x = c17;
  Count__print(&counter11);
  struct std::basic_ostream<char>* g18 = &_ZSt4cout;
  char* cast19 = (char*)_str_1;
  struct std::basic_ostream<char>* r20 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g18, cast19);
  int c21 = 2;
  struct Count* t22 = counterRef13;
  *t22->x = c21;
  struct Count* t23 = counterRef13;
  Count__print(t23);
  struct std::basic_ostream<char>* g24 = &_ZSt4cout;
  char* cast25 = (char*)_str_2;
  struct std::basic_ostream<char>* r26 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g24, cast25);
  int c27 = 3;
  struct Count* t28 = counterPtr12;
  *t28->x = c27;
  struct Count* t29 = counterPtr12;
  Count__print(t29);
  int c30 = 0;
  __retval10 = c30;
  int t31 = __retval10;
  return t31;
}

