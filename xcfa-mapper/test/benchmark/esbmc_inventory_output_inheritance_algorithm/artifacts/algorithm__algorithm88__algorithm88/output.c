// Struct definitions (auto-parsed)
struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> { int* _M_current; };
struct __locale_struct { unsigned char __placeholder; };
struct c_unique { int current; };
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
struct std::random_access_iterator_tag { unsigned char __field0; };
struct std::vector<int> { struct std3A3A_Vector_base3Cint2C_std3A3Aallocator3Cint3E3E __field0; };
struct std::_Vector_base<int, std::allocator<int>> { struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl _M_impl; };

struct c_unique UniqueNumber;
struct std::basic_ostream<char> _ZSt4cout;
char _str[19];
char _str_1[2] = " ";
char _str_7[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char _str_8[92];
char _str_9[19] = "__n < this->size()";
char _str_2[20] = "myvector[2] == NULL";
char _str_3[96] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm88/main.cpp";
char _str_4[11] = "int main()";
char _str_5[20];
char _str_6[49];
// function: rand
int rand();

// function: _Z12RandomNumberv
int RandomNumber() {
bb0:
  int __retval1;
  int r2 = rand();
  int c3 = 100;
  int b4 = r2 % c3;
  __retval1 = b4;
  int t5 = __retval1;
  return t5;
}

// function: _ZN8c_uniqueC2Ev
void _ZN8c_uniqueC2Ev(struct c_unique* v6) {
bb7:
  struct c_unique* this8;
  this8 = v6;
  struct c_unique* t9 = this8;
  int c10 = 0;
  t9->current = c10;
  return;
}

// function: __cxx_global_var_init
void __cxx_global_var_init() {
bb11:
  struct c_unique* g12 = &UniqueNumber;
  _ZN8c_uniqueC2Ev(g12);
  return;
}

// function: srand
void srand(unsigned int);

// function: time
long long time(long long*);

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

// function: _ZNSt6vectorIiSaIiEEC2EmRKS0_
void std__vector_int__std__allocator_int_____vector(struct std::vector<int>* v18, unsigned long long v19, struct std::allocator<int>* v20) {
  void* v21;
  unsigned int v22;
bb23:
  struct std::vector<int>* this29;
  unsigned long long __n30;
  struct std::allocator<int>* __a31;
  this29 = v18;
  __n30 = v19;
  __a31 = v20;
  struct std::vector<int>* t32 = this29;
  struct std::_Vector_base<int, std::allocator<int>>* base33 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t32 + 0);
  unsigned long long t34 = __n30;
  struct std::allocator<int>* t35 = __a31;
  unsigned long long r36 = std__vector_int__std__allocator_int______S_check_init_len(t34, t35);
  struct std::allocator<int>* t37 = __a31;
  std___Vector_base_int__std__allocator_int______Vector_base(base33, r36, t37);
  unsigned long long t38 = __n30;
  goto bb24;
bb24:
