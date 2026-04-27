// Struct definitions (auto-parsed)
struct __gnu_cxx::__normal_iterator<char *, std::vector<char>> { char* _M_current; };
struct std::_UninitDestroyGuard<char *> { char* _M_first; char** _M_cur; };
struct std::_Vector_base<char, std::allocator<char>>::_Vector_impl { unsigned char __placeholder; };
struct std::_Vector_base<char, std::allocator<char>>::_Vector_impl_data { char* _M_start; char* _M_finish; char* _M_end_of_storage; };
struct std::__new_allocator<char> { unsigned char __placeholder; };
struct std::allocator<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::forward_iterator_tag { unsigned char __placeholder; };
struct std::input_iterator_tag { unsigned char __placeholder; };
struct std::random_access_iterator_tag { unsigned char __placeholder; };
struct std::vector<char> { unsigned char __placeholder; };
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
