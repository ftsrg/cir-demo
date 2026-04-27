// Struct definitions (auto-parsed)
struct Test { int x; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[13] = "        x = ";
char _str_1[14] = "\\0A  this->x = ";
char _str_2[14] = "\\0A(*this).x = ";
// function: _ZN4TestC2Ei
void _ZN4TestC2Ei(struct Test* v0, int v1) {
bb2:
  struct Test* this3;
  int value4;
  this3 = v0;
  value4 = v1;
  struct Test* t5 = this3;
  int t6 = value4;
  *t5->x = t6;
  return;
}

// function: _ZN4TestC1Ei
void _ZN4TestC1Ei(struct Test*, int);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZNK4Test5printEv
void Test__print___const(struct Test* v7) {
bb8:
  struct Test* this9;
  this9 = v7;
  struct Test* t10 = this9;
  struct std::basic_ostream<char>* g11 = &_ZSt4cout;
  char* cast12 = (char*)_str;
  struct std::basic_ostream<char>* r13 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g11, cast12);
  int t14 = *t10->x;
  struct std::basic_ostream<char>* r15 = std__ostream__operator__(r13, t14);
  struct std::basic_ostream<char>* g16 = &_ZSt4cout;
  char* cast17 = (char*)_str_1;
  struct std::basic_ostream<char>* r18 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g16, cast17);
  int t19 = *t10->x;
  struct std::basic_ostream<char>* r20 = std__ostream__operator__(r18, t19);
  struct std::basic_ostream<char>* g21 = &_ZSt4cout;
  char* cast22 = (char*)_str_2;
  struct std::basic_ostream<char>* r23 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g21, cast22);
  int t24 = *t10->x;
  struct std::basic_ostream<char>* r25 = std__ostream__operator__(r23, t24);
  void* g26 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r27 = std__ostream__operator___std__ostream_____(r25, g26);
  return;
}

// function: main
int main() {
bb28:
  int __retval29;
  struct Test testObject30;
  int c31 = 12;
  _ZN4TestC1Ei(&testObject30, c31);
  Test__print___const(&testObject30);
  int c32 = 0;
  __retval29 = c32;
  int t33 = __retval29;
  return t33;
}

