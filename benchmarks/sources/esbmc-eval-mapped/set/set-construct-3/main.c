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
struct std___Rb_tree_node_int_;
struct std____new_allocator_std___Rb_tree_node_int__;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_int__ { unsigned char __field0; };
struct std__less_int_;
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__set_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int __const_main_myints[5] = {10, 20, 30, 40, 50};
char _str[18] = "third.size() == 5";
char _str_1[107] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-construct-3/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[10] = "*it == 10";
char _str_3[10] = "*it == 50";
_Bool fncomp(int p0, int p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: _Z6fncompii
_Bool fncomp(int v0, int v1) {
bb2:
  int lhs3;
  int rhs4;
  _Bool __retval5;
  lhs3 = v0;
  rhs4 = v1;
  int t6 = lhs3;
  int t7 = rhs4;
  _Bool c8 = ((t6 < t7)) ? 1 : 0;
  __retval5 = c8;
  _Bool t9 = __retval5;
  return t9;
}

// function: main
int main() {
bb10:
  int __retval11;
  struct std__set_int__std__less_int___std__allocator_int__ first12;
  struct std___Rb_tree_const_iterator_int_ it13;
  int myints14[5];
  struct std__set_int__std__less_int___std__allocator_int__ second15;
  struct std__set_int__std__less_int___std__allocator_int__ third16;
  struct std___Rb_tree_const_iterator_int_ ref_tmp017;
  struct std___Rb_tree_const_iterator_int_ ref_tmp118;
  struct std___Rb_tree_const_iterator_int_ agg_tmp019;
  int c20 = 0;
  __retval11 = c20;
  // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::set()
  __VERIFIER_nondet_memory(&first12, sizeof(first12));
    // externalized std:: op: std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator()
    __VERIFIER_nondet_memory(&it13, sizeof(it13));
    // array copy
    __builtin_memcpy(myints14, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
    int* cast21 = (int*)&(myints14);
    int* cast22 = (int*)&(myints14);
    int c23 = 5;
    int* ptr24 = &(cast22)[c23];
    // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::set<int*>(int*, int*)
    __VERIFIER_nondet_memory(&second15, sizeof(second15));
    __VERIFIER_nondet_memory(cast21, sizeof(*cast21));
    __VERIFIER_nondet_memory(ptr24, sizeof(*ptr24));
      // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::set(std::set<int, std::less<int>, std::allocator<int> > const&)
      __VERIFIER_nondet_memory(&third16, sizeof(third16));
      __VERIFIER_nondet_memory(&second15, sizeof(second15));
        unsigned long std25 = __VERIFIER_nondet_unsigned_long();
        unsigned long c26 = 5;
        _Bool c27 = ((std25 == c26)) ? 1 : 0;
        if (c27) {
        } else {
          char* cast28 = (char*)&(_str);
          char* c29 = _str_1;
          unsigned int c30 = 30;
          char* cast31 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast28, c29, c30, cast31);
        }
        struct std___Rb_tree_const_iterator_int_ std32;
        __VERIFIER_nondet_memory(&std32, sizeof(std32));
        ref_tmp017 = std32;
        struct std___Rb_tree_const_iterator_int_* std33;
        __VERIFIER_nondet_memory(&std33, sizeof(std33));
        int* std34;
        __VERIFIER_nondet_memory(&std34, sizeof(std34));
        int t35 = *std34;
        int c36 = 10;
        _Bool c37 = ((t35 == c36)) ? 1 : 0;
        if (c37) {
        } else {
          char* cast38 = (char*)&(_str_2);
          char* c39 = _str_1;
          unsigned int c40 = 32;
          char* cast41 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast38, c39, c40, cast41);
        }
        struct std___Rb_tree_const_iterator_int_ std42;
        __VERIFIER_nondet_memory(&std42, sizeof(std42));
        ref_tmp118 = std42;
        struct std___Rb_tree_const_iterator_int_* std43;
        __VERIFIER_nondet_memory(&std43, sizeof(std43));
        int c44 = 0;
        struct std___Rb_tree_const_iterator_int_ std45;
        __VERIFIER_nondet_memory(&std45, sizeof(std45));
        agg_tmp019 = std45;
        int* std46;
        __VERIFIER_nondet_memory(&std46, sizeof(std46));
        int t47 = *std46;
        int c48 = 50;
        _Bool c49 = ((t47 == c48)) ? 1 : 0;
        if (c49) {
        } else {
          char* cast50 = (char*)&(_str_3);
          char* c51 = _str_1;
          unsigned int c52 = 35;
          char* cast53 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast50, c51, c52, cast53);
        }
        int c54 = 0;
        __retval11 = c54;
        int t55 = __retval11;
        int ret_val56 = t55;
        {
          // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::~set()
          __VERIFIER_nondet_memory(&third16, sizeof(third16));
        }
        {
          // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::~set()
          __VERIFIER_nondet_memory(&second15, sizeof(second15));
        }
        {
          // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::~set()
          __VERIFIER_nondet_memory(&first12, sizeof(first12));
        }
        return ret_val56;
  int t57 = __retval11;
  return t57;
}

