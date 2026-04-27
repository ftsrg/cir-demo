// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[37] = "The number of bytes in the array is ";
char _str_1[45] = "\\0AThe number of bytes returned by getSize is ";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEm
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, unsigned long long);

// function: _Z7getSizePd
unsigned long long getSize(double* v0) {
bb1:
  double* ptr2;
  unsigned long long __retval3;
  ptr2 = v0;
  unsigned long long c4 = 8;
  __retval3 = c4;
  unsigned long long t5 = __retval3;
  return t5;
}

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb6:
  int __retval7;
  double array8[20];
  struct std::basic_ostream<char>* g9 = &_ZSt4cout;
  char* cast10 = (char*)_str;
  struct std::basic_ostream<char>* r11 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g9, cast10);
  unsigned long long c12 = 160;
  struct std::basic_ostream<char>* r13 = std__ostream__operator__(r11, c12);
  struct std::basic_ostream<char>* g14 = &_ZSt4cout;
  char* cast15 = (char*)_str_1;
  struct std::basic_ostream<char>* r16 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g14, cast15);
  double* cast17 = (double*)array8;
  unsigned long long r18 = getSize(cast17);
  struct std::basic_ostream<char>* r19 = std__ostream__operator__(r16, r18);
  void* g20 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r21 = std__ostream__operator___std__ostream_____(r19, g20);
  int c22 = 0;
  __retval7 = c22;
  int t23 = __retval7;
  return t23;
}

