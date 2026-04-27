// Struct definitions (auto-parsed)
struct __gnu_cxx::__aligned_membuf<double> { unsigned char _M_storage[8]; };
struct std::_Identity<double> { unsigned char __placeholder; };
struct std::_Rb_tree<double, double, std::_Identity<double>, std::less<double>>::_Alloc_node { struct std::_Rb_tree<double, double, std::_Identity<double>, std::less<double>>* _M_t; };
struct std::_Rb_tree<double, double, std::_Identity<double>, std::less<double>>::_Rb_tree_impl<std::less<double>> { unsigned char __placeholder; };
struct std::_Rb_tree_const_iterator<double> { struct std::_Rb_tree_node_base* _M_node; };
struct std::_Rb_tree_iterator<double> { struct std::_Rb_tree_node_base* _M_node; };
struct std::_Rb_tree_node<double> { struct __gnu_cxx::__aligned_membuf<double> _M_storage; };
struct std::_Rb_tree_node_base { struct std::_Rb_tree_node_base* _M_left; struct std::_Rb_tree_node_base* _M_right; struct std::_Rb_tree_node_base* _M_parent; unsigned int _M_color; };
struct std::__new_allocator<std::_Rb_tree_node<double>> { unsigned char __placeholder; };
struct std::__pair_base<std::_Rb_tree_const_iterator<double>, bool> { unsigned char __placeholder; };
struct std::__pair_base<std::_Rb_tree_iterator<double>, bool> { unsigned char __placeholder; };
struct std::__pair_base<std::_Rb_tree_node_base *, std::_Rb_tree_node_base *> { unsigned char __placeholder; };
struct std::allocator<std::_Rb_tree_node<double>> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::iterator<std::output_iterator_tag, void, void, void, void> { unsigned char __placeholder; };
struct std::less<double> { unsigned char __placeholder; };
struct std::ostream_iterator<double> { struct std::basic_ostream<char>* _M_stream; char* _M_string; };
struct std::pair<std::_Rb_tree_const_iterator<double>, bool> { struct std::_Rb_tree_const_iterator<double> first; _Bool second; };
struct std::pair<std::_Rb_tree_iterator<double>, bool> { struct std::_Rb_tree_iterator<double> first; _Bool second; };
struct std::pair<std::_Rb_tree_node_base *, std::_Rb_tree_node_base *> { struct std::_Rb_tree_node_base* second; struct std::_Rb_tree_node_base* first; };
struct std::_Rb_tree<double, double, std::_Identity<double>, std::less<double>> { struct std::_Rb_tree<double, double, std::_Identity<double>, std::less<double>>::_Rb_tree_impl<std::less<double>> _M_impl; };
struct std::_Rb_tree_header { struct std::_Rb_tree_node_base _M_header; unsigned long long _M_node_count; };
struct std::_Rb_tree_key_compare<std::less<double>> { struct std::less<double> _M_key_compare; };
struct std::set<double> { struct std::_Rb_tree<double, double, std::_Identity<double>, std::less<double>> _M_t; };

double __const_main_a[5];
struct std::basic_ostream<char> _ZSt4cout;
char _str[2] = " ";
char _str_1[21];
char _str_2[3] = "\\0A\\0A";
char _str_3[5] = " was";
char _str_4[9] = " was not";
char _str_5[10] = " inserted";
char _str_6[22];
// function: _ZNSt3setIdSt4lessIdESaIdEEC2IPdEET_S6_
void std__set_double__std__less_double___std__allocator_double_____set_double__(struct std::set<double>* v0, double* v1, double* v2) {
bb3:
  struct std::set<double>* this4;
  double* __first5;
  double* __last6;
  this4 = v0;
  __first5 = v1;
  __last6 = v2;
  struct std::set<double>* t7 = this4;
  struct std::_Rb_tree<double, double, std::_Identity<double>, std::less<double>> c8 = {0};
  *t7->_M_t = c8;
  std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______Rb_tree(t7->_M_t);
  double* t9 = __first5;
  double* t10 = __last6;
  std__enable_if___same_value_type_double____value__void___type_std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_insert_range_unique_double__(t7->_M_t, t9, t10);
  return;
}

// function: _ZNSt16ostream_iteratorIdcSt11char_traitsIcEEC2ERSoPKc
void _ZNSt16ostream_iteratorIdcSt11char_traitsIcEEC2ERSoPKc(struct std::ostream_iterator<double>* v11, struct std::basic_ostream<char>* v12, char* v13) {
bb14:
  int this15[8];
  int __s16[8];
  char* __c17;
  this15 = v11;
  __s16 = v12;
  __c17 = v13;
  struct std::ostream_iterator<double>* t18 = this15;
