extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____aligned_membuf_int_ { unsigned char _M_storage[4]; };
struct std___Rb_tree_const_iterator_int_ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_std__less_int__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_int_ { struct std___Rb_tree_node_base __field0; struct __gnu_cxx____aligned_membuf_int_ _M_storage; unsigned char __field2[4]; } __attribute__((packed));
struct std____new_allocator_std___Rb_tree_node_int__;
struct std__allocator_std___Rb_tree_node_int__;
struct std__binary_function_int__int__bool_;
struct std__less_int_ { unsigned char __field0; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__set_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

char _str[17] = "mycomp(*it,*it2)";
char _str_1[108] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-key_comp-bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0: ;
  int __retval1;
  struct std__set_int__std__less_int___std__allocator_int__ myset2;
  struct std__less_int_ mycomp3;
  struct std___Rb_tree_const_iterator_int_ it4;
  struct std___Rb_tree_const_iterator_int_ it25;
  int i6;
  int highest7;
  struct std__less_int_ ref_tmp08;
  struct std___Rb_tree_const_iterator_int_ ref_tmp19;
  struct std___Rb_tree_const_iterator_int_ ref_tmp210;
  int c11 = 0;
  __retval1 = c11;
  // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::set()
  __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    // externalized std:: op: std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator()
    __VERIFIER_nondet_memory(&it4, sizeof(it4));
    // externalized std:: op: std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator()
    __VERIFIER_nondet_memory(&it25, sizeof(it25));
    struct std__less_int_ std12;
    __VERIFIER_nondet_memory(&std12, sizeof(std12));
    ref_tmp08 = std12;
    struct std__less_int_* std13;
    __VERIFIER_nondet_memory(&std13, sizeof(std13));
    struct std___Rb_tree_const_iterator_int_ std14;
    __VERIFIER_nondet_memory(&std14, sizeof(std14));
    ref_tmp19 = std14;
    struct std___Rb_tree_const_iterator_int_* std15;
    __VERIFIER_nondet_memory(&std15, sizeof(std15));
    struct std___Rb_tree_const_iterator_int_ std16;
    __VERIFIER_nondet_memory(&std16, sizeof(std16));
    ref_tmp210 = std16;
    struct std___Rb_tree_const_iterator_int_* std17;
    __VERIFIER_nondet_memory(&std17, sizeof(std17));
    int* std18;
    __VERIFIER_nondet_memory(&std18, sizeof(std18));
    int* std19;
    __VERIFIER_nondet_memory(&std19, sizeof(std19));
    _Bool std20;
    __VERIFIER_nondet_memory(&std20, sizeof(std20));
    if (std20) {
    } else {
      char* cast21 = (char*)&(_str);
      char* c22 = (char*)_str_1;
      unsigned int c23 = 24;
      char* cast24 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast21, c22, c23, cast24);
    }
    int c25 = 0;
    __retval1 = c25;
    int t26 = __retval1;
    int ret_val27 = t26;
    {
      // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::~set()
      __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    }
    return ret_val27;
  int t28 = __retval1;
  return t28;
}

