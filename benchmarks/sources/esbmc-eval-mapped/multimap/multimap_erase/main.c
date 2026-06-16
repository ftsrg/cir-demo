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
struct std____pair_base_std___Rb_tree_iterator_std__pair_const_char__int____std___Rb_tree_iterator_std__pair_const_char__int___;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_std__pair_const_char__int___;
struct std__less_char_;
struct std__pair_char__int_ { char first; int second; };
struct std__pair_const_char__int_ { char first; int second; };
struct std__pair_std___Rb_tree_iterator_std__pair_const_char__int____std___Rb_tree_iterator_std__pair_const_char__int___ { struct std___Rb_tree_iterator_std__pair_const_char__int__ first; struct std___Rb_tree_iterator_std__pair_const_char__int__ second; };
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ { struct std___Rb_tree_key_compare_std__less_char__ __field0; struct std___Rb_tree_header __field1; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ _M_impl; };
struct std__multimap_char__int__std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ _M_t; };

char _str[23] = "mymultimap.size() == 1";
char _str_1[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multimap/multimap_erase/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[17] = "it->first == 'a'";
char _str_3[17] = "it->second == 10";
char _str_4[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_tree.h";
char __PRETTY_FUNCTION____ZNSt8_Rb_treeIcSt4pairIKciESt10_Select1stIS2_ESt4lessIcESaIS2_EE5eraseB5cxx11ESt17_Rb_tree_iteratorIS2_E[325] = "iterator std::_Rb_tree<char, std::pair<const char, int>, std::_Select1st<std::pair<const char, int>>, std::less<char>>::erase(iterator) [_Key = char, _Val = std::pair<const char, int>, _KeyOfValue = std::_Select1st<std::pair<const char, int>>, _Compare = std::less<char>, _Alloc = std::allocator<std::pair<const char, int>>]";
char _str_5[20] = "__position != end()";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0: ;
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
  struct std__pair_char__int_ ref_tmp1219;
  char ref_tmp1320;
  int ref_tmp1421;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp422;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ it23;
  char ref_tmp1524;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp525;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp626;
  char ref_tmp1627;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp1728;
  char ref_tmp1829;
  struct std___Rb_tree_const_iterator_std__pair_const_char__int__ agg_tmp730;
  struct std___Rb_tree_const_iterator_std__pair_const_char__int__ agg_tmp831;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp1932;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp933;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp2034;
  int c35 = 0;
  __retval1 = c35;
  // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::multimap()
  __VERIFIER_nondet_memory(&mymultimap2, sizeof(mymultimap2));
    char c36 = 97;
    ref_tmp14 = c36;
    int c37 = 10;
    ref_tmp25 = c37;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
    __VERIFIER_nondet_memory(&ref_tmp25, sizeof(ref_tmp25));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    agg_tmp06 = std38;
    char c39 = 98;
    ref_tmp48 = c39;
    int c40 = 20;
    ref_tmp59 = c40;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp37, sizeof(ref_tmp37));
    __VERIFIER_nondet_memory(&ref_tmp48, sizeof(ref_tmp48));
    __VERIFIER_nondet_memory(&ref_tmp59, sizeof(ref_tmp59));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
    agg_tmp110 = std41;
    char c42 = 98;
    ref_tmp712 = c42;
    int c43 = 30;
    ref_tmp813 = c43;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp611, sizeof(ref_tmp611));
    __VERIFIER_nondet_memory(&ref_tmp712, sizeof(ref_tmp712));
    __VERIFIER_nondet_memory(&ref_tmp813, sizeof(ref_tmp813));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std44;
    __VERIFIER_nondet_memory(&std44, sizeof(std44));
    agg_tmp214 = std44;
    char c45 = 99;
    ref_tmp1016 = c45;
    int c46 = 40;
    ref_tmp1117 = c46;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp915, sizeof(ref_tmp915));
    __VERIFIER_nondet_memory(&ref_tmp1016, sizeof(ref_tmp1016));
    __VERIFIER_nondet_memory(&ref_tmp1117, sizeof(ref_tmp1117));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std47;
    __VERIFIER_nondet_memory(&std47, sizeof(std47));
    agg_tmp318 = std47;
    char c48 = 100;
    ref_tmp1320 = c48;
    int c49 = 50;
    ref_tmp1421 = c49;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp1219, sizeof(ref_tmp1219));
    __VERIFIER_nondet_memory(&ref_tmp1320, sizeof(ref_tmp1320));
    __VERIFIER_nondet_memory(&ref_tmp1421, sizeof(ref_tmp1421));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std50;
    __VERIFIER_nondet_memory(&std50, sizeof(std50));
    agg_tmp422 = std50;
    char c51 = 98;
    ref_tmp1524 = c51;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std52;
    __VERIFIER_nondet_memory(&std52, sizeof(std52));
    it23 = std52;
    agg_tmp525 = it23; // copy
    struct std___Rb_tree_iterator_std__pair_const_char__int__ t53 = agg_tmp525;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std54;
    __VERIFIER_nondet_memory(&std54, sizeof(std54));
    agg_tmp626 = std54;
    char c55 = 98;
    ref_tmp1627 = c55;
    unsigned long std56 = __VERIFIER_nondet_unsigned_long();
    char c57 = 99;
    ref_tmp1829 = c57;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std58;
    __VERIFIER_nondet_memory(&std58, sizeof(std58));
    ref_tmp1728 = std58;
    struct std___Rb_tree_iterator_std__pair_const_char__int__* std59;
    __VERIFIER_nondet_memory(&std59, sizeof(std59));
    // externalized std:: op: std::_Rb_tree_const_iterator<std::pair<char const, int> >::_Rb_tree_const_iterator(std::_Rb_tree_iterator<std::pair<char const, int> > const&)
    __VERIFIER_nondet_memory(&agg_tmp730, sizeof(agg_tmp730));
    __VERIFIER_nondet_memory(&it23, sizeof(it23));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std60;
    __VERIFIER_nondet_memory(&std60, sizeof(std60));
    ref_tmp1932 = std60;
    // externalized std:: op: std::_Rb_tree_const_iterator<std::pair<char const, int> >::_Rb_tree_const_iterator(std::_Rb_tree_iterator<std::pair<char const, int> > const&)
    __VERIFIER_nondet_memory(&agg_tmp831, sizeof(agg_tmp831));
    __VERIFIER_nondet_memory(&ref_tmp1932, sizeof(ref_tmp1932));
    struct std___Rb_tree_const_iterator_std__pair_const_char__int__ t61 = agg_tmp730;
    struct std___Rb_tree_const_iterator_std__pair_const_char__int__ t62 = agg_tmp831;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std63;
    __VERIFIER_nondet_memory(&std63, sizeof(std63));
    agg_tmp933 = std63;
    unsigned long std64 = __VERIFIER_nondet_unsigned_long();
    unsigned long c65 = 1;
    _Bool c66 = ((std64 == c65)) ? 1 : 0;
    if (c66) {
    } else {
      char* cast67 = (char*)&(_str);
      char* c68 = (char*)_str_1;
      unsigned int c69 = 33;
      char* cast70 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast67, c68, c69, cast70);
    }
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std71;
    __VERIFIER_nondet_memory(&std71, sizeof(std71));
    ref_tmp2034 = std71;
    struct std___Rb_tree_iterator_std__pair_const_char__int__* std72;
    __VERIFIER_nondet_memory(&std72, sizeof(std72));
    struct std__pair_const_char__int_* std73;
    __VERIFIER_nondet_memory(&std73, sizeof(std73));
    char t74 = std73->first;
    int cast75 = (int)t74;
    int c76 = 97;
    _Bool c77 = ((cast75 == c76)) ? 1 : 0;
    if (c77) {
    } else {
      char* cast78 = (char*)&(_str_2);
      char* c79 = (char*)_str_1;
      unsigned int c80 = 35;
      char* cast81 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast78, c79, c80, cast81);
    }
    struct std__pair_const_char__int_* std82;
    __VERIFIER_nondet_memory(&std82, sizeof(std82));
    int t83 = std82->second;
    int c84 = 10;
    _Bool c85 = ((t83 == c84)) ? 1 : 0;
    if (c85) {
    } else {
      char* cast86 = (char*)&(_str_3);
      char* c87 = (char*)_str_1;
      unsigned int c88 = 36;
      char* cast89 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast86, c87, c88, cast89);
    }
    int c90 = 0;
    __retval1 = c90;
    int t91 = __retval1;
    int ret_val92 = t91;
    {
      // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~multimap()
      __VERIFIER_nondet_memory(&mymultimap2, sizeof(mymultimap2));
    }
    return ret_val92;
  int t93 = __retval1;
  return t93;
}

