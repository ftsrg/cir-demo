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
struct std__iterator_std__bidirectional_iterator_tag__std__pair_const_char__int___long__std__pair_const_char__int_____std__pair_const_char__int____;
struct std__less_char_;
struct std__pair_char__int_ { char first; int second; };
struct std__pair_const_char__int_;
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ { struct std___Rb_tree_iterator_std__pair_const_char__int__ current; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ { struct std___Rb_tree_key_compare_std__less_char__ __field0; struct std___Rb_tree_header __field1; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ _M_impl; };
struct std__multimap_char__int__std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ _M_t; };

char _str[18] = "rit->first == 'x'";
char _str_1[114] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multimap/multimap_rend_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "rit->second == 10";
char _str_3[18] = "rit->first == 'y'";
char _str_4[18] = "rit->second != 20";
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
  struct std__pair_char__int_ ref_tmp915;
  char ref_tmp1016;
  int ref_tmp1117;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp318;
  struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ rit19;
  struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ agg_tmp420;
  struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ agg_tmp521;
  int c22 = 0;
  __retval1 = c22;
  // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::multimap()
  __VERIFIER_nondet_memory(&mymultimap2, sizeof(mymultimap2));
    char c23 = 120;
    ref_tmp14 = c23;
    int c24 = 10;
    ref_tmp25 = c24;
    struct std__pair_char__int_ std25;
    __VERIFIER_nondet_memory(&std25, sizeof(std25));
    ref_tmp03 = std25;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    agg_tmp06 = std26;
    char c27 = 121;
    ref_tmp48 = c27;
    int c28 = 20;
    ref_tmp59 = c28;
    struct std__pair_char__int_ std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    ref_tmp37 = std29;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
    agg_tmp110 = std30;
    char c31 = 121;
    ref_tmp712 = c31;
    int c32 = 150;
    ref_tmp813 = c32;
    struct std__pair_char__int_ std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    ref_tmp611 = std33;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std34;
    __VERIFIER_nondet_memory(&std34, sizeof(std34));
    agg_tmp214 = std34;
    char c35 = 122;
    ref_tmp1016 = c35;
    int c36 = 9;
    ref_tmp1117 = c36;
    struct std__pair_char__int_ std37;
    __VERIFIER_nondet_memory(&std37, sizeof(std37));
    ref_tmp915 = std37;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    agg_tmp318 = std38;
    struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ std39;
    __VERIFIER_nondet_memory(&std39, sizeof(std39));
    rit19 = std39;
    int c40 = 0;
    struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
    agg_tmp420 = std41;
    struct std__pair_const_char__int_* std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    char t43 = std42->first;
    int cast44 = (int)t43;
    int c45 = 120;
    _Bool c46 = ((cast44 == c45)) ? 1 : 0;
    if (c46) {
    } else {
      char* cast47 = (char*)&(_str);
      char* c48 = _str_1;
      unsigned int c49 = 24;
      char* cast50 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast47, c48, c49, cast50);
    }
    struct std__pair_const_char__int_* std51;
    __VERIFIER_nondet_memory(&std51, sizeof(std51));
    int t52 = std51->second;
    int c53 = 10;
    _Bool c54 = ((t52 == c53)) ? 1 : 0;
    if (c54) {
    } else {
      char* cast55 = (char*)&(_str_2);
      char* c56 = _str_1;
      unsigned int c57 = 25;
      char* cast58 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast55, c56, c57, cast58);
    }
    int c59 = 0;
    struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ std60;
    __VERIFIER_nondet_memory(&std60, sizeof(std60));
    agg_tmp521 = std60;
    struct std__pair_const_char__int_* std61;
    __VERIFIER_nondet_memory(&std61, sizeof(std61));
    char t62 = std61->first;
    int cast63 = (int)t62;
    int c64 = 121;
    _Bool c65 = ((cast63 == c64)) ? 1 : 0;
    if (c65) {
    } else {
      char* cast66 = (char*)&(_str_3);
      char* c67 = _str_1;
      unsigned int c68 = 27;
      char* cast69 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast66, c67, c68, cast69);
    }
    struct std__pair_const_char__int_* std70;
    __VERIFIER_nondet_memory(&std70, sizeof(std70));
    int t71 = std70->second;
    int c72 = 20;
    _Bool c73 = ((t71 != c72)) ? 1 : 0;
    if (c73) {
    } else {
      char* cast74 = (char*)&(_str_4);
      char* c75 = _str_1;
      unsigned int c76 = 28;
      char* cast77 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast74, c75, c76, cast77);
    }
    int c78 = 0;
    __retval1 = c78;
    int t79 = __retval1;
    int ret_val80 = t79;
    {
      // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~multimap()
      __VERIFIER_nondet_memory(&mymultimap2, sizeof(mymultimap2));
    }
    return ret_val80;
  int t81 = __retval1;
  return t81;
}

