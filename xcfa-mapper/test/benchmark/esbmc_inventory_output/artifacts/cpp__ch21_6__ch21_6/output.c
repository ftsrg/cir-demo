// Struct definitions (auto-parsed)
struct __gnu_cxx::__aligned_membuf<int> { unsigned char _M_storage[4]; };
struct std::_Identity<int> { unsigned char __placeholder; };
struct std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>>::_Alloc_node { struct std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>>* _M_t; };
struct std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>>::_Rb_tree_impl<std::less<int>> { unsigned char __placeholder; };
struct std::_Rb_tree_const_iterator<int> { struct std::_Rb_tree_node_base* _M_node; };
struct std::_Rb_tree_iterator<int> { struct std::_Rb_tree_node_base* _M_node; };
struct std::_Rb_tree_node<int> { struct __gnu_cxx::__aligned_membuf<int> _M_storage; };
struct std::_Rb_tree_node_base { struct std::_Rb_tree_node_base* _M_parent; struct std::_Rb_tree_node_base* _M_right; struct std::_Rb_tree_node_base* _M_left; unsigned int _M_color; };
struct std::__new_allocator<std::_Rb_tree_node<int>> { unsigned char __placeholder; };
struct std::__pair_base<std::_Rb_tree_const_iterator<int>, std::_Rb_tree_const_iterator<int>> { unsigned char __placeholder; };
struct std::__pair_base<std::_Rb_tree_iterator<int>, std::_Rb_tree_iterator<int>> { unsigned char __placeholder; };
struct std::__pair_base<std::_Rb_tree_node_base *, std::_Rb_tree_node_base *> { unsigned char __placeholder; };
struct std::allocator<std::_Rb_tree_node<int>> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::bidirectional_iterator_tag { unsigned char __placeholder; };
struct std::input_iterator_tag { unsigned char __placeholder; };
struct std::iterator<std::output_iterator_tag, void, void, void, void> { unsigned char __placeholder; };
struct std::less<int> { unsigned char __placeholder; };
struct std::ostream_iterator<int> { struct std::basic_ostream<char>* _M_stream; char* _M_string; };
struct std::pair<std::_Rb_tree_const_iterator<int>, std::_Rb_tree_const_iterator<int>> { struct std::_Rb_tree_const_iterator<int> first; struct std::_Rb_tree_const_iterator<int> second; };
struct std::pair<std::_Rb_tree_iterator<int>, std::_Rb_tree_iterator<int>> { struct std::_Rb_tree_iterator<int> first; struct std::_Rb_tree_iterator<int> second; };
struct std::pair<std::_Rb_tree_node_base *, std::_Rb_tree_node_base *> { struct std::_Rb_tree_node_base* first; struct std::_Rb_tree_node_base* second; };
struct std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>> { struct std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>>::_Rb_tree_impl<std::less<int>> _M_impl; };
struct std::_Rb_tree_header { struct std::_Rb_tree_node_base _M_header; unsigned long long _M_node_count; };
struct std::_Rb_tree_key_compare<std::less<int>> { struct std::less<int> _M_key_compare; };
struct std::multiset<int> { struct std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>> _M_t; };

int __const_main_a[10];
struct std::basic_ostream<char> _ZSt4cout;
char _str[2] = " ";
char _str_1[21] = "There are currently ";
char _str_2[31] = " values of 15 in the multiset\\0A";
char _str_3[26] = "After inserts, there are ";
char _str_4[32] = " values of 15 in the multiset\\0A\\0A";
char _str_5[16] = "Found value 15\\0A";
char _str_6[23] = "Did not find value 20\\0A";
char _str_7[38];
char _str_8[22];
char _str_9[21];
char _str_10[21];
char _str_11[18];
char _str_12[18];
// function: _ZNSt8multisetIiSt4lessIiESaIiEEC2Ev
void std__multiset_int__std__less_int___std__allocator_int_____multiset(struct std::multiset<int>* v0) {
bb1:
  struct std::multiset<int>* this2;
  this2 = v0;
  struct std::multiset<int>* t3 = this2;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(t3->_M_t);
  return;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEC2ERSoPKc
void _ZNSt16ostream_iteratorIicSt11char_traitsIcEEC2ERSoPKc(struct std::ostream_iterator<int>* v4, struct std::basic_ostream<char>* v5, char* v6) {
bb7:
  int this8[8];
  int __s9[8];
  char* __c10;
  this8 = v4;
  __s9 = v5;
  __c10 = v6;
  struct std::ostream_iterator<int>* t11 = this8;
