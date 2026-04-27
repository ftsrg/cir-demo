// Struct definitions (auto-parsed)
struct __gnu_cxx::__normal_iterator<double *, std::vector<double>> { double* _M_current; };
struct __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(double, double)> { void* _M_comp; };
struct __gnu_cxx::__ops::_Iter_comp_val<bool (*)(double, double)> { void* _M_comp; };
struct __gnu_cxx::__ops::_Val_comp_iter<bool (*)(double, double)> { void* _M_comp; };
struct std::_Temporary_buffer<__gnu_cxx::__normal_iterator<double *, std::vector<double>>, double>::_Impl { long long _M_len; double* _M_buffer; };
struct std::_Vector_base<double, std::allocator<double>>::_Vector_impl { unsigned char __placeholder; };
struct std::_Vector_base<double, std::allocator<double>>::_Vector_impl_data { double* _M_finish; double* _M_start; double* _M_end_of_storage; };
struct std::__new_allocator<double> { unsigned char __placeholder; };
struct std::__pair_base<double *, long> { unsigned char __placeholder; };
struct std::allocator<double> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::forward_iterator_tag { unsigned char __placeholder; };
struct std::input_iterator_tag { unsigned char __placeholder; };
struct std::nothrow_t { unsigned char __placeholder; };
struct std::pair<double *, long> { long long second; double* first; };
struct std::random_access_iterator_tag { unsigned char __placeholder; };
struct std::vector<double> { unsigned char __placeholder; };
struct std::vector<double>::_Guard_alloc { double* _M_storage; unsigned long long _M_len; struct std::_Vector_base<double, std::allocator<double>>* _M_vect; };
struct std::_Temporary_buffer<__gnu_cxx::__normal_iterator<double *, std::vector<double>>, double> { long long _M_original_len; struct std::_Temporary_buffer<__gnu_cxx::__normal_iterator<double *, std::vector<double>>, double>::_Impl _M_impl; };
struct std::_Vector_base<double, std::allocator<double>> { struct std::_Vector_base<double, std::allocator<double>>::_Vector_impl _M_impl; };

double __const_main_mydoubles[5];
char _str_5[49];
struct std::basic_ostream<char> _ZSt4cout;
char _str[27];
char _str_6[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char _str_7[101];
char _str_8[19] = "__n < this->size()";
char _str_1[20] = "myvector[0] != 1.41";
char _str_2[97] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm100/main.cpp";
char _str_3[11] = "int main()";
char _str_4[2] = " ";
// function: _Z15compare_as_intsdd
_Bool compare_as_ints(double v0, double v1) {
bb2:
  double i3;
  double j4;
  _Bool __retval5;
  i3 = v0;
  j4 = v1;
  double t6 = i3;
  int cast7 = (int)t6;
  double t8 = j4;
  int cast9 = (int)t8;
  _Bool c10 = (cast7 < cast9) ? 1 : 0;
  __retval5 = c10;
  _Bool t11 = __retval5;
  return t11;
}

// function: _ZNSt6vectorIdSaIdEEC2Ev
void std__vector_double__std__allocator_double_____vector(struct std::vector<double>* v12) {
bb13:
  struct std::vector<double>* this14;
  this14 = v12;
  struct std::vector<double>* t15 = this14;
