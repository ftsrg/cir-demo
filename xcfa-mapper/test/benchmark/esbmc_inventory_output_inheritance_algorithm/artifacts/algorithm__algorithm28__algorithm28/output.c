// Struct definitions (auto-parsed)
struct __gnu_cxx::__ops::_Iter_pred<bool (*)(int)> { void* _M_pred; };
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

int __const_main_myints[9];
char _str[15] = "myints[0] == 2";
char _str_1[96] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm28/main.cpp";
char _str_2[11] = "int main()";
char _str_3[15] = "myints[1] == 4";
char _str_4[15] = "myints[2] == 6";
char _str_5[15] = "myints[3] == 8";
struct std::basic_ostream<char> _ZSt4cout;
char _str_6[16];
char _str_7[2] = " ";
// function: _Z5IsOddi
_Bool IsOdd(int v0) {
bb1:
  int i2;
  _Bool __retval3;
  i2 = v0;
  int t4 = i2;
  int c5 = 2;
  int b6 = t4 % c5;
  int c7 = 1;
  _Bool c8 = (b6 == c7) ? 1 : 0;
  __retval3 = c8;
  _Bool t9 = __retval3;
  return t9;
}

// function: _ZSt9__find_ifIPiN9__gnu_cxx5__ops10_Iter_predIPFbiEEEET_S7_S7_T0_
int* int__std____find_if_int_____gnu_cxx____ops___Iter_pred_bool_____int_____int___int_____gnu_cxx____ops___Iter_pred_bool____(int* v10, int* v11, struct __gnu_cxx::__ops::_Iter_pred<bool (*)(int)> v12) {
  _Bool v13;
  _Bool v14;
bb15:
  int* __first27;
  int* __last28;
  struct __gnu_cxx::__ops::_Iter_pred<bool (*)(int)> __pred29;
  int* __retval30;
  __first27 = v10;
  __last28 = v11;
  __pred29 = v12;
  goto bb16;
bb16:
  goto bb17;
bb17:
  int* t31 = __first27;
  int* t32 = __last28;
  _Bool c33 = (t31 != t32) ? 1 : 0;
  if (c33) goto bb18; else goto bb22;
bb18:
  int* t34 = __first27;
  _Bool r35 = bool___gnu_cxx____ops___Iter_pred_bool_____int____operator___int__(&__pred29, t34);
  _Bool u36 = !r35;
  if (u36) goto bb19; else goto bb20;
bb19:
  _Bool c37 = 1;
  v13 = c37;
  goto bb21;
bb20:
  _Bool c38 = 0;
  v13 = c38;
  goto bb21;
bb21:
  v14 = v13;
  goto bb23;
bb22:
  _Bool c39 = 0;
  v14 = c39;
  goto bb23;
bb23:
  if (v14) goto bb24; else goto bb25;
bb24:
  int* t40 = __first27;
  int c41 = 1;
  int* ptr42 = t40 + c41;
  __first27 = ptr42;
  goto bb17;
bb25:
  goto bb26;
bb26:
  int* t43 = __first27;
  __retval30 = t43;
  int* t44 = __retval30;
  return t44;
}

// function: _ZN9__gnu_cxx5__ops10_Iter_predIPFbiEEC2ERKS4_
void __gnu_cxx____ops___Iter_pred_bool_____int_____Iter_pred___gnu_cxx____ops___Iter_pred_bool____(struct __gnu_cxx::__ops::_Iter_pred<bool (*)(int)>* v45, struct __gnu_cxx::__ops::_Iter_pred<bool (*)(int)>* v46) {
bb47:
  struct __gnu_cxx::__ops::_Iter_pred<bool (*)(int)>* this48;
