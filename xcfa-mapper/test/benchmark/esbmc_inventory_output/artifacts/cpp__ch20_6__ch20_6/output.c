// Struct definitions (auto-parsed)
union Number { int integer1; double double1; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[35] = "Put a value in the integer member\\0A";
char _str_1[32];
char _str_2[10];
char _str_3[36] = "Put a value in the floating member\\0A";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* _ZNSolsEi(struct std::basic_ostream<char>*, int);

// function: _ZNSolsEd
struct std::basic_ostream<char>* _ZNSolsEd(struct std::basic_ostream<char>*, double);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb0:
  int __retval1;
  union Number value2;
  int c3 = 100;
  value2.integer1 = c3;
  struct std::basic_ostream<char>* g4 = &_ZSt4cout;
  char* cast5 = (char*)_str;
  struct std::basic_ostream<char>* r6 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g4, cast5);
  char* cast7 = (char*)_str_1;
  struct std::basic_ostream<char>* r8 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r6, cast7);
  int t9 = value2.integer1;
  struct std::basic_ostream<char>* r10 = _ZNSolsEi(r8, t9);
  char* cast11 = (char*)_str_2;
  struct std::basic_ostream<char>* r12 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r10, cast11);
  double t13 = value2.double1;
  struct std::basic_ostream<char>* r14 = _ZNSolsEd(r12, t13);
  void* g15 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r16 = std__ostream__operator___std__ostream_____(r14, g15);
  double c17 = 100;
  value2.double1 = c17;
  struct std::basic_ostream<char>* g18 = &_ZSt4cout;
  char* cast19 = (char*)_str_3;
  struct std::basic_ostream<char>* r20 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g18, cast19);
  char* cast21 = (char*)_str_1;
  struct std::basic_ostream<char>* r22 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r20, cast21);
  int t23 = value2.integer1;
  struct std::basic_ostream<char>* r24 = _ZNSolsEi(r22, t23);
  char* cast25 = (char*)_str_2;
  struct std::basic_ostream<char>* r26 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r24, cast25);
  double t27 = value2.double1;
  struct std::basic_ostream<char>* r28 = _ZNSolsEd(r26, t27);
  void* g29 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r30 = std__ostream__operator___std__ostream_____(r28, g29);
  int c31 = 0;
  __retval1 = c31;
  int t32 = __retval1;
  return t32;
}

