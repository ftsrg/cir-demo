// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

int _ZZ14useStaticLocalvE1x = 50;
int x = 1;
struct std::basic_ostream<char> _ZSt4cout;
char _str[34] = "local x in main's outer scope is ";
char _str_1[34] = "local x in main's inner scope is ";
char _str_3[12] = "local x is ";
char _str_4[22] = " on entering useLocal";
char _str_5[21] = " on exiting useLocal";
char _str_6[19] = "local static x is ";
char _str_7[28] = " on entering useStaticLocal";
char _str_8[27] = " on exiting useStaticLocal";
char _str_9[13] = "global x is ";
char _str_10[23] = " on entering useGlobal";
char _str_11[22] = " on exiting useGlobal";
char _str_2[21] = "\\0Alocal x in main is ";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _Z8useLocalv
void useLocal() {
bb0:
  int x1;
  int c2 = 25;
  x1 = c2;
  struct std::basic_ostream<char>* g3 = &_ZSt4cout;
  void* g4 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r5 = std__ostream__operator___std__ostream_____(g3, g4);
  char* cast6 = (char*)_str_3;
  struct std::basic_ostream<char>* r7 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r5, cast6);
  int t8 = x1;
  struct std::basic_ostream<char>* r9 = std__ostream__operator__(r7, t8);
  char* cast10 = (char*)_str_4;
  struct std::basic_ostream<char>* r11 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r9, cast10);
  void* g12 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r13 = std__ostream__operator___std__ostream_____(r11, g12);
  int t14 = x1;
  int u15 = ++t14;
  x1 = u15;
  struct std::basic_ostream<char>* g16 = &_ZSt4cout;
  char* cast17 = (char*)_str_3;
  struct std::basic_ostream<char>* r18 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g16, cast17);
  int t19 = x1;
  struct std::basic_ostream<char>* r20 = std__ostream__operator__(r18, t19);
  char* cast21 = (char*)_str_5;
  struct std::basic_ostream<char>* r22 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r20, cast21);
  void* g23 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r24 = std__ostream__operator___std__ostream_____(r22, g23);
  return;
}

// function: _Z14useStaticLocalv
void useStaticLocal() {
bb25:
  int* g26 = &_ZZ14useStaticLocalvE1x;
  struct std::basic_ostream<char>* g27 = &_ZSt4cout;
  void* g28 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r29 = std__ostream__operator___std__ostream_____(g27, g28);
  char* cast30 = (char*)_str_6;
  struct std::basic_ostream<char>* r31 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r29, cast30);
  int t32 = *g26;
  struct std::basic_ostream<char>* r33 = std__ostream__operator__(r31, t32);
  char* cast34 = (char*)_str_7;
  struct std::basic_ostream<char>* r35 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r33, cast34);
  void* g36 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r37 = std__ostream__operator___std__ostream_____(r35, g36);
  int t38 = *g26;
  int u39 = ++t38;
  *g26 = u39;
  struct std::basic_ostream<char>* g40 = &_ZSt4cout;
  char* cast41 = (char*)_str_6;
  struct std::basic_ostream<char>* r42 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g40, cast41);
  int t43 = *g26;
  struct std::basic_ostream<char>* r44 = std__ostream__operator__(r42, t43);
  char* cast45 = (char*)_str_8;
  struct std::basic_ostream<char>* r46 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r44, cast45);
  void* g47 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r48 = std__ostream__operator___std__ostream_____(r46, g47);
  return;
}

// function: _Z9useGlobalv
void useGlobal() {
bb49:
  struct std::basic_ostream<char>* g50 = &_ZSt4cout;
  void* g51 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r52 = std__ostream__operator___std__ostream_____(g50, g51);
  char* cast53 = (char*)_str_9;
  struct std::basic_ostream<char>* r54 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r52, cast53);
  int* g55 = &x;
  int t56 = *g55;
  struct std::basic_ostream<char>* r57 = std__ostream__operator__(r54, t56);
  char* cast58 = (char*)_str_10;
  struct std::basic_ostream<char>* r59 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r57, cast58);
  void* g60 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r61 = std__ostream__operator___std__ostream_____(r59, g60);
  int c62 = 10;
  int* g63 = &x;
  int t64 = *g63;
  int b65 = t64 * c62;
  *g63 = b65;
  struct std::basic_ostream<char>* g66 = &_ZSt4cout;
  char* cast67 = (char*)_str_9;
  struct std::basic_ostream<char>* r68 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g66, cast67);
  int* g69 = &x;
  int t70 = *g69;
  struct std::basic_ostream<char>* r71 = std__ostream__operator__(r68, t70);
  char* cast72 = (char*)_str_11;
  struct std::basic_ostream<char>* r73 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r71, cast72);
  void* g74 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r75 = std__ostream__operator___std__ostream_____(r73, g74);
  return;
}

// function: main
int main() {
bb76:
  int x79;
  int __retval80;
  int x81;
  int c82 = 5;
  x81 = c82;
  struct std::basic_ostream<char>* g83 = &_ZSt4cout;
  char* cast84 = (char*)_str;
  struct std::basic_ostream<char>* r85 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g83, cast84);
  int t86 = x81;
  struct std::basic_ostream<char>* r87 = std__ostream__operator__(r85, t86);
  void* g88 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r89 = std__ostream__operator___std__ostream_____(r87, g88);
  goto bb77;
bb77:
  int c90 = 7;
  x79 = c90;
  struct std::basic_ostream<char>* g91 = &_ZSt4cout;
  char* cast92 = (char*)_str_1;
  struct std::basic_ostream<char>* r93 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g91, cast92);
  int t94 = x79;
  struct std::basic_ostream<char>* r95 = std__ostream__operator__(r93, t94);
  void* g96 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r97 = std__ostream__operator___std__ostream_____(r95, g96);
  goto bb78;
bb78:
  struct std::basic_ostream<char>* g98 = &_ZSt4cout;
  char* cast99 = (char*)_str;
  struct std::basic_ostream<char>* r100 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g98, cast99);
  int t101 = x81;
  struct std::basic_ostream<char>* r102 = std__ostream__operator__(r100, t101);
  void* g103 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r104 = std__ostream__operator___std__ostream_____(r102, g103);
  useLocal();
  useStaticLocal();
  useGlobal();
  useLocal();
  useStaticLocal();
  useGlobal();
  struct std::basic_ostream<char>* g105 = &_ZSt4cout;
  char* cast106 = (char*)_str_2;
  struct std::basic_ostream<char>* r107 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g105, cast106);
  int t108 = x81;
  struct std::basic_ostream<char>* r109 = std__ostream__operator__(r107, t108);
  void* g110 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r111 = std__ostream__operator___std__ostream_____(r109, g110);
  int c112 = 0;
  __retval80 = c112;
  int t113 = __retval80;
  return t113;
}

