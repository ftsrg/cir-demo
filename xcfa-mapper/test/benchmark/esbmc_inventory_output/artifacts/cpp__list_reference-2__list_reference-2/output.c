// Struct definitions (auto-parsed)
struct __gnu_cxx::__aligned_membuf<int> { unsigned char _M_storage[4]; };
struct std::_List_const_iterator<int> { struct std::__detail::_List_node_base* _M_node; };
struct std::_List_iterator<int> { struct std::__detail::_List_node_base* _M_node; };
struct std::_List_node<int> { struct __gnu_cxx::__aligned_membuf<int> _M_storage; };
struct std::__allocated_obj<std::allocator<std::_List_node<int>>> { unsigned char __placeholder; };
struct std::__allocated_ptr<std::allocator<std::_List_node<int>>> { struct std::allocator<std::_List_node<int>>* _M_alloc; struct std::_List_node<int>* _M_ptr; };
struct std::__cxx11::list<int> { unsigned char __placeholder; };
struct std::__detail::_List_node_base { struct std::__detail::_List_node_base* _M_next; struct std::__detail::_List_node_base* _M_prev; };
struct std::__detail::_List_node_header { unsigned char __placeholder; };
struct std::__detail::_List_size { unsigned long long _M_size; };
struct std::__false_type { unsigned char __placeholder; };
struct std::__new_allocator<int> { unsigned char __placeholder; };
struct std::__new_allocator<std::_List_node<int>> { unsigned char __placeholder; };
struct std::allocator<int> { unsigned char __placeholder; };
struct std::allocator<std::_List_node<int>> { unsigned char __placeholder; };
struct std::__cxx11::_List_base<int, std::allocator<int>>::_List_impl { struct std::__detail::_List_node_header _M_node; };
struct std::__cxx11::_List_base<int, std::allocator<int>> { struct std::__cxx11::_List_base<int, std::allocator<int>>::_List_impl _M_impl; };

int __const_main_myints[4];
char _str[19] = "mylist.size() == 3";
char _str_1[95] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/list_reference-2/main.cpp";
char _str_2[11] = "int main()";
char _str_3[10] = "*it == 15";
char _str_4[10] = "*it == 36";
char _str_5[10] = "*it == 17";
char _str_6[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char _str_7[75];
char _str_8[15] = "!this->empty()";
// function: _Z12single_digitRKi
_Bool single_digit(int* v0) {
bb1:
  int* value2;
  _Bool __retval3;
  value2 = v0;
  int* t4 = value2;
  int t5 = *t4;
  int c6 = 10;
  _Bool c7 = (t5 < c6) ? 1 : 0;
  __retval3 = c7;
  _Bool t8 = __retval3;
  return t8;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std::allocator<int>* v9) {
bb10:
  struct std::allocator<int>* this11;
  this11 = v9;
  struct std::allocator<int>* t12 = this11;
