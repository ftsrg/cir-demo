// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char _str[15] = "This is a test";
struct std::basic_ostream<char> _ZSt4cout;
char _str_1[17] = "' was found in \\22";
char _str_2[4] = "\\22.\\0A";
char _str_3[21] = "' was not found in \\22";
char _str_4[3] = "\\22.";
// function: strchr
char* strchr(char*, int);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb0:
  int __retval11;
  char* string112;
  char character113;
  char character214;
  char* cast15 = (char*)_str;
  string112 = cast15;
  char c16 = 97;
  character113 = c16;
  char c17 = 122;
  character214 = c17;
  goto bb1;
bb1:
  char* t18 = string112;
  char t19 = character113;
  int cast20 = (int)t19;
  char* r21 = strchr(t18, cast20);
  char* c22 = NULL;
  _Bool c23 = (r21 != c22) ? 1 : 0;
  if (c23) goto bb2; else goto bb3;
bb2:
  struct std::basic_ostream<char>* g24 = &_ZSt4cout;
  char c25 = 39;
  struct std::basic_ostream<char>* r26 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(g24, c25);
  char t27 = character113;
  struct std::basic_ostream<char>* r28 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r26, t27);
  char* cast29 = (char*)_str_1;
  struct std::basic_ostream<char>* r30 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r28, cast29);
  char* t31 = string112;
  struct std::basic_ostream<char>* r32 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r30, t31);
  char* cast33 = (char*)_str_2;
  struct std::basic_ostream<char>* r34 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r32, cast33);
  goto bb4;
bb3:
  struct std::basic_ostream<char>* g35 = &_ZSt4cout;
  char c36 = 39;
  struct std::basic_ostream<char>* r37 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(g35, c36);
  char t38 = character113;
  struct std::basic_ostream<char>* r39 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r37, t38);
  char* cast40 = (char*)_str_3;
  struct std::basic_ostream<char>* r41 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r39, cast40);
  char* t42 = string112;
  struct std::basic_ostream<char>* r43 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r41, t42);
  char* cast44 = (char*)_str_2;
  struct std::basic_ostream<char>* r45 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r43, cast44);
  goto bb4;
bb4:
  goto bb5;
bb5:
  goto bb6;
bb6:
  char* t46 = string112;
  char t47 = character214;
  int cast48 = (int)t47;
  char* r49 = strchr(t46, cast48);
  char* c50 = NULL;
  _Bool c51 = (r49 != c50) ? 1 : 0;
  if (c51) goto bb7; else goto bb8;
bb7:
  struct std::basic_ostream<char>* g52 = &_ZSt4cout;
  char c53 = 39;
  struct std::basic_ostream<char>* r54 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(g52, c53);
  char t55 = character214;
  struct std::basic_ostream<char>* r56 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r54, t55);
  char* cast57 = (char*)_str_1;
  struct std::basic_ostream<char>* r58 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r56, cast57);
  char* t59 = string112;
  struct std::basic_ostream<char>* r60 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r58, t59);
  char* cast61 = (char*)_str_2;
  struct std::basic_ostream<char>* r62 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r60, cast61);
  goto bb9;
bb8:
  struct std::basic_ostream<char>* g63 = &_ZSt4cout;
  char c64 = 39;
  struct std::basic_ostream<char>* r65 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(g63, c64);
  char t66 = character214;
  struct std::basic_ostream<char>* r67 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r65, t66);
  char* cast68 = (char*)_str_3;
  struct std::basic_ostream<char>* r69 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r67, cast68);
  char* t70 = string112;
  struct std::basic_ostream<char>* r71 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r69, t70);
  char* cast72 = (char*)_str_4;
  struct std::basic_ostream<char>* r73 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r71, cast72);
  void* g74 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r75 = std__ostream__operator___std__ostream_____(r73, g74);
  goto bb9;
bb9:
  goto bb10;
bb10:
  int c76 = 0;
  __retval11 = c76;
  int t77 = __retval11;
  return t77;
}

