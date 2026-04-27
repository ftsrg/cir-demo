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

int __const_main_myints[5];
char _str[14] = "*myints == 99";
char _str_1[102] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm17-c++03/main.cpp";
char _str_2[11] = "int main()";
char _str_3[26] = "*(myvector.begin()) == 10";
char _str_4[18] = "*(myints+3) == 99";
char _str_5[28] = "*(myvector.begin()+2) == 40";
struct std::basic_ostream<char> _ZSt4cout;
char _str_6[19];
char _str_7[2] = " ";
char _str_8[49];
char _str_9[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char _str_10[140];
char _str_11[9] = "__n >= 0";
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

// function: _ZNSt6vectorIiSaIiEEC2EmRKiRKS0_
void std__vector_int__std__allocator_int_____vector(struct std::vector<int>* v5, unsigned long long v6, int* v7, struct std::allocator<int>* v8) {
  void* v9;
  unsigned int v10;
bb11:
  struct std::vector<int>* this17;
  unsigned long long __n18;
  int* __value19;
  struct std::allocator<int>* __a20;
  this17 = v5;
  __n18 = v6;
  __value19 = v7;
  __a20 = v8;
  struct std::vector<int>* t21 = this17;
  struct std::_Vector_base<int, std::allocator<int>>* base22 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t21 + 0);
  unsigned long long t23 = __n18;
  struct std::allocator<int>* t24 = __a20;
  unsigned long long r25 = std__vector_int__std__allocator_int______S_check_init_len(t23, t24);
  struct std::allocator<int>* t26 = __a20;
  std___Vector_base_int__std__allocator_int______Vector_base(base22, r25, t26);
  unsigned long long t27 = __n18;
  int* t28 = __value19;
  goto bb12;
bb12:
