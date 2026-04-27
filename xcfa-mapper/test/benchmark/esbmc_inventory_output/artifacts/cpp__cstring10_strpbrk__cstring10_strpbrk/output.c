// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char __const_main_key[6] = "aeiou";
char __const_main_str[24] = "This is a sample string";
struct std::basic_ostream<char> _ZSt4cout;
char _str[13] = "Vowels in ' ";
char _str_1[5];
char _str_2[2] = "\\0A";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: strpbrk
char* strpbrk(char*, char*);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: main
int main() {
bb0:
  int __retval8;
  int str9[24];
  int key10[6];
  char* pch11;
  // array copy
  for (int i = 0; i < 24; ++i) { __const_main_str[i] = str9[i]; }
  // array copy
  for (int i = 0; i < 6; ++i) { __const_main_key[i] = key10[i]; }
  struct std::basic_ostream<char>* g12 = &_ZSt4cout;
  char* cast13 = (char*)_str;
  struct std::basic_ostream<char>* r14 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g12, cast13);
  char* cast15 = (char*)str9;
  struct std::basic_ostream<char>* r16 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r14, cast15);
  char* cast17 = (char*)_str_1;
  struct std::basic_ostream<char>* r18 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r16, cast17);
  void* g19 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r20 = std__ostream__operator___std__ostream_____(r18, g19);
  char* cast21 = (char*)str9;
  char* cast22 = (char*)key10;
  char* r23 = strpbrk(cast21, cast22);
  pch11 = r23;
  goto bb1;
bb1:
  goto bb2;
bb2:
  char* t24 = pch11;
  char* c25 = NULL;
  _Bool c26 = (t24 != c25) ? 1 : 0;
  if (c26) goto bb3; else goto bb6;
bb3:
  goto bb4;
bb4:
  struct std::basic_ostream<char>* g27 = &_ZSt4cout;
  char* t28 = pch11;
  char t29 = *t28;
  struct std::basic_ostream<char>* r30 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(g27, t29);
  void* g31 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r32 = std__ostream__operator___std__ostream_____(r30, g31);
  char* t33 = pch11;
  int c34 = 1;
  char* ptr35 = t33 + c34;
  char* cast36 = (char*)key10;
  char* r37 = strpbrk(ptr35, cast36);
  pch11 = r37;
  goto bb5;
bb5:
  goto bb2;
bb6:
  goto bb7;
bb7:
  struct std::basic_ostream<char>* g38 = &_ZSt4cout;
  char* cast39 = (char*)_str_2;
  struct std::basic_ostream<char>* r40 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g38, cast39);
  int c41 = 0;
  __retval8 = c41;
  int t42 = __retval8;
  return t42;
}

