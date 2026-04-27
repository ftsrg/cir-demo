// Struct definitions (auto-parsed)
struct std::_Setw { int _M_n; };
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

int __const_main_a[10];
struct std::basic_ostream<char> _ZSt4cout;
char _str[37] = "Enter 1 to sort in ascending order,\\0A";
char _str_1[38];
struct std::basic_istream<char> _ZSt3cin;
char _str_2[31] = "\\0AData items in original order\\0A";
char _str_3[32] = "\\0AData items in ascending order\\0A";
char _str_4[33] = "\\0AData items in descending order\\0A";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSirsERi
struct std::basic_istream<char>* std__istream__operator__(struct std::basic_istream<char>*, int*);

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

// function: _Z4swapPiS_
void swap(int* v6, int* v7) {
bb8:
  int* element1Ptr9;
  int* element2Ptr10;
  int hold11;
  element1Ptr9 = v6;
  element2Ptr10 = v7;
  int* t12 = element1Ptr9;
  int t13 = *t12;
  hold11 = t13;
  int* t14 = element2Ptr10;
  int t15 = *t14;
  int* t16 = element1Ptr9;
  *t16 = t15;
  int t17 = hold11;
  int* t18 = element2Ptr10;
  *t18 = t17;
  return;
}

// function: _Z6bubblePiiPFbiiE
void bubble_int___int__bool____(int* v19, int v20, void* v21) {
bb22:
  int pass39;
  int count40;
  int* work41;
  int size42;
  void* compare43;
  work41 = v19;
  size42 = v20;
  compare43 = v21;
  goto bb23;
bb23:
  int c44 = 1;
  pass39 = c44;
  goto bb24;
bb24:
  int t45 = pass39;
  int t46 = size42;
  _Bool c47 = (t45 < t46) ? 1 : 0;
  if (c47) goto bb25; else goto bb37;
bb25:
  goto bb26;
bb26:
  int c48 = 0;
  count40 = c48;
  goto bb27;
bb27:
  int t49 = count40;
  int t50 = size42;
  int c51 = 1;
  int b52 = t50 - c51;
  _Bool c53 = (t49 < b52) ? 1 : 0;
  if (c53) goto bb28; else goto bb34;
bb28:
  goto bb29;
bb29:
  void* t54 = compare43;
  int* t55 = work41;
  int t56 = count40;
  int* ptr57 = t55 + t56;
  int t58 = *ptr57;
  int* t59 = work41;
  int t60 = count40;
  int c61 = 1;
  int b62 = t60 + c61;
  int* ptr63 = t59 + b62;
  int t64 = *ptr63;
  _Bool r65 = ((_Bool (*)())t54)(t58, t64);
  if (r65) goto bb30; else goto bb31;
bb30:
  int* t66 = work41;
  int t67 = count40;
  int* ptr68 = t66 + t67;
  int* t69 = work41;
  int t70 = count40;
  int c71 = 1;
  int b72 = t70 + c71;
  int* ptr73 = t69 + b72;
  swap(ptr68, ptr73);
  goto bb31;
bb31:
  goto bb32;
bb32:
  goto bb33;
bb33:
  int t74 = count40;
  int u75 = ++t74;
  count40 = u75;
  goto bb27;
bb34:
  goto bb35;
bb35:
  goto bb36;
bb36:
  int t76 = pass39;
  int u77 = ++t76;
  pass39 = u77;
  goto bb24;
bb37:
  goto bb38;
bb38:
  return;
}

// function: _Z9ascendingii
_Bool ascending(int v78, int v79) {
bb80:
  int a81;
  int b82;
  _Bool __retval83;
  a81 = v78;
  b82 = v79;
  int t84 = b82;
  int t85 = a81;
  _Bool c86 = (t84 < t85) ? 1 : 0;
  __retval83 = c86;
  _Bool t87 = __retval83;
  return t87;
}

// function: _Z10descendingii
_Bool descending(int v88, int v89) {
bb90:
  int a91;
  int b92;
  _Bool __retval93;
  a91 = v88;
  b92 = v89;
  int t94 = b92;
  int t95 = a91;
  _Bool c96 = (t94 > t95) ? 1 : 0;
  __retval93 = c96;
  _Bool t97 = __retval93;
  return t97;
}

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb98:
  struct std::_Setw agg.tmp0116;
  struct std::_Setw agg.tmp1117;
  int __retval118;
  int arraySize119;
  int order120;
  int counter121;
  int a122[10];
  int c123 = 10;
  arraySize119 = c123;
  // array copy
  for (int i = 0; i < 10; ++i) { __const_main_a[i] = a122[i]; }
  struct std::basic_ostream<char>* g124 = &_ZSt4cout;
  char* cast125 = (char*)_str;
  struct std::basic_ostream<char>* r126 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g124, cast125);
  char* cast127 = (char*)_str_1;
  struct std::basic_ostream<char>* r128 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r126, cast127);
  struct std::basic_istream<char>* g129 = &_ZSt3cin;
  struct std::basic_istream<char>* r130 = std__istream__operator__(g129, &order120);
  struct std::basic_ostream<char>* g131 = &_ZSt4cout;
  char* cast132 = (char*)_str_2;
  struct std::basic_ostream<char>* r133 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g131, cast132);
  goto bb99;
bb99:
  int c134 = 0;
  counter121 = c134;
  goto bb100;
bb100:
  int t135 = counter121;
  int c136 = 10;
  _Bool c137 = (t135 < c136) ? 1 : 0;
  if (c137) goto bb101; else goto bb103;
bb101:
  struct std::basic_ostream<char>* g138 = &_ZSt4cout;
  int c139 = 4;
  struct std::_Setw r140 = std__setw(c139);
  agg.tmp0116 = r140;
  struct std::_Setw t141 = agg.tmp0116;
  struct std::basic_ostream<char>* r142 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(g138, t141);
  int t143 = counter121;
  int t144 = a122[t143];
  struct std::basic_ostream<char>* r145 = std__ostream__operator__(r142, t144);
  goto bb102;
bb102:
  int t146 = counter121;
  int u147 = ++t146;
  counter121 = u147;
  goto bb100;
bb103:
  goto bb104;
bb104:
  goto bb105;
bb105:
  int t148 = order120;
  int c149 = 1;
  _Bool c150 = (t148 == c149) ? 1 : 0;
  if (c150) goto bb106; else goto bb107;
bb106:
  int* cast151 = (int*)a122;
  int c152 = 10;
  void* g153 = &_Z9ascendingii;
  bubble_int___int__bool____(cast151, c152, g153);
  struct std::basic_ostream<char>* g154 = &_ZSt4cout;
  char* cast155 = (char*)_str_3;
  struct std::basic_ostream<char>* r156 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g154, cast155);
  goto bb108;
bb107:
  int* cast157 = (int*)a122;
  int c158 = 10;
  void* g159 = &_Z10descendingii;
  bubble_int___int__bool____(cast157, c158, g159);
  struct std::basic_ostream<char>* g160 = &_ZSt4cout;
  char* cast161 = (char*)_str_4;
  struct std::basic_ostream<char>* r162 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g160, cast161);
  goto bb108;
bb108:
  goto bb109;
bb109:
  goto bb110;
bb110:
  int c163 = 0;
  counter121 = c163;
  goto bb111;
bb111:
  int t164 = counter121;
  int c165 = 10;
  _Bool c166 = (t164 < c165) ? 1 : 0;
  if (c166) goto bb112; else goto bb114;
bb112:
  struct std::basic_ostream<char>* g167 = &_ZSt4cout;
  int c168 = 4;
  struct std::_Setw r169 = std__setw(c168);
  agg.tmp1117 = r169;
  struct std::_Setw t170 = agg.tmp1117;
  struct std::basic_ostream<char>* r171 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(g167, t170);
  int t172 = counter121;
  int t173 = a122[t172];
  struct std::basic_ostream<char>* r174 = std__ostream__operator__(r171, t173);
  goto bb113;
bb113:
  int t175 = counter121;
  int u176 = ++t175;
  counter121 = u176;
  goto bb111;
bb114:
  goto bb115;
bb115:
  struct std::basic_ostream<char>* g177 = &_ZSt4cout;
  void* g178 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r179 = std__ostream__operator___std__ostream_____(g177, g178);
  int c180 = 0;
  __retval118 = c180;
  int t181 = __retval118;
  return t181;
}

