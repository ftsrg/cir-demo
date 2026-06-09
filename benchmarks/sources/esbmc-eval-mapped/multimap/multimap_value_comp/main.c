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
struct std__binary_function_std__pair_const_char__int___std__pair_const_char__int___bool_;
struct std__iterator_std__bidirectional_iterator_tag__std__pair_const_char__int___long__std__pair_const_char__int_____std__pair_const_char__int____;
struct std__less_char_ { unsigned char __field0; };
struct std__multimap_char__int__std__less_char___std__allocator_std__pair_const_char__int_____value_compare { unsigned char __field0; };
struct std__pair_char__int_ { char first; int second; };
struct std__pair_const_char__int_ { char first; int second; };
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ { struct std___Rb_tree_iterator_std__pair_const_char__int__ current; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std__ios_base;
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ { struct std___Rb_tree_key_compare_std__less_char__ __field0; struct std___Rb_tree_header __field1; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ _M_impl; };
struct std__multimap_char__int__std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ _M_t; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[22] = "mymultimap contains:\n";
char _str_1[38] = "mymultimap.value_comp()(*it, highest)";
char _str_2[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multimap/multimap_value_comp/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[5] = " => ";
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
  struct std__pair_char__int_ highest19;
  struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ ref_tmp1220;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ it21;
  struct std__multimap_char__int__std__less_char___std__allocator_std__pair_const_char__int_____value_compare ref_tmp1322;
  struct std__pair_const_char__int_ ref_tmp1423;
  int c24 = 0;
  __retval1 = c24;
  // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::multimap()
  __VERIFIER_nondet_memory(&mymultimap2, sizeof(mymultimap2));
    char c25 = 120;
    ref_tmp14 = c25;
    int c26 = 101;
    ref_tmp25 = c26;
    struct std__pair_char__int_ std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    ref_tmp03 = std27;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    agg_tmp06 = std28;
    char c29 = 121;
    ref_tmp48 = c29;
    int c30 = 202;
    ref_tmp59 = c30;
    struct std__pair_char__int_ std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    ref_tmp37 = std31;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    agg_tmp110 = std32;
    char c33 = 121;
    ref_tmp712 = c33;
    int c34 = 252;
    ref_tmp813 = c34;
    struct std__pair_char__int_ std35;
    __VERIFIER_nondet_memory(&std35, sizeof(std35));
    ref_tmp611 = std35;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std36;
    __VERIFIER_nondet_memory(&std36, sizeof(std36));
    agg_tmp214 = std36;
    char c37 = 122;
    ref_tmp1016 = c37;
    int c38 = 303;
    ref_tmp1117 = c38;
    struct std__pair_char__int_ std39;
    __VERIFIER_nondet_memory(&std39, sizeof(std39));
    ref_tmp915 = std39;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    agg_tmp318 = std40;
    char* cast41 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ std43;
    __VERIFIER_nondet_memory(&std43, sizeof(std43));
    ref_tmp1220 = std43;
    struct std__pair_const_char__int_* std44;
    __VERIFIER_nondet_memory(&std44, sizeof(std44));
    // externalized std:: op: _ZNSt4pairIciEC2IKciQaacl16_S_constructibleIRTL0__RTL0_0_EEntcl10_S_danglesIS4_S6_EEEERS_IT_T0_E
    __VERIFIER_nondet_memory(&highest19, sizeof(highest19));
    __VERIFIER_nondet_memory(std44, sizeof(*std44));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
    it21 = std45;
    struct std__multimap_char__int__std__less_char___std__allocator_std__pair_const_char__int_____value_compare std46;
    __VERIFIER_nondet_memory(&std46, sizeof(std46));
    ref_tmp1322 = std46;
    struct std__pair_const_char__int_* std47;
    __VERIFIER_nondet_memory(&std47, sizeof(std47));
    // externalized std:: op: _ZNSt4pairIKciEC2IciQaacl16_S_constructibleIRTL0__RTL0_0_EEntcl10_S_danglesIS4_S6_EEEERS_IT_T0_E
    __VERIFIER_nondet_memory(&ref_tmp1423, sizeof(ref_tmp1423));
    __VERIFIER_nondet_memory(&highest19, sizeof(highest19));
    _Bool std48;
    __VERIFIER_nondet_memory(&std48, sizeof(std48));
    if (std48) {
    } else {
      char* cast49 = (char*)&(_str_1);
      char* c50 = _str_2;
      unsigned int c51 = 29;
      char* cast52 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast49, c50, c51, cast52);
    }
      struct std__multimap_char__int__std__less_char___std__allocator_std__pair_const_char__int_____value_compare ref_tmp1553;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp1654;
      struct std__pair_const_char__int_ ref_tmp1755;
      do {
          struct std__pair_const_char__int_* std56;
          __VERIFIER_nondet_memory(&std56, sizeof(std56));
          char t57 = std56->first;
          struct std__basic_ostream_char__std__char_traits_char__* std58;
          __VERIFIER_nondet_memory(&std58, sizeof(std58));
          char* cast59 = (char*)&(_str_3);
          struct std__basic_ostream_char__std__char_traits_char__* std60;
          __VERIFIER_nondet_memory(&std60, sizeof(std60));
          struct std__pair_const_char__int_* std61;
          __VERIFIER_nondet_memory(&std61, sizeof(std61));
          int t62 = std61->second;
          struct std__basic_ostream_char__std__char_traits_char__* std63;
          __VERIFIER_nondet_memory(&std63, sizeof(std63));
          char c64 = 10;
          struct std__basic_ostream_char__std__char_traits_char__* std65;
          __VERIFIER_nondet_memory(&std65, sizeof(std65));
        struct std__multimap_char__int__std__less_char___std__allocator_std__pair_const_char__int_____value_compare std66;
        __VERIFIER_nondet_memory(&std66, sizeof(std66));
        ref_tmp1553 = std66;
        int c67 = 0;
        struct std___Rb_tree_iterator_std__pair_const_char__int__ std68;
        __VERIFIER_nondet_memory(&std68, sizeof(std68));
        ref_tmp1654 = std68;
        struct std__pair_const_char__int_* std69;
        __VERIFIER_nondet_memory(&std69, sizeof(std69));
        // externalized std:: op: _ZNSt4pairIKciEC2IciQaacl16_S_constructibleIRTL0__RTL0_0_EEntcl10_S_danglesIS4_S6_EEEERS_IT_T0_E
        __VERIFIER_nondet_memory(&ref_tmp1755, sizeof(ref_tmp1755));
        __VERIFIER_nondet_memory(&highest19, sizeof(highest19));
        _Bool std70;
        __VERIFIER_nondet_memory(&std70, sizeof(std70));
        if (!std70) break;
      } while (1);
    int c71 = 0;
    __retval1 = c71;
    int t72 = __retval1;
    int ret_val73 = t72;
    {
      // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~multimap()
      __VERIFIER_nondet_memory(&mymultimap2, sizeof(mymultimap2));
    }
    return ret_val73;
  int t74 = __retval1;
  return t74;
}

