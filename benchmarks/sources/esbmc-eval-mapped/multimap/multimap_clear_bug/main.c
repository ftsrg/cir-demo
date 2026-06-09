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

char _str[23] = "mymultimap.size() != 0";
char _str_1[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multimap/multimap_clear_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[23] = "mymultimap.size() == 1";
char _str_3[17] = "it->first == 'a'";
char _str_4[17] = "it->second == 11";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
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
  struct std__pair_char__int_ ref_tmp612;
  char ref_tmp713;
  int ref_tmp814;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp215;
  struct std__pair_char__int_ ref_tmp916;
  char ref_tmp1017;
  int ref_tmp1118;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp319;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp1220;
  int c21 = 0;
  __retval1 = c21;
  // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::multimap()
  __VERIFIER_nondet_memory(&mymultimap2, sizeof(mymultimap2));
    // externalized std:: op: std::_Rb_tree_iterator<std::pair<char const, int> >::_Rb_tree_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    char c22 = 98;
    ref_tmp15 = c22;
    int c23 = 80;
    ref_tmp26 = c23;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    __VERIFIER_nondet_memory(&ref_tmp26, sizeof(ref_tmp26));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std24;
    __VERIFIER_nondet_memory(&std24, sizeof(std24));
    agg_tmp07 = std24;
    char c25 = 98;
    ref_tmp49 = c25;
    int c26 = 120;
    ref_tmp510 = c26;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp38, sizeof(ref_tmp38));
    __VERIFIER_nondet_memory(&ref_tmp49, sizeof(ref_tmp49));
    __VERIFIER_nondet_memory(&ref_tmp510, sizeof(ref_tmp510));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    agg_tmp111 = std27;
    char c28 = 113;
    ref_tmp713 = c28;
    int c29 = 360;
    ref_tmp814 = c29;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp612, sizeof(ref_tmp612));
    __VERIFIER_nondet_memory(&ref_tmp713, sizeof(ref_tmp713));
    __VERIFIER_nondet_memory(&ref_tmp814, sizeof(ref_tmp814));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
    agg_tmp215 = std30;
    // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::clear()
    __VERIFIER_nondet_memory(&mymultimap2, sizeof(mymultimap2));
    unsigned long std31 = __VERIFIER_nondet_unsigned_long();
    unsigned long c32 = 0;
    _Bool c33 = ((std31 != c32)) ? 1 : 0;
    if (c33) {
    } else {
      char* cast34 = (char*)&(_str);
      char* c35 = _str_1;
      unsigned int c36 = 25;
      char* cast37 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast34, c35, c36, cast37);
    }
    char c38 = 97;
    ref_tmp1017 = c38;
    int c39 = 11;
    ref_tmp1118 = c39;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp916, sizeof(ref_tmp916));
    __VERIFIER_nondet_memory(&ref_tmp1017, sizeof(ref_tmp1017));
    __VERIFIER_nondet_memory(&ref_tmp1118, sizeof(ref_tmp1118));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    agg_tmp319 = std40;
    unsigned long std41 = __VERIFIER_nondet_unsigned_long();
    unsigned long c42 = 1;
    _Bool c43 = ((std41 == c42)) ? 1 : 0;
    if (c43) {
    } else {
      char* cast44 = (char*)&(_str_2);
      char* c45 = _str_1;
      unsigned int c46 = 27;
      char* cast47 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast44, c45, c46, cast47);
    }
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std48;
    __VERIFIER_nondet_memory(&std48, sizeof(std48));
    ref_tmp1220 = std48;
    struct std___Rb_tree_iterator_std__pair_const_char__int__* std49;
    __VERIFIER_nondet_memory(&std49, sizeof(std49));
    struct std__pair_const_char__int_* std50;
    __VERIFIER_nondet_memory(&std50, sizeof(std50));
    char t51 = std50->first;
    int cast52 = (int)t51;
    int c53 = 97;
    _Bool c54 = ((cast52 == c53)) ? 1 : 0;
    if (c54) {
    } else {
      char* cast55 = (char*)&(_str_3);
      char* c56 = _str_1;
      unsigned int c57 = 29;
      char* cast58 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast55, c56, c57, cast58);
    }
    struct std__pair_const_char__int_* std59;
    __VERIFIER_nondet_memory(&std59, sizeof(std59));
    int t60 = std59->second;
    int c61 = 11;
    _Bool c62 = ((t60 == c61)) ? 1 : 0;
    if (c62) {
    } else {
      char* cast63 = (char*)&(_str_4);
      char* c64 = _str_1;
      unsigned int c65 = 30;
      char* cast66 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast63, c64, c65, cast66);
    }
    int c67 = 0;
    __retval1 = c67;
    int t68 = __retval1;
    int ret_val69 = t68;
    {
      // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~multimap()
      __VERIFIER_nondet_memory(&mymultimap2, sizeof(mymultimap2));
    }
    return ret_val69;
  int t70 = __retval1;
  return t70;
}

