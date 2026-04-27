// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[33] = "The original value of number is ";
char _str_1[29] = "\\0AThe new value of number is ";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _Z15cubeByReferencePi
void cubeByReference(int* v0) {
bb1:
  int* nPtr2;
  nPtr2 = v0;
  int* t3 = nPtr2;
  int t4 = *t3;
  int* t5 = nPtr2;
  int t6 = *t5;
  int b7 = t4 * t6;
  int* t8 = nPtr2;
  int t9 = *t8;
  int b10 = b7 * t9;
  int* t11 = nPtr2;
  *t11 = b10;
  return;
}

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb12:
  int __retval13;
  int number14;
  int c15 = 5;
  number14 = c15;
  struct std::basic_ostream<char>* g16 = &_ZSt4cout;
  char* cast17 = (char*)_str;
  struct std::basic_ostream<char>* r18 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g16, cast17);
  int t19 = number14;
  struct std::basic_ostream<char>* r20 = std__ostream__operator__(r18, t19);
  cubeByReference(&number14);
  struct std::basic_ostream<char>* g21 = &_ZSt4cout;
  char* cast22 = (char*)_str_1;
  struct std::basic_ostream<char>* r23 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g21, cast22);
  int t24 = number14;
  struct std::basic_ostream<char>* r25 = std__ostream__operator__(r23, t24);
  void* g26 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r27 = std__ostream__operator___std__ostream_____(r25, g26);
  int c28 = 0;
  __retval13 = c28;
  int t29 = __retval13;
  return t29;
}

