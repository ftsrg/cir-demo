// Struct definitions (auto-parsed)
struct std::basic_ios<char> { unsigned char __placeholder; };
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::ios_base { long long _M_width; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[18];
struct std::basic_istream<char> _ZSt3cin;
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZNSt8ios_base5widthEl
long long std__ios_base__width(struct std::ios_base* v0, long long v1) {
bb2:
  int this3[8];
  long long __wide4;
  long long __retval5;
  long long __old6;
  this3 = v0;
  __wide4 = v1;
  struct std::ios_base* t7 = this3;
  long long t8 = *t7->_M_width;
  __old6 = t8;
  long long t9 = __wide4;
  *t7->_M_width = t9;
  long long t10 = __old6;
  __retval5 = t10;
  long long t11 = __retval5;
  return t11;
}

// function: _ZSt17__istream_extractRSiPcl
void std____istream_extract(struct std::basic_istream<char>*, char*, long long);

// function: _ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_PS3_
struct std::basic_istream<char>* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(struct std::basic_istream<char>* v12, char* v13) {
bb14:
  long long __n17;
  int __in18[8];
  char* __s19;
  int __retval20[8];
  __in18 = v12;
  __s19 = v13;
  goto bb15;
bb15:
  long long c21 = 9223372036854775807;
  __n17 = c21;
  unsigned long long c22 = 1;
  long long t23 = __n17;
  unsigned long long cast24 = (unsigned long long)t23;
  unsigned long long b25 = cast24 / c22;
  long long cast26 = (long long)b25;
  __n17 = cast26;
  struct std::basic_istream<char>* t27 = __in18;
  char* t28 = __s19;
  long long t29 = __n17;
  std____istream_extract(t27, t28, t29);
  goto bb16;
bb16:
  struct std::basic_istream<char>* t30 = __in18;
  __retval20 = t30;
  struct std::basic_istream<char>* t31 = __retval20;
  return t31;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEEcvbEv
_Bool std__basic_ios_char__std__char_traits_char_____operator_bool___const(struct std::basic_ios<char>*);

// function: main
int main() {
bb32:
  int __retval40;
  int widthValue41;
  int sentence42[10];
  int c43 = 4;
  widthValue41 = c43;
  struct std::basic_ostream<char>* g44 = &_ZSt4cout;
  char* cast45 = (char*)_str;
  struct std::basic_ostream<char>* r46 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g44, cast45);
  void* g47 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r48 = std__ostream__operator___std__ostream_____(r46, g47);
  struct std::basic_istream<char>* g49 = &_ZSt3cin;
