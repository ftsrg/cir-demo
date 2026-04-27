// Struct definitions (auto-parsed)
struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> { int* _M_current; };
struct __gnu_cxx::__ops::_Iter_less_val { unsigned char __field0; };
struct __locale_struct { unsigned char __placeholder; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl { struct std3A3A_Vector_base3Cint2C_std3A3Aallocator3Cint3E3E3A3A_Vector_impl_data __field0; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data { int* _M_finish; int* _M_start; int* _M_end_of_storage; };
struct std::__new_allocator<int> { unsigned char __field0; };
struct std::allocator<int> { unsigned char __field0; };
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
struct std::num_get<char> { struct std3A3Alocale3A3Afacet2Ebase __field0; };
struct std::num_put<char> { struct std3A3Alocale3A3Afacet2Ebase __field0; };
struct std::random_access_iterator_tag { unsigned char __field0; };
struct std::vector<int> { struct std3A3A_Vector_base3Cint2C_std3A3Aallocator3Cint3E3E __field0; };
struct std::vector<int>::_Guard_alloc { int* _M_storage; unsigned long long _M_len; struct std::_Vector_base<int, std::allocator<int>>* _M_vect; };
struct std::_Vector_base<int, std::allocator<int>> { struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl _M_impl; };

int __const_main_myints1[12];
int __const_main_myints[12];
struct std::basic_ostream<char> _ZSt4cout;
char _str[20] = "looking for a 3... ";
char _str_1[39] = "!binary_search (v.begin(), v.end(), 3)";
char _str_2[97] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm107/main.cpp";
char _str_3[11] = "int main()";
char _str_4[49];
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
  struct std::__new_allocator<int>* base14 = (struct std::__new_allocator<int>*)((char *)t13 + 0);
  _ZNSt15__new_allocatorIiEC2Ev(base14);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2IPivEET_S4_RKS0_
void std__vector_int__std__allocator_int_____vector_int___void_(struct std::vector<int>* v15, int* v16, int* v17, struct std::allocator<int>* v18) {
  void* v19;
  unsigned int v20;
  void* v21;
  unsigned int v22;
bb23:
  struct std::forward_iterator_tag agg.tmp036;
  struct std::random_access_iterator_tag ref.tmp037;
  struct std::vector<int>* this38;
  int* __first39;
  int* __last40;
  struct std::allocator<int>* __a41;
  this38 = v15;
  __first39 = v16;
  __last40 = v17;
  __a41 = v18;
  struct std::vector<int>* t42 = this38;
  struct std::_Vector_base<int, std::allocator<int>>* base43 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t42 + 0);
  struct std::allocator<int>* t44 = __a41;
  std___Vector_base_int__std__allocator_int______Vector_base(base43, t44);
  goto bb24;
bb24:
  int* t45 = __first39;
  int* t46 = __last40;
  goto bb25;
bb25:
