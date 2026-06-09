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
struct std__allocator_std___Rb_tree_node_int__;
struct std__less_int_;
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__set_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int __const_main_myints[5] = {10, 20, 30, 40, 50};
char _str[19] = "fourth.size() == 5";
char _str_1[107] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-construct-4/main.cpp";
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
  int myints12[5];
  struct std__set_int__std__less_int___std__allocator_int__ second13;
  struct std__set_int__std__less_int___std__allocator_int__ fourth14;
  struct std___Rb_tree_const_iterator_int_ agg_tmp015;
  struct std___Rb_tree_const_iterator_int_ agg_tmp116;
  struct std___Rb_tree_const_iterator_int_ it17;
  struct std___Rb_tree_const_iterator_int_ ref_tmp018;
  struct std___Rb_tree_const_iterator_int_ ref_tmp119;
  struct std___Rb_tree_const_iterator_int_ agg_tmp220;
  int c21 = 0;
  __retval11 = c21;
  // array copy
  __builtin_memcpy(myints12, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
  int* cast22 = (int*)&(myints12);
  int* cast23 = (int*)&(myints12);
  int c24 = 5;
  int* ptr25 = &(cast23)[c24];
  // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::set<int*>(int*, int*)
  __VERIFIER_nondet_memory(&second13, sizeof(second13));
  __VERIFIER_nondet_memory(cast22, sizeof(*cast22));
  __VERIFIER_nondet_memory(ptr25, sizeof(*ptr25));
    struct std___Rb_tree_const_iterator_int_ std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    agg_tmp015 = std26;
    struct std___Rb_tree_const_iterator_int_ std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    agg_tmp116 = std27;
    struct std___Rb_tree_const_iterator_int_ t28 = agg_tmp015;
    struct std___Rb_tree_const_iterator_int_ t29 = agg_tmp116;
    // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::set<std::_Rb_tree_const_iterator<int> >(std::_Rb_tree_const_iterator<int>, std::_Rb_tree_const_iterator<int>)
    __VERIFIER_nondet_memory(&fourth14, sizeof(fourth14));
      // externalized std:: op: std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator()
      __VERIFIER_nondet_memory(&it17, sizeof(it17));
      unsigned long std30 = __VERIFIER_nondet_unsigned_long();
      unsigned long c31 = 5;
      _Bool c32 = ((std30 == c31)) ? 1 : 0;
      if (c32) {
      } else {
        char* cast33 = (char*)&(_str);
        char* c34 = _str_1;
        unsigned int c35 = 27;
        char* cast36 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast33, c34, c35, cast36);
      }
      struct std___Rb_tree_const_iterator_int_ std37;
      __VERIFIER_nondet_memory(&std37, sizeof(std37));
      ref_tmp018 = std37;
      struct std___Rb_tree_const_iterator_int_* std38;
      __VERIFIER_nondet_memory(&std38, sizeof(std38));
      int* std39;
      __VERIFIER_nondet_memory(&std39, sizeof(std39));
      int t40 = *std39;
      int c41 = 10;
      _Bool c42 = ((t40 == c41)) ? 1 : 0;
      if (c42) {
      } else {
        char* cast43 = (char*)&(_str_2);
        char* c44 = _str_1;
        unsigned int c45 = 29;
        char* cast46 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast43, c44, c45, cast46);
      }
      struct std___Rb_tree_const_iterator_int_ std47;
      __VERIFIER_nondet_memory(&std47, sizeof(std47));
      ref_tmp119 = std47;
      struct std___Rb_tree_const_iterator_int_* std48;
      __VERIFIER_nondet_memory(&std48, sizeof(std48));
      int c49 = 0;
      struct std___Rb_tree_const_iterator_int_ std50;
      __VERIFIER_nondet_memory(&std50, sizeof(std50));
      agg_tmp220 = std50;
      int* std51;
      __VERIFIER_nondet_memory(&std51, sizeof(std51));
      int t52 = *std51;
      int c53 = 50;
      _Bool c54 = ((t52 == c53)) ? 1 : 0;
      if (c54) {
      } else {
        char* cast55 = (char*)&(_str_3);
        char* c56 = _str_1;
        unsigned int c57 = 32;
        char* cast58 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast55, c56, c57, cast58);
      }
      int c59 = 0;
      __retval11 = c59;
      int t60 = __retval11;
      int ret_val61 = t60;
      {
        // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::~set()
        __VERIFIER_nondet_memory(&fourth14, sizeof(fourth14));
      }
      {
        // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::~set()
        __VERIFIER_nondet_memory(&second13, sizeof(second13));
      }
      return ret_val61;
  int t62 = __retval11;
  return t62;
}

