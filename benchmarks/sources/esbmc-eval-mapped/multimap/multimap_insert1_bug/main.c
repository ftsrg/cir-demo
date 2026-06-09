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

char _str[17] = "it->first == 'b'";
char _str_1[117] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multimap/multimap_insert1_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[17] = "it->second == 75";
char _str_3[17] = "it->first == 'a'";
char _str_4[18] = "it->second != 100";
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
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp216;
  int c17 = 0;
  __retval1 = c17;
  // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::multimap()
  __VERIFIER_nondet_memory(&mymultimap2, sizeof(mymultimap2));
    // externalized std:: op: std::_Rb_tree_iterator<std::pair<char const, int> >::_Rb_tree_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    char c18 = 97;
    ref_tmp15 = c18;
    int c19 = 100;
    ref_tmp26 = c19;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    __VERIFIER_nondet_memory(&ref_tmp26, sizeof(ref_tmp26));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std20;
    __VERIFIER_nondet_memory(&std20, sizeof(std20));
    agg_tmp07 = std20;
    char c21 = 122;
    ref_tmp49 = c21;
    int c22 = 150;
    ref_tmp510 = c22;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp38, sizeof(ref_tmp38));
    __VERIFIER_nondet_memory(&ref_tmp49, sizeof(ref_tmp49));
    __VERIFIER_nondet_memory(&ref_tmp510, sizeof(ref_tmp510));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std23;
    __VERIFIER_nondet_memory(&std23, sizeof(std23));
    agg_tmp111 = std23;
    char c24 = 98;
    ref_tmp814 = c24;
    int c25 = 75;
    ref_tmp915 = c25;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp713, sizeof(ref_tmp713));
    __VERIFIER_nondet_memory(&ref_tmp814, sizeof(ref_tmp814));
    __VERIFIER_nondet_memory(&ref_tmp915, sizeof(ref_tmp915));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    ref_tmp612 = std26;
    struct std___Rb_tree_iterator_std__pair_const_char__int__* std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    struct std__pair_const_char__int_* std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    char t29 = std28->first;
    int cast30 = (int)t29;
    int c31 = 98;
    _Bool c32 = ((cast30 == c31)) ? 1 : 0;
    if (c32) {
    } else {
      char* cast33 = (char*)&(_str);
      char* c34 = _str_1;
      unsigned int c35 = 22;
      char* cast36 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast33, c34, c35, cast36);
    }
    struct std__pair_const_char__int_* std37;
    __VERIFIER_nondet_memory(&std37, sizeof(std37));
    int t38 = std37->second;
    int c39 = 75;
    _Bool c40 = ((t38 == c39)) ? 1 : 0;
    if (c40) {
    } else {
      char* cast41 = (char*)&(_str_2);
      char* c42 = _str_1;
      unsigned int c43 = 23;
      char* cast44 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast41, c42, c43, cast44);
    }
    int c45 = 0;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std46;
    __VERIFIER_nondet_memory(&std46, sizeof(std46));
    agg_tmp216 = std46;
    struct std__pair_const_char__int_* std47;
    __VERIFIER_nondet_memory(&std47, sizeof(std47));
    char t48 = std47->first;
    int cast49 = (int)t48;
    int c50 = 97;
    _Bool c51 = ((cast49 == c50)) ? 1 : 0;
    if (c51) {
    } else {
      char* cast52 = (char*)&(_str_3);
      char* c53 = _str_1;
      unsigned int c54 = 25;
      char* cast55 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast52, c53, c54, cast55);
    }
    struct std__pair_const_char__int_* std56;
    __VERIFIER_nondet_memory(&std56, sizeof(std56));
    int t57 = std56->second;
    int c58 = 100;
    _Bool c59 = ((t57 != c58)) ? 1 : 0;
    if (c59) {
    } else {
      char* cast60 = (char*)&(_str_4);
      char* c61 = _str_1;
      unsigned int c62 = 26;
      char* cast63 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast60, c61, c62, cast63);
    }
    int c64 = 0;
    __retval1 = c64;
    int t65 = __retval1;
    int ret_val66 = t65;
    {
      // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~multimap()
      __VERIFIER_nondet_memory(&mymultimap2, sizeof(mymultimap2));
    }
    return ret_val66;
  int t67 = __retval1;
  return t67;
}

