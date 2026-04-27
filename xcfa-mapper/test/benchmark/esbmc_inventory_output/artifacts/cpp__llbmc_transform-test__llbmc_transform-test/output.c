// Struct definitions (auto-parsed)
struct std::_Deque_base<int, std::allocator<int>>::_Deque_impl { unsigned char __placeholder; };
struct std::_Deque_iterator<int, int &, int *> { int** _M_node; int* _M_cur; int* _M_first; int* _M_last; };
struct std::__new_allocator<int *> { unsigned char __placeholder; };
struct std::__new_allocator<int> { unsigned char __placeholder; };
struct std::allocator<int *> { unsigned char __placeholder; };
struct std::allocator<int> { unsigned char __placeholder; };
struct std::deque<int> { unsigned char __placeholder; };
struct std::random_access_iterator_tag { unsigned char __placeholder; };
struct std::_Deque_base<int, std::allocator<int>> { struct std::_Deque_base<int, std::allocator<int>>::_Deque_impl _M_impl; };
struct std::_Deque_base<int, std::allocator<int>>::_Deque_impl_data { struct std::_Deque_iterator<int, int &, int *> _M_finish; struct std::_Deque_iterator<int, int &, int *> _M_start; unsigned long long _M_map_size; int** _M_map; };

char _str_3[48];
char _str_4[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char _str_5[91];
char _str_6[19] = "__n < this->size()";
char _str[23] = "d2[i] == (i - 10) << 1";
char _str_1[99] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/llbmc_transform-test/main.cpp";
char _str_2[11] = "int main()";
// function: __cxa_rethrow
void __cxa_rethrow();

// function: _Z9op_doublei
int op_double(int v0) {
bb1:
  int i2;
  int __retval3;
  i2 = v0;
  int t4 = i2;
  int t5 = i2;
  int b6 = t4 + t5;
  __retval3 = b6;
  int t7 = __retval3;
  return t7;
}

// function: _ZNSt5dequeIiSaIiEEC2Ev
void std__deque_int__std__allocator_int_____deque(struct std::deque<int>* v8) {
bb9:
  struct std::deque<int>* this10;
  this10 = v8;
  struct std::deque<int>* t11 = this10;
