// Struct definitions (auto-parsed)
struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> { int* _M_current; };
struct __locale_struct { unsigned char __placeholder; };
struct std::_UninitDestroyGuard<int *> { int* _M_first; int** _M_cur; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl { struct std3A3A_Vector_base3Cint2C_std3A3Aallocator3Cint3E3E3A3A_Vector_impl_data __field0; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std::__new_allocator<int> { unsigned char __field0; };
struct std::allocator<int> { unsigned char __field0; };
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
struct std::vector<int> { struct std3A3A_Vector_base3Cint2C_std3A3Aallocator3Cint3E3E __field0; };
struct std::_Vector_base<int, std::allocator<int>> { struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl _M_impl; };

char _str[6] = "x==10";
char _str_1[105] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm_swap-c++03/main.cpp";
char _str_2[11] = "int main()";
char _str_3[6] = "y==20";
char _str_4[6] = "x==20";
char _str_5[6] = "y==10";
char _str_12[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char _str_13[93];
char _str_14[104];
struct std::basic_ostream<char> _ZSt4cout;
char _str_6[16];
char _str_7[2] = " ";
char _str_8[49];
char _str_9[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char _str_10[140];
char _str_11[9] = "__n >= 0";
// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

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
  struct std::__new_allocator<int>* base17 = (struct std::__new_allocator<int>*)((char *)t16 + 0);
  _ZNSt15__new_allocatorIiEC2Ev(base17);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2EmRKiRKS0_
void std__vector_int__std__allocator_int_____vector(struct std::vector<int>* v18, unsigned long long v19, int* v20, struct std::allocator<int>* v21) {
  void* v22;
  unsigned int v23;
bb24:
  struct std::vector<int>* this30;
  unsigned long long __n31;
  int* __value32;
  struct std::allocator<int>* __a33;
  this30 = v18;
  __n31 = v19;
  __value32 = v20;
  __a33 = v21;
  struct std::vector<int>* t34 = this30;
  struct std::_Vector_base<int, std::allocator<int>>* base35 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t34 + 0);
  unsigned long long t36 = __n31;
  struct std::allocator<int>* t37 = __a33;
  unsigned long long r38 = std__vector_int__std__allocator_int______S_check_init_len(t36, t37);
  struct std::allocator<int>* t39 = __a33;
  std___Vector_base_int__std__allocator_int______Vector_base(base35, r38, t39);
  unsigned long long t40 = __n31;
  int* t41 = __value32;
  goto bb25;
bb25:
