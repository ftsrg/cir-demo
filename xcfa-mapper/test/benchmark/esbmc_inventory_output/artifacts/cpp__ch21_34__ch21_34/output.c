// Struct definitions (auto-parsed)
struct std::_Deque_base<int, std::allocator<int>>::_Deque_impl { unsigned char __placeholder; };
struct std::_Deque_iterator<int, int &, int *> { int** _M_node; int* _M_cur; int* _M_first; int* _M_last; };
struct std::__new_allocator<int *> { unsigned char __placeholder; };
struct std::__new_allocator<int> { unsigned char __placeholder; };
struct std::allocator<int *> { unsigned char __placeholder; };
struct std::allocator<int> { unsigned char __placeholder; };
struct std::deque<int> { unsigned char __placeholder; };
struct std::random_access_iterator_tag { unsigned char __placeholder; };
struct std::stack<int> { struct std::deque<int> c; };
struct std::_Deque_base<int, std::allocator<int>> { struct std::_Deque_base<int, std::allocator<int>>::_Deque_impl _M_impl; };
struct std::_Deque_base<int, std::allocator<int>>::_Deque_impl_data { struct std::_Deque_iterator<int, int &, int *> _M_finish; struct std::_Deque_iterator<int, int &, int *> _M_start; unsigned long long _M_map_size; int** _M_map; };

char _str_3[48];
char _str_4[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char _str_5[76];
char _str_6[15] = "!this->empty()";
char _str_7[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_stack.h";
char _str_8[74];
char _str[18] = "mystack.top()==20";
char _str_1[86] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch21_34/main.cpp";
char _str_2[11] = "int main()";
// function: __cxa_rethrow
void __cxa_rethrow();

// function: _ZNSt5stackIiSt5dequeIiSaIiEEEC2IS2_vEEv
void std__stack_int__std__deque_int__std__allocator_int_______stack_std__deque_int__std__allocator_int_____void_(struct std::stack<int>* v0) {
bb1:
  struct std::stack<int>* this2;
  this2 = v0;
  struct std::stack<int>* t3 = this2;
  struct std::deque<int> c4 = {0};
  *t3->c = c4;
  std__deque_int__std__allocator_int_____deque(t3->c);
  return;
}

// function: _ZNSt15__new_allocatorIiE9constructIiJiEEEvPT_DpOT0_
void void_std____new_allocator_int___construct_int__int_(struct std::__new_allocator<int>* v5, int* v6, int* v7) {
bb8:
  struct std::__new_allocator<int>* this9;
  int* __p10;
  int* __args11;
  this9 = v5;
  __p10 = v6;
  __args11 = v7;
  struct std::__new_allocator<int>* t12 = this9;
  unsigned long long c13 = 4;
  int* t14 = __p10;
  void* cast15 = (void*)t14;
  int* cast16 = (int*)cast15;
  int* t17 = __args11;
  int t18 = *t17;
  *cast16 = t18;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std::allocator<int>* v19, int* v20, int* v21) {
bb22:
  struct std::allocator<int>* __a23;
  int* __p24;
  int* __args25;
  __a23 = v19;
  __p24 = v20;
  __args25 = v21;
  struct std::allocator<int>* t26 = __a23;
