// Struct definitions (auto-parsed)
struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(char, char)> { void* _M_comp; };
struct __gnu_cxx::__ops::_Iter_less_iter { unsigned char __field0; };
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

char __const_main_second[10] = "apartment";
char __const_main_first[6] = "Apple";
struct std::basic_ostream<char> _ZSt4cout;
char _str[39];
char _str_1[15] = " is less than ";
char _str_2[18] = " is greater than ";
char _str_3[6] = " and ";
char _str_4[17] = " are equivalent\\0A";
char _str_5[62] = "lexicographical_compare(first,first+5,second,second+9,mycomp)";
char _str_6[97] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm121/main.cpp";
char _str_7[11] = "int main()";
char _str_8[36];
// function: tolower
int tolower(int);

// function: _Z6mycompcc
_Bool mycomp(char v0, char v1) {
bb2:
  char c13;
  char c24;
  _Bool __retval5;
  c13 = v0;
  c24 = v1;
  char t6 = c13;
  int cast7 = (int)t6;
  int r8 = tolower(cast7);
  char t9 = c24;
  int cast10 = (int)t9;
  int r11 = tolower(cast10);
  _Bool c12 = (r8 < r11) ? 1 : 0;
  __retval5 = c12;
  _Bool t13 = __retval5;
  return t13;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSt8__lc_raiISt26random_access_iterator_tagS0_E10__newlast1IPcS3_EET_S4_S4_T0_S5_
char* char__std____lc_rai_std__random_access_iterator_tag__std__random_access_iterator_tag_____newlast1_char___char__(char* v14, char* v15, char* v16, char* v17) {
  char* v18;
bb19:
  char* __first123;
  char* __last124;
  char* __first225;
  char* __last226;
  char* __retval27;
  long long __diff128;
  long long __diff229;
  __first123 = v14;
  __last124 = v15;
  __first225 = v16;
  __last226 = v17;
  char* t30 = __last124;
  char* t31 = __first123;
  long long diff32 = t30 - t31;
  __diff128 = diff32;
  char* t33 = __last226;
  char* t34 = __first225;
  long long diff35 = t33 - t34;
  __diff229 = diff35;
  long long t36 = __diff229;
  long long t37 = __diff128;
  _Bool c38 = (t36 < t37) ? 1 : 0;
  if (c38) goto bb20; else goto bb21;
bb20:
  char* t39 = __first123;
  long long t40 = __diff229;
  char* ptr41 = t39 + t40;
  v18 = ptr41;
  goto bb22;
bb21:
  char* t42 = __last124;
  v18 = t42;
  goto bb22;
bb22:
  __retval27 = v18;
  char* t43 = __retval27;
  return t43;
}

// function: _ZNSt8__lc_raiISt26random_access_iterator_tagS0_E6__cnd2IPcEEbT_S4_
_Bool bool_std____lc_rai_std__random_access_iterator_tag__std__random_access_iterator_tag_____cnd2_char__(char* v44, char* v45) {
bb46:
