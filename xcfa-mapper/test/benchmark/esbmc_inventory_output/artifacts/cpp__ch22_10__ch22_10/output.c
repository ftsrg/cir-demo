// Struct definitions (auto-parsed)
struct TestMutable { int value; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[16];
char _str_1[18];
// function: _ZN11TestMutableC2Ei
void TestMutable__TestMutable(struct TestMutable* v0, int v1) {
bb2:
  struct TestMutable* this3;
  int v4;
  this3 = v0;
  v4 = v1;
  struct TestMutable* t5 = this3;
  int t6 = v4;
  *t5->value = t6;
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZNK11TestMutable8getValueEv
int TestMutable__getValue___const(struct TestMutable* v7) {
bb8:
  struct TestMutable* this9;
  int __retval10;
  this9 = v7;
  struct TestMutable* t11 = this9;
  int t12 = *t11->value;
  __retval10 = t12;
  int t13 = __retval10;
  return t13;
}

// function: _ZNK11TestMutable11modifyValueEv
void TestMutable__modifyValue___const(struct TestMutable* v14) {
bb15:
  struct TestMutable* this16;
  this16 = v14;
  struct TestMutable* t17 = this16;
  int t18 = *t17->value;
  int u19 = ++t18;
  *t17->value = u19;
  return;
}

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb20:
  int __retval21;
  struct TestMutable test22;
  int c23 = 99;
  TestMutable__TestMutable(&test22, c23);
  struct std::basic_ostream<char>* g24 = &_ZSt4cout;
  char* cast25 = (char*)_str;
  struct std::basic_ostream<char>* r26 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g24, cast25);
  int r27 = TestMutable__getValue___const(&test22);
  struct std::basic_ostream<char>* r28 = std__ostream__operator__(r26, r27);
  TestMutable__modifyValue___const(&test22);
  struct std::basic_ostream<char>* g29 = &_ZSt4cout;
  char* cast30 = (char*)_str_1;
  struct std::basic_ostream<char>* r31 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g29, cast30);
  int r32 = TestMutable__getValue___const(&test22);
  struct std::basic_ostream<char>* r33 = std__ostream__operator__(r31, r32);
  void* g34 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r35 = std__ostream__operator___std__ostream_____(r33, g34);
  int c36 = 0;
  __retval21 = c36;
  int t37 = __retval21;
  return t37;
}

