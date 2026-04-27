// Struct definitions (auto-parsed)
struct __gnu_cxx::__ops::_Iter_equals_val<const int> { int* _M_value; };
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

int __const_main_myints[8];
char _str[16] = "myints[0] == 10";
char _str_1[96] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm27/main.cpp";
char _str_2[11] = "int main()";
char _str_3[16] = "myints[1] == 30";
char _str_4[16] = "myints[2] == 30";
char _str_5[16] = "myints[3] == 10";
char _str_6[16] = "myints[4] == 10";
struct std::basic_ostream<char> _ZSt4cout;
char _str_7[16];
char _str_8[2] = " ";
// function: _ZSt9__find_ifIPiN9__gnu_cxx5__ops16_Iter_equals_valIKiEEET_S6_S6_T0_
int* int__std____find_if_int_____gnu_cxx____ops___Iter_equals_val_int_const___(int* v0, int* v1, struct __gnu_cxx::__ops::_Iter_equals_val<const int> v2) {
  _Bool v3;
  _Bool v4;
bb5:
  int* __first17;
  int* __last18;
  struct __gnu_cxx::__ops::_Iter_equals_val<const int> __pred19;
  int* __retval20;
  __first17 = v0;
  __last18 = v1;
  __pred19 = v2;
  goto bb6;
bb6:
  goto bb7;
bb7:
  int* t21 = __first17;
  int* t22 = __last18;
  _Bool c23 = (t21 != t22) ? 1 : 0;
  if (c23) goto bb8; else goto bb12;
bb8:
  int* t24 = __first17;
  _Bool r25 = bool___gnu_cxx____ops___Iter_equals_val_int_const___operator___int__(&__pred19, t24);
  _Bool u26 = !r25;
  if (u26) goto bb9; else goto bb10;
bb9:
  _Bool c27 = 1;
  v3 = c27;
  goto bb11;
bb10:
  _Bool c28 = 0;
  v3 = c28;
  goto bb11;
bb11:
  v4 = v3;
  goto bb13;
bb12:
  _Bool c29 = 0;
  v4 = c29;
  goto bb13;
bb13:
  if (v4) goto bb14; else goto bb15;
bb14:
  int* t30 = __first17;
  int c31 = 1;
  int* ptr32 = t30 + c31;
  __first17 = ptr32;
  goto bb7;
bb15:
  goto bb16;
bb16:
  int* t33 = __first17;
  __retval20 = t33;
  int* t34 = __retval20;
  return t34;
}

// function: _ZN9__gnu_cxx5__ops16_Iter_equals_valIKiEC2ERKS3_
void _ZN9__gnu_cxx5__ops16_Iter_equals_valIKiEC2ERKS3_(struct __gnu_cxx::__ops::_Iter_equals_val<const int>* v35, struct __gnu_cxx::__ops::_Iter_equals_val<const int>* v36) {
bb37:
  struct __gnu_cxx::__ops::_Iter_equals_val<const int>* this38;
