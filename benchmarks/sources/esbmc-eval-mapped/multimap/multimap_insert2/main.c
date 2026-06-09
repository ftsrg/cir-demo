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
struct std___Rb_tree_const_iterator_std__pair_const_char__int__ { struct std___Rb_tree_node_base* _M_node; };
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

char _str[17] = "it->first == 'b'";
char _str_1[113] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multimap/multimap_insert2/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[17] = "it->second == 75";
char _str_3[17] = "it->first == 'c'";
char _str_4[18] = "it->second == 300";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__multimap_char__int__std__less_char___std__allocator_std__pair_const_char__int___ mymultimap2;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ it3;
  struct std__pair_char__int_ ref_tmp04;
  char ref_tmp15;
  int ref_tmp26;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp07;
  struct std__pair_char__int_ ref_tmp38;
  char ref_tmp49;
  int ref_tmp510;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp111;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp612;
  struct std__pair_char__int_ ref_tmp713;
  char ref_tmp814;
  int ref_tmp915;
  struct std___Rb_tree_const_iterator_std__pair_const_char__int__ agg_tmp216;
  struct std__pair_char__int_ ref_tmp1017;
  char ref_tmp1118;
  int ref_tmp1219;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp320;
  struct std___Rb_tree_const_iterator_std__pair_const_char__int__ agg_tmp421;
  struct std__pair_char__int_ ref_tmp1322;
  char ref_tmp1423;
  int ref_tmp1524;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp525;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp626;
  int c27 = 0;
  __retval1 = c27;
  // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::multimap()
  __VERIFIER_nondet_memory(&mymultimap2, sizeof(mymultimap2));
    // externalized std:: op: std::_Rb_tree_iterator<std::pair<char const, int> >::_Rb_tree_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    char c28 = 97;
    ref_tmp15 = c28;
    int c29 = 100;
    ref_tmp26 = c29;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    __VERIFIER_nondet_memory(&ref_tmp26, sizeof(ref_tmp26));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
    agg_tmp07 = std30;
    char c31 = 122;
    ref_tmp49 = c31;
    int c32 = 150;
    ref_tmp510 = c32;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp38, sizeof(ref_tmp38));
    __VERIFIER_nondet_memory(&ref_tmp49, sizeof(ref_tmp49));
    __VERIFIER_nondet_memory(&ref_tmp510, sizeof(ref_tmp510));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    agg_tmp111 = std33;
    char c34 = 98;
    ref_tmp814 = c34;
    int c35 = 75;
    ref_tmp915 = c35;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp713, sizeof(ref_tmp713));
    __VERIFIER_nondet_memory(&ref_tmp814, sizeof(ref_tmp814));
    __VERIFIER_nondet_memory(&ref_tmp915, sizeof(ref_tmp915));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std36;
    __VERIFIER_nondet_memory(&std36, sizeof(std36));
    ref_tmp612 = std36;
    struct std___Rb_tree_iterator_std__pair_const_char__int__* std37;
    __VERIFIER_nondet_memory(&std37, sizeof(std37));
    // externalized std:: op: std::_Rb_tree_const_iterator<std::pair<char const, int> >::_Rb_tree_const_iterator(std::_Rb_tree_iterator<std::pair<char const, int> > const&)
    __VERIFIER_nondet_memory(&agg_tmp216, sizeof(agg_tmp216));
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    char c38 = 99;
    ref_tmp1118 = c38;
    int c39 = 300;
    ref_tmp1219 = c39;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp1017, sizeof(ref_tmp1017));
    __VERIFIER_nondet_memory(&ref_tmp1118, sizeof(ref_tmp1118));
    __VERIFIER_nondet_memory(&ref_tmp1219, sizeof(ref_tmp1219));
    struct std___Rb_tree_const_iterator_std__pair_const_char__int__ t40 = agg_tmp216;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
    agg_tmp320 = std41;
    // externalized std:: op: std::_Rb_tree_const_iterator<std::pair<char const, int> >::_Rb_tree_const_iterator(std::_Rb_tree_iterator<std::pair<char const, int> > const&)
    __VERIFIER_nondet_memory(&agg_tmp421, sizeof(agg_tmp421));
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    char c42 = 122;
    ref_tmp1423 = c42;
    int c43 = 400;
    ref_tmp1524 = c43;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp1322, sizeof(ref_tmp1322));
    __VERIFIER_nondet_memory(&ref_tmp1423, sizeof(ref_tmp1423));
    __VERIFIER_nondet_memory(&ref_tmp1524, sizeof(ref_tmp1524));
    struct std___Rb_tree_const_iterator_std__pair_const_char__int__ t44 = agg_tmp421;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
    agg_tmp525 = std45;
    struct std__pair_const_char__int_* std46;
    __VERIFIER_nondet_memory(&std46, sizeof(std46));
    char t47 = std46->first;
    int cast48 = (int)t47;
    int c49 = 98;
    _Bool c50 = ((cast48 == c49)) ? 1 : 0;
    if (c50) {
    } else {
      char* cast51 = (char*)&(_str);
      char* c52 = _str_1;
      unsigned int c53 = 25;
      char* cast54 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast51, c52, c53, cast54);
    }
    struct std__pair_const_char__int_* std55;
    __VERIFIER_nondet_memory(&std55, sizeof(std55));
    int t56 = std55->second;
    int c57 = 75;
    _Bool c58 = ((t56 == c57)) ? 1 : 0;
    if (c58) {
    } else {
      char* cast59 = (char*)&(_str_2);
      char* c60 = _str_1;
      unsigned int c61 = 26;
      char* cast62 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast59, c60, c61, cast62);
    }
    int c63 = 0;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std64;
    __VERIFIER_nondet_memory(&std64, sizeof(std64));
    agg_tmp626 = std64;
    struct std__pair_const_char__int_* std65;
    __VERIFIER_nondet_memory(&std65, sizeof(std65));
    char t66 = std65->first;
    int cast67 = (int)t66;
    int c68 = 99;
    _Bool c69 = ((cast67 == c68)) ? 1 : 0;
    if (c69) {
    } else {
      char* cast70 = (char*)&(_str_3);
      char* c71 = _str_1;
      unsigned int c72 = 28;
      char* cast73 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast70, c71, c72, cast73);
    }
    struct std__pair_const_char__int_* std74;
    __VERIFIER_nondet_memory(&std74, sizeof(std74));
    int t75 = std74->second;
    int c76 = 300;
    _Bool c77 = ((t75 == c76)) ? 1 : 0;
    if (c77) {
    } else {
      char* cast78 = (char*)&(_str_4);
      char* c79 = _str_1;
      unsigned int c80 = 29;
      char* cast81 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast78, c79, c80, cast81);
    }
    int c82 = 0;
    __retval1 = c82;
    int t83 = __retval1;
    int ret_val84 = t83;
    {
      // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~multimap()
      __VERIFIER_nondet_memory(&mymultimap2, sizeof(mymultimap2));
    }
    return ret_val84;
  int t85 = __retval1;
  return t85;
}

