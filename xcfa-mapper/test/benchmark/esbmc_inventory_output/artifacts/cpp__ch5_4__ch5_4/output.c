// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[21] = "The address of a is ";
char _str_1[23] = "\\0AThe value of aPtr is ";
char _str_2[21] = "\\0A\\0AThe value of a is ";
char _str_3[24] = "\\0AThe value of *aPtr is ";
char _str_4[40] = "\\0A\\0AShowing that * and & are inverses of ";
char _str_5[22] = "each other.\\0A&*aPtr = ";
char _str_6[11] = "\\0A*&aPtr = ";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEPKv
struct std::basic_ostream<char>* _ZNSolsEPKv(struct std::basic_ostream<char>*, void*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* _ZNSolsEi(struct std::basic_ostream<char>*, int);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb0:
  int __retval1;
  int a2;
  int* aPtr3;
  int c4 = 7;
  a2 = c4;
  aPtr3 = &a2;
  struct std::basic_ostream<char>* g5 = &_ZSt4cout;
  char* cast6 = (char*)_str;
  struct std::basic_ostream<char>* r7 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g5, cast6);
  void* cast8 = (void*)a2;
  struct std::basic_ostream<char>* r9 = _ZNSolsEPKv(r7, cast8);
  char* cast10 = (char*)_str_1;
  struct std::basic_ostream<char>* r11 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r9, cast10);
  int* t12 = aPtr3;
  void* cast13 = (void*)t12;
  struct std::basic_ostream<char>* r14 = _ZNSolsEPKv(r11, cast13);
  struct std::basic_ostream<char>* g15 = &_ZSt4cout;
  char* cast16 = (char*)_str_2;
  struct std::basic_ostream<char>* r17 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g15, cast16);
  int t18 = a2;
  struct std::basic_ostream<char>* r19 = _ZNSolsEi(r17, t18);
  char* cast20 = (char*)_str_3;
  struct std::basic_ostream<char>* r21 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r19, cast20);
  int* t22 = aPtr3;
  int t23 = *t22;
  struct std::basic_ostream<char>* r24 = _ZNSolsEi(r21, t23);
  struct std::basic_ostream<char>* g25 = &_ZSt4cout;
  char* cast26 = (char*)_str_4;
  struct std::basic_ostream<char>* r27 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g25, cast26);
  char* cast28 = (char*)_str_5;
  struct std::basic_ostream<char>* r29 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r27, cast28);
  int* t30 = aPtr3;
  void* cast31 = (void*)t30;
  struct std::basic_ostream<char>* r32 = _ZNSolsEPKv(r29, cast31);
  char* cast33 = (char*)_str_6;
  struct std::basic_ostream<char>* r34 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r32, cast33);
  int* t35 = aPtr3;
  void* cast36 = (void*)t35;
  struct std::basic_ostream<char>* r37 = _ZNSolsEPKv(r34, cast36);
  void* g38 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r39 = std__ostream__operator___std__ostream_____(r37, g38);
  int c40 = 0;
  __retval1 = c40;
  int t41 = __retval1;
  return t41;
}

