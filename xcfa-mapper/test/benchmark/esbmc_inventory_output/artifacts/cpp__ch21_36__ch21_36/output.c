// Struct definitions (auto-parsed)
struct std::_Deque_base<int, std::allocator<int>>::_Deque_impl { unsigned char __placeholder; };
struct std::_Deque_iterator<int, int &, int *> { int** _M_node; int* _M_cur; int* _M_first; int* _M_last; };
struct std::__new_allocator<int *> { unsigned char __placeholder; };
struct std::__new_allocator<int> { unsigned char __placeholder; };
struct std::allocator<int *> { unsigned char __placeholder; };
struct std::allocator<int> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::deque<int> { unsigned char __placeholder; };
struct std::random_access_iterator_tag { unsigned char __placeholder; };
struct std::stack<int> { struct std::deque<int> c; };
struct std::_Deque_base<int, std::allocator<int>> { struct std::_Deque_base<int, std::allocator<int>>::_Deque_impl _M_impl; };
struct std::_Deque_base<int, std::allocator<int>>::_Deque_impl_data { struct std::_Deque_iterator<int, int &, int *> _M_finish; struct std::_Deque_iterator<int, int &, int *> _M_start; unsigned long long _M_map_size; int** _M_map; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[10];
char _str_1[17] = "myints.size()==0";
char _str_2[86] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch21_36/main.cpp";
char _str_3[11] = "int main()";
char _str_8[48];
char _str_4[10];
char _str_5[17] = "myints.size()==5";
char _str_9[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_stack.h";
char _str_10[69];
char _str_11[15] = "!this->empty()";
char _str_12[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char _str_13[75];
char _str_6[10];
char _str_7[17] = "myints.size()==4";
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

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZStmiRKSt15_Deque_iteratorIiRiPiES4_
long long std__operator_(struct std::_Deque_iterator<int, int &, int *>* v5, struct std::_Deque_iterator<int, int &, int *>* v6) {
bb7:
  struct std::_Deque_iterator<int, int &, int *>* __x8;
  struct std::_Deque_iterator<int, int &, int *>* __y9;
  long long __retval10;
  __x8 = v5;
  __y9 = v6;
  unsigned long long r11 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long long cast12 = (long long)r11;
  struct std::_Deque_iterator<int, int &, int *>* t13 = __x8;
  int** t14 = *t13->_M_node;
  struct std::_Deque_iterator<int, int &, int *>* t15 = __y9;
  int** t16 = *t15->_M_node;
  long long diff17 = t14 - t16;
  struct std::_Deque_iterator<int, int &, int *>* t18 = __x8;
  int** t19 = *t18->_M_node;
  _Bool cast20 = (_Bool)t19;
  long long cast21 = (long long)cast20;
  long long b22 = diff17 - cast21;
  long long b23 = cast12 * b22;
  struct std::_Deque_iterator<int, int &, int *>* t24 = __x8;
  int* t25 = *t24->_M_cur;
  struct std::_Deque_iterator<int, int &, int *>* t26 = __x8;
  int* t27 = *t26->_M_first;
  long long diff28 = t25 - t27;
  long long b29 = b23 + diff28;
  struct std::_Deque_iterator<int, int &, int *>* t30 = __y9;
  int* t31 = *t30->_M_last;
  struct std::_Deque_iterator<int, int &, int *>* t32 = __y9;
  int* t33 = *t32->_M_cur;
  long long diff34 = t31 - t33;
  long long b35 = b29 + diff34;
  __retval10 = b35;
  long long t36 = __retval10;
  return t36;
}

// function: _ZNKSt15__new_allocatorIiE8max_sizeEv
unsigned long long std____new_allocator_int___max_size___const(struct std::__new_allocator<int>* v37) {
bb38:
  struct std::__new_allocator<int>* this39;
  unsigned long long __retval40;
  this39 = v37;
  struct std::__new_allocator<int>* t41 = this39;
  unsigned long long r42 = std____new_allocator_int____M_max_size___const(t41);
  __retval40 = r42;
  unsigned long long t43 = __retval40;
  return t43;
}

// function: _ZNSt16allocator_traitsISaIiEE8max_sizeERKS0_
unsigned long long std__allocator_traits_std__allocator_int_____max_size(struct std::allocator<int>* v44) {
bb45:
  struct std::allocator<int>* __a46;
  unsigned long long __retval47;
  __a46 = v44;
  struct std::allocator<int>* t48 = __a46;
