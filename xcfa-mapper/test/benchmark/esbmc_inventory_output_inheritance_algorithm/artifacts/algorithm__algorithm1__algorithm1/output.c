// Struct definitions (auto-parsed)
struct __gnu_cxx::__normal_iterator<const int *, std::vector<int>> { int* _M_current; };
struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> { int* _M_current; };
struct myclass { unsigned char __placeholder; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl { unsigned char __placeholder; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data { int* _M_finish; int* _M_start; int* _M_end_of_storage; };
struct std::__new_allocator<int> { unsigned char __placeholder; };
struct std::allocator<int> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::vector<int> { unsigned char __placeholder; };
struct std::vector<int>::_Guard_alloc { int* _M_storage; unsigned long long _M_len; struct std::_Vector_base<int, std::allocator<int>>* _M_vect; };
struct std::_Vector_base<int, std::allocator<int>> { struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl _M_impl; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[2] = " ";
struct myclass myobject;
char _str_11[26];
char _str_12[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char _str_13[77];
char _str_14[15] = "!this->empty()";
char _str_1[19];
char _str_15[92];
char _str_16[19] = "__n < this->size()";
char _str_2[18] = "myvector[0] == 11";
char _str_3[95] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm1/main.cpp";
char _str_4[11] = "int main()";
char _str_5[18] = "myvector[1] == 21";
char _str_6[18] = "myvector[2] == 31";
char _str_7[20];
char _str_8[18] = "myvector[0] == 10";
char _str_9[18] = "myvector[1] == 20";
char _str_10[18] = "myvector[2] == 30";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _Z10myfunctionRi
void myfunction(int* v0) {
bb1:
  int* i2;
  i2 = v0;
  int* t3 = i2;
  int t4 = *t3;
  int u5 = ++t4;
  *t3 = u5;
  struct std::basic_ostream<char>* g6 = &_ZSt4cout;
  char* cast7 = (char*)_str;
  struct std::basic_ostream<char>* r8 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g6, cast7);
  int* t9 = i2;
  int t10 = *t9;
  struct std::basic_ostream<char>* r11 = std__ostream__operator__(r8, t10);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector(struct std::vector<int>* v12) {
bb13:
  struct std::vector<int>* this14;
  this14 = v12;
  struct std::vector<int>* t15 = this14;
