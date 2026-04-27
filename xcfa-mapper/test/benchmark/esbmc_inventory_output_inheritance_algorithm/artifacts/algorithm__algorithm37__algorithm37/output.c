// Struct definitions (auto-parsed)
struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> { int* _M_current; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl { unsigned char __placeholder; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data { int* _M_finish; int* _M_start; int* _M_end_of_storage; };
struct std::__new_allocator<int> { unsigned char __placeholder; };
struct std::allocator<int> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::vector<int> { unsigned char __placeholder; };
struct std::vector<int>::_Guard_alloc { int* _M_storage; unsigned long long _M_len; struct std::_Vector_base<int, std::allocator<int>>* _M_vect; };
struct std::_Vector_base<int, std::allocator<int>> { struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl _M_impl; };

void* p_myrandom = &_Z8myrandoml;
char _str_2[26];
struct std::basic_ostream<char> _ZSt4cout;
char _str[19];
char _str_1[2] = " ";
// function: rand
int rand();

// function: _Z8myrandoml
long long myrandom(long long v0) {
bb1:
  long long i2;
  long long __retval3;
  i2 = v0;
  int r4 = rand();
  long long cast5 = (long long)r4;
  long long t6 = i2;
  long long b7 = cast5 % t6;
  __retval3 = b7;
  long long t8 = __retval3;
  return t8;
}

// function: srand
void srand(unsigned int);

// function: time
long long time(long long*);

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector(struct std::vector<int>* v9) {
bb10:
  struct std::vector<int>* this11;
  this11 = v9;
  struct std::vector<int>* t12 = this11;
