// Struct definitions (auto-parsed)
struct __gnu_cxx::__normal_iterator<const int *, std::vector<int>> { int* _M_current; };
struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> { int* _M_current; };
struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)> { void* _M_comp; };
struct __gnu_cxx::__ops::_Iter_equal_to_iter { unsigned char __placeholder; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl { unsigned char __placeholder; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data { int* _M_finish; int* _M_start; int* _M_end_of_storage; };
struct std::__new_allocator<int> { unsigned char __placeholder; };
struct std::__pair_base<__gnu_cxx::__normal_iterator<int *, std::vector<int>>, int *> { unsigned char __placeholder; };
struct std::allocator<int> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::pair<__gnu_cxx::__normal_iterator<int *, std::vector<int>>, int *> { struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> first; int* second; };
struct std::vector<int> { unsigned char __placeholder; };
struct std::vector<int>::_Guard_alloc { int* _M_storage; unsigned long long _M_len; struct std::_Vector_base<int, std::allocator<int>>* _M_vect; };
struct std::_Vector_base<int, std::allocator<int>> { struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl _M_impl; };

char _str_7[26];
char _str_8[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char _str_9[77];
char _str_10[15] = "!this->empty()";
struct std::basic_ostream<char> _ZSt4cout;
char _str[29];
char _str_1[6] = " and ";
char _str_2[20] = "*mypair.first == 40";
char _str_3[96] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm72/main.cpp";
char _str_4[11] = "int main()";
char _str_5[22] = "*mypair.second != 320";
char _str_6[30];
// function: _Z11mypredicateii
_Bool mypredicate(int v0, int v1) {
bb2:
  int i3;
  int j4;
  _Bool __retval5;
  i3 = v0;
  j4 = v1;
  int t6 = i3;
  int t7 = j4;
  _Bool c8 = (t6 == t7) ? 1 : 0;
  __retval5 = c8;
  _Bool t9 = __retval5;
  return t9;
}

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector(struct std::vector<int>* v10) {
bb11:
  struct std::vector<int>* this12;
  this12 = v10;
  struct std::vector<int>* t13 = this12;
