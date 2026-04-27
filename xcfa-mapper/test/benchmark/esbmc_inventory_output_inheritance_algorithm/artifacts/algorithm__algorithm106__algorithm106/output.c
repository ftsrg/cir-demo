// Struct definitions (auto-parsed)
struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> { int* _M_current; };
struct __gnu_cxx::__ops::_Iter_comp_val<bool (*)(int, int)> { void* _M_comp; };
struct __gnu_cxx::__ops::_Iter_less_val { unsigned char __placeholder; };
struct __gnu_cxx::__ops::_Val_comp_iter<bool (*)(int, int)> { void* _M_comp; };
struct __gnu_cxx::__ops::_Val_less_iter { unsigned char __placeholder; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl { unsigned char __placeholder; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data { int* _M_finish; int* _M_start; int* _M_end_of_storage; };
struct std::__new_allocator<int> { unsigned char __placeholder; };
struct std::__pair_base<__gnu_cxx::__normal_iterator<int *, std::vector<int>>, __gnu_cxx::__normal_iterator<int *, std::vector<int>>> { unsigned char __placeholder; };
struct std::allocator<int> { unsigned char __placeholder; };
struct std::forward_iterator_tag { unsigned char __placeholder; };
struct std::input_iterator_tag { unsigned char __placeholder; };
struct std::pair<__gnu_cxx::__normal_iterator<int *, std::vector<int>>, __gnu_cxx::__normal_iterator<int *, std::vector<int>>> { struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> first; struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> second; };
struct std::random_access_iterator_tag { unsigned char __placeholder; };
struct std::vector<int> { unsigned char __placeholder; };
struct std::vector<int>::_Guard_alloc { int* _M_storage; unsigned long long _M_len; struct std::_Vector_base<int, std::allocator<int>>* _M_vect; };
struct std::_Vector_base<int, std::allocator<int>> { struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl _M_impl; };

int __const_main_myints2[8];
int __const_main_myints1[8];
int __const_main_myints[8];
char _str[47] = "(*bounds.first != 20) ||(*bounds.second != 10)";
char _str_1[97] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm106/main.cpp";
char _str_2[11] = "int main()";
char _str_3[49];
// function: _Z9mygreaterii
_Bool mygreater(int v0, int v1) {
bb2:
  int i3;
  int j4;
  _Bool __retval5;
  i3 = v0;
  j4 = v1;
  int t6 = i3;
  int t7 = j4;
  _Bool c8 = (t6 > t7) ? 1 : 0;
  __retval5 = c8;
  _Bool t9 = __retval5;
  return t9;
}

// function: _ZNSaIiEC2Ev
void _ZNSaIiEC2Ev(struct std::allocator<int>* v10) {
bb11:
  struct std::allocator<int>* this12;
  this12 = v10;
  struct std::allocator<int>* t13 = this12;
