// Struct definitions (auto-parsed)
struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> { int* _M_current; };
struct __gnu_cxx::__ops::_Iter_negate<bool (*)(int)> { void* _M_pred; };
struct __gnu_cxx::__ops::_Iter_pred<bool (*)(int)> { void* _M_pred; };
struct std::_Temporary_buffer<__gnu_cxx::__normal_iterator<int *, std::vector<int>>, int>::_Impl { int* _M_buffer; long long _M_len; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl { unsigned char __placeholder; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data { int* _M_finish; int* _M_start; int* _M_end_of_storage; };
struct std::__new_allocator<int> { unsigned char __placeholder; };
struct std::__pair_base<int *, long> { unsigned char __placeholder; };
struct std::allocator<int> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::nothrow_t { unsigned char __placeholder; };
struct std::pair<int *, long> { long long second; int* first; };
struct std::random_access_iterator_tag { unsigned char __placeholder; };
struct std::vector<int> { unsigned char __placeholder; };
struct std::vector<int>::_Guard_alloc { int* _M_storage; unsigned long long _M_len; struct std::_Vector_base<int, std::allocator<int>>* _M_vect; };
struct std::_Temporary_buffer<__gnu_cxx::__normal_iterator<int *, std::vector<int>>, int> { long long _M_original_len; struct std::_Temporary_buffer<__gnu_cxx::__normal_iterator<int *, std::vector<int>>, int>::_Impl _M_impl; };
struct std::_Vector_base<int, std::allocator<int>> { struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl _M_impl; };

char _str_6[26];
char _str[12] = "*bound != 2";
char _str_1[96] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm98/main.cpp";
char _str_2[11] = "int main()";
struct std::basic_ostream<char> _ZSt4cout;
char _str_3[13];
char _str_4[2] = " ";
char _str_5[15];
// function: _Z5IsOddi
_Bool IsOdd(int v0) {
bb1:
  int i2;
  _Bool __retval3;
  i2 = v0;
  int t4 = i2;
  int c5 = 2;
  int b6 = t4 % c5;
  int c7 = 1;
  _Bool c8 = (b6 == c7) ? 1 : 0;
  __retval3 = c8;
  _Bool t9 = __retval3;
  return t9;
}

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector(struct std::vector<int>* v10) {
bb11:
  struct std::vector<int>* this12;
  this12 = v10;
  struct std::vector<int>* t13 = this12;
