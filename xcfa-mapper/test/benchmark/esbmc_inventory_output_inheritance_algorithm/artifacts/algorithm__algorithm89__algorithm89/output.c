// Struct definitions (auto-parsed)
struct __locale_struct { unsigned char __placeholder; };
struct std::basic_ios<char> { struct std3A3Aios_base __field0; char __field2; _Bool __field3; };
struct std::basic_ostream<char> { struct std3A3Abasic_ios3Cchar3E __field1; };
struct std::basic_streambuf<char> { struct std3A3Alocale __field7; };
struct std::ctype<char> { struct std3A3Alocale3A3Afacet2Ebase __field0; _Bool __field3; char __field8; char __field11; };
struct std::ios_base { long long __field1; long long __field2; int __field3; int __field4; int __field5; struct std3A3Aios_base3A3A_Words __field7; int __field9; struct std3A3Alocale __field11; };
struct std::ios_base::_Callback_list { int __field2; int __field3; };
struct std::ios_base::_Words { long long __field1; };
struct std::locale { unsigned char __placeholder; };
struct std::locale::_Impl { int __field0; unsigned long long __field2; };
struct std::locale::facet { int __field1; };
struct std::locale::facet_base { int __field1; };
struct std::num_get<char> { struct std3A3Alocale3A3Afacet2Ebase __field0; };
struct std::num_put<char> { struct std3A3Alocale3A3Afacet2Ebase __field0; };

int current = 0;
char _str[16] = "myarray[1] == 1";
char _str_1[96] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm89/main.cpp";
char _str_2[11] = "int main()";
struct std::basic_ostream<char> _ZSt4cout;
char _str_3[18];
char _str_4[2] = " ";
// function: _Z12UniqueNumberv
int UniqueNumber() {
bb0:
  int __retval1;
  int* g2 = &current;
  int t3 = *g2;
  int u4 = ++t3;
  *g2 = u4;
  __retval1 = u4;
  int t5 = __retval1;
  return t5;
}

// function: _ZSt17__size_to_integeri
int std____size_to_integer(int v6) {
bb7:
  int __n8;
  int __retval9;
  __n8 = v6;
  int t10 = __n8;
  __retval9 = t10;
  int t11 = __retval9;
  return t11;
}

// function: _ZSt10generate_nIPiiPFivEET_S3_T0_T1_
int* int__std__generate_n_int___int__int________int___int__int____(int* v12, int v13, void* v14) {
bb15:
  int __niter22;
  int* __first23;
  int __n24;
  void* __gen25;
  int* __retval26;
  __first23 = v12;
  __n24 = v13;
  __gen25 = v14;
  goto bb16;
bb16:
  int t27 = __n24;
  int r28 = std____size_to_integer(t27);
  __niter22 = r28;
  goto bb17;
bb17:
  int t29 = __niter22;
  int c30 = 0;
  _Bool c31 = (t29 > c30) ? 1 : 0;
  if (c31) goto bb18; else goto bb20;
bb18:
  void* t32 = __gen25;
  int r33 = ((int (*)())t32)();
  int* t34 = __first23;
  *t34 = r33;
  goto bb19;
bb19:
  int t35 = __niter22;
  int u36 = --t35;
  __niter22 = u36;
  int* t37 = __first23;
  int c38 = 1;
  int* ptr39 = t37 + c38;
  __first23 = ptr39;
  goto bb17;
bb20:
  goto bb21;
bb21:
  int* t40 = __first23;
  __retval26 = t40;
  int* t41 = __retval26;
  return t41;
}

// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb42:
  int i52;
  int __retval53;
  int myarray54[5];
  int* cast55 = (int*)myarray54;
  int c56 = 5;
  void* g57 = &_Z12UniqueNumberv;
  int* r58 = int__std__generate_n_int___int__int________int___int__int____(cast55, c56, g57);
  int c59 = 1;
  int t60 = myarray54[c59];
  int c61 = 1;
  _Bool c62 = (t60 == c61) ? 1 : 0;
  if (c62) goto bb43; else goto bb44;
bb43:
  int c63 = 0;
  goto bb45;
bb44:
  char* cast64 = (char*)_str;
  char* c65 = _str_1;
  unsigned int c66 = 22;
  char* cast67 = (char*)_str_2;
  __assert_fail(cast64, c65, c66, cast67);
  goto bb45;
bb45:
  struct std::basic_ostream<char>* g68 = &_ZSt4cout;
  char* cast69 = (char*)_str_3;
  struct std::basic_ostream<char>* r70 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g68, cast69);
  goto bb46;
bb46:
  int c71 = 0;
  i52 = c71;
  goto bb47;
bb47:
  int t72 = i52;
  int c73 = 5;
  _Bool c74 = (t72 < c73) ? 1 : 0;
  if (c74) goto bb48; else goto bb50;
bb48:
  struct std::basic_ostream<char>* g75 = &_ZSt4cout;
  char* cast76 = (char*)_str_4;
  struct std::basic_ostream<char>* r77 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g75, cast76);
  int t78 = i52;
  int t79 = myarray54[t78];
  struct std::basic_ostream<char>* r80 = std__ostream__operator__(r77, t79);
  goto bb49;
bb49:
  int t81 = i52;
  int u82 = ++t81;
  i52 = u82;
  goto bb47;
bb50:
  goto bb51;
bb51:
  struct std::basic_ostream<char>* g83 = &_ZSt4cout;
  void* g84 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r85 = std__ostream__operator___std__ostream_____(g83, g84);
  int c86 = 0;
  __retval53 = c86;
  int t87 = __retval53;
  return t87;
}

