// Struct definitions (auto-parsed)
struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> { int* _M_current; };
struct __gnu_cxx::__ops::_Iter_less_iter { unsigned char __field0; };
struct __gnu_cxx::__ops::_Iter_less_val { unsigned char __field0; };
struct __gnu_cxx::__ops::_Val_less_iter { unsigned char __field0; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl { struct std3A3A_Vector_base3Cint2C_std3A3Aallocator3Cint3E3E3A3A_Vector_impl_data __field0; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std::__new_allocator<int> { unsigned char __field0; };
struct std::allocator<int> { unsigned char __field0; };
struct std::random_access_iterator_tag { unsigned char __field0; };
struct std::vector<int> { struct std3A3A_Vector_base3Cint2C_std3A3Aallocator3Cint3E3E __field0; };
struct std::_Vector_base<int, std::allocator<int>> { struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl _M_impl; };

int __const_main_second[5];
int __const_main_first[5];
char _str_4[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char _str_5[92];
char _str_6[19] = "__n < this->size()";
char _str[11] = "v[5] != 50";
char _str_1[97] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm114/main.cpp";
char _str_2[11] = "int main()";
char _str_3[49];
// function: _ZNSaIiEC2Ev
void _ZNSaIiEC2Ev(struct std::allocator<int>* v0) {
bb1:
  struct std::allocator<int>* this2;
  this2 = v0;
  struct std::allocator<int>* t3 = this2;
  struct std::__new_allocator<int>* base4 = (struct std::__new_allocator<int>*)((char *)t3 + 0);
  _ZNSt15__new_allocatorIiEC2Ev(base4);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2EmRKS0_
void std__vector_int__std__allocator_int_____vector(struct std::vector<int>* v5, unsigned long long v6, struct std::allocator<int>* v7) {
  void* v8;
  unsigned int v9;
bb10:
  struct std::vector<int>* this16;
  unsigned long long __n17;
  struct std::allocator<int>* __a18;
  this16 = v5;
  __n17 = v6;
  __a18 = v7;
  struct std::vector<int>* t19 = this16;
  struct std::_Vector_base<int, std::allocator<int>>* base20 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t19 + 0);
  unsigned long long t21 = __n17;
  struct std::allocator<int>* t22 = __a18;
  unsigned long long r23 = std__vector_int__std__allocator_int______S_check_init_len(t21, t22);
  struct std::allocator<int>* t24 = __a18;
  std___Vector_base_int__std__allocator_int______Vector_base(base20, r23, t24);
  unsigned long long t25 = __n17;
  goto bb11;
bb11:
