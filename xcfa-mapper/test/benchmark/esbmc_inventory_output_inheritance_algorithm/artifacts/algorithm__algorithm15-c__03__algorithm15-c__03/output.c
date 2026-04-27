// Struct definitions (auto-parsed)
struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> { int* _M_current; };
struct std::_UninitDestroyGuard<int *> { int* _M_first; int** _M_cur; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl { unsigned char __placeholder; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std::__new_allocator<int> { unsigned char __placeholder; };
struct std::allocator<int> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::vector<int> { unsigned char __placeholder; };
struct std::_Vector_base<int, std::allocator<int>> { struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl _M_impl; };

char _str_12[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char _str_13[93];
char _str_14[104];
char _str_15[92];
char _str_16[19] = "__n < this->size()";
char _str[15] = "first[0] == 10";
char _str_1[102] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm15-c++03/main.cpp";
char _str_2[11] = "int main()";
char _str_3[15] = "first[5] == 10";
char _str_4[16] = "second[0] == 20";
char _str_5[16] = "second[3] == 20";
struct std::basic_ostream<char> _ZSt4cout;
char _str_6[16];
char _str_7[2] = " ";
char _str_8[49];
char _str_9[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char _str_10[140];
char _str_11[9] = "__n >= 0";
// function: _ZSt4swapIiENSt9enable_ifIXsr6__and_ISt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS3_ESt18is_move_assignableIS3_EEE5valueEvE4typeERS3_SC_
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* v0, int* v1) {
bb2:
  int* __a3;
  int* __b4;
  int __tmp5;
  __a3 = v0;
  __b4 = v1;
  int* t6 = __a3;
  int t7 = *t6;
  __tmp5 = t7;
  int* t8 = __b4;
  int t9 = *t8;
  int* t10 = __a3;
  *t10 = t9;
  int t11 = __tmp5;
  int* t12 = __b4;
  *t12 = t11;
  return;
}

// function: _ZNSaIiEC2Ev
void _ZNSaIiEC2Ev(struct std::allocator<int>* v13) {
bb14:
  struct std::allocator<int>* this15;
  this15 = v13;
  struct std::allocator<int>* t16 = this15;
