extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Struct definitions (auto-parsed)
struct __gnu_cxx____aligned_membuf_std__pair_const_char__int__ { unsigned char _M_storage[8]; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Auto_node { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___* _M_t; struct std___Rb_tree_node_std__pair_const_char__int__* _M_node; };
struct std___Rb_tree_iterator_std__pair_const_char__int__ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_std__less_char__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_std__pair_const_char__int__;
struct std___Select1st_std__pair_const_char__int__ { unsigned char __field0; };
struct std____new_allocator_std___Rb_tree_node_std__pair_const_char__int___;
struct std____pair_base_char__int_;
struct std____pair_base_const_char__int_;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_std__pair_const_char__int___;
struct std__less_char_;
struct std__pair_char__int_ { char first; int second; };
struct std__pair_const_char__int_;
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ { struct std___Rb_tree_key_compare_std__less_char__ __field0; struct std___Rb_tree_header __field1; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ _M_impl; };
struct std__multimap_char__int__std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ _M_t; };

char _str[19] = "(*it).first == 'b'";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multimap/multimap_end/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[20] = "(*it).second == 150";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__multimap_char__int__std__less_char___std__allocator_std__pair_const_char__int___ mymultimap2;
  struct std__pair_char__int_ ref_tmp03;
  char ref_tmp14;
  int ref_tmp25;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp06;
  struct std__pair_char__int_ ref_tmp37;
  char ref_tmp48;
  int ref_tmp59;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp110;
  struct std__pair_char__int_ ref_tmp611;
  char ref_tmp712;
  int ref_tmp813;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp214;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ it15;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp316;
  int c17 = 0;
  __retval1 = c17;
  // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::multimap()
  __VERIFIER_nondet_memory(&mymultimap2, sizeof(mymultimap2));
    char c18 = 97;
    ref_tmp14 = c18;
    int c19 = 10;
    ref_tmp25 = c19;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
    __VERIFIER_nondet_memory(&ref_tmp25, sizeof(ref_tmp25));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std20;
    __VERIFIER_nondet_memory(&std20, sizeof(std20));
    agg_tmp06 = std20;
    char c21 = 98;
    ref_tmp48 = c21;
    int c22 = 20;
    ref_tmp59 = c22;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp37, sizeof(ref_tmp37));
    __VERIFIER_nondet_memory(&ref_tmp48, sizeof(ref_tmp48));
    __VERIFIER_nondet_memory(&ref_tmp59, sizeof(ref_tmp59));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std23;
    __VERIFIER_nondet_memory(&std23, sizeof(std23));
    agg_tmp110 = std23;
    char c24 = 98;
    ref_tmp712 = c24;
    int c25 = 150;
    ref_tmp813 = c25;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp611, sizeof(ref_tmp611));
    __VERIFIER_nondet_memory(&ref_tmp712, sizeof(ref_tmp712));
    __VERIFIER_nondet_memory(&ref_tmp813, sizeof(ref_tmp813));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    agg_tmp214 = std26;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    it15 = std27;
    int c28 = 0;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    agg_tmp316 = std29;
    struct std__pair_const_char__int_* std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
    char t31 = std30->first;
    int cast32 = (int)t31;
    int c33 = 98;
    _Bool c34 = ((cast32 == c33)) ? 1 : 0;
    if (c34) {
    } else {
      char* cast35 = (char*)&(_str);
      char* c36 = _str_1;
      unsigned int c37 = 25;
      char* cast38 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast35, c36, c37, cast38);
    }
    struct std__pair_const_char__int_* std39;
    __VERIFIER_nondet_memory(&std39, sizeof(std39));
    int t40 = std39->second;
    int c41 = 150;
    _Bool c42 = ((t40 == c41)) ? 1 : 0;
    if (c42) {
    } else {
      char* cast43 = (char*)&(_str_2);
      char* c44 = _str_1;
      unsigned int c45 = 26;
      char* cast46 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast43, c44, c45, cast46);
    }
    int c47 = 0;
    __retval1 = c47;
    int t48 = __retval1;
    int ret_val49 = t48;
    {
      // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~multimap()
      __VERIFIER_nondet_memory(&mymultimap2, sizeof(mymultimap2));
    }
    return ret_val49;
  int t50 = __retval1;
  return t50;
}

