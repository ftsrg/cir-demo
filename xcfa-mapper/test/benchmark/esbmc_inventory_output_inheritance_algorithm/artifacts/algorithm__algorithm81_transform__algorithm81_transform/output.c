// Struct definitions (auto-parsed)
struct __gnu_cxx::__normal_iterator<const int *, std::vector<int>> { int* _M_current; };
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

char _str_4[26];
char _str_5[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char _str_6[77];
char _str_7[15] = "!this->empty()";
char _str_8[92];
char _str_9[19] = "__n < this->size()";
char _str[16] = "second[2] != 31";
char _str_1[106] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm81_transform/main.cpp";
char _str_2[11] = "int main()";
struct std::basic_ostream<char> _ZSt4cout;
char _str_3[49];
// function: _Z11op_increasei
int op_increase(int v0) {
bb1:
  int i2;
  int __retval3;
  i2 = v0;
  int t4 = i2;
  int u5 = ++t4;
  i2 = u5;
  __retval3 = u5;
  int t6 = __retval3;
  return t6;
}

// function: _Z6op_sumii
int op_sum(int v7, int v8) {
bb9:
  int i10;
  int j11;
  int __retval12;
  i10 = v7;
  j11 = v8;
  int t13 = i10;
  int t14 = j11;
  int b15 = t13 + t14;
  __retval12 = b15;
  int t16 = __retval12;
  return t16;
}

// function: _ZNSt6vectorIiSaIiEEC2Ev
void _ZNSt6vectorIiSaIiEEC2Ev(struct std::vector<int>* v17) {
bb18:
  struct std::vector<int>* this19;
  this19 = v17;
  struct std::vector<int>* t20 = this19;
  struct std::_Vector_base<int, std::allocator<int>>* base21 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t20 + 0);
  _ZNSt12_Vector_baseIiSaIiEEC2Ev(base21);
  return;
}

// function: _ZNSaIiEC2Ev
void _ZNSaIiEC2Ev(struct std::allocator<int>* v22) {
bb23:
  struct std::allocator<int>* this24;
  this24 = v22;
  struct std::allocator<int>* t25 = this24;
  struct std::__new_allocator<int>* base26 = (struct std::__new_allocator<int>*)((char *)t25 + 0);
  _ZNSt15__new_allocatorIiEC2Ev(base26);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2EmRKS0_
void _ZNSt6vectorIiSaIiEEC2EmRKS0_(struct std::vector<int>* v27, unsigned long long v28, struct std::allocator<int>* v29) {
  void* v30;
  unsigned int v31;
bb32:
  struct std::vector<int>* this38;
  unsigned long long __n39;
  struct std::allocator<int>* __a40;
  this38 = v27;
  __n39 = v28;
  __a40 = v29;
  struct std::vector<int>* t41 = this38;
  struct std::_Vector_base<int, std::allocator<int>>* base42 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t41 + 0);
  unsigned long long t43 = __n39;
  struct std::allocator<int>* t44 = __a40;
  unsigned long long r45 = std__vector_int__std__allocator_int______S_check_init_len(t43, t44);
  struct std::allocator<int>* t46 = __a40;
  _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_(base42, r45, t46);
  unsigned long long t47 = __n39;
  goto bb33;
bb33:
