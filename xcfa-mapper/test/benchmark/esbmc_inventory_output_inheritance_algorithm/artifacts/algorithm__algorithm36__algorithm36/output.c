// Struct definitions (auto-parsed)
struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> { int* _M_current; };
struct __locale_struct { unsigned char __placeholder; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl { struct std3A3A_Vector_base3Cint2C_std3A3Aallocator3Cint3E3E3A3A_Vector_impl_data __field0; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data { int* _M_finish; int* _M_start; int* _M_end_of_storage; };
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
struct std::random_access_iterator_tag { unsigned char __field0; };
struct std::vector<int> { struct std3A3A_Vector_base3Cint2C_std3A3Aallocator3Cint3E3E __field0; };
struct std::vector<int>::_Guard_alloc { int* _M_storage; unsigned long long _M_len; struct std::_Vector_base<int, std::allocator<int>>* _M_vect; };
struct std::_Vector_base<int, std::allocator<int>> { struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl _M_impl; };

int __const_main_myints[7];
char _str_8[26];
char _str_9[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char _str_10[92];
char _str_11[19] = "__n < this->size()";
char _str[18] = "myvector[0] == 40";
char _str_1[96] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm36/main.cpp";
char _str_2[11] = "int main()";
char _str_3[18] = "myvector[1] == 50";
char _str_4[18] = "myvector[2] == 60";
char _str_5[18] = "myvector[3] == 70";
struct std::basic_ostream<char> _ZSt4cout;
char _str_6[19];
char _str_7[2] = " ";
// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector(struct std::vector<int>* v0) {
bb1:
  struct std::vector<int>* this2;
  this2 = v0;
  struct std::vector<int>* t3 = this2;
  struct std::_Vector_base<int, std::allocator<int>>* base4 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t3 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base(base4);
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev(struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* v5) {
bb6:
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* this7;
  this7 = v5;
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* t8 = this7;
  int* c9 = NULL;
  t8->_M_current = c9;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long long std__vector_int__std__allocator_int_____size___const(struct std::vector<int>* v10) {
bb11:
  struct std::vector<int>* this16;
  unsigned long long __retval17;
  long long __dif18;
  this16 = v10;
  struct std::vector<int>* t19 = this16;
  struct std::_Vector_base<int, std::allocator<int>>* base20 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t19 + 0);
  struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data* base21 = (struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data*)((char *)base20->_M_impl + 0);
  int* t22 = base21->_M_finish;
  struct std::_Vector_base<int, std::allocator<int>>* base23 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t19 + 0);
  struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data* base24 = (struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data*)((char *)base23->_M_impl + 0);
  int* t25 = base24->_M_start;
  long long diff26 = t22 - t25;
  __dif18 = diff26;
  goto bb12;
bb12:
  long long t27 = __dif18;
  int c28 = 0;
  long long cast29 = (long long)c28;
  _Bool c30 = (t27 < cast29) ? 1 : 0;
  if (c30) goto bb13; else goto bb14;
bb13:
