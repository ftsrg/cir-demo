// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char __const_main_sentence[33] = "This is a sentence with 7 tokens";
struct std::basic_ostream<char> _ZSt4cout;
char _str[32];
char _str_1[20];
char _str_2[2] = " ";
char _str_3[27] = "\\0AAfter strtok, sentence = ";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: strtok
char* strtok(char*, char*);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb0:
  int __retval8;
  int sentence9[33];
  char* tokenPtr10;
  // array copy
  for (int i = 0; i < 33; ++i) { __const_main_sentence[i] = sentence9[i]; }
  struct std::basic_ostream<char>* g11 = &_ZSt4cout;
  char* cast12 = (char*)_str;
  struct std::basic_ostream<char>* r13 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g11, cast12);
  char* cast14 = (char*)sentence9;
  struct std::basic_ostream<char>* r15 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r13, cast14);
  char* cast16 = (char*)_str_1;
  struct std::basic_ostream<char>* r17 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r15, cast16);
  char* cast18 = (char*)sentence9;
  char* cast19 = (char*)_str_2;
  char* r20 = strtok(cast18, cast19);
  tokenPtr10 = r20;
  goto bb1;
bb1:
  goto bb2;
bb2:
  char* t21 = tokenPtr10;
  char* c22 = NULL;
  _Bool c23 = (t21 != c22) ? 1 : 0;
  if (c23) goto bb3; else goto bb6;
bb3:
  goto bb4;
bb4:
  struct std::basic_ostream<char>* g24 = &_ZSt4cout;
  char* t25 = tokenPtr10;
  struct std::basic_ostream<char>* r26 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g24, t25);
  char c27 = 10;
  struct std::basic_ostream<char>* r28 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r26, c27);
  char* c29 = NULL;
  char* cast30 = (char*)_str_2;
  char* r31 = strtok(c29, cast30);
  tokenPtr10 = r31;
  goto bb5;
bb5:
  goto bb2;
bb6:
  goto bb7;
bb7:
  struct std::basic_ostream<char>* g32 = &_ZSt4cout;
  char* cast33 = (char*)_str_3;
  struct std::basic_ostream<char>* r34 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g32, cast33);
  char* cast35 = (char*)sentence9;
  struct std::basic_ostream<char>* r36 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r34, cast35);
  void* g37 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r38 = std__ostream__operator___std__ostream_____(r36, g37);
  int c39 = 0;
  __retval8 = c39;
  int t40 = __retval8;
  return t40;
}

