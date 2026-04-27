// Struct definitions (auto-parsed)
struct __gnu_cxx::__aligned_membuf<std::pair<const int, double>> { unsigned char _M_storage[16]; };
struct std::_Rb_tree<int, std::pair<const int, double>, std::_Select1st<std::pair<const int, double>>, std::less<int>>::_Alloc_node { struct std::_Rb_tree<int, std::pair<const int, double>, std::_Select1st<std::pair<const int, double>>, std::less<int>>* _M_t; };
struct std::_Rb_tree<int, std::pair<const int, double>, std::_Select1st<std::pair<const int, double>>, std::less<int>>::_Rb_tree_impl<std::less<int>> { unsigned char __placeholder; };
struct std::_Rb_tree_const_iterator<std::pair<const int, double>> { struct std::_Rb_tree_node_base* _M_node; };
struct std::_Rb_tree_iterator<std::pair<const int, double>> { struct std::_Rb_tree_node_base* _M_node; };
struct std::_Rb_tree_node<std::pair<const int, double>> { struct __gnu_cxx::__aligned_membuf<std::pair<const int, double>> _M_storage; };
struct std::_Rb_tree_node_base { struct std::_Rb_tree_node_base* _M_parent; struct std::_Rb_tree_node_base* _M_right; struct std::_Rb_tree_node_base* _M_left; unsigned int _M_color; };
struct std::_Select1st<std::pair<const int, double>> { unsigned char __placeholder; };
struct std::__new_allocator<std::_Rb_tree_node<std::pair<const int, double>>> { unsigned char __placeholder; };
struct std::__pair_base<const int, double> { unsigned char __placeholder; };
struct std::__pair_base<std::_Rb_tree_const_iterator<std::pair<const int, double>>, std::_Rb_tree_const_iterator<std::pair<const int, double>>> { unsigned char __placeholder; };
struct std::__pair_base<std::_Rb_tree_node_base *, std::_Rb_tree_node_base *> { unsigned char __placeholder; };
struct std::allocator<std::_Rb_tree_node<std::pair<const int, double>>> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::bidirectional_iterator_tag { unsigned char __placeholder; };
struct std::input_iterator_tag { unsigned char __placeholder; };
struct std::less<int> { unsigned char __placeholder; };
struct std::pair<const int, double> { int first; double second; };
struct std::pair<std::_Rb_tree_const_iterator<std::pair<const int, double>>, std::_Rb_tree_const_iterator<std::pair<const int, double>>> { struct std::_Rb_tree_const_iterator<std::pair<const int, double>> first; struct std::_Rb_tree_const_iterator<std::pair<const int, double>> second; };
struct std::pair<std::_Rb_tree_node_base *, std::_Rb_tree_node_base *> { struct std::_Rb_tree_node_base* first; struct std::_Rb_tree_node_base* second; };
struct std::_Rb_tree<int, std::pair<const int, double>, std::_Select1st<std::pair<const int, double>>, std::less<int>> { struct std::_Rb_tree<int, std::pair<const int, double>, std::_Select1st<std::pair<const int, double>>, std::less<int>>::_Rb_tree_impl<std::less<int>> _M_impl; };
struct std::_Rb_tree_header { struct std::_Rb_tree_node_base _M_header; unsigned long long _M_node_count; };
struct std::_Rb_tree_key_compare<std::less<int>> { struct std::less<int> _M_key_compare; };
struct std::multimap<int, double> { struct std::_Rb_tree<int, std::pair<const int, double>, std::_Select1st<std::pair<const int, double>>, std::less<int>> _M_t; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[21] = "There are currently ";
char _str_1[36] = " pairs with key 15 in the multimap\\0A";
char _str_2[26] = "After inserts, there are ";
char _str_3[21] = " pairs with key 15\\0A\\0A";
char _str_4[36];
// function: _ZNSt8multimapIidSt4lessIiESaISt4pairIKidEEEC2Ev
void std__multimap_int__double__std__less_int___std__allocator_std__pair_int_const__double_______multimap(struct std::multimap<int, double>* v0) {
bb1:
  struct std::multimap<int, double>* this2;
  this2 = v0;
  struct std::multimap<int, double>* t3 = this2;
  std___Rb_tree_int__std__pair_int_const__double___std___Select1st_std__pair_int_const__double_____std__less_int___std__allocator_std__pair_int_const__double________Rb_tree(t3->_M_t);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEm
struct std::basic_ostream<char>* _ZNSolsEm(struct std::basic_ostream<char>*, unsigned long long);

// function: _ZNKSt8_Rb_treeIiSt4pairIKidESt10_Select1stIS2_ESt4lessIiESaIS2_EE8_M_beginEv
struct std::_Rb_tree_node_base* std___Rb_tree_int__std__pair_int_const__double___std___Select1st_std__pair_int_const__double_____std__less_int___std__allocator_std__pair_int_const__double________M_begin___const(struct std::_Rb_tree<int, std::pair<const int, double>, std::_Select1st<std::pair<const int, double>>, std::less<int>>* v4) {
bb5:
  struct std::_Rb_tree<int, std::pair<const int, double>, std::_Select1st<std::pair<const int, double>>, std::less<int>>* this6;
  struct std::_Rb_tree_node_base* __retval7;
  this6 = v4;
  struct std::_Rb_tree<int, std::pair<const int, double>, std::_Select1st<std::pair<const int, double>>, std::less<int>>* t8 = this6;
