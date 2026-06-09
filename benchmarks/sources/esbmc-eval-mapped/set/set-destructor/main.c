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
char _str[18] = "first.size() == 0";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-destructor/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
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
  int myints13[5];
  struct std__set_int__std__less_int___std__allocator_int__ second14;
  struct std__set_int__std__less_int___std__allocator_int__ third15;
  int c16 = 0;
  __retval11 = c16;
  // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::set()
  __VERIFIER_nondet_memory(&first12, sizeof(first12));
    // array copy
    __builtin_memcpy(myints13, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
    int* cast17 = (int*)&(myints13);
    int* cast18 = (int*)&(myints13);
    int c19 = 5;
    int* ptr20 = &(cast18)[c19];
    // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::set<int*>(int*, int*)
    __VERIFIER_nondet_memory(&second14, sizeof(second14));
    __VERIFIER_nondet_memory(cast17, sizeof(*cast17));
    __VERIFIER_nondet_memory(ptr20, sizeof(*ptr20));
      // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::set(std::set<int, std::less<int>, std::allocator<int> > const&)
      __VERIFIER_nondet_memory(&third15, sizeof(third15));
      __VERIFIER_nondet_memory(&second14, sizeof(second14));
        // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::~set()
        __VERIFIER_nondet_memory(&first12, sizeof(first12));
        // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::~set()
        __VERIFIER_nondet_memory(&second14, sizeof(second14));
        // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::~set()
        __VERIFIER_nondet_memory(&third15, sizeof(third15));
        unsigned long std21 = __VERIFIER_nondet_unsigned_long();
        unsigned long c22 = 0;
        _Bool c23 = ((std21 == c22)) ? 1 : 0;
        if (c23) {
        } else {
          char* cast24 = (char*)&(_str);
          char* c25 = _str_1;
          unsigned int c26 = 34;
          char* cast27 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast24, c25, c26, cast27);
        }
        unsigned long std28 = __VERIFIER_nondet_unsigned_long();
        unsigned long c29 = 0;
        _Bool c30 = ((std28 == c29)) ? 1 : 0;
        if (c30) {
        } else {
          char* cast31 = (char*)&(_str);
          char* c32 = _str_1;
          unsigned int c33 = 35;
          char* cast34 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast31, c32, c33, cast34);
        }
        unsigned long std35 = __VERIFIER_nondet_unsigned_long();
        unsigned long c36 = 0;
        _Bool c37 = ((std35 == c36)) ? 1 : 0;
        if (c37) {
        } else {
          char* cast38 = (char*)&(_str);
          char* c39 = _str_1;
          unsigned int c40 = 36;
          char* cast41 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast38, c39, c40, cast41);
        }
        int c42 = 0;
        __retval11 = c42;
        int t43 = __retval11;
        int ret_val44 = t43;
        {
          // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::~set()
          __VERIFIER_nondet_memory(&third15, sizeof(third15));
        }
        {
          // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::~set()
          __VERIFIER_nondet_memory(&second14, sizeof(second14));
        }
        {
          // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::~set()
          __VERIFIER_nondet_memory(&first12, sizeof(first12));
        }
        return ret_val44;
  int t45 = __retval11;
  return t45;
}

