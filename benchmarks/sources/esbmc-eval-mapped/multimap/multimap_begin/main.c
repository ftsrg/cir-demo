extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Struct definitions (auto-parsed)
struct __gnu_cxx____aligned_membuf_std__pair_const_char__int__ { unsigned char _M_storage[8]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
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
struct std__ios_base;
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ { struct std___Rb_tree_key_compare_std__less_char__ __field0; struct std___Rb_tree_header __field1; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ _M_impl; };
struct std__multimap_char__int__std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ _M_t; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[19] = "(*it).first == 'a'";
char _str_1[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multimap/multimap_begin/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[19] = "(*it).second == 10";
char _str_3[19] = "(*it).first == 'b'";
char _str_4[19] = "(*it).second == 20";
char _str_5[20] = "(*it).second == 150";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_6[5] = " => ";
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
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp417;
  int c18 = 0;
  __retval1 = c18;
  // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::multimap()
  __VERIFIER_nondet_memory(&mymultimap2, sizeof(mymultimap2));
    char c19 = 97;
    ref_tmp14 = c19;
    int c20 = 10;
    ref_tmp25 = c20;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
    __VERIFIER_nondet_memory(&ref_tmp25, sizeof(ref_tmp25));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std21;
    __VERIFIER_nondet_memory(&std21, sizeof(std21));
    agg_tmp06 = std21;
    char c22 = 98;
    ref_tmp48 = c22;
    int c23 = 20;
    ref_tmp59 = c23;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp37, sizeof(ref_tmp37));
    __VERIFIER_nondet_memory(&ref_tmp48, sizeof(ref_tmp48));
    __VERIFIER_nondet_memory(&ref_tmp59, sizeof(ref_tmp59));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std24;
    __VERIFIER_nondet_memory(&std24, sizeof(std24));
    agg_tmp110 = std24;
    char c25 = 98;
    ref_tmp712 = c25;
    int c26 = 150;
    ref_tmp813 = c26;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp611, sizeof(ref_tmp611));
    __VERIFIER_nondet_memory(&ref_tmp712, sizeof(ref_tmp712));
    __VERIFIER_nondet_memory(&ref_tmp813, sizeof(ref_tmp813));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    agg_tmp214 = std27;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    it15 = std28;
    struct std__pair_const_char__int_* std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    char t30 = std29->first;
    int cast31 = (int)t30;
    int c32 = 97;
    _Bool c33 = ((cast31 == c32)) ? 1 : 0;
    if (c33) {
    } else {
      char* cast34 = (char*)&(_str);
      char* c35 = _str_1;
      unsigned int c36 = 24;
      char* cast37 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast34, c35, c36, cast37);
    }
    struct std__pair_const_char__int_* std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    int t39 = std38->second;
    int c40 = 10;
    _Bool c41 = ((t39 == c40)) ? 1 : 0;
    if (c41) {
    } else {
      char* cast42 = (char*)&(_str_2);
      char* c43 = _str_1;
      unsigned int c44 = 25;
      char* cast45 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast42, c43, c44, cast45);
    }
    int c46 = 0;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std47;
    __VERIFIER_nondet_memory(&std47, sizeof(std47));
    agg_tmp316 = std47;
    struct std__pair_const_char__int_* std48;
    __VERIFIER_nondet_memory(&std48, sizeof(std48));
    char t49 = std48->first;
    int cast50 = (int)t49;
    int c51 = 98;
    _Bool c52 = ((cast50 == c51)) ? 1 : 0;
    if (c52) {
    } else {
      char* cast53 = (char*)&(_str_3);
      char* c54 = _str_1;
      unsigned int c55 = 27;
      char* cast56 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast53, c54, c55, cast56);
    }
    struct std__pair_const_char__int_* std57;
    __VERIFIER_nondet_memory(&std57, sizeof(std57));
    int t58 = std57->second;
    int c59 = 20;
    _Bool c60 = ((t58 == c59)) ? 1 : 0;
    if (c60) {
    } else {
      char* cast61 = (char*)&(_str_4);
      char* c62 = _str_1;
      unsigned int c63 = 28;
      char* cast64 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast61, c62, c63, cast64);
    }
    int c65 = 0;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std66;
    __VERIFIER_nondet_memory(&std66, sizeof(std66));
    agg_tmp417 = std66;
    struct std__pair_const_char__int_* std67;
    __VERIFIER_nondet_memory(&std67, sizeof(std67));
    char t68 = std67->first;
    int cast69 = (int)t68;
    int c70 = 98;
    _Bool c71 = ((cast69 == c70)) ? 1 : 0;
    if (c71) {
    } else {
      char* cast72 = (char*)&(_str_3);
      char* c73 = _str_1;
      unsigned int c74 = 30;
      char* cast75 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast72, c73, c74, cast75);
    }
    struct std__pair_const_char__int_* std76;
    __VERIFIER_nondet_memory(&std76, sizeof(std76));
    int t77 = std76->second;
    int c78 = 150;
    _Bool c79 = ((t77 == c78)) ? 1 : 0;
    if (c79) {
    } else {
      char* cast80 = (char*)&(_str_5);
      char* c81 = _str_1;
      unsigned int c82 = 31;
      char* cast83 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast80, c81, c82, cast83);
    }
      struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp984;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp1085;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ std86;
      __VERIFIER_nondet_memory(&std86, sizeof(std86));
      ref_tmp984 = std86;
      struct std___Rb_tree_iterator_std__pair_const_char__int__* std87;
      __VERIFIER_nondet_memory(&std87, sizeof(std87));
      while (1) {
        struct std___Rb_tree_iterator_std__pair_const_char__int__ std89;
        __VERIFIER_nondet_memory(&std89, sizeof(std89));
        ref_tmp1085 = std89;
        _Bool std90;
        __VERIFIER_nondet_memory(&std90, sizeof(std90));
        _Bool u91 = !std90;
        if (!u91) break;
        struct std__pair_const_char__int_* std92;
        __VERIFIER_nondet_memory(&std92, sizeof(std92));
        char t93 = std92->first;
        struct std__basic_ostream_char__std__char_traits_char__* std94;
        __VERIFIER_nondet_memory(&std94, sizeof(std94));
        char* cast95 = (char*)&(_str_6);
        struct std__basic_ostream_char__std__char_traits_char__* std96;
        __VERIFIER_nondet_memory(&std96, sizeof(std96));
        struct std__pair_const_char__int_* std97;
        __VERIFIER_nondet_memory(&std97, sizeof(std97));
        int t98 = std97->second;
        struct std__basic_ostream_char__std__char_traits_char__* std99;
        __VERIFIER_nondet_memory(&std99, sizeof(std99));
        char c100 = 10;
        struct std__basic_ostream_char__std__char_traits_char__* std101;
        __VERIFIER_nondet_memory(&std101, sizeof(std101));
      for_step88: ;
        struct std___Rb_tree_iterator_std__pair_const_char__int__* std102;
        __VERIFIER_nondet_memory(&std102, sizeof(std102));
      }
    int c103 = 0;
    __retval1 = c103;
    int t104 = __retval1;
    int ret_val105 = t104;
    {
      // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~multimap()
      __VERIFIER_nondet_memory(&mymultimap2, sizeof(mymultimap2));
    }
    return ret_val105;
  int t106 = __retval1;
  return t106;
}

