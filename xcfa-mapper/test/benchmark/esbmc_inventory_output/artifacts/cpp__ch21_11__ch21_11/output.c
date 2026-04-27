// Struct definitions (auto-parsed)
struct std::_Deque_base<double, std::allocator<double>>::_Deque_impl { unsigned char __placeholder; };
struct std::_Deque_iterator<double, double &, double *> { double** _M_node; double* _M_cur; double* _M_first; double* _M_last; };
struct std::__new_allocator<double *> { unsigned char __placeholder; };
struct std::__new_allocator<double> { unsigned char __placeholder; };
struct std::allocator<double *> { unsigned char __placeholder; };
struct std::allocator<double> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::deque<double> { unsigned char __placeholder; };
struct std::queue<double> { struct std::deque<double> c; };
struct std::random_access_iterator_tag { unsigned char __placeholder; };
struct std::_Deque_base<double, std::allocator<double>> { struct std::_Deque_base<double, std::allocator<double>>::_Deque_impl _M_impl; };
struct std::_Deque_base<double, std::allocator<double>>::_Deque_impl_data { struct std::_Deque_iterator<double, double &, double *> _M_finish; struct std::_Deque_iterator<double, double &, double *> _M_start; unsigned long long _M_map_size; double** _M_map; };

char _str_1[48];
char _str_2[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char _str_3[85];
char _str_4[15] = "!this->empty()";
struct std::basic_ostream<char> _ZSt4cout;
char _str[22];
char _str_5[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_queue.h";
char _str_6[85];
char _str_7[86];
char _str_8[78];
char _str_9[85];
// function: __cxa_rethrow
void __cxa_rethrow();

// function: _ZNSt5queueIdSt5dequeIdSaIdEEEC2IS2_vEEv
void std__queue_double__std__deque_double__std__allocator_double_______queue_std__deque_double__std__allocator_double_____void_(struct std::queue<double>* v0) {
bb1:
  struct std::queue<double>* this2;
  this2 = v0;
  struct std::queue<double>* t3 = this2;
  struct std::deque<double> c4 = {0};
  *t3->c = c4;
  std__deque_double__std__allocator_double_____deque(t3->c);
  return;
}

// function: _ZNSt15__new_allocatorIdE9constructIdJdEEEvPT_DpOT0_
void void_std____new_allocator_double___construct_double__double_(struct std::__new_allocator<double>* v5, double* v6, double* v7) {
bb8:
  struct std::__new_allocator<double>* this9;
  double* __p10;
  double* __args11;
  this9 = v5;
  __p10 = v6;
  __args11 = v7;
  struct std::__new_allocator<double>* t12 = this9;
  unsigned long long c13 = 8;
  double* t14 = __p10;
  void* cast15 = (void*)t14;
  double* cast16 = (double*)cast15;
  double* t17 = __args11;
  double t18 = *t17;
  *cast16 = t18;
  return;
}

// function: _ZNSt16allocator_traitsISaIdEE9constructIdJdEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_double_____construct_double__double_(struct std::allocator<double>* v19, double* v20, double* v21) {
bb22:
  struct std::allocator<double>* __a23;
  double* __p24;
  double* __args25;
  __a23 = v19;
  __p24 = v20;
  __args25 = v21;
  struct std::allocator<double>* t26 = __a23;
