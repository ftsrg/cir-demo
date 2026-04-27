// Struct definitions (auto-parsed)
struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> { int* _M_current; };
struct __gnu_cxx::__ops::_Iter_less_val { unsigned char __field0; };
struct __gnu_cxx::__ops::_Val_less_iter { unsigned char __field0; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl { struct std3A3A_Vector_base3Cint2C_std3A3Aallocator3Cint3E3E3A3A_Vector_impl_data __field0; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std::__new_allocator<int> { unsigned char __field0; };
struct std::allocator<int> { unsigned char __field0; };
struct std::forward_iterator_tag { unsigned char __field0; };
struct std::input_iterator_tag { unsigned char __field0; };
struct std::random_access_iterator_tag { unsigned char __field0; };
struct std::vector<int> { struct std3A3A_Vector_base3Cint2C_std3A3Aallocator3Cint3E3E __field0; };
struct std::_Vector_base<int, std::allocator<int>> { struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl _M_impl; };

int __const_main_myints[8];
char _str[10] = "*up != 30";
char _str_1[97] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm105/main.cpp";
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

// function: _ZNSt6vectorIiSaIiEEC2IPivEET_S4_RKS0_
void std__vector_int__std__allocator_int_____vector_int___void_(struct std::vector<int>* v5, int* v6, int* v7, struct std::allocator<int>* v8) {
  void* v9;
  unsigned int v10;
  void* v11;
  unsigned int v12;
bb13:
  struct std::forward_iterator_tag agg.tmp026;
  struct std::random_access_iterator_tag ref.tmp027;
  struct std::vector<int>* this28;
  int* __first29;
  int* __last30;
  struct std::allocator<int>* __a31;
  this28 = v5;
  __first29 = v6;
  __last30 = v7;
  __a31 = v8;
  struct std::vector<int>* t32 = this28;
  struct std::_Vector_base<int, std::allocator<int>>* base33 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t32 + 0);
  struct std::allocator<int>* t34 = __a31;
  std___Vector_base_int__std__allocator_int______Vector_base(base33, t34);
  goto bb14;
bb14:
  int* t35 = __first29;
  int* t36 = __last30;
  goto bb15;
bb15:
