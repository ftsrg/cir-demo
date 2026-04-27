// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

int __const__Z18automaticArrayInitv_array2[3];
int _ZZ15staticArrayInitvE6array1[3];
struct std::basic_ostream<char> _ZSt4cout;
char _str[30];
char _str_2[38];
char _str_3[8] = "array1[";
char _str_4[5] = "] = ";
char _str_5[3] = "  ";
char _str_6[37];
char _str_7[42];
char _str_8[8] = "array2[";
char _str_9[40];
char _str_1[33];
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _Z15staticArrayInitv
void staticArrayInit() {
bb0:
  int i13;
  int j14;
  struct std::basic_ostream<char>* g15 = &_ZSt4cout;
  char* cast16 = (char*)_str_2;
  struct std::basic_ostream<char>* r17 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g15, cast16);
  goto bb1;
bb1:
  int c18 = 0;
  i13 = c18;
  goto bb2;
bb2:
  int t19 = i13;
  int c20 = 3;
  _Bool c21 = (t19 < c20) ? 1 : 0;
  if (c21) goto bb3; else goto bb5;
bb3:
  struct std::basic_ostream<char>* g22 = &_ZSt4cout;
  char* cast23 = (char*)_str_3;
  struct std::basic_ostream<char>* r24 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g22, cast23);
  int t25 = i13;
  struct std::basic_ostream<char>* r26 = std__ostream__operator__(r24, t25);
  char* cast27 = (char*)_str_4;
  struct std::basic_ostream<char>* r28 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r26, cast27);
  int t29 = i13;
  int t30 = _ZZ15staticArrayInitvE6array1[t29];
  struct std::basic_ostream<char>* r31 = std__ostream__operator__(r28, t30);
  char* cast32 = (char*)_str_5;
  struct std::basic_ostream<char>* r33 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r31, cast32);
  goto bb4;
bb4:
  int t34 = i13;
  int u35 = ++t34;
  i13 = u35;
  goto bb2;
bb5:
  goto bb6;
bb6:
  struct std::basic_ostream<char>* g36 = &_ZSt4cout;
  char* cast37 = (char*)_str_6;
  struct std::basic_ostream<char>* r38 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g36, cast37);
  goto bb7;
bb7:
  int c39 = 0;
  j14 = c39;
  goto bb8;
bb8:
  int t40 = j14;
  int c41 = 3;
  _Bool c42 = (t40 < c41) ? 1 : 0;
  if (c42) goto bb9; else goto bb11;
bb9:
  struct std::basic_ostream<char>* g43 = &_ZSt4cout;
  char* cast44 = (char*)_str_3;
  struct std::basic_ostream<char>* r45 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g43, cast44);
  int t46 = j14;
  struct std::basic_ostream<char>* r47 = std__ostream__operator__(r45, t46);
  char* cast48 = (char*)_str_4;
  struct std::basic_ostream<char>* r49 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r47, cast48);
  int c50 = 5;
  int t51 = j14;
  int t52 = _ZZ15staticArrayInitvE6array1[t51];
  int b53 = t52 + c50;
  _ZZ15staticArrayInitvE6array1[t51] = b53;
  struct std::basic_ostream<char>* r54 = std__ostream__operator__(r49, b53);
  char* cast55 = (char*)_str_5;
  struct std::basic_ostream<char>* r56 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r54, cast55);
  goto bb10;
bb10:
  int t57 = j14;
  int u58 = ++t57;
  j14 = u58;
  goto bb8;
bb11:
  goto bb12;
bb12:
  return;
}

// function: _Z18automaticArrayInitv
void automaticArrayInit() {
bb59:
  int i72;
  int j73;
  int array274[3];
  // array copy
  for (int i = 0; i < 3; ++i) { __const__Z18automaticArrayInitv_array2[i] = array274[i]; }
  struct std::basic_ostream<char>* g75 = &_ZSt4cout;
  char* cast76 = (char*)_str_7;
  struct std::basic_ostream<char>* r77 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g75, cast76);
  goto bb60;
bb60:
  int c78 = 0;
  i72 = c78;
  goto bb61;
bb61:
  int t79 = i72;
  int c80 = 3;
  _Bool c81 = (t79 < c80) ? 1 : 0;
  if (c81) goto bb62; else goto bb64;
bb62:
  struct std::basic_ostream<char>* g82 = &_ZSt4cout;
  char* cast83 = (char*)_str_8;
  struct std::basic_ostream<char>* r84 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g82, cast83);
  int t85 = i72;
  struct std::basic_ostream<char>* r86 = std__ostream__operator__(r84, t85);
  char* cast87 = (char*)_str_4;
  struct std::basic_ostream<char>* r88 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r86, cast87);
  int t89 = i72;
  int t90 = array274[t89];
  struct std::basic_ostream<char>* r91 = std__ostream__operator__(r88, t90);
  char* cast92 = (char*)_str_5;
  struct std::basic_ostream<char>* r93 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r91, cast92);
  goto bb63;
bb63:
  int t94 = i72;
  int u95 = ++t94;
  i72 = u95;
  goto bb61;
bb64:
  goto bb65;
bb65:
  struct std::basic_ostream<char>* g96 = &_ZSt4cout;
  char* cast97 = (char*)_str_9;
  struct std::basic_ostream<char>* r98 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g96, cast97);
  goto bb66;
bb66:
  int c99 = 0;
  j73 = c99;
  goto bb67;
bb67:
  int t100 = j73;
  int c101 = 3;
  _Bool c102 = (t100 < c101) ? 1 : 0;
  if (c102) goto bb68; else goto bb70;
bb68:
  struct std::basic_ostream<char>* g103 = &_ZSt4cout;
  char* cast104 = (char*)_str_8;
  struct std::basic_ostream<char>* r105 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g103, cast104);
  int t106 = j73;
  struct std::basic_ostream<char>* r107 = std__ostream__operator__(r105, t106);
  char* cast108 = (char*)_str_4;
  struct std::basic_ostream<char>* r109 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r107, cast108);
  int c110 = 5;
  int t111 = j73;
  int t112 = array274[t111];
  int b113 = t112 + c110;
  array274[t111] = b113;
  struct std::basic_ostream<char>* r114 = std__ostream__operator__(r109, b113);
  char* cast115 = (char*)_str_5;
  struct std::basic_ostream<char>* r116 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r114, cast115);
  goto bb69;
bb69:
  int t117 = j73;
  int u118 = ++t117;
  j73 = u118;
  goto bb67;
bb70:
  goto bb71;
bb71:
  return;
}

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb119:
  int __retval120;
  struct std::basic_ostream<char>* g121 = &_ZSt4cout;
  char* cast122 = (char*)_str;
  struct std::basic_ostream<char>* r123 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g121, cast122);
  staticArrayInit();
  automaticArrayInit();
  struct std::basic_ostream<char>* g124 = &_ZSt4cout;
  char* cast125 = (char*)_str_1;
  struct std::basic_ostream<char>* r126 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g124, cast125);
  staticArrayInit();
  automaticArrayInit();
  struct std::basic_ostream<char>* g127 = &_ZSt4cout;
  void* g128 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r129 = std__ostream__operator___std__ostream_____(g127, g128);
  int c130 = 0;
  __retval120 = c130;
  int t131 = __retval120;
  return t131;
}

