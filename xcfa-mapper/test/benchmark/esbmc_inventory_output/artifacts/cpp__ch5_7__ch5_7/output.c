// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char __const_main_phrase[22] = "characters and $32.98";
struct std::basic_ostream<char> _ZSt4cout;
char _str[34];
char _str_1[35];
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: islower
int islower(int);

// function: toupper
int toupper(int);

// function: _Z18convertToUppercasePc
void convertToUppercase(char* v0) {
bb1:
  char* sPtr13;
  sPtr13 = v0;
  goto bb2;
bb2:
  goto bb3;
bb3:
  char* t14 = sPtr13;
  char t15 = *t14;
  int cast16 = (int)t15;
  char c17 = 0;
  int cast18 = (int)c17;
  _Bool c19 = (cast16 != cast18) ? 1 : 0;
  if (c19) goto bb4; else goto bb11;
bb4:
  goto bb5;
bb5:
  goto bb6;
bb6:
  char* t20 = sPtr13;
  char t21 = *t20;
  int cast22 = (int)t21;
  int r23 = islower(cast22);
  _Bool cast24 = (_Bool)r23;
  if (cast24) goto bb7; else goto bb8;
bb7:
  char* t25 = sPtr13;
  char t26 = *t25;
  int cast27 = (int)t26;
  int r28 = toupper(cast27);
  char cast29 = (char)r28;
  char* t30 = sPtr13;
  *t30 = cast29;
  goto bb8;
bb8:
  goto bb9;
bb9:
  char* t31 = sPtr13;
  int c32 = 1;
  char* ptr33 = t31 + c32;
  sPtr13 = ptr33;
  goto bb10;
bb10:
  goto bb3;
bb11:
  goto bb12;
bb12:
  return;
}

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb34:
  int __retval35;
  int phrase36[22];
  // array copy
  for (int i = 0; i < 22; ++i) { __const_main_phrase[i] = phrase36[i]; }
  struct std::basic_ostream<char>* g37 = &_ZSt4cout;
  char* cast38 = (char*)_str;
  struct std::basic_ostream<char>* r39 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g37, cast38);
  char* cast40 = (char*)phrase36;
  struct std::basic_ostream<char>* r41 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r39, cast40);
  char* cast42 = (char*)phrase36;
  convertToUppercase(cast42);
  struct std::basic_ostream<char>* g43 = &_ZSt4cout;
  char* cast44 = (char*)_str_1;
  struct std::basic_ostream<char>* r45 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g43, cast44);
  char* cast46 = (char*)phrase36;
  struct std::basic_ostream<char>* r47 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r45, cast46);
  void* g48 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r49 = std__ostream__operator___std__ostream_____(r47, g48);
  int c50 = 0;
  __retval35 = c50;
  int t51 = __retval35;
  return t51;
}

