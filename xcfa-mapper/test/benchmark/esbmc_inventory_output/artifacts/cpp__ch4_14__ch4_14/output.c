// Struct definitions (auto-parsed)
struct std::_Setw { int _M_n; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

int __const_main_a[5];
struct std::basic_ostream<char> _ZSt4cout;
char _str[46];
char _str_1[41];
char _str_2[39];
char _str_3[4] = "\\0A\\0A\\0A";
char _str_4[43];
char _str_5[24] = "\\0A\\0AThe value of a[3] is ";
char _str_7[27] = "Value in modifyElement is ";
char _str_6[22] = "The value of a[3] is ";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std::basic_ostream<char>*, struct std::_Setw);

// function: _ZSt4setwi
struct std::_Setw std__setw(int v0) {
bb1:
  int __n2;
  struct std::_Setw __retval3;
  __n2 = v0;
  int t4 = __n2;
  __retval3._M_n = t4;
  struct std::_Setw t5 = __retval3;
  return t5;
}

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _Z11modifyArrayPii
void modifyArray(int* v6, int v7) {
bb8:
  int k15;
  int* b16;
  int sizeOfArray17;
  b16 = v6;
  sizeOfArray17 = v7;
  goto bb9;
bb9:
  int c18 = 0;
  k15 = c18;
  goto bb10;
bb10:
  int t19 = k15;
  int t20 = sizeOfArray17;
  _Bool c21 = (t19 < t20) ? 1 : 0;
  if (c21) goto bb11; else goto bb13;
bb11:
  int c22 = 2;
  int* t23 = b16;
  int t24 = k15;
  int* ptr25 = t23 + t24;
  int t26 = *ptr25;
  int b27 = t26 * c22;
  *ptr25 = b27;
  goto bb12;
bb12:
  int t28 = k15;
  int u29 = ++t28;
  k15 = u29;
  goto bb10;
bb13:
  goto bb14;
bb14:
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: _Z13modifyElementi
void modifyElement(int v30) {
bb31:
  int e32;
  e32 = v30;
  struct std::basic_ostream<char>* g33 = &_ZSt4cout;
  char* cast34 = (char*)_str_7;
  struct std::basic_ostream<char>* r35 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g33, cast34);
  int c36 = 2;
  int t37 = e32;
  int b38 = t37 * c36;
  e32 = b38;
  struct std::basic_ostream<char>* r39 = std__ostream__operator__(r35, b38);
  void* g40 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r41 = std__ostream__operator___std__ostream_____(r39, g40);
  return;
}

// function: main
int main() {
bb42:
  int i55;
  struct std::_Setw agg.tmp056;
  int j57;
  struct std::_Setw agg.tmp158;
  int __retval59;
  int arraySize60;
  int a61[5];
  int c62 = 5;
  arraySize60 = c62;
  // array copy
  for (int i = 0; i < 5; ++i) { __const_main_a[i] = a61[i]; }
  struct std::basic_ostream<char>* g63 = &_ZSt4cout;
  char* cast64 = (char*)_str;
  struct std::basic_ostream<char>* r65 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g63, cast64);
  char* cast66 = (char*)_str_1;
  struct std::basic_ostream<char>* r67 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r65, cast66);
  goto bb43;
bb43:
  int c68 = 0;
  i55 = c68;
  goto bb44;
bb44:
  int t69 = i55;
  int c70 = 5;
  _Bool c71 = (t69 < c70) ? 1 : 0;
  if (c71) goto bb45; else goto bb47;
bb45:
  struct std::basic_ostream<char>* g72 = &_ZSt4cout;
  int c73 = 3;
  struct std::_Setw r74 = std__setw(c73);
  agg.tmp056 = r74;
  struct std::_Setw t75 = agg.tmp056;
  struct std::basic_ostream<char>* r76 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(g72, t75);
  int t77 = i55;
  int t78 = a61[t77];
  struct std::basic_ostream<char>* r79 = std__ostream__operator__(r76, t78);
  goto bb46;
bb46:
  int t80 = i55;
  int u81 = ++t80;
  i55 = u81;
  goto bb44;
bb47:
  goto bb48;
bb48:
  struct std::basic_ostream<char>* g82 = &_ZSt4cout;
  void* g83 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r84 = std__ostream__operator___std__ostream_____(g82, g83);
  int* cast85 = (int*)a61;
  int c86 = 5;
  modifyArray(cast85, c86);
  struct std::basic_ostream<char>* g87 = &_ZSt4cout;
  char* cast88 = (char*)_str_2;
  struct std::basic_ostream<char>* r89 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g87, cast88);
  goto bb49;
bb49:
  int c90 = 0;
  j57 = c90;
  goto bb50;
bb50:
  int t91 = j57;
  int c92 = 5;
  _Bool c93 = (t91 < c92) ? 1 : 0;
  if (c93) goto bb51; else goto bb53;
bb51:
  struct std::basic_ostream<char>* g94 = &_ZSt4cout;
  int c95 = 3;
  struct std::_Setw r96 = std__setw(c95);
  agg.tmp158 = r96;
  struct std::_Setw t97 = agg.tmp158;
  struct std::basic_ostream<char>* r98 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(g94, t97);
  int t99 = j57;
  int t100 = a61[t99];
  struct std::basic_ostream<char>* r101 = std__ostream__operator__(r98, t100);
  goto bb52;
bb52:
  int t102 = j57;
  int u103 = ++t102;
  j57 = u103;
  goto bb50;
bb53:
  goto bb54;
bb54:
  struct std::basic_ostream<char>* g104 = &_ZSt4cout;
  char* cast105 = (char*)_str_3;
  struct std::basic_ostream<char>* r106 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g104, cast105);
  char* cast107 = (char*)_str_4;
  struct std::basic_ostream<char>* r108 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r106, cast107);
  char* cast109 = (char*)_str_5;
  struct std::basic_ostream<char>* r110 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r108, cast109);
  int c111 = 3;
  int t112 = a61[c111];
  struct std::basic_ostream<char>* r113 = std__ostream__operator__(r110, t112);
  char c114 = 10;
  struct std::basic_ostream<char>* r115 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r113, c114);
  int c116 = 3;
  int t117 = a61[c116];
  modifyElement(t117);
  struct std::basic_ostream<char>* g118 = &_ZSt4cout;
  char* cast119 = (char*)_str_6;
  struct std::basic_ostream<char>* r120 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g118, cast119);
  int c121 = 3;
  int t122 = a61[c121];
  struct std::basic_ostream<char>* r123 = std__ostream__operator__(r120, t122);
  void* g124 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r125 = std__ostream__operator___std__ostream_____(r123, g124);
  int c126 = 0;
  __retval59 = c126;
  int t127 = __retval59;
  return t127;
}

