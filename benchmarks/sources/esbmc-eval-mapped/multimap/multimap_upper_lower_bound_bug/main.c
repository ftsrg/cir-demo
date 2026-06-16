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
struct std___Rb_tree_node_std__pair_const_char__int__ { struct std___Rb_tree_node_base __field0; struct __gnu_cxx____aligned_membuf_std__pair_const_char__int__ _M_storage; };
struct std___Select1st_std__pair_const_char__int__ { unsigned char __field0; };
struct std____new_allocator_std___Rb_tree_node_std__pair_const_char__int___;
struct std____pair_base_char__int_;
struct std____pair_base_const_char__int_;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_std__pair_const_char__int___;
struct std__less_char_;
struct std__pair_char__int_ { char first; int second; };
struct std__pair_const_char__int_ { char first; int second; };
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ { struct std___Rb_tree_key_compare_std__less_char__ __field0; struct std___Rb_tree_header __field1; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ _M_impl; };
struct std__multimap_char__int__std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ _M_t; };

char _str[20] = "itlow->first == 'b'";
char _str_1[127] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multimap/multimap_upper_lower_bound_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[21] = "itlow->second == 121";
char _str_3[19] = "itup->first == 'd'";
char _str_4[22] = "itup->second == 11011";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0: ;
  int __retval1;
  struct std__multimap_char__int__std__less_char___std__allocator_std__pair_const_char__int___ mymultimap2;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ it3;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ itlow4;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ itup5;
  struct std__pair_char__int_ ref_tmp06;
  char ref_tmp17;
  int ref_tmp28;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp09;
  struct std__pair_char__int_ ref_tmp310;
  char ref_tmp411;
  int ref_tmp512;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp113;
  struct std__pair_char__int_ ref_tmp614;
  char ref_tmp715;
  int ref_tmp816;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp217;
  struct std__pair_char__int_ ref_tmp918;
  char ref_tmp1019;
  int ref_tmp1120;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp321;
  struct std__pair_char__int_ ref_tmp1222;
  char ref_tmp1323;
  int ref_tmp1424;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp425;
  struct std__pair_char__int_ ref_tmp1526;
  char ref_tmp1627;
  int ref_tmp1728;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp529;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp1830;
  char ref_tmp1931;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp2032;
  char ref_tmp2133;
  int c34 = 0;
  __retval1 = c34;
  // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::multimap()
  __VERIFIER_nondet_memory(&mymultimap2, sizeof(mymultimap2));
    // externalized std:: op: std::_Rb_tree_iterator<std::pair<char const, int> >::_Rb_tree_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    // externalized std:: op: std::_Rb_tree_iterator<std::pair<char const, int> >::_Rb_tree_iterator()
    __VERIFIER_nondet_memory(&itlow4, sizeof(itlow4));
    // externalized std:: op: std::_Rb_tree_iterator<std::pair<char const, int> >::_Rb_tree_iterator()
    __VERIFIER_nondet_memory(&itup5, sizeof(itup5));
    char c35 = 97;
    ref_tmp17 = c35;
    int c36 = 10;
    ref_tmp28 = c36;
    struct std__pair_char__int_ std37;
    __VERIFIER_nondet_memory(&std37, sizeof(std37));
    ref_tmp06 = std37;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    agg_tmp09 = std38;
    char c39 = 98;
    ref_tmp411 = c39;
    int c40 = 121;
    ref_tmp512 = c40;
    struct std__pair_char__int_ std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
    ref_tmp310 = std41;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    agg_tmp113 = std42;
    char c43 = 99;
    ref_tmp715 = c43;
    int c44 = 1001;
    ref_tmp816 = c44;
    struct std__pair_char__int_ std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
    ref_tmp614 = std45;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std46;
    __VERIFIER_nondet_memory(&std46, sizeof(std46));
    agg_tmp217 = std46;
    char c47 = 99;
    ref_tmp1019 = c47;
    int c48 = 2002;
    ref_tmp1120 = c48;
    struct std__pair_char__int_ std49;
    __VERIFIER_nondet_memory(&std49, sizeof(std49));
    ref_tmp918 = std49;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std50;
    __VERIFIER_nondet_memory(&std50, sizeof(std50));
    agg_tmp321 = std50;
    char c51 = 100;
    ref_tmp1323 = c51;
    int c52 = 11011;
    ref_tmp1424 = c52;
    struct std__pair_char__int_ std53;
    __VERIFIER_nondet_memory(&std53, sizeof(std53));
    ref_tmp1222 = std53;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std54;
    __VERIFIER_nondet_memory(&std54, sizeof(std54));
    agg_tmp425 = std54;
    char c55 = 101;
    ref_tmp1627 = c55;
    int c56 = 44;
    ref_tmp1728 = c56;
    struct std__pair_char__int_ std57;
    __VERIFIER_nondet_memory(&std57, sizeof(std57));
    ref_tmp1526 = std57;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std58;
    __VERIFIER_nondet_memory(&std58, sizeof(std58));
    agg_tmp529 = std58;
    char c59 = 98;
    ref_tmp1931 = c59;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std60;
    __VERIFIER_nondet_memory(&std60, sizeof(std60));
    ref_tmp1830 = std60;
    struct std___Rb_tree_iterator_std__pair_const_char__int__* std61;
    __VERIFIER_nondet_memory(&std61, sizeof(std61));
    char c62 = 100;
    ref_tmp2133 = c62;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std63;
    __VERIFIER_nondet_memory(&std63, sizeof(std63));
    ref_tmp2032 = std63;
    struct std___Rb_tree_iterator_std__pair_const_char__int__* std64;
    __VERIFIER_nondet_memory(&std64, sizeof(std64));
    struct std__pair_const_char__int_* std65;
    __VERIFIER_nondet_memory(&std65, sizeof(std65));
    char t66 = std65->first;
    int cast67 = (int)t66;
    int c68 = 98;
    _Bool c69 = ((cast67 == c68)) ? 1 : 0;
    if (c69) {
    } else {
      char* cast70 = (char*)&(_str);
      char* c71 = (char*)_str_1;
      unsigned int c72 = 28;
      char* cast73 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast70, c71, c72, cast73);
    }
    struct std__pair_const_char__int_* std74;
    __VERIFIER_nondet_memory(&std74, sizeof(std74));
    int t75 = std74->second;
    int c76 = 121;
    _Bool c77 = ((t75 == c76)) ? 1 : 0;
    if (c77) {
    } else {
      char* cast78 = (char*)&(_str_2);
      char* c79 = (char*)_str_1;
      unsigned int c80 = 29;
      char* cast81 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast78, c79, c80, cast81);
    }
    struct std__pair_const_char__int_* std82;
    __VERIFIER_nondet_memory(&std82, sizeof(std82));
    char t83 = std82->first;
    int cast84 = (int)t83;
    int c85 = 100;
    _Bool c86 = ((cast84 == c85)) ? 1 : 0;
    if (c86) {
    } else {
      char* cast87 = (char*)&(_str_3);
      char* c88 = (char*)_str_1;
      unsigned int c89 = 30;
      char* cast90 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast87, c88, c89, cast90);
    }
    struct std__pair_const_char__int_* std91;
    __VERIFIER_nondet_memory(&std91, sizeof(std91));
    int t92 = std91->second;
    int c93 = 11011;
    _Bool c94 = ((t92 == c93)) ? 1 : 0;
    if (c94) {
    } else {
      char* cast95 = (char*)&(_str_4);
      char* c96 = (char*)_str_1;
      unsigned int c97 = 31;
      char* cast98 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast95, c96, c97, cast98);
    }
    int c99 = 0;
    __retval1 = c99;
    int t100 = __retval1;
    int ret_val101 = t100;
    {
      // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~multimap()
      __VERIFIER_nondet_memory(&mymultimap2, sizeof(mymultimap2));
    }
    return ret_val101;
  int t102 = __retval1;
  return t102;
}

