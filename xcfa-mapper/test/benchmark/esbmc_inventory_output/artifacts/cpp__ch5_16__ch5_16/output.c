// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char __const_main_string4[9] = "Good Bye";
char _str[6] = "Hello";
struct std::basic_ostream<char> _ZSt4cout;
char _str_1[11] = "string1 = ";
char _str_2[11] = "string3 = ";
// function: _Z5copy1PcPKc
void copy1(char* v0, char* v1) {
bb2:
  int i9;
  char* s110;
  char* s211;
  s110 = v0;
  s211 = v1;
  goto bb3;
bb3:
  int c12 = 0;
  i9 = c12;
  goto bb4;
bb4:
  char* t13 = s211;
  int t14 = i9;
  char* ptr15 = t13 + t14;
  char t16 = *ptr15;
  char* t17 = s110;
  int t18 = i9;
  char* ptr19 = t17 + t18;
  *ptr19 = t16;
  int cast20 = (int)t16;
  char c21 = 0;
  int cast22 = (int)c21;
  _Bool c23 = (cast20 != cast22) ? 1 : 0;
  if (c23) goto bb5; else goto bb7;
bb5:
  goto bb6;
bb6:
  int t24 = i9;
  int u25 = ++t24;
  i9 = u25;
  goto bb4;
bb7:
  goto bb8;
bb8:
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _Z5copy2PcPKc
void copy2(char* v26, char* v27) {
bb28:
  char* s135;
  char* s236;
  s135 = v26;
  s236 = v27;
  goto bb29;
bb29:
  goto bb30;
bb30:
  char* t37 = s236;
  char t38 = *t37;
  char* t39 = s135;
  *t39 = t38;
  int cast40 = (int)t38;
  char c41 = 0;
  int cast42 = (int)c41;
  _Bool c43 = (cast40 != cast42) ? 1 : 0;
  if (c43) goto bb31; else goto bb33;
bb31:
  goto bb32;
bb32:
  char* t44 = s135;
  int c45 = 1;
  char* ptr46 = t44 + c45;
  s135 = ptr46;
  char* t47 = s236;
  int c48 = 1;
  char* ptr49 = t47 + c48;
  s236 = ptr49;
  goto bb30;
bb33:
  goto bb34;
bb34:
  return;
}

// function: main
int main() {
bb50:
  int __retval51;
  int string152[10];
  char* string253;
  int string354[10];
  int string455[9];
  char* cast56 = (char*)_str;
  string253 = cast56;
  // array copy
  for (int i = 0; i < 9; ++i) { __const_main_string4[i] = string455[i]; }
  char* cast57 = (char*)string152;
  char* t58 = string253;
  copy1(cast57, t58);
  struct std::basic_ostream<char>* g59 = &_ZSt4cout;
  char* cast60 = (char*)_str_1;
  struct std::basic_ostream<char>* r61 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g59, cast60);
  char* cast62 = (char*)string152;
  struct std::basic_ostream<char>* r63 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r61, cast62);
  void* g64 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r65 = std__ostream__operator___std__ostream_____(r63, g64);
  char* cast66 = (char*)string354;
  char* cast67 = (char*)string455;
  copy2(cast66, cast67);
  struct std::basic_ostream<char>* g68 = &_ZSt4cout;
  char* cast69 = (char*)_str_2;
  struct std::basic_ostream<char>* r70 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g68, cast69);
  char* cast71 = (char*)string354;
  struct std::basic_ostream<char>* r72 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r70, cast71);
  void* g73 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r74 = std__ostream__operator___std__ostream_____(r72, g73);
  int c75 = 0;
  __retval51 = c75;
  int t76 = __retval51;
  return t76;
}

