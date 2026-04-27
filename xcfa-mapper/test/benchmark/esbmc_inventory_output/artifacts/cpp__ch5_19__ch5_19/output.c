// Struct definitions (auto-parsed)
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

void* __const_main_f[3];
char _str_2[13] = "You entered ";
char _str_3[27] = " so function1 was called\\0A\\0A";
char _str_4[27] = " so function2 was called\\0A\\0A";
char _str_5[27] = " so function3 was called\\0A\\0A";
struct std::basic_ostream<char> _ZSt4cout;
char _str[43];
struct std::basic_istream<char> _ZSt3cin;
char _str_1[29] = "Program execution completed.";
// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _Z9function1i
void function1(int v0) {
bb1:
  int a2;
  a2 = v0;
  struct std::basic_ostream<char>* g3 = &_ZSt4cout;
  char* cast4 = (char*)_str_2;
  struct std::basic_ostream<char>* r5 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g3, cast4);
  int t6 = a2;
  struct std::basic_ostream<char>* r7 = std__ostream__operator__(r5, t6);
  char* cast8 = (char*)_str_3;
  struct std::basic_ostream<char>* r9 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r7, cast8);
  return;
}

// function: _Z9function2i
void function2(int v10) {
bb11:
  int b12;
  b12 = v10;
  struct std::basic_ostream<char>* g13 = &_ZSt4cout;
  char* cast14 = (char*)_str_2;
  struct std::basic_ostream<char>* r15 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g13, cast14);
  int t16 = b12;
  struct std::basic_ostream<char>* r17 = std__ostream__operator__(r15, t16);
  char* cast18 = (char*)_str_4;
  struct std::basic_ostream<char>* r19 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r17, cast18);
  return;
}

// function: _Z9function3i
void function3(int v20) {
bb21:
  int c22;
  c22 = v20;
  struct std::basic_ostream<char>* g23 = &_ZSt4cout;
  char* cast24 = (char*)_str_2;
  struct std::basic_ostream<char>* r25 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g23, cast24);
  int t26 = c22;
  struct std::basic_ostream<char>* r27 = std__ostream__operator__(r25, t26);
  char* cast28 = (char*)_str_5;
  struct std::basic_ostream<char>* r29 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r27, cast28);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSirsERi
struct std::basic_istream<char>* std__istream__operator__(struct std::basic_istream<char>*, int*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
  _Bool v30;
  _Bool v31;
bb32:
  int __retval46;
  int f47[3];
  int choice48;
  // array copy
  for (int i = 0; i < 3; ++i) { __const_main_f[i] = f47[i]; }
  struct std::basic_ostream<char>* g49 = &_ZSt4cout;
  char* cast50 = (char*)_str;
  struct std::basic_ostream<char>* r51 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g49, cast50);
  struct std::basic_istream<char>* g52 = &_ZSt3cin;
  struct std::basic_istream<char>* r53 = std__istream__operator__(g52, &choice48);
  goto bb33;
bb33:
  goto bb34;
bb34:
  int t54 = choice48;
  int c55 = 0;
  _Bool c56 = (t54 >= c55) ? 1 : 0;
  if (c56) goto bb35; else goto bb39;
bb35:
  int t57 = choice48;
  int c58 = 3;
  _Bool c59 = (t57 < c58) ? 1 : 0;
  if (c59) goto bb36; else goto bb37;
bb36:
  _Bool c60 = 1;
  v30 = c60;
  goto bb38;
bb37:
  _Bool c61 = 0;
  v30 = c61;
  goto bb38;
bb38:
  v31 = v30;
  goto bb40;
bb39:
  _Bool c62 = 0;
  v31 = c62;
  goto bb40;
bb40:
  if (v31) goto bb41; else goto bb44;
bb41:
  goto bb42;
bb42:
  int t63 = choice48;
  void* t64 = f47[t63];
  int t65 = choice48;
  ((void (*)())t64)(t65);
  struct std::basic_ostream<char>* g66 = &_ZSt4cout;
  char* cast67 = (char*)_str;
  struct std::basic_ostream<char>* r68 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g66, cast67);
  struct std::basic_istream<char>* g69 = &_ZSt3cin;
  struct std::basic_istream<char>* r70 = std__istream__operator__(g69, &choice48);
  goto bb43;
bb43:
  goto bb34;
bb44:
  goto bb45;
bb45:
  struct std::basic_ostream<char>* g71 = &_ZSt4cout;
  char* cast72 = (char*)_str_1;
  struct std::basic_ostream<char>* r73 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g71, cast72);
  void* g74 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r75 = std__ostream__operator___std__ostream_____(r73, g74);
  int c76 = 0;
  __retval46 = c76;
  int t77 = __retval46;
  return t77;
}

