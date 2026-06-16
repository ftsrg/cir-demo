extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Struct definitions (auto-parsed)
struct __gnu_cxx____aligned_membuf_int_ { unsigned char _M_storage[4]; };
struct std___Identity_int_ { unsigned char __field0; };
struct std___Rb_tree_const_iterator_int_ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* _M_t; };
struct std___Rb_tree_iterator_int_ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_std__less_int__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_int_ { struct std___Rb_tree_node_base __field0; struct __gnu_cxx____aligned_membuf_int_ _M_storage; unsigned char __field2[4]; } __attribute__((packed));
struct std____new_allocator_std___Rb_tree_node_int__;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_int__;
struct std__less_int_;
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__set_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int __const_main_myints[5] = {75, 23, 65, 42, 13};
char _str[10] = "*it == 75";
char _str_1[105] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-end-c++03/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0: ;
  int __retval1;
  int myints2[5];
  struct std__set_int__std__less_int___std__allocator_int__ myset3;
  struct std___Rb_tree_const_iterator_int_ it4;
  struct std___Rb_tree_const_iterator_int_ agg_tmp05;
  int c6 = 0;
  __retval1 = c6;
  // array copy
  __builtin_memcpy(myints2, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
  int* cast7 = (int*)&(myints2);
  int* cast8 = (int*)&(myints2);
  int c9 = 5;
  int* ptr10 = &(cast8)[c9];
  // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::set<int*>(int*, int*)
  __VERIFIER_nondet_memory(&myset3, sizeof(myset3));
  __VERIFIER_nondet_memory(cast7, sizeof(*cast7));
  __VERIFIER_nondet_memory(ptr10, sizeof(*ptr10));
    struct std___Rb_tree_const_iterator_int_ std11;
    __VERIFIER_nondet_memory(&std11, sizeof(std11));
    it4 = std11;
    int c12 = 0;
    struct std___Rb_tree_const_iterator_int_ std13;
    __VERIFIER_nondet_memory(&std13, sizeof(std13));
    agg_tmp05 = std13;
    int* std14;
    __VERIFIER_nondet_memory(&std14, sizeof(std14));
    int t15 = *std14;
    int c16 = 75;
    _Bool c17 = ((t15 == c16)) ? 1 : 0;
    if (c17) {
    } else {
      char* cast18 = (char*)&(_str);
      char* c19 = (char*)_str_1;
      unsigned int c20 = 20;
      char* cast21 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast18, c19, c20, cast21);
    }
    int c22 = 0;
    __retval1 = c22;
    int t23 = __retval1;
    int ret_val24 = t23;
    {
      // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::~set()
      __VERIFIER_nondet_memory(&myset3, sizeof(myset3));
    }
    return ret_val24;
  int t25 = __retval1;
  return t25;
}

