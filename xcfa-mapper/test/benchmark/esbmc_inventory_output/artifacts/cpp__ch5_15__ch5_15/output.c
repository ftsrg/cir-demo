// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

int __const_main_b[4];
struct std::basic_ostream<char> _ZSt4cout;
char _str[24];
char _str_1[26] = "Array subscript notation\\0A";
char _str_2[3] = "b[";
char _str_3[5] = "] = ";
char _str_4[32] = "\\0APointer/offset notation where ";
char _str_5[31] = "the pointer is the array name\\0A";
char _str_6[7] = "*(b + ";
char _str_7[5] = ") = ";
char _str_8[29] = "\\0APointer subscript notation\\0A";
char _str_9[6] = "bPtr[";
char _str_10[26] = "\\0APointer/offset notation\\0A";
char _str_11[10] = "*(bPtr + ";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: main
int main() {
bb0:
  int i25;
  int offset126;
  int j27;
  int offset228;
  int __retval29;
  int b30[4];
  int* bPtr31;
  // array copy
  for (int i = 0; i < 4; ++i) { __const_main_b[i] = b30[i]; }
  int* cast32 = (int*)b30;
  bPtr31 = cast32;
  struct std::basic_ostream<char>* g33 = &_ZSt4cout;
  char* cast34 = (char*)_str;
  struct std::basic_ostream<char>* r35 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g33, cast34);
  char* cast36 = (char*)_str_1;
  struct std::basic_ostream<char>* r37 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r35, cast36);
  goto bb1;
bb1:
  int c38 = 0;
  i25 = c38;
  goto bb2;
bb2:
  int t39 = i25;
  int c40 = 4;
  _Bool c41 = (t39 < c40) ? 1 : 0;
  if (c41) goto bb3; else goto bb5;
bb3:
  struct std::basic_ostream<char>* g42 = &_ZSt4cout;
  char* cast43 = (char*)_str_2;
  struct std::basic_ostream<char>* r44 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g42, cast43);
  int t45 = i25;
  struct std::basic_ostream<char>* r46 = std__ostream__operator__(r44, t45);
  char* cast47 = (char*)_str_3;
  struct std::basic_ostream<char>* r48 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r46, cast47);
  int t49 = i25;
  int t50 = b30[t49];
  struct std::basic_ostream<char>* r51 = std__ostream__operator__(r48, t50);
  char c52 = 10;
  struct std::basic_ostream<char>* r53 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r51, c52);
  goto bb4;
bb4:
  int t54 = i25;
  int u55 = ++t54;
  i25 = u55;
  goto bb2;
bb5:
  goto bb6;
bb6:
  struct std::basic_ostream<char>* g56 = &_ZSt4cout;
  char* cast57 = (char*)_str_4;
  struct std::basic_ostream<char>* r58 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g56, cast57);
  char* cast59 = (char*)_str_5;
  struct std::basic_ostream<char>* r60 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r58, cast59);
  goto bb7;
bb7:
  int c61 = 0;
  offset126 = c61;
  goto bb8;
bb8:
  int t62 = offset126;
  int c63 = 4;
  _Bool c64 = (t62 < c63) ? 1 : 0;
  if (c64) goto bb9; else goto bb11;
bb9:
  struct std::basic_ostream<char>* g65 = &_ZSt4cout;
  char* cast66 = (char*)_str_6;
  struct std::basic_ostream<char>* r67 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g65, cast66);
  int t68 = offset126;
  struct std::basic_ostream<char>* r69 = std__ostream__operator__(r67, t68);
  char* cast70 = (char*)_str_7;
  struct std::basic_ostream<char>* r71 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r69, cast70);
  int t72 = offset126;
  int t73 = b30[t72];
  struct std::basic_ostream<char>* r74 = std__ostream__operator__(r71, t73);
  char c75 = 10;
  struct std::basic_ostream<char>* r76 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r74, c75);
  goto bb10;
bb10:
  int t77 = offset126;
  int u78 = ++t77;
  offset126 = u78;
  goto bb8;
bb11:
  goto bb12;
bb12:
  struct std::basic_ostream<char>* g79 = &_ZSt4cout;
  char* cast80 = (char*)_str_8;
  struct std::basic_ostream<char>* r81 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g79, cast80);
  goto bb13;
bb13:
  int c82 = 0;
  j27 = c82;
  goto bb14;
bb14:
  int t83 = j27;
  int c84 = 4;
  _Bool c85 = (t83 < c84) ? 1 : 0;
  if (c85) goto bb15; else goto bb17;
bb15:
  struct std::basic_ostream<char>* g86 = &_ZSt4cout;
  char* cast87 = (char*)_str_9;
  struct std::basic_ostream<char>* r88 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g86, cast87);
  int t89 = j27;
  struct std::basic_ostream<char>* r90 = std__ostream__operator__(r88, t89);
  char* cast91 = (char*)_str_3;
  struct std::basic_ostream<char>* r92 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r90, cast91);
  int* t93 = bPtr31;
  int t94 = j27;
  int* ptr95 = t93 + t94;
  int t96 = *ptr95;
  struct std::basic_ostream<char>* r97 = std__ostream__operator__(r92, t96);
  char c98 = 10;
  struct std::basic_ostream<char>* r99 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r97, c98);
  goto bb16;
bb16:
  int t100 = j27;
  int u101 = ++t100;
  j27 = u101;
  goto bb14;
bb17:
  goto bb18;
bb18:
  struct std::basic_ostream<char>* g102 = &_ZSt4cout;
  char* cast103 = (char*)_str_10;
  struct std::basic_ostream<char>* r104 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g102, cast103);
  goto bb19;
bb19:
  int c105 = 0;
  offset228 = c105;
  goto bb20;
bb20:
  int t106 = offset228;
  int c107 = 4;
  _Bool c108 = (t106 < c107) ? 1 : 0;
  if (c108) goto bb21; else goto bb23;
bb21:
  struct std::basic_ostream<char>* g109 = &_ZSt4cout;
  char* cast110 = (char*)_str_11;
  struct std::basic_ostream<char>* r111 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g109, cast110);
  int t112 = offset228;
  struct std::basic_ostream<char>* r113 = std__ostream__operator__(r111, t112);
  char* cast114 = (char*)_str_7;
  struct std::basic_ostream<char>* r115 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r113, cast114);
  int* t116 = bPtr31;
  int t117 = offset228;
  int* ptr118 = t116 + t117;
  int t119 = *ptr118;
  struct std::basic_ostream<char>* r120 = std__ostream__operator__(r115, t119);
  char c121 = 10;
  struct std::basic_ostream<char>* r122 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r120, c121);
  goto bb22;
bb22:
  int t123 = offset228;
  int u124 = ++t123;
  offset228 = u124;
  goto bb20;
bb23:
  goto bb24;
bb24:
  int c125 = 0;
  __retval29 = c125;
  int t126 = __retval29;
  return t126;
}

