// Struct definitions (auto-parsed)
struct std::_Setw { int _M_n; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

int __const_main_a[10];
struct std::basic_ostream<char> _ZSt4cout;
char _str[30] = "Data items in original order\\0A";
char _str_1[32] = "\\0AData items in ascending order\\0A";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

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

// function: _Z10bubbleSortPii
void bubbleSort(int* v19, int v20) {
bb21:
  int pass38;
  int k39;
  int* array40;
  int size41;
  array40 = v19;
  size41 = v20;
  goto bb22;
bb22:
  int c42 = 0;
  pass38 = c42;
  goto bb23;
bb23:
  int t43 = pass38;
  int t44 = size41;
  int c45 = 1;
  int b46 = t44 - c45;
  _Bool c47 = (t43 < b46) ? 1 : 0;
  if (c47) goto bb24; else goto bb36;
bb24:
  goto bb25;
bb25:
  int c48 = 0;
  k39 = c48;
  goto bb26;
bb26:
  int t49 = k39;
  int t50 = size41;
  int c51 = 1;
  int b52 = t50 - c51;
  _Bool c53 = (t49 < b52) ? 1 : 0;
  if (c53) goto bb27; else goto bb33;
bb27:
  goto bb28;
bb28:
  int* t54 = array40;
  int t55 = k39;
  int* ptr56 = t54 + t55;
  int t57 = *ptr56;
  int* t58 = array40;
  int t59 = k39;
  int c60 = 1;
  int b61 = t59 + c60;
  int* ptr62 = t58 + b61;
  int t63 = *ptr62;
  _Bool c64 = (t57 > t63) ? 1 : 0;
  if (c64) goto bb29; else goto bb30;
bb29:
  int* t65 = array40;
  int t66 = k39;
  int* ptr67 = t65 + t66;
  int* t68 = array40;
  int t69 = k39;
  int c70 = 1;
  int b71 = t69 + c70;
  int* ptr72 = t68 + b71;
  swap(ptr67, ptr72);
  goto bb30;
bb30:
  goto bb31;
bb31:
  goto bb32;
bb32:
  int t73 = k39;
  int u74 = ++t73;
  k39 = u74;
  goto bb26;
bb33:
  goto bb34;
bb34:
  goto bb35;
bb35:
  int t75 = pass38;
  int u76 = ++t75;
  pass38 = u76;
  goto bb23;
bb36:
  goto bb37;
bb37:
  return;
}

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb77:
  int i90;
  struct std::_Setw agg.tmp091;
  int j92;
  struct std::_Setw agg.tmp193;
  int __retval94;
  int arraySize95;
  int a96[10];
  int c97 = 10;
  arraySize95 = c97;
  // array copy
  for (int i = 0; i < 10; ++i) { __const_main_a[i] = a96[i]; }
  struct std::basic_ostream<char>* g98 = &_ZSt4cout;
  char* cast99 = (char*)_str;
  struct std::basic_ostream<char>* r100 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g98, cast99);
  goto bb78;
bb78:
  int c101 = 0;
  i90 = c101;
  goto bb79;
bb79:
  int t102 = i90;
  int c103 = 10;
  _Bool c104 = (t102 < c103) ? 1 : 0;
  if (c104) goto bb80; else goto bb82;
bb80:
  struct std::basic_ostream<char>* g105 = &_ZSt4cout;
  int c106 = 4;
  struct std::_Setw r107 = std__setw(c106);
  agg.tmp091 = r107;
  struct std::_Setw t108 = agg.tmp091;
  struct std::basic_ostream<char>* r109 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(g105, t108);
  int t110 = i90;
  int t111 = a96[t110];
  struct std::basic_ostream<char>* r112 = std__ostream__operator__(r109, t111);
  goto bb81;
bb81:
  int t113 = i90;
  int u114 = ++t113;
  i90 = u114;
  goto bb79;
bb82:
  goto bb83;
bb83:
  int* cast115 = (int*)a96;
  int c116 = 10;
  bubbleSort(cast115, c116);
  struct std::basic_ostream<char>* g117 = &_ZSt4cout;
  char* cast118 = (char*)_str_1;
  struct std::basic_ostream<char>* r119 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g117, cast118);
  goto bb84;
bb84:
  int c120 = 0;
  j92 = c120;
  goto bb85;
bb85:
  int t121 = j92;
  int c122 = 10;
  _Bool c123 = (t121 < c122) ? 1 : 0;
  if (c123) goto bb86; else goto bb88;
bb86:
  struct std::basic_ostream<char>* g124 = &_ZSt4cout;
  int c125 = 4;
  struct std::_Setw r126 = std__setw(c125);
  agg.tmp193 = r126;
  struct std::_Setw t127 = agg.tmp193;
  struct std::basic_ostream<char>* r128 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(g124, t127);
  int t129 = j92;
  int t130 = a96[t129];
  struct std::basic_ostream<char>* r131 = std__ostream__operator__(r128, t130);
  goto bb87;
bb87:
  int t132 = j92;
  int u133 = ++t132;
  j92 = u133;
  goto bb85;
bb88:
  goto bb89;
bb89:
  struct std::basic_ostream<char>* g134 = &_ZSt4cout;
  void* g135 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r136 = std__ostream__operator___std__ostream_____(g134, g135);
  int c137 = 0;
  __retval94 = c137;
  int t138 = __retval94;
  return t138;
}

