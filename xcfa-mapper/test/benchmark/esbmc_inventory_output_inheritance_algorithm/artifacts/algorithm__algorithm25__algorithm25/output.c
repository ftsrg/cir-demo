// Struct definitions (auto-parsed)
struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> { int* _M_current; };
struct c_unique { int current; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl { unsigned char __placeholder; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std::__new_allocator<int> { unsigned char __placeholder; };
struct std::allocator<int> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::random_access_iterator_tag { unsigned char __placeholder; };
struct std::vector<int> { unsigned char __placeholder; };
struct std::_Vector_base<int, std::allocator<int>> { struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl _M_impl; };

struct c_unique UniqueNumber;
struct std::basic_ostream<char> _ZSt4cout;
char _str[19];
char _str_1[2] = " ";
char _str_10[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char _str_11[92];
char _str_12[19] = "__n < this->size()";
char _str_2[17] = "myvector[0] == 1";
char _str_3[96] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm25/main.cpp";
char _str_4[11] = "int main()";
char _str_5[17] = "myvector[1] == 2";
char _str_6[17] = "myvector[2] == 3";
char _str_7[17] = "myvector[3] == 4";
char _str_8[20];
char _str_9[49];
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
  *t9->current = c10;
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
