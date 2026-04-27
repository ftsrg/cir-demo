// Struct definitions (auto-parsed)
struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)> { void* _M_comp; };
struct __gnu_cxx::__ops::_Iter_less_iter { unsigned char __field0; };
struct __gnu_cxx::__ops::_Iter_less_val { unsigned char __field0; };
struct __gnu_cxx::__ops::_Val_less_iter { unsigned char __field0; };
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
struct std::random_access_iterator_tag { unsigned char __field0; };

int __const_main_continent[4];
int __const_main_container[10];
struct std::basic_ostream<char> _ZSt4cout;
char _str[30] = "container includes continent!";
char _str_1[58] = "!(includes(container,container+10,continent,continent+4))";
char _str_2[103] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm110-c++03/main.cpp";
char _str_3[11] = "int main()";
char _str_4[70] = "!(includes(container,container+10,continent,continent+4, myfunction))";
// function: _Z10myfunctionii
_Bool myfunction(int v0, int v1) {
bb2:
  int i3;
  int j4;
  _Bool __retval5;
  i3 = v0;
  j4 = v1;
  int t6 = i3;
  int t7 = j4;
  _Bool c8 = (t6 < t7) ? 1 : 0;
  __retval5 = c8;
  _Bool t9 = __retval5;
  return t9;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_less_iterC2EOS1_
void _ZN9__gnu_cxx5__ops15_Iter_less_iterC2EOS1_(struct __gnu_cxx::__ops::_Iter_less_iter* v10, struct __gnu_cxx::__ops::_Iter_less_iter* v11) {
bb12:
  struct __gnu_cxx::__ops::_Iter_less_iter* this13;
