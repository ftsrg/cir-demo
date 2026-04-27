// Struct definitions (auto-parsed)
struct __gnu_cxx::__normal_iterator<char *, std::vector<char>> { char* _M_current; };
struct __locale_struct { unsigned char __placeholder; };
struct std::_UninitDestroyGuard<char *> { char* _M_first; char** _M_cur; };
struct std::_Vector_base<char, std::allocator<char>>::_Vector_impl { struct std3A3A_Vector_base3Cchar2C_std3A3Aallocator3Cchar3E3E3A3A_Vector_impl_data __field0; };
struct std::_Vector_base<char, std::allocator<char>>::_Vector_impl_data { char* _M_start; char* _M_finish; char* _M_end_of_storage; };
struct std::__new_allocator<char> { unsigned char __field0; };
struct std::allocator<char> { unsigned char __field0; };
struct std::basic_ios<char> { struct std3A3Aios_base __field0; char __field2; _Bool __field3; };
struct std::basic_ostream<char> { struct std3A3Abasic_ios3Cchar3E __field1; };
struct std::basic_streambuf<char> { struct std3A3Alocale __field7; };
struct std::ctype<char> { struct std3A3Alocale3A3Afacet2Ebase __field0; _Bool __field3; char __field8; char __field11; };
struct std::forward_iterator_tag { unsigned char __field0; };
struct std::input_iterator_tag { unsigned char __field0; };
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
struct std::vector<char> { struct std3A3A_Vector_base3Cchar2C_std3A3Aallocator3Cchar3E3E __field0; };
struct std::_Vector_base<char, std::allocator<char>> { struct std::_Vector_base<char, std::allocator<char>>::_Vector_impl _M_impl; };

int __const_main_match[3];
int __const_main_mychars[6];
struct std::basic_ostream<char> _ZSt4cout;
char _str[17];
char _str_1[11] = "*it != 'a'";
char _str_2[96] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm68/main.cpp";
char _str_3[11] = "int main()";
char _str_4[49];
// function: tolower
int tolower(int);

// function: _Z21comp_case_insensitivecc
_Bool comp_case_insensitive(char v0, char v1) {
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
  _Bool c12 = (r8 == r11) ? 1 : 0;
  __retval5 = c12;
  _Bool t13 = __retval5;
  return t13;
}

// function: _ZNSaIcEC2Ev
void _ZNSaIcEC2Ev(struct std::allocator<char>* v14) {
bb15:
  struct std::allocator<char>* this16;
  this16 = v14;
  struct std::allocator<char>* t17 = this16;
  struct std::__new_allocator<char>* base18 = (struct std::__new_allocator<char>*)((char *)t17 + 0);
  _ZNSt15__new_allocatorIcEC2Ev(base18);
  return;
}

// function: _ZNSt6vectorIcSaIcEEC2IPivEET_S4_RKS0_
void std__vector_char__std__allocator_char_____vector_int___void_(struct std::vector<char>* v19, int* v20, int* v21, struct std::allocator<char>* v22) {
  void* v23;
  unsigned int v24;
  void* v25;
  unsigned int v26;
bb27:
  struct std::forward_iterator_tag agg.tmp040;
  struct std::random_access_iterator_tag ref.tmp041;
  struct std::vector<char>* this42;
  int* __first43;
  int* __last44;
  struct std::allocator<char>* __a45;
  this42 = v19;
  __first43 = v20;
  __last44 = v21;
  __a45 = v22;
  struct std::vector<char>* t46 = this42;
  struct std::_Vector_base<char, std::allocator<char>>* base47 = (struct std::_Vector_base<char, std::allocator<char>>*)((char *)t46 + 0);
  struct std::allocator<char>* t48 = __a45;
  std___Vector_base_char__std__allocator_char______Vector_base(base47, t48);
  goto bb28;
bb28:
  int* t49 = __first43;
  int* t50 = __last44;
  goto bb29;
bb29:
