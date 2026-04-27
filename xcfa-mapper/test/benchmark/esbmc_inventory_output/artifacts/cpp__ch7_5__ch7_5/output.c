// Struct definitions (auto-parsed)
struct Count { int x; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[32];
char _str_1[47];
// function: _Z4setXR5Counti
void setX(struct Count* v0, int v1) {
bb2:
  struct Count* c3;
  int val4;
  c3 = v0;
  val4 = v1;
  int t5 = val4;
  struct Count* t6 = c3;
  *t6->x = t5;
  return;
}

// function: _ZN5CountC2Ev
void Count__Count(struct Count* v7) {
bb8:
  struct Count* this9;
  this9 = v7;
  struct Count* t10 = this9;
  int c11 = 0;
  *t10->x = c11;
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZNK5Count5printEv
void Count__print___const(struct Count* v12) {
bb13:
  struct Count* this14;
  this14 = v12;
  struct Count* t15 = this14;
  struct std::basic_ostream<char>* g16 = &_ZSt4cout;
  int t17 = *t15->x;
  struct std::basic_ostream<char>* r18 = std__ostream__operator__(g16, t17);
  void* g19 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r20 = std__ostream__operator___std__ostream_____(r18, g19);
  return;
}

// function: main
int main() {
bb21:
  int __retval22;
  struct Count counter23;
  Count__Count(&counter23);
  struct std::basic_ostream<char>* g24 = &_ZSt4cout;
  char* cast25 = (char*)_str;
  struct std::basic_ostream<char>* r26 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g24, cast25);
  Count__print___const(&counter23);
  int c27 = 8;
  setX(&counter23, c27);
  struct std::basic_ostream<char>* g28 = &_ZSt4cout;
  char* cast29 = (char*)_str_1;
  struct std::basic_ostream<char>* r30 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g28, cast29);
  Count__print___const(&counter23);
  int c31 = 0;
  __retval22 = c31;
  int t32 = __retval22;
  return t32;
}

