// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char __const_main_str[25] = "- This, a sample string.";
struct std::basic_ostream<char> _ZSt4cout;
char _str[18] = "Splitting string ";
char _str_1[14];
char _str_2[5] = " ,.-";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: strtok
char* strtok(char*, char*);

// function: main
int main() {
bb0:
  int __retval8;
  int str9[25];
  char* pch10;
  // array copy
  for (int i = 0; i < 25; ++i) { __const_main_str[i] = str9[i]; }
  struct std::basic_ostream<char>* g11 = &_ZSt4cout;
  char* cast12 = (char*)_str;
  struct std::basic_ostream<char>* r13 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g11, cast12);
  char* cast14 = (char*)str9;
  struct std::basic_ostream<char>* r15 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r13, cast14);
  char* cast16 = (char*)_str_1;
  struct std::basic_ostream<char>* r17 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r15, cast16);
  void* g18 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r19 = std__ostream__operator___std__ostream_____(r17, g18);
  char* cast20 = (char*)str9;
  char* cast21 = (char*)_str_2;
  char* r22 = strtok(cast20, cast21);
  pch10 = r22;
  goto bb1;
bb1:
  goto bb2;
bb2:
  char* t23 = pch10;
  char* c24 = NULL;
  _Bool c25 = (t23 != c24) ? 1 : 0;
  if (c25) goto bb3; else goto bb6;
bb3:
  goto bb4;
bb4:
  struct std::basic_ostream<char>* g26 = &_ZSt4cout;
  char* t27 = pch10;
  struct std::basic_ostream<char>* r28 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g26, t27);
  void* g29 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r30 = std__ostream__operator___std__ostream_____(r28, g29);
  char* c31 = NULL;
  char* cast32 = (char*)_str_2;
  char* r33 = strtok(c31, cast32);
  pch10 = r33;
  goto bb5;
bb5:
  goto bb2;
bb6:
  goto bb7;
bb7:
  int c34 = 0;
  __retval8 = c34;
  int t35 = __retval8;
  return t35;
}

