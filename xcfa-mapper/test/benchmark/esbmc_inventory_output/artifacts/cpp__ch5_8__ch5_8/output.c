// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char __const_main_phrase[29] = "print characters of a string";
struct std::basic_ostream<char> _ZSt4cout;
char _str[16];
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: _Z15printCharactersPKc
void printCharacters(char* v0) {
bb1:
  char* sPtr8;
  sPtr8 = v0;
  goto bb2;
bb2:
  goto bb3;
bb3:
  char* t9 = sPtr8;
  char t10 = *t9;
  int cast11 = (int)t10;
  char c12 = 0;
  int cast13 = (int)c12;
  _Bool c14 = (cast11 != cast13) ? 1 : 0;
  if (c14) goto bb4; else goto bb6;
bb4:
  struct std::basic_ostream<char>* g15 = &_ZSt4cout;
  char* t16 = sPtr8;
  char t17 = *t16;
  struct std::basic_ostream<char>* r18 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(g15, t17);
  goto bb5;
bb5:
  char* t19 = sPtr8;
  int c20 = 1;
  char* ptr21 = t19 + c20;
  sPtr8 = ptr21;
  goto bb3;
bb6:
  goto bb7;
bb7:
  return;
}

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb22:
  int __retval23;
  int phrase24[29];
  // array copy
  for (int i = 0; i < 29; ++i) { __const_main_phrase[i] = phrase24[i]; }
  struct std::basic_ostream<char>* g25 = &_ZSt4cout;
  char* cast26 = (char*)_str;
  struct std::basic_ostream<char>* r27 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g25, cast26);
  char* cast28 = (char*)phrase24;
  printCharacters(cast28);
  struct std::basic_ostream<char>* g29 = &_ZSt4cout;
  void* g30 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r31 = std__ostream__operator___std__ostream_____(g29, g30);
  int c32 = 0;
  __retval23 = c32;
  int t33 = __retval23;
  return t33;
}

