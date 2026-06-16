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

int __const_main_myints[5] = {10, 20, 30, 40, 50};
char _str[18] = "first.size() == 0";
char _str_1[105] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-construct/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[29] = "first.begin() == first.end()";
char _str_3[19] = "second.size() == 5";
char _str_4[10] = "*it == 10";
char _str_5[10] = "*it == 50";
_Bool fncomp(int p0, int p1);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: _Z6fncompii
_Bool fncomp(int v0, int v1) {
bb2: ;
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
bb10: ;
  int __retval11;
  struct std__set_int__std__less_int___std__allocator_int__ first12;
  struct std___Rb_tree_const_iterator_int_ ref_tmp013;
  struct std___Rb_tree_const_iterator_int_ ref_tmp114;
  int myints15[5];
  struct std__set_int__std__less_int___std__allocator_int__ second16;
  struct std___Rb_tree_const_iterator_int_ it17;
  struct std___Rb_tree_const_iterator_int_ ref_tmp218;
  struct std___Rb_tree_const_iterator_int_ agg_tmp019;
  int c20 = 0;
  __retval11 = c20;
  // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::set()
  __VERIFIER_nondet_memory(&first12, sizeof(first12));
    unsigned long std21 = __VERIFIER_nondet_unsigned_long();
    unsigned long c22 = 0;
    _Bool c23 = ((std21 == c22)) ? 1 : 0;
    if (c23) {
    } else {
      char* cast24 = (char*)&(_str);
      char* c25 = (char*)_str_1;
      unsigned int c26 = 24;
      char* cast27 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast24, c25, c26, cast27);
    }
    struct std___Rb_tree_const_iterator_int_ std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    ref_tmp013 = std28;
    struct std___Rb_tree_const_iterator_int_ std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    ref_tmp114 = std29;
    _Bool std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
    if (std30) {
    } else {
      char* cast31 = (char*)&(_str_2);
      char* c32 = (char*)_str_1;
      unsigned int c33 = 25;
      char* cast34 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast31, c32, c33, cast34);
    }
    // array copy
    __builtin_memcpy(myints15, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
    int* cast35 = (int*)&(myints15);
    int* cast36 = (int*)&(myints15);
    int c37 = 5;
    int* ptr38 = &(cast36)[c37];
    // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::set<int*>(int*, int*)
    __VERIFIER_nondet_memory(&second16, sizeof(second16));
    __VERIFIER_nondet_memory(cast35, sizeof(*cast35));
    __VERIFIER_nondet_memory(ptr38, sizeof(*ptr38));
      unsigned long std39 = __VERIFIER_nondet_unsigned_long();
      unsigned long c40 = 5;
      _Bool c41 = ((std39 == c40)) ? 1 : 0;
      if (c41) {
      } else {
        char* cast42 = (char*)&(_str_3);
        char* c43 = (char*)_str_1;
        unsigned int c44 = 28;
        char* cast45 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast42, c43, c44, cast45);
      }
      struct std___Rb_tree_const_iterator_int_ std46;
      __VERIFIER_nondet_memory(&std46, sizeof(std46));
      it17 = std46;
      int* std47;
      __VERIFIER_nondet_memory(&std47, sizeof(std47));
      int t48 = *std47;
      int c49 = 10;
      _Bool c50 = ((t48 == c49)) ? 1 : 0;
      if (c50) {
      } else {
        char* cast51 = (char*)&(_str_4);
        char* c52 = (char*)_str_1;
        unsigned int c53 = 30;
        char* cast54 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast51, c52, c53, cast54);
      }
      struct std___Rb_tree_const_iterator_int_ std55;
      __VERIFIER_nondet_memory(&std55, sizeof(std55));
      ref_tmp218 = std55;
      struct std___Rb_tree_const_iterator_int_* std56;
      __VERIFIER_nondet_memory(&std56, sizeof(std56));
      int c57 = 0;
      struct std___Rb_tree_const_iterator_int_ std58;
      __VERIFIER_nondet_memory(&std58, sizeof(std58));
      agg_tmp019 = std58;
      int* std59;
      __VERIFIER_nondet_memory(&std59, sizeof(std59));
      int t60 = *std59;
      int c61 = 50;
      _Bool c62 = ((t60 == c61)) ? 1 : 0;
      if (c62) {
      } else {
        char* cast63 = (char*)&(_str_5);
        char* c64 = (char*)_str_1;
        unsigned int c65 = 33;
        char* cast66 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast63, c64, c65, cast66);
      }
      int c67 = 0;
      __retval11 = c67;
      int t68 = __retval11;
      int ret_val69 = t68;
      {
        // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::~set()
        __VERIFIER_nondet_memory(&second16, sizeof(second16));
      }
      {
        // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::~set()
        __VERIFIER_nondet_memory(&first12, sizeof(first12));
      }
      return ret_val69;
  int t70 = __retval11;
  return t70;
}

