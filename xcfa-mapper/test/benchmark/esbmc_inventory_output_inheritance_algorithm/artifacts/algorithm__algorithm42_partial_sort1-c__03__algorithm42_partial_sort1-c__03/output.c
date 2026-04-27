// Struct definitions (auto-parsed)
struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> { int* _M_current; };
struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(int, int)> { void* _M_comp; };
struct __gnu_cxx::__ops::_Iter_comp_val<bool (*)(int, int)> { void* _M_comp; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl { unsigned char __placeholder; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std::__new_allocator<int> { unsigned char __placeholder; };
struct std::allocator<int> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::forward_iterator_tag { unsigned char __placeholder; };
struct std::input_iterator_tag { unsigned char __placeholder; };
struct std::random_access_iterator_tag { unsigned char __placeholder; };
struct std::vector<int> { unsigned char __placeholder; };
struct std::_Vector_base<int, std::allocator<int>> { struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl _M_impl; };

int __const_main_myints[9];
char _str_14[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char _str_15[92];
char _str_16[19] = "__n < this->size()";
char _str[17] = "myvector[0] == 1";
char _str_1[116] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm42_partial_sort1-c++03/main.cpp";
char _str_2[11] = "int main()";
char _str_3[17] = "myvector[1] == 2";
char _str_4[17] = "myvector[2] == 3";
char _str_5[17] = "myvector[3] == 4";
char _str_6[16] = "myvector[4] > 4";
char _str_7[16] = "myvector[5] > 4";
char _str_8[16] = "myvector[6] > 4";
char _str_9[16] = "myvector[7] > 4";
char _str_10[16] = "myvector[8] > 4";
struct std::basic_ostream<char> _ZSt4cout;
char _str_11[19];
char _str_12[2] = " ";
char _str_13[49];
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

// function: _ZNSaIiEC2Ev
void _ZNSaIiEC2Ev(struct std::allocator<int>* v10) {
bb11:
  struct std::allocator<int>* this12;
  this12 = v10;
  struct std::allocator<int>* t13 = this12;
