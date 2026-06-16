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
struct std___Rb_tree_node_std__pair_const_char__int__ { struct std___Rb_tree_node_base __field0; struct __gnu_cxx____aligned_membuf_std__pair_const_char__int__ _M_storage; };
struct std___Select1st_std__pair_const_char__int__ { unsigned char __field0; };
struct std____new_allocator_std___Rb_tree_node_std__pair_const_char__int___;
struct std____pair_base_char__int_;
struct std____pair_base_const_char__int_;
struct std____pair_base_std___Rb_tree_const_iterator_std__pair_const_char__int____std___Rb_tree_const_iterator_std__pair_const_char__int___;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_std__pair_const_char__int___;
struct std__bidirectional_iterator_tag { unsigned char __field0; };
struct std__input_iterator_tag { unsigned char __field0; };
struct std__less_char_;
struct std__pair_char__int_ { char first; int second; };
struct std__pair_const_char__int_ { char first; int second; };
struct std__pair_std___Rb_tree_const_iterator_std__pair_const_char__int____std___Rb_tree_const_iterator_std__pair_const_char__int___ { struct std___Rb_tree_const_iterator_std__pair_const_char__int__ first; struct std___Rb_tree_const_iterator_std__pair_const_char__int__ second; };
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ { struct std___Rb_tree_key_compare_std__less_char__ __field0; struct std___Rb_tree_header __field1; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ _M_impl; };
struct std__multimap_char__int__std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ _M_t; };

char _str[21] = "mymm.count('x') == 1";
char _str_1[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multimap/multimap_count/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[21] = "mymm.count('y') == 3";
char _str_3[21] = "mymm.count('z') == 2";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0: ;
  int __retval1;
  struct std__multimap_char__int__std__less_char___std__allocator_std__pair_const_char__int___ mymm2;
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
  struct std__pair_char__int_ ref_tmp1219;
  char ref_tmp1320;
  int ref_tmp1421;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp422;
  struct std__pair_char__int_ ref_tmp1523;
  char ref_tmp1624;
  int ref_tmp1725;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp526;
  char ref_tmp1827;
  char ref_tmp1928;
  char ref_tmp2029;
  int c30 = 0;
  __retval1 = c30;
  // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::multimap()
  __VERIFIER_nondet_memory(&mymm2, sizeof(mymm2));
    char c31 = 120;
    ref_tmp14 = c31;
    int c32 = 50;
    ref_tmp25 = c32;
    struct std__pair_char__int_ std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    ref_tmp03 = std33;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std34;
    __VERIFIER_nondet_memory(&std34, sizeof(std34));
    agg_tmp06 = std34;
    char c35 = 121;
    ref_tmp48 = c35;
    int c36 = 100;
    ref_tmp59 = c36;
    struct std__pair_char__int_ std37;
    __VERIFIER_nondet_memory(&std37, sizeof(std37));
    ref_tmp37 = std37;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    agg_tmp110 = std38;
    char c39 = 121;
    ref_tmp712 = c39;
    int c40 = 150;
    ref_tmp813 = c40;
    struct std__pair_char__int_ std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
    ref_tmp611 = std41;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    agg_tmp214 = std42;
    char c43 = 121;
    ref_tmp1016 = c43;
    int c44 = 200;
    ref_tmp1117 = c44;
    struct std__pair_char__int_ std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
    ref_tmp915 = std45;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std46;
    __VERIFIER_nondet_memory(&std46, sizeof(std46));
    agg_tmp318 = std46;
    char c47 = 122;
    ref_tmp1320 = c47;
    int c48 = 250;
    ref_tmp1421 = c48;
    struct std__pair_char__int_ std49;
    __VERIFIER_nondet_memory(&std49, sizeof(std49));
    ref_tmp1219 = std49;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std50;
    __VERIFIER_nondet_memory(&std50, sizeof(std50));
    agg_tmp422 = std50;
    char c51 = 122;
    ref_tmp1624 = c51;
    int c52 = 300;
    ref_tmp1725 = c52;
    struct std__pair_char__int_ std53;
    __VERIFIER_nondet_memory(&std53, sizeof(std53));
    ref_tmp1523 = std53;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std54;
    __VERIFIER_nondet_memory(&std54, sizeof(std54));
    agg_tmp526 = std54;
    char c55 = 120;
    ref_tmp1827 = c55;
    unsigned long std56 = __VERIFIER_nondet_unsigned_long();
    unsigned long c57 = 1;
    _Bool c58 = ((std56 == c57)) ? 1 : 0;
    if (c58) {
    } else {
      char* cast59 = (char*)&(_str);
      char* c60 = (char*)_str_1;
      unsigned int c61 = 25;
      char* cast62 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast59, c60, c61, cast62);
    }
    char c63 = 121;
    ref_tmp1928 = c63;
    unsigned long std64 = __VERIFIER_nondet_unsigned_long();
    unsigned long c65 = 3;
    _Bool c66 = ((std64 == c65)) ? 1 : 0;
    if (c66) {
    } else {
      char* cast67 = (char*)&(_str_2);
      char* c68 = (char*)_str_1;
      unsigned int c69 = 26;
      char* cast70 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast67, c68, c69, cast70);
    }
    char c71 = 122;
    ref_tmp2029 = c71;
    unsigned long std72 = __VERIFIER_nondet_unsigned_long();
    unsigned long c73 = 2;
    _Bool c74 = ((std72 == c73)) ? 1 : 0;
    if (c74) {
    } else {
      char* cast75 = (char*)&(_str_3);
      char* c76 = (char*)_str_1;
      unsigned int c77 = 27;
      char* cast78 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast75, c76, c77, cast78);
    }
    int c79 = 0;
    __retval1 = c79;
    int t80 = __retval1;
    int ret_val81 = t80;
    {
      // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~multimap()
      __VERIFIER_nondet_memory(&mymm2, sizeof(mymm2));
    }
    return ret_val81;
  int t82 = __retval1;
  return t82;
}

