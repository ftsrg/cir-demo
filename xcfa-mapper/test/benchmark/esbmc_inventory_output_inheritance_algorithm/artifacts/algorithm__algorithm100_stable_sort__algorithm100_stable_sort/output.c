// Struct definitions (auto-parsed)
struct __gnu_cxx::__normal_iterator<double *, std::vector<double>> { double* _M_current; };
struct __gnu_cxx::__ops::_Iter_less_iter { unsigned char __field0; };
struct __gnu_cxx::__ops::_Iter_less_val { unsigned char __field0; };
struct __gnu_cxx::__ops::_Val_less_iter { unsigned char __field0; };
struct __locale_struct { unsigned char __placeholder; };
struct std::_Temporary_buffer<__gnu_cxx::__normal_iterator<double *, std::vector<double>>, double>::_Impl { long long _M_len; double* _M_buffer; };
struct std::_Vector_base<double, std::allocator<double>>::_Vector_impl { struct std3A3A_Vector_base3Cdouble2C_std3A3Aallocator3Cdouble3E3E3A3A_Vector_impl_data __field0; };
struct std::_Vector_base<double, std::allocator<double>>::_Vector_impl_data { double* _M_finish; double* _M_start; double* _M_end_of_storage; };
struct std::__new_allocator<double> { unsigned char __field0; };
struct std::__pair_base<double *, long> { unsigned char __field0; };
struct std::allocator<double> { unsigned char __field0; };
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
struct std::nothrow_t { unsigned char __field0; };
struct std::num_get<char> { struct std3A3Alocale3A3Afacet2Ebase __field0; };
struct std::num_put<char> { struct std3A3Alocale3A3Afacet2Ebase __field0; };
struct std::pair<double *, long> { long long second; double* first; };
struct std::random_access_iterator_tag { unsigned char __field0; };
struct std::vector<double> { struct std3A3A_Vector_base3Cdouble2C_std3A3Aallocator3Cdouble3E3E __field0; };
struct std::vector<double>::_Guard_alloc { double* _M_storage; unsigned long long _M_len; struct std::_Vector_base<double, std::allocator<double>>* _M_vect; };
struct std::_Temporary_buffer<__gnu_cxx::__normal_iterator<double *, std::vector<double>>, double> { long long _M_original_len; struct std::_Temporary_buffer<__gnu_cxx::__normal_iterator<double *, std::vector<double>>, double>::_Impl _M_impl; };
struct std::_Vector_base<double, std::allocator<double>> { struct std::_Vector_base<double, std::allocator<double>>::_Vector_impl _M_impl; };

double __const_main_mydoubles[5];
char _str_5[49];
struct std::basic_ostream<char> _ZSt4cout;
char _str[26];
char _str_1[2] = " ";
char _str_6[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char _str_7[101];
char _str_8[19] = "__n < this->size()";
char _str_2[20] = "myvector[0] != 1.32";
char _str_3[109] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm100_stable_sort/main.cpp";
char _str_4[11] = "int main()";
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
  struct std::_Vector_base<double, std::allocator<double>>* base16 = (struct std::_Vector_base<double, std::allocator<double>>*)((char *)t15 + 0);
  std___Vector_base_double__std__allocator_double______Vector_base(base16);
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPdSt6vectorIdSaIdEEEC2Ev
void _ZN9__gnu_cxx17__normal_iteratorIPdSt6vectorIdSaIdEEEC2Ev(struct __gnu_cxx::__normal_iterator<double *, std::vector<double>>* v17) {
bb18:
  struct __gnu_cxx::__normal_iterator<double *, std::vector<double>>* this19;
  this19 = v17;
  struct __gnu_cxx::__normal_iterator<double *, std::vector<double>>* t20 = this19;
  double* c21 = NULL;
  t20->_M_current = c21;
  return;
}

// function: _ZNKSt6vectorIdSaIdEE4sizeEv
unsigned long long std__vector_double__std__allocator_double_____size___const(struct std::vector<double>* v22) {
bb23:
  struct std::vector<double>* this28;
  unsigned long long __retval29;
  long long __dif30;
  this28 = v22;
  struct std::vector<double>* t31 = this28;
  struct std::_Vector_base<double, std::allocator<double>>* base32 = (struct std::_Vector_base<double, std::allocator<double>>*)((char *)t31 + 0);
  struct std::_Vector_base<double, std::allocator<double>>::_Vector_impl_data* base33 = (struct std::_Vector_base<double, std::allocator<double>>::_Vector_impl_data*)((char *)base32->_M_impl + 0);
  double* t34 = base33->_M_finish;
  struct std::_Vector_base<double, std::allocator<double>>* base35 = (struct std::_Vector_base<double, std::allocator<double>>*)((char *)t31 + 0);
  struct std::_Vector_base<double, std::allocator<double>>::_Vector_impl_data* base36 = (struct std::_Vector_base<double, std::allocator<double>>::_Vector_impl_data*)((char *)base35->_M_impl + 0);
  double* t37 = base36->_M_start;
  long long diff38 = t34 - t37;
  __dif30 = diff38;
  goto bb24;
bb24:
  long long t39 = __dif30;
  int c40 = 0;
  long long cast41 = (long long)c40;
  _Bool c42 = (t39 < cast41) ? 1 : 0;
  if (c42) goto bb25; else goto bb26;
bb25:
